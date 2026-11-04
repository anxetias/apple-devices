// name: FUN_1005cee0c
// address: 1005cee0c

int FUN_1005cee0c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 int *param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,long param_10
                 ,undefined8 param_11)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  long local_698;
  char local_689;
  long local_688;
  long *local_680;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_698 = 0;
  local_6a8 = 0;
  uStack_6a0 = 0;
  local_6c8 = 0;
  local_6c0 = 0;
  local_6b8 = 0;
  uStack_6b0 = 0;
  if (param_2 == 0 || param_5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_64a = "nullptr != cfstrText && nullptr != ustrFile";
LAB_1005ceff2:
      local_64c = 0x822;
      local_654 = "Assertion failure";
      local_658 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
  }
  else {
    lVar5 = FUN_1001737f8(param_2);
    if (lVar5 < 1) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_64a = "JRCFStringGetLength(cfstrText) > 0";
        goto LAB_1005ceff2;
      }
    }
    else {
      if (*param_6 == 0x504f5358) {
        if ((param_10 != 0) && (cVar1 = FUN_1001ee041(), cVar1 == '\0')) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_658 = 0x8220202;
            local_654 = "Assertion failure";
            local_64c = 0x822;
            local_64a = "outputLock == nullptr || JRIsCurrentThreadPreemptive()";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
          }
          FUN_1001782e9(0,0);
        }
        cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
        if (cVar1 == '\0') {
          iVar3 = 0x46d;
          goto LAB_1005cf026;
        }
        FUN_1005cec66(param_1);
        sVar2 = _NewSpeechChannel(param_1 + 2,&local_698);
        iVar4 = -0x80;
        if (sVar2 == 0) {
          local_680 = param_1;
          sVar2 = _SetSpeechRate(local_698,(int)param_1[0x2f]);
          if ((sVar2 != 0) && (sVar2 != -0x80)) {
            local_688 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(local_688,0x10);
            if (cVar1 != '\0') {
              local_658 = 0x8220202;
              local_654 = "Assertion failure";
              local_64c = 0x400;
              local_64a = (char *)CONCAT44(local_64a._4_4_,(int)sVar2);
              __os_log_error_impl(0x100000000,local_688,0x10,"%{public}s: err == (%d)",&local_658,
                                  0x12);
            }
          }
          iVar3 = FUN_1003cf9aa(param_5,0x41494646,local_238);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              lVar5 = FUN_10016ac0f(DAT_1008c4d90,param_7,local_238,0);
              if (lVar5 == 0) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_658 = 0x8220202;
                  local_654 = "Assertion failure";
                  local_64c = 0x822;
                  local_64a = "urlTmpFile != nullptr";
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_658,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar3 = -0x6c;
                param_1 = local_680;
                lVar5 = 0;
              }
              else {
                local_688 = lVar5;
                sVar2 = _SetSpeechInfo(local_698,0x6f706166,lVar5);
                if (sVar2 == 0) {
                  local_689 = FUN_1001ee068();
                  if (local_689 == '\0') {
                    iVar3 = FUN_1001e8dd6(&local_6c8,0,0);
                    param_1 = local_680;
                    lVar5 = local_688;
                    if (iVar3 != -0x80) {
                      if (iVar3 == 0) {
                        sVar2 = _SetSpeechInfo(local_698,0x72656663,&local_6c8);
                        if (sVar2 == 0) {
                          sVar2 = _SetSpeechInfo(local_698,0x73646362,FUN_1005cfc52);
                          if (sVar2 == 0) goto LAB_1005cf723;
                          param_1 = local_680;
                          lVar5 = local_688;
                          iVar3 = iVar4;
                          if (sVar2 != -0x80) {
                            iVar3 = (int)sVar2;
                            uVar6 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar6,0x10);
                            param_1 = local_680;
                            lVar5 = local_688;
                            if (cVar1 != '\0') {
                              puVar7 = &local_658;
                              local_658 = 0x8220202;
                              local_654 = "Assertion failure";
                              local_64c = 0x400;
                              local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                              goto LAB_1005cf79e;
                            }
                          }
                        }
                        else {
                          param_1 = local_680;
                          lVar5 = local_688;
                          iVar3 = iVar4;
                          if (sVar2 != -0x80) {
                            iVar3 = (int)sVar2;
                            uVar6 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar6,0x10);
                            param_1 = local_680;
                            lVar5 = local_688;
                            if (cVar1 != '\0') {
                              local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                              goto LAB_1005cf17b;
                            }
                          }
                        }
                      }
                      else {
                        uVar6 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar6,0x10);
                        param_1 = local_680;
                        lVar5 = local_688;
                        if (cVar1 != '\0') {
                          local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                          goto LAB_1005cf5b1;
                        }
                      }
                    }
                  }
                  else {
                    iVar3 = FUN_1001e96d3(&local_6a8,0,0);
                    param_1 = local_680;
                    lVar5 = local_688;
                    if (iVar3 != -0x80) {
                      if (iVar3 == 0) {
                        sVar2 = _SetSpeechInfo(local_698,0x72656663,&local_6a8);
                        if (sVar2 == 0) {
                          sVar2 = _SetSpeechInfo(local_698,0x73646362,FUN_1005cfc44);
                          if (sVar2 == 0) {
LAB_1005cf723:
                            sVar2 = _SpeakCFString(local_698,param_2,0);
                            if (sVar2 == 0) {
                              if (local_689 == '\0') {
                                iVar3 = FUN_1001e944c(&local_6c8);
                                param_1 = local_680;
                                lVar5 = local_688;
                                if (iVar3 != -0x80) {
                                  if (iVar3 == 0) {
                                    iVar3 = FUN_1001e9587(&local_6c8);
                                    param_1 = local_680;
                                    lVar5 = local_688;
                                    if (iVar3 != -0x80) {
                                      if (iVar3 == 0) goto LAB_1005cf898;
                                      uVar6 = FUN_1001cc310();
                                      cVar1 = _os_log_type_enabled(uVar6,0x10);
                                      param_1 = local_680;
                                      lVar5 = local_688;
                                      if (cVar1 != '\0') {
                                        puVar7 = &local_658;
                                        local_658 = 0x8220202;
                                        local_654 = "Assertion failure";
                                        local_64c = 0x400;
                                        local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                                        goto LAB_1005cf79e;
                                      }
                                    }
                                  }
                                  else {
                                    uVar6 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                                    param_1 = local_680;
                                    lVar5 = local_688;
                                    if (cVar1 != '\0') {
                                      puVar7 = &local_658;
                                      local_658 = 0x8220202;
                                      local_654 = "Assertion failure";
                                      local_64c = 0x400;
                                      local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                                      goto LAB_1005cf79e;
                                    }
                                  }
                                }
                              }
                              else {
                                iVar3 = FUN_1001e9afc(&local_6a8);
                                param_1 = local_680;
                                lVar5 = local_688;
                                if (iVar3 != -0x80) {
                                  if (iVar3 == 0) {
                                    iVar3 = FUN_1001e9bb5(&local_6a8);
                                    param_1 = local_680;
                                    lVar5 = local_688;
                                    if (iVar3 != -0x80) {
                                      if (iVar3 == 0) {
LAB_1005cf898:
                                        sVar2 = _SetSpeechInfo(local_698,0x73646362,0);
                                        if ((sVar2 != 0) && (sVar2 != -0x80)) {
                                          uVar6 = FUN_1001cc310();
                                          cVar1 = _os_log_type_enabled(uVar6,0x10);
                                          if (cVar1 != '\0') {
                                            local_658 = 0x8220202;
                                            local_654 = "Assertion failure";
                                            local_64c = 0x400;
                                            local_64a = (char *)CONCAT44(local_64a._4_4_,(int)sVar2)
                                            ;
                                            __os_log_error_impl(0x100000000,uVar6,0x10,
                                                                "%{public}s: err == (%d)",&local_658
                                                                ,0x12);
                                          }
                                        }
                                        sVar2 = _SetSpeechInfo(local_698,0x6f706166,0);
                                        if ((sVar2 != 0) && (sVar2 != -0x80)) {
                                          uVar6 = FUN_1001cc310();
                                          cVar1 = _os_log_type_enabled(uVar6,0x10);
                                          if (cVar1 != '\0') {
                                            local_658 = 0x8220202;
                                            local_654 = "Assertion failure";
                                            local_64c = 0x400;
                                            local_64a = (char *)CONCAT44(local_64a._4_4_,(int)sVar2)
                                            ;
                                            __os_log_error_impl(0x100000000,uVar6,0x10,
                                                                "%{public}s: err == (%d)",&local_658
                                                                ,0x12);
                                          }
                                        }
                                        iVar3 = FUN_10017ecc9(param_7,local_238,&local_658,0);
                                        param_1 = local_680;
                                        lVar5 = local_688;
                                        if (iVar3 != -0x80) {
                                          if (iVar3 == 0) {
                                            iVar3 = FUN_1005cfc60(local_680,&local_658,param_6,
                                                                  param_5,param_8,param_9,param_10,
                                                                  param_11);
                                            param_1 = local_680;
                                            lVar5 = local_688;
                                            if (iVar3 != -0x80) {
                                              if (iVar3 == 0) {
                                                iVar4 = FUN_1001893fe(&local_658);
                                                iVar3 = 0;
                                                param_1 = local_680;
                                                lVar5 = local_688;
                                                if ((iVar4 != -0x80) && (iVar4 != 0)) {
                                                  uVar6 = FUN_1001cc310();
                                                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                                                  param_1 = local_680;
                                                  lVar5 = local_688;
                                                  if (cVar1 != '\0') {
                                                    puVar7 = &local_678;
                                                    local_678 = 0x8220202;
                                                    local_674 = "Assertion failure";
                                                    local_66c = 0x400;
                                                    local_66a = iVar4;
                                                    iVar3 = 0;
                                                    goto LAB_1005cf79e;
                                                  }
                                                }
                                              }
                                              else {
                                                uVar6 = FUN_1001cc310();
                                                cVar1 = _os_log_type_enabled(uVar6,0x10);
                                                param_1 = local_680;
                                                lVar5 = local_688;
                                                if (cVar1 != '\0') {
                                                  puVar7 = &local_678;
                                                  local_678 = 0x8220202;
                                                  local_674 = "Assertion failure";
                                                  local_66c = 0x400;
                                                  local_66a = iVar3;
LAB_1005cf79e:
                                                  __os_log_error_impl(0x100000000,uVar6,0x10,
                                                                      "%{public}s: err == (%d)",
                                                                      puVar7,0x12);
                                                  param_1 = local_680;
                                                  lVar5 = local_688;
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            uVar6 = FUN_1001cc310();
                                            cVar1 = _os_log_type_enabled(uVar6,0x10);
                                            param_1 = local_680;
                                            lVar5 = local_688;
                                            if (cVar1 != '\0') {
                                              puVar7 = &local_678;
                                              local_678 = 0x8220202;
                                              local_674 = "Assertion failure";
                                              local_66c = 0x400;
                                              local_66a = iVar3;
                                              goto LAB_1005cf79e;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        uVar6 = FUN_1001cc310();
                                        cVar1 = _os_log_type_enabled(uVar6,0x10);
                                        param_1 = local_680;
                                        lVar5 = local_688;
                                        if (cVar1 != '\0') {
                                          puVar7 = &local_658;
                                          local_658 = 0x8220202;
                                          local_654 = "Assertion failure";
                                          local_64c = 0x400;
                                          local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                                          goto LAB_1005cf79e;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    uVar6 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                                    param_1 = local_680;
                                    lVar5 = local_688;
                                    if (cVar1 != '\0') {
                                      puVar7 = &local_658;
                                      local_658 = 0x8220202;
                                      local_654 = "Assertion failure";
                                      local_64c = 0x400;
                                      local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                                      goto LAB_1005cf79e;
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              param_1 = local_680;
                              lVar5 = local_688;
                              iVar3 = iVar4;
                              if (sVar2 != -0x80) {
                                iVar3 = (int)sVar2;
                                uVar6 = FUN_1001cc310();
                                cVar1 = _os_log_type_enabled(uVar6,0x10);
                                param_1 = local_680;
                                lVar5 = local_688;
                                if (cVar1 != '\0') {
                                  puVar7 = &local_658;
                                  local_658 = 0x8220202;
                                  local_654 = "Assertion failure";
                                  local_64c = 0x400;
                                  local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                                  goto LAB_1005cf79e;
                                }
                              }
                            }
                          }
                          else {
                            param_1 = local_680;
                            lVar5 = local_688;
                            iVar3 = iVar4;
                            if (sVar2 != -0x80) {
                              iVar3 = (int)sVar2;
                              uVar6 = FUN_1001cc310();
                              cVar1 = _os_log_type_enabled(uVar6,0x10);
                              param_1 = local_680;
                              lVar5 = local_688;
                              if (cVar1 != '\0') {
                                puVar7 = &local_658;
                                local_658 = 0x8220202;
                                local_654 = "Assertion failure";
                                local_64c = 0x400;
                                local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                                goto LAB_1005cf79e;
                              }
                            }
                          }
                        }
                        else {
                          param_1 = local_680;
                          lVar5 = local_688;
                          iVar3 = iVar4;
                          if (sVar2 != -0x80) {
                            iVar3 = (int)sVar2;
                            uVar6 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar6,0x10);
                            param_1 = local_680;
                            lVar5 = local_688;
                            if (cVar1 != '\0') {
                              local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
                              goto LAB_1005cf17b;
                            }
                          }
                        }
                      }
                      else {
                        uVar6 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar6,0x10);
                        param_1 = local_680;
                        lVar5 = local_688;
                        if (cVar1 != '\0') {
                          local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
LAB_1005cf5b1:
                          lVar5 = local_688;
                          local_64c = 0x400;
                          local_654 = "Assertion failure";
                          local_658 = 0x8220202;
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                              &local_658,0x12);
                          param_1 = local_680;
                        }
                      }
                    }
                  }
                }
                else {
                  param_1 = local_680;
                  lVar5 = local_688;
                  iVar3 = iVar4;
                  if (sVar2 != -0x80) {
                    iVar3 = (int)sVar2;
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    param_1 = local_680;
                    lVar5 = local_688;
                    if (cVar1 != '\0') {
                      local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
LAB_1005cf17b:
                      lVar5 = local_688;
                      local_64c = 0x400;
                      local_654 = "Assertion failure";
                      local_658 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                          &local_658,0x12);
                      param_1 = local_680;
                    }
                  }
                }
              }
              goto LAB_1005cf1e6;
            }
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_658 = 0x8220202;
              local_654 = "Assertion failure";
              local_64c = 0x400;
              local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_658,0x12);
            }
          }
          lVar5 = 0;
          param_1 = local_680;
        }
        else if (sVar2 == -0x80) {
          lVar5 = 0;
          iVar3 = iVar4;
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_658 = 0x8220202;
            local_654 = "Assertion failure";
            local_64c = 0x400;
            local_64a = (char *)CONCAT44(local_64a._4_4_,(int)sVar2);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_658,0x12);
          }
          lVar5 = 0;
          iVar3 = (int)sVar2;
        }
LAB_1005cf1e6:
        if (local_698 != 0) {
          _DisposeSpeechChannel();
        }
        FUN_1001e9eb9(param_1 + 0x30);
        FUN_10017060f(lVar5);
        goto LAB_1005cf026;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_64a = "fsOutputDir.kind == kJRFileSpecKindPOSIX";
        goto LAB_1005ceff2;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1005cf026:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

