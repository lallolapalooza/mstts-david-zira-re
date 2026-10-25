
uint GetLocaleHandler(ushort param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
                    /* 0x3270  1  GetLocaleHandler */
  if (param_1 < 0x416) {
    if (param_1 == 0x415) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerPlPL::_vftable_;
        goto LAB_18000336c;
      }
    }
    else if (param_1 < 0x40c) {
      if (param_1 == 0x40b) {
        if (param_2 == (undefined8 *)0x0) {
          return 0x80070057;
        }
        puVar1 = operator_new(0x18,&std::nothrow);
        if (puVar1 != (undefined8 *)0x0) {
          ppuVar2 = CTTSLocaleHandlerFiFI::_vftable_;
          goto LAB_18000336c;
        }
      }
      else {
        if (param_1 == 0) {
          return 0x80048014;
        }
        if (param_1 == 0x403) {
          if (param_2 == (undefined8 *)0x0) {
            return 0x80070057;
          }
          puVar1 = operator_new(0x18,&std::nothrow);
          if (puVar1 != (undefined8 *)0x0) {
            ppuVar2 = CTTSLocaleHandlerCaES::_vftable_;
            goto LAB_18000336c;
          }
        }
        else if (param_1 == 0x404) {
          if (param_2 == (undefined8 *)0x0) {
            return 0x80070057;
          }
          puVar1 = operator_new(0x28,&std::nothrow);
          if (puVar1 != (undefined8 *)0x0) {
            ppuVar2 = CTTSLocaleHandlerZhTW::_vftable_;
            goto LAB_1800038d3;
          }
        }
        else if (param_1 == 0x406) {
          if (param_2 == (undefined8 *)0x0) {
            return 0x80070057;
          }
          puVar1 = operator_new(0x18,&std::nothrow);
          if (puVar1 != (undefined8 *)0x0) {
            ppuVar2 = CTTSLocaleHandlerDaDK::_vftable_;
            goto LAB_18000336c;
          }
        }
        else if (param_1 == 0x407) {
          if (param_2 == (undefined8 *)0x0) {
            return 0x80070057;
          }
          puVar1 = operator_new(0x18,&std::nothrow);
          if (puVar1 != (undefined8 *)0x0) {
            ppuVar2 = CTTSLocaleHandlerDeDE::_vftable_;
            goto LAB_18000336c;
          }
        }
        else {
          if (param_1 != 0x409) {
            return 0x80070057;
          }
          if (param_2 == (undefined8 *)0x0) {
            return 0x80070057;
          }
          puVar1 = operator_new(0x58,&std::nothrow);
          if (puVar1 != (undefined8 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = CTTSLocaleHandlerENU::_vftable_;
            puVar1[2] = 0;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[8] = 0;
            puVar1[9] = 0;
            *(undefined4 *)(puVar1 + 10) = 0;
            goto LAB_1800038f2;
          }
        }
      }
    }
    else if (param_1 == 0x40c) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerFrFR::_vftable_;
        goto LAB_18000336c;
      }
    }
    else if (param_1 == 0x410) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerItIT::_vftable_;
        goto LAB_18000336c;
      }
    }
    else if (param_1 == 0x411) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x28,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = 0;
        *puVar1 = CTTSLocaleHandlerJaJP::_vftable_;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        goto LAB_1800038f2;
      }
    }
    else if (param_1 == 0x412) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerKoKR::_vftable_;
        goto LAB_18000336c;
      }
    }
    else if (param_1 == 0x413) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerNlNL::_vftable_;
        goto LAB_18000336c;
      }
    }
    else {
      if (param_1 != 0x414) {
        return 0x80070057;
      }
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerNbNO::_vftable_;
        goto LAB_18000336c;
      }
    }
  }
  else if (param_1 < 0x817) {
    if (param_1 == 0x816) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerPtPT::_vftable_;
        goto LAB_18000336c;
      }
    }
    else if (param_1 == 0x416) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerPtBR::_vftable_;
        goto LAB_18000336c;
      }
    }
    else if (param_1 == 0x419) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerRuRU::_vftable_;
        goto LAB_18000336c;
      }
    }
    else if (param_1 == 0x41d) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerSvSE::_vftable_;
        goto LAB_18000336c;
      }
    }
    else if (param_1 == 0x804) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x60,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = 0;
        *puVar1 = CTTSLocaleHandlerZhCN::_vftable_;
        puVar1[3] = CChineseToneHandler::_vftable_;
        puVar1[5] = CExtraVoiceSelectorZH::_vftable_;
        puVar1[2] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        *(undefined4 *)(puVar1 + 10) = 0;
        puVar1[0xb] = 0;
        goto LAB_1800038f2;
      }
    }
    else if (param_1 == 0x809) {
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerEnGB::_vftable_;
        goto LAB_18000336c;
      }
    }
    else {
      if (param_1 != 0x80a) {
        return 0x80070057;
      }
      if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
      }
      puVar1 = operator_new(0x18,&std::nothrow);
      if (puVar1 != (undefined8 *)0x0) {
        ppuVar2 = CTTSLocaleHandlerEsMX::_vftable_;
        goto LAB_18000336c;
      }
    }
  }
  else if (param_1 == 0xc04) {
    if (param_2 == (undefined8 *)0x0) {
      return 0x80070057;
    }
    puVar1 = operator_new(0x28,&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      ppuVar2 = CTTSLocaleHandlerZhHK::_vftable_;
LAB_1800038d3:
      puVar1[4] = 0;
      puVar1[2] = 0;
      puVar1[1] = 0;
      *puVar1 = ppuVar2;
      puVar1[3] = CExtraVoiceSelectorZH::_vftable_;
      goto LAB_1800038f2;
    }
  }
  else if (param_1 == 0xc09) {
    if (param_2 == (undefined8 *)0x0) {
      return 0x80070057;
    }
    puVar1 = operator_new(0x18,&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      ppuVar2 = CTTSLocaleHandlerEnAU::_vftable_;
      goto LAB_18000336c;
    }
  }
  else if (param_1 == 0xc0a) {
    if (param_2 == (undefined8 *)0x0) {
      return 0x80070057;
    }
    puVar1 = operator_new(0x18,&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      ppuVar2 = CTTSLocaleHandlerEsES::_vftable_;
      goto LAB_18000336c;
    }
  }
  else if (param_1 == 0xc0c) {
    if (param_2 == (undefined8 *)0x0) {
      return 0x80070057;
    }
    puVar1 = operator_new(0x18,&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      ppuVar2 = CTTSLocaleHandlerFRC::_vftable_;
      goto LAB_18000336c;
    }
  }
  else if (param_1 == 0x1009) {
    if (param_2 == (undefined8 *)0x0) {
      return 0x80070057;
    }
    puVar1 = operator_new(0x18,&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      ppuVar2 = CTTSLocaleHandlerEnCA::_vftable_;
      goto LAB_18000336c;
    }
  }
  else {
    if ((param_1 != 0x4009) || (param_2 == (undefined8 *)0x0)) {
      return 0x80070057;
    }
    puVar1 = operator_new(0x18,&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      ppuVar2 = CTTSLocaleHandlerEnIN::_vftable_;
LAB_18000336c:
      puVar1[2] = 0;
      puVar1[1] = 0;
      *puVar1 = ppuVar2;
      goto LAB_1800038f2;
    }
  }
  puVar1 = (undefined8 *)0x0;
LAB_1800038f2:
  *param_2 = puVar1;
  return ~-(uint)(puVar1 != (undefined8 *)0x0) & 0x8007000e;
}

