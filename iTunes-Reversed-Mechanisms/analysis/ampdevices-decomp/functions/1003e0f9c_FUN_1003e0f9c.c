// name: FUN_1003e0f9c
// address: 1003e0f9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003e0f9c(int param_1,void *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_stack_fffffffffffffa68;
  int *piVar13;
  undefined4 uVar14;
  long local_550;
  undefined8 local_548;
  long lStack_540;
  long local_538;
  int local_52c;
  undefined8 local_528;
  undefined8 local_520;
  int local_518;
  undefined4 local_514;
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
    uVar5 = FUN_100532b50(_DAT_100710490,(long)local_510 + 0x2c,3,0,&local_520);
    local_4f0 = (int)uVar5;
    uVar6 = uVar5;
    if (local_4f0 != -0x80) {
      if (local_4f0 == 0) {
        FUN_1001c62d9(&local_4e8,0x488);
        local_4e8 = 0x46494c45;
        _memcpy(&uStack_4e4,local_510,0x460);
        FUN_10053207e(&local_58,&local_4e8,local_520,1);
        auVar12 = local_508._0_16_;
        local_508._4_4_ = uStack_54;
        local_508._0_4_ = local_58;
        local_508._12_2_ = uStack_4c;
        local_508._8_4_ = uStack_50;
        local_508._14_2_ = uStack_4a;
        uVar6 = local_508._8_8_;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        local_508._8_8_ = auVar12._8_8_;
        uVar5 = local_508._8_8_;
        local_508._0_16_ = CONCAT88(uVar6,local_508._0_8_);
        if ((long *)uVar5 != (long *)0x0) {
          LOCK();
          plVar2 = (long *)(uVar5 + 8);
          lVar7 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*(long *)uVar5 + 0x10))(uVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar2 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar7 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((long *)local_508._0_8_ != (long *)0x0) {
LAB_1003e1217:
          local_538 = 8;
          uVar5 = (**(code **)(*(long *)local_508._0_8_ + 0xa8))
                            (local_508._0_8_,&local_538,&local_528);
          local_4f0 = (int)uVar5;
          local_514 = (undefined4)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          iVar10 = local_4ec;
          if (local_4f0 != -0x80) {
            if (local_4f0 == 0) {
              if (local_538 == 8) {
                auVar12._8_8_ = 0;
                auVar12._0_8_ = local_528;
                auVar12 = pshufb(auVar12,_DAT_10070e4b0);
                if ((int)local_528 != 0x4d524f46) {
                  local_528 = auVar12._0_8_;
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 != '\0') {
                    local_4e8 = 0x8220202;
                    uStack_4e4 = 0x7a0a90;
                    uStack_4e0 = 1;
                    uStack_4dc = 0x822;
                    uStack_4da = 0xaee7;
                    uStack_4d8 = 0x7c;
                    uStack_4d6 = 1;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_4e8
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  goto LAB_1003e1aad;
                }
                local_528 = auVar12._0_8_;
                iVar4 = (**(code **)(*(long *)local_508._0_8_ + 0xf0))(local_508._0_8_,0);
                iVar10 = local_4ec;
                local_4f0 = iVar4;
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) {
                    local_548 = local_508._0_8_;
                    lStack_540 = local_508._8_8_;
                    if (local_508._8_8_ != 0) {
                      LOCK();
                      *(long *)(local_508._8_8_ + 8) = *(long *)(local_508._8_8_ + 8) + 1;
                      UNLOCK();
                    }
                    local_4f0 = FUN_1003df354(&local_548,&local_550,&local_52c);
                    FUN_10021e316(&local_548);
                    iVar10 = local_4ec;
                    if (local_4f0 == 0) {
                      if (local_4ec == 0x46494c45) {
                        uVar6 = (**(code **)(*(long *)local_508._0_8_ + 0x160))();
                        local_4f0 = FUN_100532da5(uVar6);
                      }
                      (**(code **)(*(long *)local_508._0_8_ + 0x1d0))();
                      FUN_100295c56(local_508);
                      lVar7 = (long)local_510 + 0x2c;
                      iVar4 = FUN_1003ad556(lVar7,local_550,0,0,0,0,CONCAT44(uVar14,1),0,0,
                                            (param_3 & 4) * 8 + 4,&local_518,param_4,param_5);
                      iVar10 = local_4ec;
                      local_4f0 = iVar4;
                      if (iVar4 != -0x80) {
                        if (iVar4 == 0) {
                          if ((local_518 != 0) && (local_518 != local_52c)) {
                            if (local_4ec == 0x46494c45) {
                              iVar4 = FUN_100532b50(_DAT_100710490,lVar7,3,0,&local_520);
                              local_4f0 = iVar4;
                              if (iVar4 != -0x80) {
                                if (iVar4 == 0) {
                                  FUN_1001c62d9(&local_4e8,0x488);
                                  local_4e8 = 0x46494c45;
                                  _memcpy(&uStack_4e4,local_510,0x460);
                                  FUN_10053207e(&local_58,&local_4e8,local_520,1);
                                  FUN_100217418(local_508,&local_58);
                                  FUN_10021e316(&local_58);
                                  if ((long *)local_508._0_8_ != (long *)0x0) goto LAB_1003e1e9a;
                                  uVar6 = FUN_1001cc310();
                                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                                  if (cVar3 != '\0') {
                                    local_58 = 0x8220202;
                                    uStack_54 = 0x7a0a90;
                                    uStack_50 = 1;
                                    uStack_4c = 0x822;
                                    uStack_4a = 0x7290;
                                    uStack_48 = 0x7b;
                                    uStack_46 = 1;
                                    __os_log_error_impl(0x100000000,uVar6,0x10,
                                                        "%{public}s: (%{public}s)",&local_58,0x16);
                                  }
                                  FUN_1001782e9(0,0);
                                  local_4f0 = -0x32;
                                  iVar10 = local_4ec;
                                }
                                else {
                                  uVar6 = FUN_1001cc310();
                                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                                  iVar10 = local_4ec;
                                  if (cVar3 != '\0') {
                                    puVar9 = &local_58;
                                    local_58 = 0x8220202;
                                    uStack_54 = 0x7a0a90;
                                    uStack_50 = 1;
                                    uStack_4c = 0x400;
                                    uStack_4a = (undefined2)iVar4;
                                    uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
                                    goto LAB_1003e1a15;
                                  }
                                }
                              }
                            }
                            else {
                              FUN_1005323e8(&local_4e8,local_4ec,local_510,1,3,0,&local_4f0);
                              FUN_100217418(local_508,&local_4e8);
                              FUN_10021e316(&local_4e8);
                              iVar4 = local_4f0;
                              if (local_4f0 != -0x80) {
                                if (local_4f0 == 0) {
                                  if ((long *)local_508._0_8_ == (long *)0x0) {
                                    uVar6 = FUN_1001cc310();
                                    cVar3 = _os_log_type_enabled(uVar6,0x10);
                                    if (cVar3 != '\0') {
                                      local_4e8 = 0x8220202;
                                      uStack_4e4 = 0x7a0a90;
                                      uStack_4e0 = 1;
                                      uStack_4dc = 0x822;
                                      uStack_4da = 0x7290;
                                      uStack_4d8 = 0x7b;
                                      uStack_4d6 = 1;
                                      __os_log_error_impl(0x100000000,uVar6,0x10,
                                                          "%{public}s: (%{public}s)",&local_4e8,0x16
                                                         );
                                    }
                                    FUN_1001782e9(0,0);
                                    goto LAB_1003e1aad;
                                  }
LAB_1003e1e9a:
                                  iVar4 = (**(code **)(*(long *)local_508._0_8_ + 0xf0))
                                                    (local_508._0_8_,local_550 + -8);
                                  iVar10 = local_4ec;
                                  local_4f0 = iVar4;
                                  if (iVar4 != -0x80) {
                                    if (iVar4 == 0) {
                                      local_538 = 8;
                                      iVar4 = (**(code **)(*(long *)local_508._0_8_ + 200))();
                                      iVar10 = local_4ec;
                                      local_4f0 = iVar4;
                                      if (iVar4 != -0x80) {
                                        if (iVar4 == 0) {
                                          if (local_538 != 8) {
                                            uVar6 = FUN_1001cc310();
                                            cVar3 = _os_log_type_enabled(uVar6,0x10);
                                            if (cVar3 != '\0') {
                                              local_4e8 = 0x8220202;
                                              uStack_4e4 = 0x7a0a90;
                                              uStack_4e0 = 1;
                                              uStack_4dc = 0x822;
                                              uStack_4da = 0xaf00;
                                              uStack_4d8 = 0x7c;
                                              uStack_4d6 = 1;
                                              __os_log_error_impl(0x100000000,uVar6,0x10,
                                                                  "%{public}s: (%{public}s)",
                                                                  &local_4e8,0x16);
                                            }
                                            FUN_1001782e9(0,0);
                                            goto LAB_1003e1a78;
                                          }
                                          local_528 = CONCAT44(local_528._4_4_ +
                                                               (local_518 - local_52c),
                                                               (undefined4)local_528);
                                          if (local_4ec == 0x46494c45) {
                                            uVar6 = (**(code **)(*(long *)local_508._0_8_ + 0x160))
                                                              ();
                                            local_4f0 = FUN_100532da5(uVar6);
                                          }
                                          (**(code **)(*(long *)local_508._0_8_ + 0x1d0))();
                                          FUN_100295c56(local_508);
                                          local_514 = 0;
                                          iVar10 = local_4ec;
                                        }
                                        else {
                                          uVar6 = FUN_1001cc310();
                                          cVar3 = _os_log_type_enabled(uVar6,0x10);
                                          iVar10 = local_4ec;
                                          if (cVar3 != '\0') {
                                            uStack_4da = (undefined2)iVar4;
                                            uStack_4d8 = (undefined2)((uint)iVar4 >> 0x10);
                                            goto LAB_1003e2108;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      uVar6 = FUN_1001cc310();
                                      cVar3 = _os_log_type_enabled(uVar6,0x10);
                                      iVar10 = local_4ec;
                                      if (cVar3 != '\0') {
                                        uStack_4da = (undefined2)iVar4;
                                        uStack_4d8 = (undefined2)((uint)iVar4 >> 0x10);
                                        goto LAB_1003e2108;
                                      }
                                    }
                                  }
                                }
                                else {
                                  uVar6 = FUN_1001cc310();
                                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                                  iVar10 = local_4ec;
                                  if (cVar3 != '\0') {
                                    uStack_4da = (undefined2)iVar4;
                                    uStack_4d8 = (undefined2)((uint)iVar4 >> 0x10);
LAB_1003e2108:
                                    uStack_4e0 = 1;
                                    uStack_4e4 = 0x7a0a90;
                                    uStack_4dc = 0x400;
                                    local_4e8 = 0x8220202;
                                    __os_log_error_impl(0x100000000,uVar6,0x10,
                                                        "%{public}s: err == (%d)",&local_4e8,0x12);
                                    iVar10 = local_4ec;
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          uVar6 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar3 != '\0') {
                            puVar9 = &local_4e8;
                            local_4e8 = 0x8220202;
                            uStack_4e4 = 0x7a0a90;
                            uStack_4e0 = 1;
                            uStack_4dc = 0x400;
                            uStack_4da = (undefined2)iVar4;
                            uStack_4d8 = (undefined2)((uint)iVar4 >> 0x10);
                            goto LAB_1003e1a15;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar6 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar6,0x10);
                    iVar10 = local_4ec;
                    if (cVar3 != '\0') {
                      puVar9 = &local_4e8;
                      local_4e8 = 0x8220202;
                      uStack_4e4 = 0x7a0a90;
                      uStack_4e0 = 1;
                      uStack_4dc = 0x400;
                      uStack_4da = (undefined2)iVar4;
                      uStack_4d8 = (undefined2)((uint)iVar4 >> 0x10);
LAB_1003e1a15:
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar9,
                                          0x12);
                    }
                  }
                }
              }
              else {
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 != '\0') {
                  local_4e8 = 0x8220202;
                  uStack_4e4 = 0x7a0a90;
                  uStack_4e0 = 1;
                  uStack_4dc = 0x822;
                  uStack_4da = 0xaeca;
                  uStack_4d8 = 0x7c;
                  uStack_4d6 = 1;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_4e8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
LAB_1003e1a78:
                local_4f0 = -0x24;
                iVar10 = local_4ec;
              }
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              iVar10 = local_4ec;
              if (cVar3 != '\0') {
                puVar9 = &local_4e8;
                local_4e8 = 0x8220202;
                uStack_4e4 = 0x7a0a90;
                uStack_4e0 = 1;
                uStack_4dc = 0x400;
                uStack_4da = (undefined2)uVar5;
                uStack_4d8 = (undefined2)((ulong)uVar5 >> 0x10);
                goto LAB_1003e1a15;
              }
            }
          }
          goto LAB_1003e151a;
        }
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x7290;
          uStack_48 = 0x7b;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        uVar6 = FUN_1001782e9(0,0);
        local_4f0 = -0x32;
      }
      else {
        uVar8 = FUN_1001cc310();
        uVar6 = _os_log_type_enabled(uVar8,0x10);
        if ((char)uVar6 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)uVar5;
          uStack_48 = (undefined2)((ulong)uVar5 >> 0x10);
          uVar6 = __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
        }
      }
    }
    local_514 = (undefined4)CONCAT71((int7)((ulong)uVar6 >> 8),1);
    iVar10 = local_4ec;
  }
  else {
    piVar13 = &local_4f0;
    lVar7 = FUN_1005323e8(&local_4e8,local_4ec,local_510,1,3,0,piVar13);
    auVar12 = local_508._0_16_;
    uVar14 = (undefined4)((ulong)piVar13 >> 0x20);
    local_508._4_4_ = uStack_4e4;
    local_508._0_4_ = local_4e8;
    local_508._12_2_ = uStack_4dc;
    local_508._8_4_ = uStack_4e0;
    local_508._14_2_ = uStack_4da;
    uVar6 = local_508._8_8_;
    local_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    uStack_4dc = 0;
    uStack_4da = 0;
    local_508._8_8_ = auVar12._8_8_;
    uVar5 = local_508._8_8_;
    local_508._0_16_ = CONCAT88(uVar6,local_508._0_8_);
    if ((long *)uVar5 != (long *)0x0) {
      LOCK();
      plVar2 = (long *)(uVar5 + 8);
      lVar7 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*(long *)uVar5 + 0x10))(uVar5);
        lVar7 = std::__shared_weak_count::__release_weak();
      }
    }
    plVar2 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar7 = std::__shared_weak_count::__release_weak();
      }
    }
    iVar4 = local_4f0;
    local_514 = (undefined4)CONCAT71((int7)((ulong)lVar7 >> 8),1);
    iVar10 = local_4ec;
    if (local_4f0 != -0x80) {
      if (local_4f0 == 0) {
        if ((long *)local_508._0_8_ != (long *)0x0) goto LAB_1003e1217;
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_4e8 = 0x8220202;
          uStack_4e4 = 0x7a0a90;
          uStack_4e0 = 1;
          uStack_4dc = 0x822;
          uStack_4da = 0x7290;
          uStack_4d8 = 0x7b;
          uStack_4d6 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_4e8,0x16);
        }
        FUN_1001782e9(0,0);
LAB_1003e1aad:
        local_4f0 = -0x32;
        iVar10 = local_4ec;
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        iVar10 = local_4ec;
        if (cVar3 != '\0') {
          puVar9 = &local_4e8;
          local_4e8 = 0x8220202;
          uStack_4e4 = 0x7a0a90;
          uStack_4e0 = 1;
          uStack_4dc = 0x400;
          uStack_4da = (undefined2)iVar4;
          uStack_4d8 = (undefined2)((uint)iVar4 >> 0x10);
          goto LAB_1003e1a15;
        }
      }
    }
  }
LAB_1003e151a:
  if ((long *)local_508._0_8_ != (long *)0x0) {
    if (iVar10 == 0x46494c45) {
      uVar6 = (**(code **)(*(long *)local_508._0_8_ + 0x160))();
      local_4f0 = FUN_100532da5(uVar6);
    }
    (**(code **)(*(long *)local_508._0_8_ + 0x1d0))();
    iVar10 = local_4ec;
    uVar6 = local_508._8_8_;
    local_508._0_16_ = (undefined1  [16])0x0;
    if ((long *)uVar6 != (long *)0x0) {
      LOCK();
      plVar2 = (long *)(uVar6 + 8);
      lVar7 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*(long *)uVar6 + 0x10))(uVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if ((char)local_514 == '\0') {
    if (iVar10 == 0x46494c45) {
      iVar4 = FUN_100532b50(_DAT_100710490,(long)local_510 + 0x2c,3,0,&local_520);
      local_4f0 = iVar4;
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)iVar4;
          uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (local_4f0 == 0) {
        FUN_1001c62d9(&local_4e8,0x488);
        local_4e8 = 0x46494c45;
        _memcpy(&uStack_4e4,local_510,0x460);
        FUN_10053207e(&local_58,&local_4e8,local_520,1);
        auVar12 = local_508._0_16_;
        local_508._4_4_ = uStack_54;
        local_508._0_4_ = local_58;
        local_508._12_2_ = uStack_4c;
        local_508._8_4_ = uStack_50;
        local_508._14_2_ = uStack_4a;
        uVar6 = local_508._8_8_;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        local_508._8_8_ = auVar12._8_8_;
        uVar5 = local_508._8_8_;
        local_508._0_16_ = CONCAT88(uVar6,local_508._0_8_);
        if ((long *)uVar5 != (long *)0x0) {
          LOCK();
          plVar2 = (long *)(uVar5 + 8);
          lVar7 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*(long *)uVar5 + 0x10))(uVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar2 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar7 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_508._0_8_ == 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x7290;
            uStack_48 = 0x7b;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
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
      uVar6 = local_508._8_8_;
      local_4e8 = 0;
      uStack_4e4 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4da = 0;
      local_508._8_8_ = auVar12._8_8_;
      uVar5 = local_508._8_8_;
      local_508._0_16_ = CONCAT88(uVar6,local_508._0_8_);
      if ((long *)uVar5 != (long *)0x0) {
        LOCK();
        plVar2 = (long *)(uVar5 + 8);
        lVar7 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*(long *)uVar5 + 0x10))(uVar5);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar2 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,uStack_4e0));
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
      iVar4 = local_4f0;
      if ((local_4f0 != -0x80) && (local_4f0 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_4e8 = 0x8220202;
          uStack_4e4 = 0x7a0a90;
          uStack_4e0 = 1;
          uStack_4dc = 0x400;
          uStack_4da = (undefined2)iVar4;
          uStack_4d8 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_4e8,0x12);
        }
      }
      if (local_508._0_8_ == 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_4e8 = 0x8220202;
          uStack_4e4 = 0x7a0a90;
          uStack_4e0 = 1;
          uStack_4dc = 0x822;
          uStack_4da = 0x7290;
          uStack_4d8 = 0x7b;
          uStack_4d6 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_4e8,0x16);
        }
        FUN_1001782e9(0,0);
        local_4f0 = -0x32;
        goto LAB_1003e195f;
      }
    }
    if (local_4f0 == 0) {
      (**(code **)(*(long *)local_508._0_8_ + 0xf0))(local_508._0_8_,0);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_528;
      auVar12 = pshufb(auVar11,_DAT_10070e4b0);
      local_528 = auVar12._0_8_;
      local_538 = 8;
      (**(code **)(*(long *)local_508._0_8_ + 200))();
      if (local_4ec == 0x46494c45) {
        uVar6 = (**(code **)(*(long *)local_508._0_8_ + 0x160))();
        local_4f0 = FUN_100532da5(uVar6);
      }
      (**(code **)(*(long *)local_508._0_8_ + 0x1d0))();
      uVar6 = local_508._8_8_;
      local_508._0_16_ = (undefined1  [16])0x0;
      if ((long *)uVar6 != (long *)0x0) {
        LOCK();
        plVar2 = (long *)(uVar6 + 8);
        lVar7 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*(long *)uVar6 + 0x10))(uVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
LAB_1003e195f:
  iVar4 = local_4f0;
  if ((long *)local_508._8_8_ != (long *)0x0) {
    LOCK();
    plVar2 = (long *)(local_508._8_8_ + 8);
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*(long *)local_508._8_8_ + 0x10))(local_508._8_8_);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

