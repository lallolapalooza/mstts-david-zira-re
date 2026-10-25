"""Rewrite an omp session archive with PII redacted.

Usage: python scripts/sanitize_archive.py <archive.zip>
"""
import hashlib
import json
import os
import re
import sys
import zipfile

GIVEN = "Fran" + "cisco"
FAMILY = "Her" + "rera"
REPLACEMENTS = [
    (GIVEN + "%20" + FAMILY, "[user]"),
    (GIVEN + "+" + FAMILY, "[user]"),
    (GIVEN + " " + FAMILY, "[user]"),
    (GIVEN + FAMILY, "[user]"),
]
EMAIL = re.compile(r"[A-Za-z0-9._%+\-]{1,64}@[A-Za-z0-9.\-]{1,255}\.[A-Za-z]{2,24}")


def scrub(text):
    for old, new in REPLACEMENTS:
        text = text.replace(old, new)
    return EMAIL.sub("[email]", text)


def main(path):
    path = os.path.abspath(path)
    with zipfile.ZipFile(path) as zf:
        names = zf.namelist()
        files = {name: zf.read(name) for name in names}
    print(f"read {len(files)} entries", flush=True)

    out = {}
    for name, data in files.items():
        try:
            out[name] = scrub(data.decode("utf-8")).encode("utf-8")
        except UnicodeDecodeError:
            out[name] = data
    print("scrubbed text entries", flush=True)

    manifest = json.loads(out["manifest.json"].decode("utf-8"))
    manifest["source"]["sessionFile"] = scrub(manifest["source"]["sessionFile"])
    manifest["source"]["cwd"] = scrub(manifest["source"]["cwd"])
    manifest["main"]["bytes"] = len(out["session.jsonl"])
    for rec in manifest.get("artifacts", []):
        rec["bytes"] = len(out[rec["file"]])
    out["manifest.json"] = json.dumps(manifest, indent=2, ensure_ascii=False).encode("utf-8")

    total = sum(len(v) for v in out.values())
    readme = out["README.md"].decode("utf-8")
    readme = re.sub(r"(?m)^21 files, \d+ bytes\.$", f"21 files, {total} bytes.", readme)
    out["README.md"] = readme.encode("utf-8")

    tmp = path + ".tmp"
    with zipfile.ZipFile(tmp, "w", zipfile.ZIP_DEFLATED) as zf:
        for name in names:
            zf.writestr(name, out[name])
    os.replace(tmp, path)
    print("sha256", hashlib.sha256(open(path, "rb").read()).hexdigest())
    print("zip", os.path.getsize(path), "uncompressed", total)


if __name__ == "__main__":
    main(sys.argv[1])
