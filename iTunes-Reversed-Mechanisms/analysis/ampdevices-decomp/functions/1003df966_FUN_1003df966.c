// name: FUN_1003df966
// address: 1003df966

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003df966(int param_1,void *param_2,undefined8 param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_stack_fffffffffffffa68;
  int *piVar13;
  undefined4 uVar14;
  undefined8 local_548;
  long lStack_540;
  long local_538;
  undefined8 local_530;
  undefined8 local_528;
  long local_520;
  int local_518;
  int local_514;
  void *local_510;
  undefined1 local_508 [24];
  int local_4f0;
  int local_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined2 uStack_4dc;
  undefined2 uStack_4da;
  undefined2 uStack_4d8;
  undefined4 uStack_4d6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  uVar14 = (undefined4)((ulong)in_stack_fffffffffffffa68 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_508._0_16_ = (undefined1  [16])0x0;
  local_510 = param_2;
  local_4ec = param_1;
  FUN_1001c62d9(&local_528,8);
  if (local_4ec == 0x46494c45) {
    iVar7 = FUN_100532b50(_DAT_100710490,(long)local_510 + 0x2c,3,0,&local_530);
    local_4f0 = iVar7;
    if (iVar7 == -0x80) goto LAB_1003e0132;
    if (iVar7 != 0) {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        puVar9 = &local_58;
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x400;
        uStack_4a = (undefined2)iVar7;
        uStack_48 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1003e000a:
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",puVar9,0x12);
      }
      goto LAB_1003e0132;
    }
    FUN_1001c62d9(&local_4e8,0x488);
    local_4e8 = 0x46494c45;
    _memcpy(&uStack_4e4,local_510,0x460);
    FUN_10053207e(&local_58,&local_4e8,local_530,1);
    auVar12 = local_508._0_16_;
    local_508._4_4_ = uStack_54;
    local_508._0_4_ = local_58;
    local_508._12_2_ = uStack_4c;
    local_508._8_4_ = uStack_50;
    local_508._14_2_ = uStack_4a;
    uVar8 = local_508._8_8_;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    local_508._8_8_ = auVar12._8_8_;
    uVar5 = local_508._8_8_;
    local_508._0_16_ = CONCAT88(uVar8,local_508._0_8_);
    if ((long *)uVar5 != (long *)0x0) {
      LOCK();
      plVar3 = (long *)(uVar5 + 8);
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)uVar5 + 0x10))(uVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((long *)local_508._0_8_ == (long *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x7290;
        uStack_48 = 0x7b;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1003e0128;
    }
LAB_1003dfbd7:
    local_520 = 8;
    iVar7 = (**(code **)(*(long *)local_508._0_8_ + 0xa8))(local_508._0_8_,&local_520,&local_528);
    local_4f0 = iVar7;
    if (iVar7 == -0x80) goto LAB_1003e0132;
    if (iVar7 != 0) {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      iVar10 = local_4ec;
      if (cVar6 != '\0') {
        uStack_4da = (undefined2)iVar7;
        uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
        goto LAB_1003e06dc;
      }
      goto LAB_1003e00a0;
    }
    if (local_520 != 8) {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_4e8 = 0x8220202;
        uStack_4e4 = 0x7a0a90;
        uStack_4e0 = 1;
        uStack_4dc = 0x822;
        uStack_4da = 0xaeca;
        uStack_4d8 = 0x7c;
        uStack_4d6 = 1;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_4e8,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1003e00f6:
      local_4f0 = -0x24;
      goto LAB_1003e0132;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_528;
    auVar12 = pshufb(auVar12,_DAT_10070e4b0);
    if ((int)local_528 != 0x4d524f46) {
      local_528 = auVar12._0_8_;
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_4e8 = 0x8220202;
        uStack_4e4 = 0x7a0a90;
        uStack_4e0 = 1;
        uStack_4dc = 0x822;
        uStack_4da = 0xaee7;
        uStack_4d8 = 0x7c;
        uStack_4d6 = 1;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_4e8,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1003e0128;
    }
    local_528 = auVar12._0_8_;
    iVar7 = (**(code **)(*(long *)local_508._0_8_ + 0xf0))(local_508._0_8_,0);
    local_4f0 = iVar7;
    if (iVar7 == -0x80) goto LAB_1003e0132;
    if (iVar7 != 0) {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      iVar10 = local_4ec;
      if (cVar6 != '\0') {
        uStack_4da = (undefined2)iVar7;
        uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
        goto LAB_1003e06dc;
      }
      goto LAB_1003e00a0;
    }
    local_548 = local_508._0_8_;
    lStack_540 = local_508._8_8_;
    if (local_508._8_8_ != 0) {
      LOCK();
      *(long *)(local_508._8_8_ + 8) = *(long *)(local_508._8_8_ + 8) + 1;
      UNLOCK();
    }
    local_4f0 = FUN_1003df354(&local_548,&local_538,&local_518);
    FUN_10021e316(&local_548);
    bVar4 = false;
    if (((param_4 & 1) != 0) && (local_4f0 != 0)) {
      local_518 = 0;
      iVar7 = (**(code **)(*(long *)local_508._0_8_ + 0x100))(local_508._0_8_,&local_58);
      local_4f0 = iVar7;
      if (iVar7 != -0x80) {
        if (iVar7 != 0) {
          uVar8 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar8,0x10);
          iVar10 = local_4ec;
          if (cVar6 != '\0') {
            uStack_4da = (undefined2)iVar7;
            uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1003e06dc:
            iVar10 = local_4ec;
            uStack_4e0 = 1;
            uStack_4e4 = 0x7a0a90;
            uStack_4dc = 0x400;
            local_4e8 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_4e8,0x12);
          }
LAB_1003e00a0:
          bVar4 = false;
          goto LAB_1003e013c;
        }
        iVar7 = (**(code **)(*(long *)local_508._0_8_ + 0xf0))
                          (local_508._0_8_,CONCAT44(uStack_54,local_58));
        local_4f0 = iVar7;
        if (iVar7 != -0x80) {
          if (iVar7 != 0) {
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            iVar10 = local_4ec;
            if (cVar6 != '\0') {
              uStack_4da = (undefined2)iVar7;
              uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
              goto LAB_1003e06dc;
            }
            goto LAB_1003e00a0;
          }
          local_520 = 8;
          iVar7 = (**(code **)(*(long *)local_508._0_8_ + 200))();
          local_4f0 = iVar7;
          if (iVar7 != -0x80) {
            if (iVar7 == 0) {
              if (local_520 != 8) {
                uVar8 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar8,0x10);
                if (cVar6 != '\0') {
                  local_4e8 = 0x8220202;
                  uStack_4e4 = 0x7a0a90;
                  uStack_4e0 = 1;
                  uStack_4dc = 0x822;
                  uStack_4da = 0xaf00;
                  uStack_4d8 = 0x7c;
                  uStack_4d6 = 1;
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_4e8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_1003e00f6;
              }
              local_528 = CONCAT44(local_528._4_4_ + 8,(undefined4)local_528);
              iVar7 = (**(code **)(*(long *)local_508._0_8_ + 0xf8))(local_508._0_8_,&local_538);
              bVar4 = true;
              iVar10 = local_4ec;
              local_4f0 = iVar7;
              if (iVar7 != -0x80) {
                if (iVar7 == 0) {
                  bVar4 = true;
                  goto LAB_1003dfdca;
                }
                uVar8 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar8,0x10);
                iVar10 = local_4ec;
                if (cVar6 != '\0') {
                  puVar9 = &local_4e8;
                  local_4e8 = 0x8220202;
                  uStack_4e4 = 0x7a0a90;
                  uStack_4e0 = 1;
                  uStack_4dc = 0x400;
                  uStack_4da = (undefined2)iVar7;
                  uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
                  goto LAB_1003e0daf;
                }
              }
              goto LAB_1003e013c;
            }
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              puVar9 = &local_4e8;
              local_4e8 = 0x8220202;
              uStack_4e4 = 0x7a0a90;
              uStack_4e0 = 1;
              uStack_4dc = 0x400;
              uStack_4da = (undefined2)iVar7;
              uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
              goto LAB_1003e000a;
            }
          }
        }
      }
      goto LAB_1003e0132;
    }
LAB_1003dfdca:
    if (local_4ec == 0x46494c45) {
      uVar8 = (**(code **)(*(long *)local_508._0_8_ + 0x160))();
      local_4f0 = FUN_100532da5(uVar8);
    }
    (**(code **)(*(long *)local_508._0_8_ + 0x1d0))();
    FUN_100295c56(local_508);
    iVar7 = local_4f0;
    iVar10 = local_4ec;
    if (local_4f0 != -0x80) {
      if (local_4f0 == 0) {
        lVar2 = (long)local_510 + 0x2c;
        iVar7 = FUN_1003ad556(lVar2,local_538,param_3,0,0,param_4 & 1,CONCAT44(uVar14,1),0,3,
                              (param_4 * 8 & 0x20) + (param_4 & 2) * 2 + 8,&local_514,param_5,
                              param_6);
        iVar10 = local_4ec;
        local_4f0 = iVar7;
        if (iVar7 != -0x80) {
          if (iVar7 == 0) {
            if ((local_514 != 0) && (local_514 != local_518)) {
              if (local_4ec == 0x46494c45) {
                iVar7 = FUN_100532b50(_DAT_100710490,lVar2,3,0,&local_530);
                iVar10 = local_4ec;
                local_4f0 = iVar7;
                if (iVar7 != -0x80) {
                  if (iVar7 == 0) {
                    FUN_1001c62d9(&local_4e8,0x488);
                    local_4e8 = 0x46494c45;
                    _memcpy(&uStack_4e4,local_510,0x460);
                    FUN_10053207e(&local_58,&local_4e8,local_530,1);
                    FUN_100217418(local_508,&local_58);
                    FUN_10021e316(&local_58);
                    if ((long *)local_508._0_8_ != (long *)0x0) goto LAB_1003e0ac3;
                    uVar8 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar6 != '\0') {
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      uStack_50 = 1;
                      uStack_4c = 0x822;
                      uStack_4a = 0x7290;
                      uStack_48 = 0x7b;
                      uStack_46 = 1;
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
LAB_1003e0d4e:
                    local_4f0 = -0x32;
                    iVar10 = local_4ec;
                  }
                  else {
                    uVar8 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar8,0x10);
                    iVar10 = local_4ec;
                    if (cVar6 != '\0') {
                      puVar9 = &local_58;
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      uStack_50 = 1;
                      uStack_4c = 0x400;
                      uStack_4a = (undefined2)iVar7;
                      uStack_48 = (undefined2)((uint)iVar7 >> 0x10);
                      goto LAB_1003e0daf;
                    }
                  }
                }
              }
              else {
                FUN_1005323e8(&local_4e8,local_4ec,local_510,1,3,0,&local_4f0);
                FUN_100217418(local_508,&local_4e8);
                FUN_10021e316(&local_4e8);
                iVar7 = local_4f0;
                iVar10 = local_4ec;
                if (local_4f0 != -0x80) {
                  if (local_4f0 == 0) {
                    if ((long *)local_508._0_8_ == (long *)0x0) {
                      uVar8 = FUN_1001cc310();
                      cVar6 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar6 != '\0') {
                        local_4e8 = 0x8220202;
                        uStack_4e4 = 0x7a0a90;
                        uStack_4e0 = 1;
                        uStack_4dc = 0x822;
                        uStack_4da = 0x7290;
                        uStack_4d8 = 0x7b;
                        uStack_4d6 = 1;
                        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                            &local_4e8,0x16);
                      }
                      FUN_1001782e9(0,0);
                      goto LAB_1003e0d4e;
                    }
LAB_1003e0ac3:
                    iVar7 = (**(code **)(*(long *)local_508._0_8_ + 0xf0))
                                      (local_508._0_8_,local_538 + -8);
                    iVar10 = local_4ec;
                    local_4f0 = iVar7;
                    if (iVar7 != -0x80) {
                      if (iVar7 == 0) {
                        local_520 = 8;
                        iVar7 = (**(code **)(*(long *)local_508._0_8_ + 200))();
                        iVar10 = local_4ec;
                        local_4f0 = iVar7;
                        if (iVar7 != -0x80) {
                          if (iVar7 == 0) {
                            if (local_520 == 8) {
                              local_528 = CONCAT44(local_528._4_4_ + (local_514 - local_518),
                                                   (undefined4)local_528);
                              if (local_4ec == 0x46494c45) {
                                uVar8 = (**(code **)(*(long *)local_508._0_8_ + 0x160))();
                                local_4f0 = FUN_100532da5(uVar8);
                              }
                              (**(code **)(*(long *)local_508._0_8_ + 0x1d0))();
                              FUN_100295c56(local_508);
                              bVar4 = true;
                              iVar10 = local_4ec;
                            }
                            else {
                              uVar8 = FUN_1001cc310();
                              cVar6 = _os_log_type_enabled(uVar8,0x10);
                              if (cVar6 != '\0') {
                                local_4e8 = 0x8220202;
                                uStack_4e4 = 0x7a0a90;
                                uStack_4e0 = 1;
                                uStack_4dc = 0x822;
                                uStack_4da = 0xaf00;
                                uStack_4d8 = 0x7c;
                                uStack_4d6 = 1;
                                __os_log_error_impl(0x100000000,uVar8,0x10,
                                                    "%{public}s: (%{public}s)",&local_4e8,0x16);
                              }
                              FUN_1001782e9(0,0);
                              local_4f0 = -0x24;
                              iVar10 = local_4ec;
                            }
                          }
                          else {
                            uVar8 = FUN_1001cc310();
                            cVar6 = _os_log_type_enabled(uVar8,0x10);
                            iVar10 = local_4ec;
                            if (cVar6 != '\0') {
                              puVar9 = &local_4e8;
                              local_4e8 = 0x8220202;
                              uStack_4e4 = 0x7a0a90;
                              uStack_4e0 = 1;
                              uStack_4dc = 0x400;
                              uStack_4da = (undefined2)iVar7;
                              uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
                              goto LAB_1003e0daf;
                            }
                          }
                        }
                      }
                      else {
                        uVar8 = FUN_1001cc310();
                        cVar6 = _os_log_type_enabled(uVar8,0x10);
                        iVar10 = local_4ec;
                        if (cVar6 != '\0') {
                          puVar9 = &local_4e8;
                          local_4e8 = 0x8220202;
                          uStack_4e4 = 0x7a0a90;
                          uStack_4e0 = 1;
                          uStack_4dc = 0x400;
                          uStack_4da = (undefined2)iVar7;
                          uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1003e0daf:
                          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",
                                              puVar9,0x12);
                          iVar10 = local_4ec;
                        }
                      }
                    }
                  }
                  else {
                    uVar8 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar8,0x10);
                    iVar10 = local_4ec;
                    if (cVar6 != '\0') {
                      puVar9 = &local_4e8;
                      local_4e8 = 0x8220202;
                      uStack_4e4 = 0x7a0a90;
                      uStack_4e0 = 1;
                      uStack_4dc = 0x400;
                      uStack_4da = (undefined2)iVar7;
                      uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
                      goto LAB_1003e0daf;
                    }
                  }
                }
              }
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              uStack_4da = (undefined2)iVar7;
              uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
              goto LAB_1003e0985;
            }
          }
        }
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        iVar10 = local_4ec;
        if (cVar6 != '\0') {
          uStack_4da = (undefined2)iVar7;
          uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1003e0985:
          uStack_4dc = 0x400;
          uStack_4e0 = 1;
          uStack_4e4 = 0x7a0a90;
          local_4e8 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_4e8,0x12);
        }
      }
    }
  }
  else {
    piVar13 = &local_4f0;
    FUN_1005323e8(&local_4e8,local_4ec,local_510,1,3,0,piVar13);
    auVar12 = local_508._0_16_;
    uVar14 = (undefined4)((ulong)piVar13 >> 0x20);
    local_508._4_4_ = uStack_4e4;
    local_508._0_4_ = local_4e8;
    local_508._12_2_ = uStack_4dc;
    local_508._8_4_ = uStack_4e0;
    local_508._14_2_ = uStack_4da;
    uVar8 = local_508._8_8_;
    local_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4dc = 0;
    uStack_4da = 0;
    local_508._8_8_ = auVar12._8_8_;
    uVar5 = local_508._8_8_;
    local_508._0_16_ = CONCAT88(uVar8,local_508._0_8_);
    if ((long *)uVar5 != (long *)0x0) {
      LOCK();
      plVar3 = (long *)(uVar5 + 8);
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)uVar5 + 0x10))(uVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar3 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    iVar7 = local_4f0;
    if (local_4f0 != -0x80) {
      if (local_4f0 != 0) {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        iVar10 = local_4ec;
        if (cVar6 != '\0') {
          uStack_4da = (undefined2)iVar7;
          uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
          goto LAB_1003e06dc;
        }
        goto LAB_1003e00a0;
      }
      if ((long *)local_508._0_8_ != (long *)0x0) goto LAB_1003dfbd7;
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_4e8 = 0x8220202;
        uStack_4e4 = 0x7a0a90;
        uStack_4e0 = 1;
        uStack_4dc = 0x822;
        uStack_4da = 0x7290;
        uStack_4d8 = 0x7b;
        uStack_4d6 = 1;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_4e8,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1003e0128:
      local_4f0 = -0x32;
    }
LAB_1003e0132:
    bVar4 = false;
    iVar10 = local_4ec;
  }
LAB_1003e013c:
  if ((long *)local_508._0_8_ != (long *)0x0) {
    if (iVar10 == 0x46494c45) {
      uVar8 = (**(code **)(*(long *)local_508._0_8_ + 0x160))();
      local_4f0 = FUN_100532da5(uVar8);
    }
    (**(code **)(*(long *)local_508._0_8_ + 0x1d0))();
    iVar10 = local_4ec;
    uVar8 = local_508._8_8_;
    local_508._0_16_ = (undefined1  [16])0x0;
    if ((long *)uVar8 != (long *)0x0) {
      LOCK();
      plVar3 = (long *)(uVar8 + 8);
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(long *)uVar8 + 0x10))(uVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (bVar4) {
    if (iVar10 == 0x46494c45) {
      iVar7 = FUN_100532b50(_DAT_100710490,(long)local_510 + 0x2c,3,0,&local_530);
      local_4f0 = iVar7;
      if ((iVar7 != -0x80) && (iVar7 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)iVar7;
          uStack_48 = (undefined2)((uint)iVar7 >> 0x10);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (local_4f0 == 0) {
        FUN_1001c62d9(&local_4e8,0x488);
        local_4e8 = 0x46494c45;
        _memcpy(&uStack_4e4,local_510,0x460);
        FUN_10053207e(&local_58,&local_4e8,local_530,1);
        auVar12 = local_508._0_16_;
        local_508._4_4_ = uStack_54;
        local_508._0_4_ = local_58;
        local_508._12_2_ = uStack_4c;
        local_508._8_4_ = uStack_50;
        local_508._14_2_ = uStack_4a;
        uVar8 = local_508._8_8_;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        local_508._8_8_ = auVar12._8_8_;
        uVar5 = local_508._8_8_;
        local_508._0_16_ = CONCAT88(uVar8,local_508._0_8_);
        if ((long *)uVar5 != (long *)0x0) {
          LOCK();
          plVar3 = (long *)(uVar5 + 8);
          lVar2 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*(long *)uVar5 + 0x10))(uVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_508._0_8_ == 0) {
          uVar8 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar8,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x7290;
            uStack_48 = 0x7b;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          local_4f0 = -0x32;
        }
      }
    }
    else {
      FUN_1005323e8(&local_4e8,iVar10,local_510,1,3,0,&local_4f0);
      auVar12 = local_508._0_16_;
      local_508._4_4_ = uStack_4e4;
      local_508._0_4_ = local_4e8;
      local_508._12_2_ = uStack_4dc;
      local_508._8_4_ = uStack_4e0;
      local_508._14_2_ = uStack_4da;
      uVar8 = local_508._8_8_;
      local_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4da = 0;
      local_508._8_8_ = auVar12._8_8_;
      uVar5 = local_508._8_8_;
      local_508._0_16_ = CONCAT88(uVar8,local_508._0_8_);
      if ((long *)uVar5 != (long *)0x0) {
        LOCK();
        plVar3 = (long *)(uVar5 + 8);
        lVar2 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*(long *)uVar5 + 0x10))(uVar5);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar3 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
      iVar7 = local_4f0;
      if ((local_4f0 != -0x80) && (local_4f0 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_4e8 = 0x8220202;
          uStack_4e4 = 0x7a0a90;
          uStack_4e0 = 1;
          uStack_4dc = 0x400;
          uStack_4da = (undefined2)iVar7;
          uStack_4d8 = (undefined2)((uint)iVar7 >> 0x10);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_4e8,0x12);
        }
      }
      if (local_508._0_8_ == 0) {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_4e8 = 0x8220202;
          uStack_4e4 = 0x7a0a90;
          uStack_4e0 = 1;
          uStack_4dc = 0x822;
          uStack_4da = 0x7290;
          uStack_4d8 = 0x7b;
          uStack_4d6 = 1;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_4e8,0x16);
        }
        FUN_1001782e9(0,0);
        local_4f0 = -0x32;
        goto LAB_1003e0510;
      }
    }
    if (local_4f0 == 0) {
      (**(code **)(*(long *)local_508._0_8_ + 0xf0))(local_508._0_8_,0);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_528;
      auVar12 = pshufb(auVar11,_DAT_10070e4b0);
      local_528 = auVar12._0_8_;
      local_520 = 8;
      (**(code **)(*(long *)local_508._0_8_ + 200))();
      if (local_4ec == 0x46494c45) {
        uVar8 = (**(code **)(*(long *)local_508._0_8_ + 0x160))();
        local_4f0 = FUN_100532da5(uVar8);
      }
      (**(code **)(*(long *)local_508._0_8_ + 0x1d0))();
      uVar8 = local_508._8_8_;
      local_508._0_16_ = (undefined1  [16])0x0;
      if ((long *)uVar8 != (long *)0x0) {
        LOCK();
        plVar3 = (long *)(uVar8 + 8);
        lVar2 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*(long *)uVar8 + 0x10))(uVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
LAB_1003e0510:
  iVar7 = local_4f0;
  if ((long *)local_508._8_8_ != (long *)0x0) {
    LOCK();
    plVar3 = (long *)(local_508._8_8_ + 8);
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*(long *)local_508._8_8_ + 0x10))(local_508._8_8_);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

