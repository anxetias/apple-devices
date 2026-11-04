// name: FUN_100214b80
// address: 100214b80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100214b80(long *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  cfstringStruct *pcVar17;
  undefined8 *puVar18;
  ulong uVar19;
  bool bVar20;
  double dVar21;
  long lVar22;
  long *in_stack_fffffffffffffaf8;
  uint uVar23;
  long local_4e8;
  long lStack_4e0;
  long local_4d8;
  long lStack_4d0;
  long local_4c8;
  long *plStack_4c0;
  long local_4b8;
  long lStack_4b0;
  undefined1 local_4a0 [8];
  ulong local_498;
  int local_490 [2];
  double local_488;
  uint local_480;
  byte local_479;
  undefined8 local_478;
  undefined4 uStack_470;
  undefined2 uStack_46c;
  undefined2 uStack_46a;
  undefined2 uStack_468;
  undefined4 uStack_466;
  undefined2 uStack_462;
  long *local_458;
  undefined8 local_448;
  undefined7 uStack_440;
  undefined4 uStack_439;
  undefined8 local_430;
  undefined8 uStack_428;
  long *local_420;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_480 = 0;
  local_490[1] = 0xffffffff;
  local_490[0] = 0;
  local_479 = 1;
  if (*(int *)((long)param_1 + 0x2ad4) != 0xe) {
    local_479 = *(byte *)((long)param_1 + 0x2852);
  }
  FUN_1001cc3a4(0);
  FUN_1001b7b04(&local_478,"UpdateDevice");
  FUN_1001cc232(local_4a0,&local_478);
  FUN_1001b7a50(&local_478);
  iVar7 = (int)param_1[0x435];
  if (iVar7 == 0) {
    iVar7 = *(int *)((long)param_1 + 0x21ac);
  }
  local_498 = CONCAT44(local_498._4_4_,iVar7);
  cVar4 = (**(code **)(*param_1 + 0x28))(param_1,0,0,0,0);
  uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
  if (cVar4 == '\0') {
    uVar12 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar12,0x10);
    if (cVar4 != '\0') {
      local_478._0_4_ = 0x8220202;
      local_478._4_4_ = 0x7a0a90;
      uStack_470 = 1;
      uStack_46c = 0x822;
      uStack_46a = 0x319;
      uStack_468 = 0x7b;
      uStack_466 = 1;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    uVar19 = 0xffffffee;
    FUN_1001782e9(0,0);
    goto LAB_1002154cf;
  }
  plVar14 = param_1 + 0x47f;
  cVar4 = FUN_10017cbd0(plVar14);
  if ((cVar4 == '\0') || (cVar4 = FUN_10017fbfb(plVar14), cVar4 != '\0')) {
LAB_100214c63:
    if (*(char *)((long)param_1 + 0x2856) == '\x01') {
      FUN_1002131e8(param_1,(*(int *)((long)param_1 + 0x2ad4) != 0xe) * '\x03');
      FUN_10021356c(param_1);
      goto LAB_100214c8f;
    }
    if (param_1[0x438] == 0) {
      cVar4 = FUN_10017cbd0(plVar14);
      if (cVar4 != '\0') {
        uVar13 = FUN_100214106(param_1);
        uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
        uVar19 = uVar13 & 0xffffffff;
        if ((int)uVar13 != 0) goto LAB_1002154cf;
      }
      FUN_1002131e8(param_1,(*(int *)((long)param_1 + 0x2ad4) != 0xe) * '\x03');
      FUN_10021356c(param_1);
      uVar8 = FUN_100399d2b(*(undefined4 *)((long)param_1 + 0x21ac),param_1 + 0x436,local_490);
      uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
      uVar19 = (ulong)uVar8;
      if (uVar8 != 0xffffff80) {
        if (uVar8 == 0) goto LAB_100214c8f;
        uVar12 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar12,0x10);
        if (cVar4 != '\0') {
          puVar18 = &local_478;
          local_478._0_4_ = 0x8220202;
          local_478._4_4_ = 0x7a0a90;
          uStack_470 = 1;
          uStack_46c = 0x400;
          uStack_46a = (undefined2)uVar8;
          uStack_468 = (undefined2)(uVar8 >> 0x10);
          goto LAB_100216386;
        }
      }
    }
    else {
      iVar7 = _AMDeviceGetInterfaceType();
      uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
      uVar19 = 0x682;
      if (iVar7 == 1) {
        if (((*(char *)((long)param_1 + 0x2853) == '\x01') &&
            (lVar15 = param_1[0x435], (int)lVar15 != 0)) &&
           (*(char *)(DAT_1008c76a0 + 0x1a94) == '\0')) {
          local_4b8 = param_1[0x515];
          lStack_4b0 = param_1[0x516];
          if (param_1[0x516] != 0) {
            LOCK();
            plVar14 = (long *)(param_1[0x516] + 8);
            *plVar14 = *plVar14 + 1;
            UNLOCK();
          }
          uVar8 = FUN_100504722((int)lVar15,&local_4b8,&local_480);
          FUN_100205d70(&local_4b8);
          if ((uVar8 != 0xffffff80) && (uVar8 != 0)) {
            uVar12 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar12,0x10);
            if (cVar4 != '\0') {
              local_478._0_4_ = 0x8220202;
              local_478._4_4_ = 0x7a0a90;
              uStack_470 = 1;
              uStack_46c = 0x400;
              uStack_46a = (undefined2)uVar8;
              uStack_468 = (undefined2)(uVar8 >> 0x10);
              __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_478,0x12)
              ;
            }
          }
          uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
          if (local_480 == 0xffffffda) {
            local_480 = 0;
          }
          if (local_480 == 0 && uVar8 == 0) goto LAB_1002157a3;
          uVar19 = 0xffffff80;
          if (uVar8 == 0xffffff80) goto LAB_1002154cf;
          if (local_480 != 0) {
            uVar8 = local_480;
          }
          goto LAB_1002165ff;
        }
LAB_1002157a3:
        iVar7 = _AMDeviceGetInterfaceType(param_1[0x438]);
        uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
        if (iVar7 == 1) {
          uVar8 = FUN_100214106(param_1);
          uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
          if (uVar8 == 0) {
            FUN_100213686(param_1);
            uVar8 = FUN_100399d2b((int)param_1[0x435],param_1 + 0x436,0);
            uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) {
                if ((0xe < *(uint *)((long)param_1 + 0x2ad4)) ||
                   ((0x5010U >> (*(uint *)((long)param_1 + 0x2ad4) & 0x1f) & 1) == 0)) {
                  uVar12 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar12,0x10);
                  if (cVar4 != '\0') {
                    local_478._0_4_ = 0x8220202;
                    local_478._4_4_ = 0x7a0a90;
                    uStack_470 = 1;
                    uStack_46c = 0x822;
                    uStack_46a = 0x337;
                    uStack_468 = 0x7b;
                    uStack_466 = 1;
                    __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                        &local_478,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                iVar7 = _AMDeviceGetInterfaceType(param_1[0x438]);
                uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                if (iVar7 != 1) goto LAB_1002154cf;
                iVar7 = *(int *)((long)param_1 + 0x2ad4);
                if ((iVar7 == 4) || (iVar7 == 0xc)) {
                  if ((int)param_1[0x435] == 0) {
                    if (*(int *)((long)param_1 + 0x21ac) == 0) {
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x822;
                        uStack_46a = 0x3bf;
                        uStack_468 = 0x7b;
                        uStack_466 = 1;
                        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    uVar12 = FUN_1005e9a2c();
                    FUN_1005f24a4(uVar12,*(undefined4 *)((long)param_1 + 0x21ac));
                  }
                  else {
                    uVar23 = (uint)(*(char *)((long)param_1 + 0x2852) == '\0');
                    uVar8 = FUN_1004f3881((int)param_1[0x435],uVar23 + 0x10cc00a6,
                                          uVar23 | 0x10cc00a8,uVar23 * 4 + 0x10cf000d,0);
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    uVar19 = (ulong)uVar8;
                    if (uVar8 != 0) goto LAB_1002154cf;
                  }
                  if (*(int *)((long)param_1 + 0x2ad4) == 4) {
                    cVar4 = FUN_100210fd2(param_1,local_490 + 1);
                    if (cVar4 == '\0') {
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x822;
                        uStack_46a = 0x3dd;
                        uStack_468 = 0x7b;
                        uStack_466 = 1;
                        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    _AMRLog(5,&cf_AMPDevicesAgent_Enteringrecoverymode_device_p,param_1[0x438]);
                    iVar7 = _AMDeviceGetInterfaceType(param_1[0x438]);
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    uVar19 = 0x682;
                    if (iVar7 != 1) goto LAB_1002154cf;
                    uVar8 = FUN_1005bf9b3(param_1[0x438],&local_58);
                    uVar19 = (ulong)uVar8;
                    if (uVar8 == 0xffffff80) {
LAB_100216ab0:
                      uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                      if ((char)local_58 != '\x01') goto LAB_1002154cf;
                      *(uint *)(param_1 + 0x55a) = uVar8;
                    }
                    else if (uVar8 != 0) {
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x400;
                        uStack_46a = (undefined2)uVar8;
                        uStack_468 = (undefined2)(uVar8 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",
                                            &local_478,0x12);
                      }
                      if (uVar8 != 0) goto LAB_100216ab0;
                    }
                    FUN_10017060f(param_1[0x438]);
                    param_1[0x438] = 0;
                  }
                }
                else if (iVar7 == 0xe) {
                  uVar8 = FUN_1004f3881((int)param_1[0x435],0x10cc00a6,0x10cc00a8,0x10cf000d,0);
                  uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                  uVar19 = (ulong)uVar8;
                  if (uVar8 != 0) goto LAB_1002154cf;
                }
LAB_100214c8f:
                cVar4 = FUN_1001ee068();
                if ((cVar4 == '\0') || (*(char *)((long)param_1 + 0x2856) != '\0')) {
LAB_100214ca5:
                  uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                  uVar8 = *(uint *)((long)param_1 + 0x2ad4);
                  if (uVar8 == 10) {
                    if (param_1[0x43a] == 0) {
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x822;
                        uStack_46a = 0x439;
                        uStack_468 = 0x7b;
                        uStack_466 = 1;
                        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      uVar19 = 0x65d;
                      FUN_1001782e9(0,0);
                      goto LAB_1002154cf;
                    }
                    iVar7 = _AMRecoveryModeDeviceSetAutoBoot(param_1[0x43a],0);
                    if (iVar7 != 0) {
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x822;
                        uStack_46a = 0x457;
                        uStack_468 = 0x7b;
                        uStack_466 = 1;
                        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    iVar7 = _AMRecoveryModeDeviceReboot(param_1[0x43a]);
                    if (iVar7 != 0) {
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x822;
                        uStack_46a = 0x4a9;
                        uStack_468 = 0x7b;
                        uStack_466 = 1;
                        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    FUN_10017060f(param_1[0x43a]);
                    param_1[0x43a] = 0;
                    *(undefined4 *)((long)param_1 + 0x2ad4) = 0xb;
                    uVar8 = 0xb;
                  }
                  bVar3 = true;
LAB_100214d62:
                  if ((uVar8 < 0xc) && ((0x814U >> (uVar8 & 0x1f) & 1) != 0)) {
                    local_488 = (double)FUN_1001ebd46();
                    param_1[0x55c] = (long)local_488;
                    local_488 = local_488 + _DAT_100717f40;
                    FUN_10021356c(param_1);
                    while ((((param_1[0x43a] == 0 && (param_1[0x439] == 0)) && (param_1[0x43b] == 0)
                            ) && ((dVar21 = (double)FUN_1001ebd46(), dVar21 < local_488 &&
                                  (cVar4 = FUN_1001c19bc(), cVar4 == '\0'))))) {
                      plVar14 = (long *)param_1[0x516];
                      local_4e8 = param_1[0x515];
                      lStack_4e0 = param_1[0x516];
                      if (plVar14 != (long *)0x0) {
                        LOCK();
                        plVar14[1] = plVar14[1] + 1;
                        UNLOCK();
                      }
                      FUN_1002252e1(&local_4e8);
                      if (plVar14 != (long *)0x0) {
                        LOCK();
                        plVar1 = plVar14 + 1;
                        lVar15 = *plVar1;
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (lVar15 == 0) {
                          (**(code **)(*plVar14 + 0x10))(plVar14);
                          std::__shared_weak_count::__release_weak();
                        }
                      }
                    }
                    param_1[0x55c] = 0;
                    cVar4 = FUN_1001c19bc();
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    uVar8 = *(uint *)((long)param_1 + 0x2ad4);
                    if (cVar4 != '\0') {
                      uVar12 = FUN_10020e580();
                      uVar19 = 0xffffff80;
                      _AMRLog(5,&cf_AMPDevicesAgent_Quittingwhileinstate__,uVar12);
                      goto LAB_1002154cf;
                    }
                    if ((uVar8 == 4) && (param_1[0x439] != 0)) {
                      uVar19 = 0x640;
                      goto LAB_1002154cf;
                    }
                    if (param_1[0x43a] != 0) {
                      if (*(char *)((long)param_1 + 0x2854) == '\0') {
                        if (uVar8 != 4 || bVar3) goto LAB_100214ea8;
                      }
                      else if (uVar8 != 4) {
                        lVar15 = param_1[0x43b];
                        goto LAB_100214ecd;
                      }
                      goto LAB_100215e56;
                    }
LAB_100214ea8:
                    lVar15 = param_1[0x43b];
                    if ((lVar15 != -1 || uVar8 != 4) || bVar3) {
LAB_100214ecd:
                      if (lVar15 == 0) {
                        if ((param_1[0x43a] != 0) || (param_1[0x439] != 0)) {
                          uVar19 = 0;
                          if ((char)param_1[0x50a] == '\0') {
                            if (uVar8 != 0xb) goto LAB_100214f02;
                            if (*(char *)((long)param_1 + 0x2855) == '\0') {
                              uVar12 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(uVar12,0x10);
                              if (cVar4 != '\0') {
                                local_478._0_4_ = 0x8220202;
                                local_478._4_4_ = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46c = 0x822;
                                uStack_46a = 0x51b;
                                uStack_468 = 0x7b;
                                uStack_466 = 1;
                                __os_log_error_impl(0x100000000,uVar12,0x10,
                                                    "%{public}s: (%{public}s)",&local_478,0x16);
                              }
                              uVar19 = 0;
                              FUN_1001782e9(0,0);
                            }
                          }
                          goto LAB_1002154cf;
                        }
                        uVar11 = (uint)(uVar8 != 2) * 4 + 0x641;
                        uVar19 = 0x642;
                      }
                      else if (lVar15 == -1) {
                        uVar11 = uVar8 == 2 ^ 0x66f;
                        uVar19 = 0x66d;
                      }
                      else {
                        uVar11 = (uVar8 != 2) + 0x671;
                        uVar19 = 0x670;
                      }
                      if (uVar8 != 4) {
                        uVar19 = (ulong)uVar11;
                      }
                      goto LAB_1002154cf;
                    }
LAB_100215e56:
                    uVar19 = 0;
                    goto LAB_1002154cf;
                  }
LAB_100214f02:
                  if (uVar8 == 0xe) {
                    *(undefined1 *)(param_1 + 0x514) = 1;
                    uVar13 = FUN_1001ee6ff(FUN_100210dd0,param_1,0,0,0,"");
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    uVar19 = uVar13 & 0xffffffff;
                    if ((int)uVar13 != 0) {
                      if ((int)uVar13 == -0x80) goto LAB_100216900;
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 == '\0') goto LAB_100216900;
                      uStack_46a = (undefined2)uVar13;
                      uStack_468 = (undefined2)(uVar13 >> 0x10);
                      goto LAB_1002168ed;
                    }
                  }
                  else if (*(char *)((long)param_1 + 0x2856) == '\x01') {
                    param_1[0x55c] = 0;
                    param_1[0x511] = param_1[0x43c];
                    param_1[0x43c] = 0;
                    *(undefined1 *)(param_1 + 0x514) = 1;
                    uVar13 = FUN_1001ee6ff(FUN_100212308,param_1,0,0,0,"");
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    uVar19 = uVar13 & 0xffffffff;
                    if ((int)uVar13 != 0) {
                      if ((int)uVar13 == -0x80) goto LAB_100216900;
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 == '\0') goto LAB_100216900;
                      uStack_46a = (undefined2)uVar13;
                      uStack_468 = (undefined2)(uVar13 >> 0x10);
                      goto LAB_1002168ed;
                    }
                  }
                  else if ((uVar8 == 0xc) && (param_1[0x43c] != 0)) {
                    lVar15 = FUN_10021182e(param_1,1);
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    if (lVar15 == 0) {
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x822;
                        uStack_46a = 0x5463;
                        uStack_468 = 0x7a;
                        uStack_466 = 1;
                        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      uVar19 = 0xffffff94;
                      FUN_1001782e9(0,0);
                      goto LAB_1002154cf;
                    }
                    lVar22 = FUN_1001ebd46();
                    param_1[0x55c] = lVar22;
                    _AMRestorableDeviceRestore(param_1[0x43c],lVar15,FUN_10021134c,param_1);
                    FUN_10017060f(lVar15);
                  }
                  else if ((param_1[0x43a] == 0) || ((3 < uVar8 - 4 && (uVar8 != 2)))) {
                    if ((uVar8 - 1 < 3) && (param_1[0x439] != 0)) {
                      cVar4 = FUN_100210fd2(param_1,local_490 + 1);
                      if (cVar4 == '\0') {
                        uVar12 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar12,0x10);
                        if (cVar4 != '\0') {
                          local_478._0_4_ = 0x8220202;
                          local_478._4_4_ = 0x7a0a90;
                          uStack_470 = 1;
                          uStack_46c = 0x822;
                          uStack_46a = 0x3dd;
                          uStack_468 = 0x7b;
                          uStack_466 = 1;
                          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                              &local_478,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      if (*(int *)((long)param_1 + 0x2ad4) != 1) {
                        *(undefined4 *)((long)param_1 + 0x2ad4) = 3;
                      }
                      param_1[0x50e] = param_1[0x439];
                      param_1[0x439] = 0;
                      *(undefined1 *)(param_1 + 0x514) = 1;
                      uVar13 = FUN_1001ee6ff(FUN_100212308,param_1,0,0,0,"");
                      uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                      uVar19 = uVar13 & 0xffffffff;
                      if ((int)uVar13 != 0) {
                        if ((int)uVar13 == -0x80) goto LAB_100216900;
                        uVar12 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar12,0x10);
                        if (cVar4 == '\0') goto LAB_100216900;
                        uStack_46a = (undefined2)uVar13;
                        uStack_468 = (undefined2)(uVar13 >> 0x10);
                        goto LAB_1002168ed;
                      }
                    }
                  }
                  else {
                    cVar4 = FUN_100210fd2(param_1,local_490 + 1);
                    if (cVar4 == '\0') {
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x822;
                        uStack_46a = 0x3dd;
                        uStack_468 = 0x7b;
                        uStack_466 = 1;
                        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    bVar20 = (*(uint *)((long)param_1 + 0x2ad4) & 0xfffffffe) == 6;
                    *(uint *)((long)param_1 + 0x2ad4) = bVar20 + 5 + (uint)bVar20;
                    param_1[0x50f] = param_1[0x43a];
                    param_1[0x43a] = 0;
                    *(undefined1 *)(param_1 + 0x514) = 1;
                    uVar13 = FUN_1001ee6ff(FUN_100212308,param_1,0,0,0,"");
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    uVar19 = uVar13 & 0xffffffff;
                    if ((int)uVar13 != 0) {
                      if ((int)uVar13 == -0x80) goto LAB_100216900;
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 == '\0') goto LAB_100216900;
                      uStack_46a = (undefined2)uVar13;
                      uStack_468 = (undefined2)(uVar13 >> 0x10);
                      goto LAB_1002168ed;
                    }
                  }
                  if (param_1[0x43c] == 0) {
                    bVar20 = false;
                  }
                  else {
                    bVar20 = *(int *)((long)param_1 + 0x2ad4) == 0xc;
                  }
                  FUN_1002136da(param_1,bVar20);
                  FUN_10020fb9c(param_1);
                  uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                  if (*(int *)((long)param_1 + 0x2acc) != 0) goto LAB_100215e56;
                  iVar7 = *(int *)((long)param_1 + 0x2ad4);
                  switch(iVar7) {
                  case 1:
                    uVar8 = 2;
                    break;
                  default:
                    lVar15 = param_1[0x43b];
                    goto LAB_1002153cd;
                  case 3:
                    uVar8 = 4;
                    break;
                  case 5:
                    uVar10 = 6;
                    goto LAB_1002151bd;
                  case 6:
                  case 8:
                    goto switchD_1002151af_caseD_6;
                  case 7:
                    uVar10 = 8;
LAB_1002151bd:
                    *(undefined4 *)((long)param_1 + 0x2ad4) = uVar10;
switchD_1002151af_caseD_6:
                    local_488 = (double)FUN_1001ebd46();
                    param_1[0x55c] = (long)local_488;
                    local_488 = local_488 + _DAT_100717f48;
                    FUN_10021356c(param_1);
                    while ((((param_1[0x43b] == 0 && (param_1[0x43a] == 0)) && (param_1[0x439] == 0)
                            ) && ((dVar21 = (double)FUN_1001ebd46(), dVar21 < local_488 &&
                                  (cVar4 = FUN_1001c19bc(), cVar4 == '\0'))))) {
                      plVar14 = (long *)param_1[0x516];
                      local_4d8 = param_1[0x515];
                      lStack_4d0 = param_1[0x516];
                      if (plVar14 != (long *)0x0) {
                        LOCK();
                        plVar14[1] = plVar14[1] + 1;
                        UNLOCK();
                      }
                      FUN_1002252e1(&local_4d8);
                      if (plVar14 != (long *)0x0) {
                        LOCK();
                        plVar1 = plVar14 + 1;
                        lVar15 = *plVar1;
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (lVar15 == 0) {
                          (**(code **)(*plVar14 + 0x10))(plVar14);
                          std::__shared_weak_count::__release_weak();
                        }
                      }
                    }
                    param_1[0x55c] = 0;
                    cVar4 = FUN_1001c19bc();
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    if (cVar4 != '\0') {
                      uVar12 = FUN_10020e580(*(undefined4 *)((long)param_1 + 0x2ad4));
                      uVar19 = 0xffffff80;
                      _AMRLog(5,&cf_AMPDevicesAgent_Quittingwhileinstate__,uVar12);
                      goto LAB_1002154cf;
                    }
                    lVar15 = param_1[0x43b];
                    if (lVar15 == -1) {
                      uVar19 = (ulong)((*(int *)((long)param_1 + 0x2ad4) == 8) + 0x66b);
                      goto LAB_1002154cf;
                    }
                    if (param_1[0x439] != 0) {
                      uVar19 = 0x652;
                      goto LAB_1002154cf;
                    }
                    if (param_1[0x43a] == 0) {
                      iVar7 = *(int *)((long)param_1 + 0x2ad4);
                      if (lVar15 != 0) goto LAB_1002153d6;
                      uVar19 = (ulong)((iVar7 != 8) + 0x643);
                      goto LAB_1002154cf;
                    }
                    iVar7 = *(int *)((long)param_1 + 0x2ad4);
                    if (iVar7 == 6) goto code_r0x0001002152d0;
                    uVar19 = 0x64b;
                    if (iVar7 == 8) goto LAB_1002154cf;
LAB_1002153cd:
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    if (lVar15 != 0) {
LAB_1002153d6:
                      uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                      if ((iVar7 != 8) && (iVar7 != 6)) goto LAB_100215e56;
                      *(undefined4 *)((long)param_1 + 0x2ad4) = 9;
                      param_1[0x510] = lVar15;
                      param_1[0x43b] = 0;
                      *(undefined1 *)(param_1 + 0x514) = 1;
                      uVar8 = FUN_1001ee6ff(FUN_100212308,param_1,0,0,0,"");
                      uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                      uVar19 = (ulong)uVar8;
                      if (uVar8 == 0) {
                        FUN_1002136da(param_1,0);
                        FUN_10020fb9c(param_1);
                        uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                        uVar19 = 0;
                        if ((int)param_1[0x434] == 0x69545620) goto code_r0x000100215453;
                      }
                      else {
                        if (uVar8 != 0xffffff80) {
                          uVar12 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar12,0x10);
                          if (cVar4 != '\0') {
                            uStack_46a = (undefined2)uVar8;
                            uStack_468 = (undefined2)(uVar8 >> 0x10);
LAB_1002168ed:
                            uStack_46c = 0x400;
                            uStack_470 = 1;
                            local_478._4_4_ = 0x7a0a90;
                            local_478._0_4_ = 0x8220202;
                            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",
                                                &local_478,0x12);
                          }
                        }
LAB_100216900:
                        *(undefined1 *)(param_1 + 0x514) = 0;
                      }
                      goto LAB_1002154cf;
                    }
                    goto LAB_100215e56;
                  }
                  uVar19 = 0;
                  if (*(char *)((long)param_1 + 0x2851) != '\0') goto LAB_1002154cf;
                  *(uint *)((long)param_1 + 0x2ad4) = uVar8;
                  goto LAB_100214d62;
                }
                plVar14 = param_1 + 0x512;
                uVar8 = FUN_1001e96d3(plVar14,0,0);
                uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                uVar19 = (ulong)uVar8;
                if (uVar8 != 0xffffff80) {
                  if (uVar8 == 0) {
                    local_478._0_4_ = 0x83def8;
                    local_478._4_4_ = 1;
                    uStack_470 = 0x1e9809;
                    uStack_46c = 1;
                    uStack_46a = 0;
                    uStack_468 = SUB82(plVar14,0);
                    uStack_466 = (undefined4)((ulong)plVar14 >> 0x10);
                    uStack_462 = (undefined2)((ulong)plVar14 >> 0x30);
                    local_448 = 0;
                    uStack_440 = 0;
                    uStack_439 = 0;
                    local_430 = 0;
                    uStack_428 = 0;
                    local_420 = (long *)0x0;
                    local_458 = &local_478;
                    FUN_10017869a(&local_478);
                    if (local_420 != (long *)0x0) {
                      LOCK();
                      plVar1 = local_420 + 1;
                      lVar15 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar15 == 0) {
                        (**(code **)(*local_420 + 0x10))(local_420);
                        std::__shared_weak_count::__release_weak();
                      }
                    }
                    if (local_458 == &local_478) {
                      lVar15 = 0x20;
LAB_100216314:
                      (**(code **)(*local_458 + lVar15))();
                    }
                    else {
                      lVar15 = 0x28;
                      if (local_458 != (long *)0x0) goto LAB_100216314;
                    }
                    uVar8 = FUN_1001e9afc(plVar14);
                    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
                    uVar19 = (ulong)uVar8;
                    if (uVar8 != 0xffffff80) {
                      if (uVar8 == 0) goto LAB_100214ca5;
                      uVar12 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar4 != '\0') {
                        puVar18 = &local_478;
                        local_478._0_4_ = 0x8220202;
                        local_478._4_4_ = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x400;
                        uStack_46a = (undefined2)uVar8;
                        uStack_468 = (undefined2)(uVar8 >> 0x10);
                        goto LAB_100216386;
                      }
                    }
                  }
                  else {
                    uVar12 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar12,0x10);
                    if (cVar4 != '\0') {
                      puVar18 = &local_478;
                      local_478._0_4_ = 0x8220202;
                      local_478._4_4_ = 0x7a0a90;
                      uStack_470 = 1;
                      uStack_46c = 0x400;
                      uStack_46a = (undefined2)uVar8;
                      uStack_468 = (undefined2)(uVar8 >> 0x10);
                      goto LAB_100216386;
                    }
                  }
                }
                goto LAB_1002154cf;
              }
              uVar12 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar12,0x10);
              if (cVar4 != '\0') {
                local_478._0_4_ = 0x8220202;
                local_478._4_4_ = 0x7a0a90;
                uStack_470 = 1;
                uStack_46c = 0x400;
                uStack_46a = (undefined2)uVar8;
                uStack_468 = (undefined2)(uVar8 >> 0x10);
                __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_478,
                                    0x12);
              }
            }
LAB_1002165ff:
            uVar19 = (ulong)uVar8;
          }
          else {
            uVar19 = (ulong)uVar8;
          }
        }
      }
    }
  }
  else {
    lVar15 = param_1[0x434];
    lVar22 = param_1[0x503];
    local_4c8 = param_1[0x515];
    plStack_4c0 = (long *)param_1[0x516];
    if (param_1[0x516] != 0) {
      LOCK();
      plVar1 = (long *)(param_1[0x516] + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    in_stack_fffffffffffffaf8 = &local_478;
    uVar8 = FUN_1002253a4(1,(int)lVar15,plVar14,0,(char)lVar22 == '\0',&local_4c8,&local_478);
    uVar19 = (ulong)uVar8;
    if (plStack_4c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_4c0 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
    if (uVar8 == 0xffffff80) goto LAB_1002154cf;
    if (uVar8 == 0) {
      cVar4 = FUN_100247cdd((int)param_1[0x434]);
      if (cVar4 == '\0') {
        cVar4 = FUN_100214a86(param_1);
        uVar23 = (uint)((ulong)in_stack_fffffffffffffaf8 >> 0x20);
        uVar19 = 0x68b;
        if (cVar4 != '\0') goto LAB_1002154cf;
      }
      _memcpy(plVar14,&local_478,0x420);
      goto LAB_100214c63;
    }
    uVar12 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar12,0x10);
    if (cVar4 == '\0') goto LAB_1002154cf;
    puVar18 = (undefined8 *)&local_58;
    local_58 = 0x8220202;
    uStack_54 = 0x7a0a90;
    uStack_50 = 1;
    local_4c = 0x400;
    local_4a = (char *)CONCAT44(local_4a._4_4_,uVar8);
LAB_100216386:
    __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",puVar18,0x12);
  }
LAB_1002154cf:
  cVar4 = FUN_1001e96b8(param_1 + 0x512);
  if (cVar4 != '\0') {
    FUN_1001e9bb5(param_1 + 0x512);
  }
  if ((int)param_1[0x436] != 0) {
    uVar12 = FUN_1005e9a2c();
    FUN_1005f24a4(uVar12,(int)param_1[0x436]);
    *(undefined4 *)(param_1 + 0x436) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x2ad4) = 0;
  if ((int)uVar19 == 0) {
    uVar19 = (ulong)*(uint *)((long)param_1 + 0x2acc);
  }
  *(undefined4 *)((long)param_1 + 0x2acc) = 0;
  if ((int)uVar19 == 0x642) {
    uVar19 = 0x642;
    if (*(uint *)(param_1 + 0x55a) != 0) {
      uVar19 = (ulong)*(uint *)(param_1 + 0x55a);
    }
  }
  *(undefined4 *)(param_1 + 0x55a) = 0;
  param_1[0x557] = 0;
  *(undefined1 *)(param_1 + 0x559) = 0;
  *(undefined1 *)((long)param_1 + 0x2aca) = 0;
  param_1[0x55c] = 0;
  iVar7 = (int)uVar19;
  if (local_480 == 0) {
    if (((((iVar7 + 0x80U & 0xffffff7f) != 0) && (1 < iVar7 - 0x581U)) && (iVar7 != 0x462)) &&
       (iVar7 != 0x465)) {
      pcVar17 = &cf_AMPDevicesAgent_Restoreerror_d;
      uVar13 = uVar19;
      goto LAB_100215586;
    }
  }
  else {
    pcVar17 = &cf_AMPDevicesAgent_Backuperror_d;
    uVar13 = (ulong)local_480;
LAB_100215586:
    _AMRLog(3,pcVar17,uVar13);
  }
  uVar12 = FUN_1005e9a2c();
  FUN_1005e7204(uVar12,param_1[0x437],uVar19,0);
  if (local_490[0] != 0) {
    uVar12 = FUN_1005e9a2c();
    FUN_1005e7204(uVar12,param_1[0x437],uVar19,1);
  }
  *(undefined2 *)(param_1 + 0x517) = 0;
  FUN_1002135fa(param_1,999);
  uVar2 = *(undefined1 *)((long)param_1 + 0x2856);
  plVar14 = (long *)FUN_10039a28c();
  uVar12 = (**(code **)(*plVar14 + 0x58))(plVar14);
  local_498 = local_498 & 0xffffffff;
  FUN_1001c6987(uVar12,0x7375726d,local_498,(long)iVar7,uVar2);
  if (*(char *)((long)param_1 + 0x2856) == '\0') {
    if ((char)param_1[0x50a] == '\x01') {
      cVar4 = *(char *)((long)param_1 + 0x2851);
      uVar12 = FUN_1005e9a2c();
      if (cVar4 == '\x01') {
        FUN_1005edc94(uVar12,uVar19);
      }
      else {
        FUN_1005ede82(uVar12,uVar19);
      }
    }
    else if (*(char *)((long)param_1 + 0x2854) == '\x01') {
      uVar12 = FUN_1005e9a2c();
      FUN_1005eead8(uVar12,uVar19);
    }
    else if (*(char *)((long)param_1 + 0x2855) == '\x01') {
      uVar12 = FUN_1005e9a2c();
      FUN_1005ef55a(uVar12,uVar19);
    }
    else if (*(char *)(DAT_1008c76a0 + 0x1a58) != '\x02') {
      if (iVar7 == 0) {
        uVar10 = (undefined4)param_1[0x434];
        cVar4 = FUN_100247cdd(uVar10);
        if (cVar4 == '\0') {
          uVar12 = FUN_100416f20(uVar10,(uint)(local_479 ^ 1) + (uint)(local_479 ^ 1) * 2 +
                                        0x10cc00f6);
          FUN_1001b7eb0(&local_478,uVar12);
          FUN_100398718(&local_478,param_1 + 0x47d);
        }
        else {
          uVar12 = FUN_100416f20(uVar10,local_479 ^ 0x10cc00fb);
          FUN_1001b7eb0(&local_478,uVar12);
          FUN_100450d15(&local_478,param_1 + 0x47d);
        }
        FUN_1001b7a50(&local_478);
      }
      else {
        if ((iVar7 - 0xc1cU < 900) && (*(int *)((long)param_1 + 0x21ac) != 0)) {
          local_58 = 0;
          uStack_54 = 0;
          uVar12 = FUN_1005e9a2c();
          iVar9 = FUN_1005e7d5a(uVar12,*(undefined4 *)((long)param_1 + 0x21ac),0,&local_58,0,0);
          if (CONCAT44(uStack_54,local_58) != 0 && iVar9 == 0) {
            iVar9 = _AMRecoveryModeDeviceSetAutoBoot(CONCAT44(uStack_54,local_58),1);
            if (iVar9 != 0) {
              uVar12 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar12,0x10);
              if (cVar4 != '\0') {
                local_478._0_4_ = 0x8220202;
                local_478._4_4_ = 0x7a0a90;
                uStack_470 = 1;
                uStack_46c = 0x822;
                uStack_46a = 0x5a8;
                uStack_468 = 0x7b;
                uStack_466 = 1;
                __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_478,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            iVar9 = _AMRecoveryModeDeviceReboot(CONCAT44(uStack_54,local_58));
            if (iVar9 != 0) {
              uVar12 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar12,0x10);
              if (cVar4 != '\0') {
                local_478._0_4_ = 0x8220202;
                local_478._4_4_ = 0x7a0a90;
                uStack_470 = 1;
                uStack_46c = 0x822;
                uStack_46a = 0x5f8;
                uStack_468 = 0x7b;
                uStack_466 = 1;
                __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_478,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            FUN_10017060f(CONCAT44(uStack_54,local_58));
          }
        }
        if (local_480 == 0) {
          if ((iVar7 + 0x80U & 0xffffff7f) != 0) {
            bVar5 = local_479 ^ 1;
            sVar6 = FUN_1004174a0((int)param_1[0x434],(uint)bVar5 + (uint)bVar5 * 4 + 0x10ec,
                                  (uint)bVar5 + (uint)bVar5 * 4 + 0x10ee,
                                  (uint)bVar5 + (uint)bVar5 * 4 + 0x10ed,
                                  (uint)bVar5 + (uint)bVar5 * 4 + 0x10ef,local_479 ^ 0x111b,
                                  CONCAT44(uVar23,(uint)local_479) ^ 0x112d,0,
                                  0x1132 - (uint)local_479,0x1134);
            if (((1 < iVar7 - 0x581U) && (iVar7 != 0x462)) && (iVar7 != 0x465)) goto LAB_100215be8;
          }
        }
        else {
          sVar6 = FUN_1004174a0((int)param_1[0x434],0x10fc,0x10fd,0x10fb,0,0,(ulong)uVar23 << 0x20,0
                                ,0,0);
LAB_100215be8:
          uVar12 = FUN_1002173f9(param_1[0x43c]);
          local_478._0_4_ = (undefined4)uVar12;
          local_478._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
          FUN_100216f84(2,(int)sVar6,param_1 + 0x43d,uVar19,param_1 + 0x47d,uVar12);
          FUN_10016d588(&local_478);
        }
      }
    }
  }
  if ((local_480 == 0) || (local_480 == 0xffffffeb)) {
    if ((iVar7 + 0x80U & 0xffffff7f) == 0) {
      if ((iVar7 == -0x80) && (cVar4 = FUN_1001c19bc(), cVar4 != '\0')) goto LAB_100215737;
      bVar3 = false;
    }
    else {
      bVar3 = false;
      if (((1 < iVar7 - 0x581U) && (bVar3 = false, iVar7 != 0x462)) && (iVar7 != 0x465))
      goto LAB_100215737;
    }
LAB_1002157d2:
    if ((param_1[0x50b] == 0) || (DAT_1008c7900 != 0)) {
      if (*(char *)((long)param_1 + 0x2856) != '\0') goto LAB_10021648f;
LAB_1002157f2:
      ___bzero(param_1 + 1,0x2100);
      _AMRestoreDisableFileLogging();
      goto LAB_10021648f;
    }
    if (bVar3) goto LAB_10021580e;
  }
  else {
LAB_100215737:
    bVar3 = true;
    if (*(char *)((long)param_1 + 0x2856) != '\0') goto LAB_1002157d2;
    if (DAT_1008c7900 != 0) goto LAB_1002157f2;
LAB_10021580e:
    _AMRestoreDisableFileLogging();
    uVar13 = 0x674;
    if (iVar7 != -0x80) {
      uVar13 = uVar19;
    }
    FUN_1002128f2(param_1,uVar13,0,0,0);
    if (*(char *)((long)param_1 + 0x2856) == '\0') {
      ___bzero(param_1 + 1,0x2100);
    }
  }
  if (param_1[0x50b] == 0) goto LAB_10021648f;
  dVar21 = (double)FUN_100173afd(0,param_1[0x50b],0x8000100,0x3f);
  if (dVar21 == 0.0) {
    uVar12 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar12,0x10);
    if (cVar4 != '\0') {
      local_478._0_4_ = 0x8220202;
      local_478._4_4_ = 0x7a0a90;
      uStack_470 = 1;
      uStack_46c = 0x822;
      uStack_46a = 0xffaf;
      uStack_468 = 0x7a;
      uStack_466 = 1;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10021648f;
  }
  iVar9 = FUN_100398956((int)param_1[0x434],1,&local_478);
  if (iVar9 == -0x80) {
LAB_100215fd5:
    iVar9 = FUN_100182d4d(&local_478);
    if ((iVar9 != -0x80) && (iVar9 != 0)) {
      uVar12 = FUN_1001cc310();
      local_488 = dVar21;
      cVar4 = _os_log_type_enabled(uVar12,0x10);
      dVar21 = local_488;
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  else {
    if (iVar9 != 0) {
      local_488 = (double)FUN_1001cc310();
      cVar4 = _os_log_type_enabled(local_488,0x10);
      if (cVar4 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
LAB_100216982:
        local_4c = 0x400;
        uStack_50 = 1;
        uStack_54 = 0x7a0a90;
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,local_488,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_100215fd5;
    }
    iVar9 = FUN_1001662b2(dVar21,&local_478);
    if (iVar9 == -0x80) goto LAB_100215fd5;
    if (iVar9 != 0) {
      local_488 = (double)FUN_1001cc310();
      cVar4 = _os_log_type_enabled(local_488,0x10);
      if (cVar4 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
        goto LAB_100216982;
      }
      goto LAB_100215fd5;
    }
    lVar15 = FUN_100166c1b(param_1[0x50c],&cf_RestoreError);
    if (lVar15 == 0) {
      uVar12 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar12,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "errorString != nullptr";
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      local_488 = (double)CONCAT44(local_488._4_4_,0x67f);
      FUN_1001782e9(0,0);
    }
    else {
      uVar10 = FUN_100167630(lVar15);
      local_488 = (double)CONCAT44(local_488._4_4_,uVar10);
    }
    uVar12 = FUN_100166c1b(param_1[0x50c],&cf_BaseVersion);
    uVar16 = FUN_100166c1b(param_1[0x50c],&cf_TargetVersion);
    FUN_1002128f2(param_1,(ulong)local_488 & 0xffffffff,&local_478,uVar12,uVar16);
  }
  FUN_10017060f(dVar21);
LAB_10021648f:
  iVar9 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar9 != 0) {
    uVar12 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar12,0x10);
    if (cVar4 != '\0') {
      local_478._0_4_ = 0x8220202;
      local_478._4_4_ = 0x7a0a90;
      uStack_470 = 1;
      uStack_46c = 0x822;
      uStack_46a = 0x63d;
      uStack_468 = 0x7b;
      uStack_466 = 1;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
  }
  plVar14 = (long *)FUN_10039a28c();
  uVar12 = (**(code **)(*plVar14 + 0x58))(plVar14);
  FUN_1001c6987(uVar12,0x65727573,local_498,(long)iVar7,uVar2);
  *(undefined1 *)((long)param_1 + 0x28a1) = 0;
  local_478._0_4_ = 0;
  local_478._4_4_ = 0;
  uStack_470 = 0;
  uStack_46c = 0;
  uStack_46a = 0;
  FUN_100217418(param_1 + 0x515,&local_478);
  plVar14 = (long *)CONCAT26(uStack_46a,CONCAT24(uStack_46c,uStack_470));
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001cc23c(local_4a0);
  FUN_1001cc4fc(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x0001002152d0:
  uVar8 = 6;
  uVar19 = 0;
  if (*(char *)((long)param_1 + 0x2854) != '\0') goto LAB_1002154cf;
  goto LAB_100214f02;
code_r0x000100215453:
  _AMRLog(5,&cf_AMPDevicesAgent_Waitingforpost_restoreappearance);
  *(undefined4 *)((long)param_1 + 0x2ad4) = 4;
  uVar8 = 4;
  bVar3 = false;
  goto LAB_100214d62;
}

