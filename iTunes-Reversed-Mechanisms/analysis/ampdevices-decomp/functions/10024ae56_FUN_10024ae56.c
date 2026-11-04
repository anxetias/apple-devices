// name: FUN_10024ae56
// address: 10024ae56

int FUN_10024ae56(undefined8 param_1,char *param_2,byte param_3,char param_4,long param_5,
                 long param_6,long *param_7,undefined2 *param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long local_140;
  long *local_138;
  undefined8 local_130;
  long local_128;
  undefined1 local_11e;
  char local_11d;
  int local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined4 uStack_108;
  undefined2 uStack_104;
  undefined2 uStack_102;
  long *local_f8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  int *local_b0;
  long *local_a8;
  long local_80;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_c8._0_4_ = 0x8220202;
      local_c8._4_4_ = 0x7a0a90;
      local_c0 = 1;
      uStack_bc = 0x822;
      uStack_ba = 0x3ba9;
      uStack_b8 = 0x7b;
      uStack_b6 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_6 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_c8._0_4_ = 0x8220202;
      local_c8._4_4_ = 0x7a0a90;
      local_c0 = 1;
      uStack_bc = 0x822;
      uStack_ba = 0x3bb9;
      uStack_b8 = 0x7b;
      uStack_b6 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_7 != (long *)0x0) {
      *param_7 = 0;
      if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
LAB_10024af75:
        lVar4 = 0;
LAB_10024af77:
        iVar8 = 0x65e;
        if (param_4 != '\0') {
          local_11c = 0;
          local_130 = 0;
          local_128 = lVar4;
          FUN_1001c62d9(&local_11e,2);
          FUN_100218802(&local_140);
          if (local_140 == 0) {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_c8._0_4_ = 0x8220202;
              local_c8._4_4_ = 0x7a0a90;
              local_c0 = 1;
              uStack_bc = 0x822;
              uStack_ba = 0x1cce;
              uStack_b8 = 0x7a;
              uStack_b6 = 1;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
            }
            FUN_1001782e9(0,0);
            local_11c = -0x2b;
LAB_10024b1c3:
            lVar5 = 0;
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                  PTR__kCFTypeDictionaryValueCallBacks_10082e140);
            if (lVar4 == 0) {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                local_c8._0_4_ = 0x8220202;
                local_c8._4_4_ = 0x7a0a90;
                local_c0 = 1;
                uStack_bc = 0x822;
                uStack_ba = 0x4cc5;
                uStack_b8 = 0x7b;
                uStack_b6 = 1;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_c8,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              local_11c = -0x6c;
              goto LAB_10024b1c3;
            }
            FUN_10016843e(lVar4,&cf_imei,param_5,0);
            FUN_10016843e(lVar4,&cf_serialNumber,param_6,0);
            lVar5 = local_140;
            local_118._0_4_ = 0x83ecd0;
            local_118._4_4_ = 1;
            local_110 = SUB84(&local_11e,0);
            uStack_10c = (undefined2)((ulong)&local_11e >> 0x20);
            uStack_10a = (undefined2)((ulong)&local_11e >> 0x30);
            uStack_108 = SUB84(&local_11c,0);
            uStack_104 = (undefined2)((ulong)&local_11c >> 0x20);
            uStack_102 = (undefined2)((ulong)&local_11c >> 0x30);
            local_f8 = &local_118;
            plVar1 = (long *)(local_140 + 0xd0);
            local_a8 = &local_c8;
            local_c8._0_4_ = 0x83ecd0;
            local_c8._4_4_ = 1;
            uStack_b8 = SUB82(&local_11c,0);
            uStack_b6 = (undefined4)((ulong)&local_11c >> 0x10);
            lVar9 = 0x20;
            local_c0 = local_110;
            uStack_bc = uStack_10c;
            uStack_ba = uStack_10a;
            uStack_b2 = uStack_102;
            if (&local_c8 == plVar1) {
LAB_10024b34e:
              (**(code **)(*local_a8 + lVar9))();
            }
            else {
              plVar2 = *(long **)(local_140 + 0xf0);
              if (plVar2 == plVar1) {
                local_58 = &PTR_FUN_10083ecd0;
                uStack_4c = (undefined4)((ulong)&local_11e >> 0x20);
                uStack_44 = (undefined4)((ulong)&local_11c >> 0x20);
                local_50 = local_110;
                uStack_48 = uStack_108;
                local_a8 = (long *)0x0;
                (**(code **)(*plVar2 + 0x18))();
                (**(code **)(**(long **)(lVar5 + 0xf0) + 0x20))();
                *(undefined8 *)(lVar5 + 0xf0) = 0;
                local_a8 = &local_c8;
                (*(code *)local_58[3])(&local_58,plVar1);
                (*(code *)local_58[4])();
                *(long **)(lVar5 + 0xf0) = plVar1;
              }
              else {
                *(undefined ***)(local_140 + 0xd0) = &PTR_FUN_10083ecd0;
                *(undefined1 **)(local_140 + 0xd8) = &local_11e;
                *(int **)(local_140 + 0xe0) = &local_11c;
                local_a8 = plVar2;
                *(long **)(local_140 + 0xf0) = plVar1;
              }
              if ((local_a8 == &local_c8) || (lVar9 = 0x28, local_a8 != (long *)0x0))
              goto LAB_10024b34e;
            }
            if (local_f8 == &local_118) {
              lVar5 = 0x20;
LAB_10024b372:
              (**(code **)(*local_f8 + lVar5))();
            }
            else {
              lVar5 = 0x28;
              if (local_f8 != (long *)0x0) goto LAB_10024b372;
            }
            local_c8._0_4_ = 0x83ed60;
            local_c8._4_4_ = 1;
            local_c0 = SUB84(&local_11e,0);
            uStack_bc = (undefined2)((ulong)&local_11e >> 0x20);
            uStack_ba = (undefined2)((ulong)&local_11e >> 0x30);
            uStack_b8 = SUB82(&local_130,0);
            uStack_b6 = (undefined4)((ulong)&local_130 >> 0x10);
            uStack_b2 = (undefined2)((ulong)&local_130 >> 0x30);
            local_b0 = &local_11c;
            local_a8 = &local_c8;
            FUN_100129172(local_140,&local_c8);
            if (local_a8 == &local_c8) {
              lVar5 = 0x20;
LAB_10024b3d3:
              (**(code **)(*local_a8 + lVar5))();
            }
            else {
              lVar5 = 0x28;
              if (local_a8 != (long *)0x0) goto LAB_10024b3d3;
            }
            FUN_100128db6(local_140,2);
            lVar5 = local_140;
            FUN_1001a8d64(&local_c8,lVar4);
            FUN_100128f50(lVar5,&local_c8);
            FUN_1001a8fac(&local_c8);
            FUN_100128e26(local_140,2);
            lVar5 = local_140;
            FUN_1001b7b04(&local_c8,"carrierDeviceInfo");
            FUN_100128ef0(lVar5,&local_c8);
            FUN_1001b7a50(&local_c8);
            FUN_10014105c(local_140);
            uVar6 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
            while (local_11d == '\0') {
              FUN_1001727b4((int)DAT_100711ee8,uVar6,0);
            }
            if (local_11c == 0) {
              uVar6 = FUN_100166c1b(local_130,&cf_status);
              cVar3 = FUN_100169eb1(uVar6,&cf_Success);
              if (cVar3 == '\0') {
LAB_10024b83e:
                local_11c = 0x65e;
                goto LAB_10024b848;
              }
              cVar3 = FUN_100167e61(local_130,&cf_unlocked,0);
              if (cVar3 == '\0') {
                lVar9 = FUN_100166844(local_130,&cf_iccidPrefixes);
                if (lVar9 == 0) {
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 != '\0') {
                    local_c8._0_4_ = 0x8220202;
                    local_c8._4_4_ = 0x7a0a90;
                    local_c0 = 1;
                    uStack_bc = 0x822;
                    uStack_ba = 0x4d25;
                    uStack_b8 = 0x7b;
                    uStack_b6 = 1;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_c8,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  lVar5 = FUN_10017076e(lVar9);
                  if (1 < lVar5) {
                    FUN_100249e02(&local_c8,param_1);
                    local_58 = (undefined **)((ulong)local_58 & 0xffffffff00000000);
                    FUN_1001c62d9(&local_50,8);
                    FUN_10017060f(local_80);
                    local_80 = 0;
                    lVar5 = 0;
                    for (lVar10 = 0; lVar7 = FUN_10017076e(lVar9), lVar10 < lVar7;
                        lVar10 = lVar10 + 1) {
                      uVar6 = FUN_100164a01(lVar9,lVar10);
                      local_80 = FUN_10024bb81(uVar6);
                      if (local_80 != 0) {
                        FUN_10024f22a(&local_118);
                        cVar3 = FUN_10024d72a(0,2,&local_c8,0,1,0,&local_118,0,0,0,0,0,0,0);
                        if ((cVar3 != '\0') &&
                           (cVar3 = FUN_10024ab23(&local_118,&local_58), cVar3 != '\0')) {
                          FUN_1001705fc(local_80);
                          FUN_10017060f(lVar5);
                          lVar5 = local_80;
                          FUN_100249f2c(&local_58,&local_118);
                        }
                        FUN_10017060f(local_80);
                        local_80 = 0;
                        FUN_10024f3ba(&local_118);
                      }
                    }
                    if (lVar5 == 0) {
                      uVar6 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar3 != '\0') {
                        local_118._0_4_ = 0x8220202;
                        local_118._4_4_ = 0x7a0a90;
                        local_110 = 1;
                        uStack_10c = 0x822;
                        uStack_10a = 0x4d43;
                        uStack_108 = 0x1007b;
                        uStack_104 = 0;
                        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                            &local_118,0x16);
                      }
                      FUN_1001782e9(0,0);
                      local_11c = 0x65e;
                    }
                    FUN_100249fca(&local_58);
                    FUN_100249ea6(&local_c8);
                    goto LAB_10024b84b;
                  }
                  lVar5 = FUN_10017076e(lVar9);
                  if (lVar5 == 1) {
                    uVar6 = FUN_100164a01(lVar9,0);
                    lVar5 = FUN_10024bb81(uVar6);
                    if (lVar5 != 0) goto LAB_10024b84b;
                    uVar6 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar3 != '\0') {
                      local_c8._0_4_ = 0x8220202;
                      local_c8._4_4_ = 0x7a0a90;
                      local_c0 = 1;
                      uStack_bc = 0x822;
                      uStack_ba = 0x4d8e;
                      uStack_b8 = 0x7b;
                      uStack_b6 = 1;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_c8,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  else {
                    uVar6 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar3 != '\0') {
                      local_c8._0_4_ = 0x8220202;
                      local_c8._4_4_ = 0x7a0a90;
                      local_c0 = 1;
                      uStack_bc = 0x822;
                      uStack_ba = 0x4d61;
                      uStack_b8 = 0x7b;
                      uStack_b6 = 1;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_c8,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                }
                goto LAB_10024b83e;
              }
              lVar5 = FUN_1001705fc(&cf_Unlocked);
            }
            else {
LAB_10024b848:
              lVar5 = 0;
            }
          }
LAB_10024b84b:
          FUN_10017060f(lVar4);
          FUN_10017060f(local_130);
          iVar8 = local_11c;
          if (local_138 != (long *)0x0) {
            LOCK();
            plVar1 = local_138 + 1;
            lVar4 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar4 == 0) {
              (**(code **)(*local_138 + 0x10))(local_138);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (iVar8 != -0x80) {
            if (iVar8 != 0) {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                local_c8._0_4_ = 0x8220202;
                local_c8._4_4_ = 0x7a0a90;
                local_c0 = 1;
                uStack_bc = 0x400;
                uStack_ba = (undefined2)iVar8;
                uStack_b8 = (undefined2)((uint)iVar8 >> 0x10);
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_c8,0x12)
                ;
              }
              if (iVar8 == 0x65e) {
                lVar5 = FUN_1001705fc(&cf_Unlocked);
                goto LAB_10024b8ec;
              }
              if (iVar8 != 0) goto LAB_10024b8d0;
            }
            *param_7 = lVar5;
            goto LAB_10024b8f3;
          }
LAB_10024b8d0:
          lVar4 = local_128;
          if (param_8 != (undefined2 *)0x0) {
            *param_8 = 0x10e9;
          }
        }
      }
      else {
        iVar8 = 0;
        if ((param_3 & 0xfe) == 8) {
          lVar4 = FUN_1001705fc(&cf_Unlocked);
          *param_7 = lVar4;
LAB_10024b253:
          lVar4 = 0;
          goto LAB_10024b8fd;
        }
        if ((param_3 & 0xfe) != 2) goto LAB_10024af75;
        lVar4 = FUN_1001734f5(DAT_1008c4d90,param_2,0x600,
                              *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
        if (lVar4 == 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_c8._0_4_ = 0x8220202;
            local_c8._4_4_ = 0x7a0a90;
            local_c0 = 1;
            uStack_bc = 0x822;
            uStack_ba = 0x3bf1;
            uStack_b8 = 0x7b;
            uStack_b6 = 1;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
          }
          FUN_1001782e9(0,0);
          iVar8 = -0x6c;
          goto LAB_10024b253;
        }
        local_128 = lVar4;
        lVar5 = FUN_10024bb81(lVar4);
        lVar4 = local_128;
        if (lVar5 == 0) goto LAB_10024af77;
LAB_10024b8ec:
        *param_7 = lVar5;
LAB_10024b8f3:
        iVar8 = 0;
        lVar4 = local_128;
      }
LAB_10024b8fd:
      FUN_10017060f(lVar4);
      goto LAB_10024b902;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_c8._0_4_ = 0x8220202;
      local_c8._4_4_ = 0x7a0a90;
      local_c0 = 1;
      uStack_bc = 0x822;
      uStack_ba = 0x3bd5;
      uStack_b8 = 0x7b;
      uStack_b6 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar8 = -0x32;
LAB_10024b902:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

