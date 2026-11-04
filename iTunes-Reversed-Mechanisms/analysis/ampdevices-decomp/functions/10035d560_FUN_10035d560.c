// name: FUN_10035d560
// address: 10035d560

undefined8 FUN_10035d560(int *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "audioCodecInfo != nullptr";
LAB_10035d7e5:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    uVar2 = 0;
    if (*param_1 != 0) goto LAB_10035d732;
    if (param_2 != 0) {
      cVar1 = FUN_100170633(param_2,&cf_MP3);
      iVar3 = 0x6d703320;
      if (cVar1 == '\0') {
        cVar1 = FUN_100170633(param_2,&cf_mp3AudioCodecInfo);
        if (cVar1 == '\0') {
          cVar1 = FUN_100170633(param_2,&cf_AAC);
          iVar3 = 0x61616320;
          if (cVar1 == '\0') {
            cVar1 = FUN_100170633(param_2,&cf_aacAudioCodecInfo);
            if (cVar1 == '\0') {
              cVar1 = FUN_100170633(param_2,&cf_WAV);
              iVar3 = 0x77617665;
              if (cVar1 == '\0') {
                cVar1 = FUN_100170633(param_2,&cf_waveAudioCodecInfo);
                if (cVar1 == '\0') {
                  cVar1 = FUN_100170633(param_2,&cf_AIFF);
                  iVar3 = 0x61696666;
                  if (cVar1 == '\0') {
                    cVar1 = FUN_100170633(param_2,&cf_aiffAudioCodecInfo);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_100170633(param_2,&cf_AppleLossless);
                      iVar3 = 0x616c6163;
                      if (cVar1 == '\0') {
                        cVar1 = FUN_100170633(param_2,&cf_losslessAudioCodecInfo);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_100170633(param_2,&cf_AC3);
                          iVar3 = 0x61633320;
                          if (cVar1 == '\0') {
                            cVar1 = FUN_100170633(param_2,&cf_EnhancedAC3);
                            iVar3 = 0x65616333;
                            if (cVar1 == '\0') {
                              cVar1 = FUN_100170633(param_2,&cf_FLAC);
                              iVar3 = 0x666c6163;
                              if (cVar1 == '\0') {
                                cVar1 = FUN_100170633(param_2,&cf_USAC);
                                iVar3 = 0x75736163;
                                if (cVar1 == '\0') goto LAB_10035d77c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *param_1 = iVar3;
      goto LAB_10035d732;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "key != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10035d77c:
    *param_1 = 0;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "audioCodecInfo->codecType != kUnknownDeviceAudioCodecType";
      goto LAB_10035d7e5;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10035d732:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

