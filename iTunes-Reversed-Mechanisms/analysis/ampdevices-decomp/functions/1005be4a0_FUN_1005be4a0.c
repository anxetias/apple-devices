// name: FUN_1005be4a0
// address: 1005be4a0

int FUN_1005be4a0(undefined8 param_1,undefined4 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "activationState != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    *param_2 = 0;
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    iVar3 = FUN_1005b7cbc(param_1);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        pcVar4 = (char *)_AMDeviceCopyValue(param_1,0,&cf_ActivationState);
        if (pcVar4 == (char *)0x0) {
          iVar3 = -0x17fffff8;
        }
        else {
          cVar1 = FUN_100170633(pcVar4,&cf_Unactivated);
          if (cVar1 == '\0') {
            cVar1 = FUN_100170633(pcVar4,&cf_Activated);
            if (cVar1 == '\0') {
              cVar1 = FUN_100170633(pcVar4,&cf_FactoryActivated);
              if (cVar1 == '\0') {
                cVar1 = FUN_100170633(pcVar4,&cf_SoftActivation);
                if (cVar1 == '\0') {
                  cVar1 = FUN_100170633(pcVar4,&cf_MismatchedIMEI);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_100170633(pcVar4,&cf_MismatchedICCID);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_100170633(pcVar4,&cf_MissingSIM);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_100170633(pcVar4,&cf_Unlocked);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_100170633(pcVar4,&cf_WildcardActivated);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_100170633(pcVar4,&cf_Expired);
                            if (cVar1 == '\0') {
                              cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
                              if (cVar1 != '\0') {
                                local_58 = 0x8420102;
                                local_54 = pcVar4;
                                __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                                    "unknown ActivationState \"%{public}@\"",
                                                    &local_58,0xc);
                              }
                            }
                            else {
                              *param_2 = 10;
                            }
                          }
                          else {
                            *param_2 = 9;
                          }
                        }
                        else {
                          *param_2 = 8;
                        }
                      }
                      else {
                        *param_2 = 7;
                      }
                    }
                    else {
                      *param_2 = 6;
                    }
                  }
                  else {
                    *param_2 = 5;
                  }
                }
                else {
                  *param_2 = 4;
                }
              }
              else {
                *param_2 = 3;
              }
            }
            else {
              *param_2 = 2;
            }
          }
          else {
            *param_2 = 1;
          }
          if (param_3 == (undefined1 *)0x0) {
            iVar3 = 0;
          }
          else {
            uVar5 = _CFBooleanGetTypeID();
            iVar3 = 0;
            lVar6 = FUN_1005b8d4a(param_1,0,&cf_ActivationStateAcknowledged,uVar5);
            if (lVar6 != 0) {
              uVar2 = FUN_100171f12(lVar6);
              *param_3 = uVar2;
            }
            FUN_10017060f(lVar6);
          }
        }
        if (param_4 != (undefined4 *)0x0) {
          pcVar7 = (char *)_AMDeviceCopyValue(param_1,0,&cf_SIMStatus);
          if (pcVar7 != (char *)0x0) {
            cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusReady);
            if (cVar1 == '\0') {
              cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusNotReady);
              if (cVar1 == '\0') {
                cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusInserted);
                if (cVar1 == '\0') {
                  cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusNotInserted);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusPINLocked);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusPUKLocked);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusNetworkLocked);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusCorporateLocked);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_100170633(pcVar7,&cf_kCTSIMSupportSIMStatusOperatorLocked);
                            if (cVar1 == '\0') {
                              cVar1 = FUN_100170633(pcVar7,&
                                                  cf_kCTSIMSupportSIMStatusOperatorSubsetLocked);
                              if (cVar1 == '\0') {
                                cVar1 = FUN_100170633(pcVar7,&
                                                  cf_kCTSIMSupportSIMStatusPermanentlyLocked);
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_100170633(pcVar7,&
                                                  cf_kCTSIMSupportSIMStatusServiceProviderLocked);
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_100170633(pcVar7,&
                                                  cf_kCTSIMSupportSIMStatusMemoryFailure);
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_100170633(pcVar7,&
                                                  cf_kCTSIMSupportSIMStatusFixedDialingLocked);
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_100170633(pcVar7,&
                                                  cf_kCTSIMSupportSIMStatusBlacklisted);
                                        if (cVar1 == '\0') {
                                          cVar1 = _os_log_type_enabled
                                                            (PTR___os_log_default_10082cb88,0x10);
                                          if (cVar1 != '\0') {
                                            local_58 = 0x8420102;
                                            local_54 = pcVar7;
                                            __os_log_error_impl(0x100000000,
                                                                PTR___os_log_default_10082cb88,0x10,
                                                                "unknown SIMStatus \"%{public}@\"",
                                                                &local_58,0xc);
                                          }
                                        }
                                        else {
                                          *param_4 = 0xf;
                                        }
                                      }
                                      else {
                                        *param_4 = 0xe;
                                      }
                                    }
                                    else {
                                      *param_4 = 0xd;
                                    }
                                  }
                                  else {
                                    *param_4 = 0xb;
                                  }
                                }
                                else {
                                  *param_4 = 0xc;
                                }
                              }
                              else {
                                *param_4 = 10;
                              }
                            }
                            else {
                              *param_4 = 9;
                            }
                          }
                          else {
                            *param_4 = 8;
                          }
                        }
                        else {
                          *param_4 = 7;
                        }
                      }
                      else {
                        *param_4 = 6;
                      }
                    }
                    else {
                      *param_4 = 5;
                    }
                  }
                  else {
                    *param_4 = 4;
                  }
                }
                else {
                  *param_4 = 3;
                }
              }
              else {
                *param_4 = 2;
              }
            }
            else {
              *param_4 = 1;
            }
          }
          FUN_10017060f(pcVar7);
        }
        FUN_1005b8595(param_1);
        FUN_10017060f(pcVar4);
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

