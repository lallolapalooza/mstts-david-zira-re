
uint GetLocaleHandler(ulonglong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
                    /* 0x141f0  1  GetLocaleHandler */
  uVar1 = (uint)param_1 & 0xffff;
  if (uVar1 < 0x423) {
    if (uVar1 == 0x422) {
      if (param_2 == (longlong *)0x0) {
        return 0x80070057;
      }
      puVar2 = operator_new(0x28,&std::nothrow);
      if (puVar2 != (undefined8 *)0x0) {
        ppuVar3 = CTTSLocaleHandlerUkUA::_vftable_;
        goto LAB_18001429e;
      }
      goto LAB_180014b63;
    }
    if (uVar1 < 0x40e) {
      if (uVar1 == 0x40d) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x230,&std::nothrow);
        if (puVar2 == (undefined8 *)0x0) goto LAB_180014360;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        ppuVar3 = CTTSLocaleHandlerHeIL::_vftable_;
LAB_18001434a:
        *puVar2 = ppuVar3;
        memset(puVar2 + 5,0,0x104);
        goto LAB_180014363;
      }
      if (uVar1 < 0x408) {
        if (uVar1 == 0x407) {
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerDeDE::_vftable_;
            goto LAB_18001429e;
          }
        }
        else {
          if ((param_1 & 0xffff) == 0) {
            return 0x80048014;
          }
          if (uVar1 == 0x401) {
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x230,&std::nothrow);
            if (puVar2 == (undefined8 *)0x0) goto LAB_180014360;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            ppuVar3 = CTTSLocaleHandlerArSA::_vftable_;
            goto LAB_18001434a;
          }
          if (uVar1 == 0x403) {
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x28,&std::nothrow);
            if (puVar2 != (undefined8 *)0x0) {
              ppuVar3 = CTTSLocaleHandlerCaES::_vftable_;
              goto LAB_18001429e;
            }
          }
          else if (uVar1 == 0x404) {
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x38,&std::nothrow);
            if (puVar2 != (undefined8 *)0x0) {
              ppuVar3 = CTTSLocaleHandlerZhTW::_vftable_;
              goto LAB_180014b3f;
            }
          }
          else {
            if (uVar1 != 0x406) goto LAB_1800149d6;
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x28,&std::nothrow);
            if (puVar2 != (undefined8 *)0x0) {
              ppuVar3 = CTTSLocaleHandlerDaDK::_vftable_;
              goto LAB_18001429e;
            }
          }
        }
      }
      else if (uVar1 == 0x408) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x28,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          ppuVar3 = CTTSLocaleHandlerElGR::_vftable_;
          goto LAB_18001429e;
        }
      }
      else {
        if (uVar1 == 0x409) {
          uVar1 = GetCTTSLocaleHandlerENU(param_1,param_2);
          return uVar1;
        }
        if (uVar1 == 0x40b) {
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerFiFI::_vftable_;
            goto LAB_18001429e;
          }
        }
        else {
          if (uVar1 != 0x40c) goto LAB_1800149d6;
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerFrFR::_vftable_;
            goto LAB_18001429e;
          }
        }
      }
    }
    else if (uVar1 < 0x417) {
      if (uVar1 == 0x416) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x28,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          ppuVar3 = CTTSLocaleHandlerPtBR::_vftable_;
          goto LAB_18001429e;
        }
      }
      else if (uVar1 == 0x410) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x28,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          ppuVar3 = CTTSLocaleHandlerItIT::_vftable_;
          goto LAB_18001429e;
        }
      }
      else if (uVar1 == 0x411) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x38,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[1] = 0;
          *puVar2 = CTTSLocaleHandlerJaJP::_vftable_;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          goto LAB_180014b66;
        }
      }
      else if (uVar1 == 0x412) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x28,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          ppuVar3 = CTTSLocaleHandlerKoKR::_vftable_;
          goto LAB_18001429e;
        }
      }
      else if (uVar1 == 0x413) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x28,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          ppuVar3 = CTTSLocaleHandlerNlNL::_vftable_;
          goto LAB_18001429e;
        }
      }
      else {
        if (uVar1 != 0x414) goto LAB_1800149d6;
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x28,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          ppuVar3 = CTTSLocaleHandlerNbNO::_vftable_;
          goto LAB_18001429e;
        }
      }
    }
    else if (uVar1 == 0x418) {
      if (param_2 == (longlong *)0x0) {
        return 0x80070057;
      }
      puVar2 = operator_new(0x28,&std::nothrow);
      if (puVar2 != (undefined8 *)0x0) {
        ppuVar3 = CTTSLocaleHandlerRoRO::_vftable_;
        goto LAB_18001429e;
      }
    }
    else if (uVar1 == 0x419) {
      if (param_2 == (longlong *)0x0) {
        return 0x80070057;
      }
      puVar2 = operator_new(0x28,&std::nothrow);
      if (puVar2 != (undefined8 *)0x0) {
        ppuVar3 = CTTSLocaleHandlerRuRU::_vftable_;
        goto LAB_18001429e;
      }
    }
    else if (uVar1 == 0x41e) {
      if (param_2 == (longlong *)0x0) {
        return 0x80070057;
      }
      puVar2 = operator_new(0x28,&std::nothrow);
      if (puVar2 != (undefined8 *)0x0) {
        ppuVar3 = CTTSLocaleHandlerThTH::_vftable_;
        goto LAB_18001429e;
      }
    }
    else {
      if (uVar1 != 0x420) goto LAB_1800149d6;
      if (param_2 == (longlong *)0x0) {
        return 0x80070057;
      }
      puVar2 = operator_new(0x28,&std::nothrow);
      if (puVar2 != (undefined8 *)0x0) {
        ppuVar3 = CTTSLocaleHandlerUrPK::_vftable_;
        goto LAB_18001429e;
      }
    }
LAB_180014b63:
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (uVar1 < 0xc02) {
      if (uVar1 == 0xc01) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x230,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          ppuVar3 = CTTSLocaleHandlerArEG::_vftable_;
          goto LAB_18001434a;
        }
LAB_180014360:
        puVar2 = (undefined8 *)0x0;
LAB_180014363:
        *param_2 = (longlong)puVar2;
        goto LAB_180014b6c;
      }
      if (uVar1 < 0x808) {
        if (uVar1 == 0x807) {
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerDeCH::_vftable_;
            goto LAB_18001429e;
          }
        }
        else {
          if (uVar1 == 0x429) {
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x230,&std::nothrow);
            if (puVar2 == (undefined8 *)0x0) goto LAB_180014360;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            ppuVar3 = CTTSLocaleHandlerFaIR::_vftable_;
            goto LAB_18001434a;
          }
          if (uVar1 == 0x439) {
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x28,&std::nothrow);
            if (puVar2 != (undefined8 *)0x0) {
              ppuVar3 = CTTSLocaleHandlerHiIN::_vftable_;
              goto LAB_18001429e;
            }
          }
          else if (uVar1 == 0x449) {
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x28,&std::nothrow);
            if (puVar2 != (undefined8 *)0x0) {
              ppuVar3 = CTTSLocaleHandlerTaIN::_vftable_;
              goto LAB_18001429e;
            }
          }
          else {
            if (uVar1 != 0x44a) {
              if (uVar1 == 0x804) {
                uVar1 = GetCTTSLocaleHandlerZhCN(param_1,param_2);
                return uVar1;
              }
              goto LAB_1800149d6;
            }
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x28,&std::nothrow);
            if (puVar2 != (undefined8 *)0x0) {
              ppuVar3 = CTTSLocaleHandlerTeIN::_vftable_;
              goto LAB_18001429e;
            }
          }
        }
      }
      else {
        if (uVar1 == 0x809) {
          uVar1 = GetCTTSLocaleHandlerEnGB(param_1,param_2);
          return uVar1;
        }
        if (uVar1 == 0x80a) {
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerEsMX::_vftable_;
            goto LAB_18001429e;
          }
        }
        else if (uVar1 == 0x80c) {
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerFrBE::_vftable_;
            goto LAB_18001429e;
          }
        }
        else if (uVar1 == 0x813) {
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerNlBE::_vftable_;
            goto LAB_18001429e;
          }
        }
        else {
LAB_1800149d6:
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 0;
            *puVar2 = CTTSLocaleHandler::_vftable_;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            goto LAB_180014b66;
          }
        }
      }
      goto LAB_180014b63;
    }
    if (uVar1 != 0xc04) {
      if (uVar1 == 0xc07) {
        if (param_2 == (longlong *)0x0) {
          return 0x80070057;
        }
        puVar2 = operator_new(0x28,&std::nothrow);
        if (puVar2 != (undefined8 *)0x0) {
          ppuVar3 = CTTSLocaleHandlerDeAT::_vftable_;
LAB_18001429e:
          puVar2[4] = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[1] = 0;
          *puVar2 = ppuVar3;
          goto LAB_180014b66;
        }
      }
      else {
        if (uVar1 == 0xc09) {
          uVar1 = GetCTTSLocaleHandlerEnAU(param_1,param_2);
          return uVar1;
        }
        if (uVar1 == 0xc0a) {
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerEsES::_vftable_;
            goto LAB_18001429e;
          }
        }
        else if (uVar1 == 0xc0c) {
          if (param_2 == (longlong *)0x0) {
            return 0x80070057;
          }
          puVar2 = operator_new(0x28,&std::nothrow);
          if (puVar2 != (undefined8 *)0x0) {
            ppuVar3 = CTTSLocaleHandlerFrCA::_vftable_;
            goto LAB_18001429e;
          }
        }
        else {
          if (uVar1 == 0x1009) {
            uVar1 = GetCTTSLocaleHandlerEnCA(param_1,param_2);
            return uVar1;
          }
          if (uVar1 == 0x100c) {
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x28,&std::nothrow);
            if (puVar2 != (undefined8 *)0x0) {
              ppuVar3 = CTTSLocaleHandlerFrCH::_vftable_;
              goto LAB_18001429e;
            }
          }
          else {
            if (uVar1 == 0x1809) {
              uVar1 = GetCTTSLocaleHandlerEnIE(param_1,param_2);
              return uVar1;
            }
            if (uVar1 != 0x4009) goto LAB_1800149d6;
            if (param_2 == (longlong *)0x0) {
              return 0x80070057;
            }
            puVar2 = operator_new(0x28,&std::nothrow);
            if (puVar2 != (undefined8 *)0x0) {
              ppuVar3 = CTTSLocaleHandlerEnIN::_vftable_;
              goto LAB_18001429e;
            }
          }
        }
      }
      goto LAB_180014b63;
    }
    if (param_2 == (longlong *)0x0) {
      return 0x80070057;
    }
    puVar2 = operator_new(0x38,&std::nothrow);
    if (puVar2 == (undefined8 *)0x0) goto LAB_180014b63;
    ppuVar3 = CTTSLocaleHandlerZhHK::_vftable_;
LAB_180014b3f:
    puVar2[6] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = ppuVar3;
    puVar2[5] = CExtraVoiceSelectorZH::_vftable_;
  }
LAB_180014b66:
  *param_2 = (longlong)puVar2;
LAB_180014b6c:
  return ~-(uint)(puVar2 != (undefined8 *)0x0) & 0x8007000e;
}

