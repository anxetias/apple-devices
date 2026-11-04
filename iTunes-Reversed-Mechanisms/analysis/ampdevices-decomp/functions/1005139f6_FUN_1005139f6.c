// name: FUN_1005139f6
// address: 1005139f6

void FUN_1005139f6(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long local_c0 [2];
  long local_b0;
  long *local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined6 uStack_88;
  undefined2 uStack_82;
  long local_70 [3];
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a0 = FUN_1004de449(*(undefined4 *)(param_1 + 0x18));
  if (local_a0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_98 = 0x8220202;
      uStack_94 = 0x7a168c;
      uStack_90 = 1;
      local_8c = 0x822;
      local_8a = 0x74b;
      uStack_88 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') goto LAB_100513ed6;
  }
  lVar7 = FUN_10031b48b(param_1 + 0x1c);
  if (lVar7 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_98 = 0x8220202;
      uStack_94 = 0x7a168c;
      uStack_90 = 1;
      local_8c = 0x822;
      local_8a = 0xee42;
      uStack_88 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 != '\0') goto LAB_100513aa2;
  }
  else {
LAB_100513aa2:
    if (*param_2 == 0) {
      FUN_10032f0f2(&local_98);
      FUN_10032f0f2(&uStack_88);
      FUN_10032f0f2(local_70);
      FUN_1001a7ad8(&local_98,param_3);
      FUN_1001a7ad8(&uStack_88,param_3 + 0x10);
      FUN_1001a7ad8(local_70,param_3 + 0x20);
      FUN_10032f0f2(local_c0);
      iVar4 = FUN_1004dccf5(local_a0,"");
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          lVar7 = local_a0 + 0x75e0;
          iVar4 = FUN_10016614c(CONCAT44(uStack_94,local_98),lVar7,"IC-Info.rbSyncResp",0,0);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              if (CONCAT26(uStack_82,uStack_88) == 0) {
LAB_100513c2c:
                if (*(long *)(local_a0 + 0x7168) == 0) {
                  iVar4 = 0;
                  if (((*(byte *)(local_a0 + 0x434) & 2) != 0) &&
                     (iVar4 = FUN_1002672ec(*(undefined8 *)(local_a0 + 0x66d8),local_70[0]),
                     iVar4 != -0x80)) {
                    if (iVar4 == 0) {
                      iVar4 = 0;
                      if (local_70[0] != 0) {
                        local_b0 = 0;
                        iVar4 = FUN_100267452(*(undefined8 *)(local_a0 + 0x66d8));
                        FUN_1001a78d6(&local_58,local_b0);
                        FUN_1001a7b1c(local_c0,&local_58);
                        FUN_1001a85d4(&local_58);
                        if ((iVar4 != -0x80) && (iVar4 != 0)) {
                          uVar6 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar2 != '\0') {
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                            goto LAB_100514216;
                          }
                        }
                      }
                    }
                    else {
                      uVar6 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar2 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                  }
                }
                else {
                  iVar5 = FUN_1005bbb13(*(long *)(local_a0 + 0x7168),&cf_com_apple_fairplay,
                                        &cf_RentalBagResponse,
                                        *(undefined8 *)PTR__kCFBooleanTrue_10082e038);
                  if (iVar5 == 0) {
                    iVar4 = 0;
                    if (((*(byte *)(local_a0 + 0x434) & 2) != 0) && (local_70[0] != 0)) {
                      iVar5 = FUN_1005bbb13(*(undefined8 *)(local_a0 + 0x7168),
                                            &cf_com_apple_fairplay,&cf_RentalCheckinAckRequest);
                      if (iVar5 == 0) {
                        uVar6 = *(undefined8 *)(local_a0 + 0x7168);
                        uVar8 = _CFDataGetTypeID();
                        uVar6 = FUN_1005ba383(uVar6,&cf_com_apple_fairplay,
                                              &cf_RentalCheckinAckResponse,uVar8,0);
                        FUN_1001a78d6(&local_58,uVar6);
                        FUN_1001a7b1c(local_c0,&local_58);
                        FUN_1001a85d4(&local_58);
                        iVar4 = 0;
                        if (local_c0[0] == 0) {
                          uVar6 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar2 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x822;
                            local_4a = "outRentalCheckinAckSAR.IsValid()";
                            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                                &local_58,0x16);
                          }
                          FUN_1001782e9(0,0);
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar6 = DAT_1008c75b8;
                          cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                          iVar5 = -0x17ffffeb;
                          iVar4 = -0x17ffffeb;
                          if (cVar2 != '\0') {
                            local_58 = local_58 & 0xffff0000;
                            pcVar9 = "sync> failed to get RentalCheckinAckResponse";
                            goto LAB_100513cd3;
                          }
                        }
                      }
                      else {
                        uVar6 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar2 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x822;
                          local_4a = "amdError == kAMDSuccess";
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar6 = DAT_1008c75b8;
                        cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                        iVar4 = iVar5;
                        if (cVar2 != '\0') {
                          local_58 = local_58 & 0xffff0000;
                          pcVar9 = "sync> failed to set RentalCheckinAckRequest";
LAB_100513cd3:
                          __os_log_impl(0x100000000,uVar6,0x10,pcVar9,&local_58,2);
                          iVar4 = iVar5;
                        }
                      }
                    }
                  }
                  else {
                    uVar6 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "amdError == kAMDSuccess";
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar6 = DAT_1008c75b8;
                    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                    iVar4 = iVar5;
                    if (cVar2 != '\0') {
                      local_58 = local_58 & 0xffff0000;
                      pcVar9 = "sync> failed to set RentalBagResponse";
                      goto LAB_100513cd3;
                    }
                  }
                }
              }
              else {
                iVar4 = FUN_10016614c(CONCAT26(uStack_82,uStack_88),lVar7,"IC-Info.sidl",0,0);
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) goto LAB_100513c2c;
                  uVar6 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar2 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                    goto LAB_100514216;
                  }
                }
              }
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100514216:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
          FUN_1004dd69c(local_a0,"");
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        if ((iVar4 == 0) && (local_c0[0] != 0)) {
          FUN_100135118(&local_b0);
          if (local_b0 == 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure (expected to be not NULL)";
              local_4c = 0x822;
              local_4a = "checkinAckRequest";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar2 = FUN_1001782e9(0,0);
            if (cVar2 != '\0') goto LAB_100513dd9;
          }
          else {
LAB_100513dd9:
            lVar7 = local_b0;
            uVar6 = FUN_100154bae(*(undefined8 *)(param_1 + 8));
            FUN_100155e50(lVar7,uVar6);
            lVar7 = local_b0;
            uVar6 = FUN_100154c20(*(undefined8 *)(param_1 + 8));
            FUN_100155e92(lVar7,uVar6);
            lVar7 = local_b0;
            uVar3 = FUN_100154ec0(*(undefined8 *)(param_1 + 8));
            FUN_100155f52(lVar7,uVar3);
            lVar7 = local_b0;
            uVar6 = FUN_10014737e(*(undefined8 *)(param_1 + 8));
            FUN_10013ef30(lVar7,uVar6);
            lVar7 = local_b0;
            uVar6 = FUN_100154cb0(*(undefined8 *)(param_1 + 8));
            FUN_100155ef2(lVar7,uVar6);
            FUN_100155f94(local_b0,local_c0);
          }
          if (local_a8 != (long *)0x0) {
            LOCK();
            plVar1 = local_a8 + 1;
            lVar7 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar7 == 0) {
              (**(code **)(*local_a8 + 0x10))(local_a8);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
      FUN_1001a85d4(local_c0);
      FUN_1001a85d4(local_70);
      FUN_1001a85d4(&uStack_88);
      FUN_1001a85d4(&local_98);
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        FUN_100476ac1(&local_58,lVar7);
        uVar8 = FUN_1001b83ae(&local_58);
        local_98 = 0x8220202;
        uStack_94 = (undefined4)uVar8;
        uStack_90 = (undefined4)((ulong)uVar8 >> 0x20);
        local_8c = 0x842;
        local_8a = (undefined2)*param_2;
        uStack_88 = (undefined6)((ulong)*param_2 >> 0x10);
        __os_log_impl(0x100000000,uVar6,0x10,
                      "error when checking out rental track \"%{public}s\". Error details: %{public}@"
                      ,&local_98,0x16);
        FUN_1001b7a50(&local_58);
      }
    }
  }
  FUN_1004dd69c(local_a0,"");
LAB_100513ed6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

