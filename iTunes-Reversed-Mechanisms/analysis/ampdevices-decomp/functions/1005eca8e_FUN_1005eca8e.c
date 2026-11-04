// name: FUN_1005eca8e
// address: 1005eca8e

int FUN_1005eca8e(int param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  double dVar13;
  undefined8 local_118;
  int *piStack_110;
  undefined8 local_108;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined2 uStack_eb;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  uint uStack_86;
  undefined2 uStack_82;
  long *local_78;
  long local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  piVar12 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != (int *)0x0 && param_3 != 0) {
    do {
      if (piVar12[0x1a21] == param_3) {
        iVar6 = 0;
        if (param_1 < 0x696e6974) {
          if (param_1 == 0x636c7220) {
            cVar5 = FUN_1005e937f(piVar12);
            if (cVar5 == '\0') {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                local_98._0_2_ = 0x202;
                local_98._2_2_ = 0x822;
                local_98._4_4_ = 0x7a0a90;
                uStack_90 = 1;
                uStack_8c = 0x822;
                uStack_8a = 0x2323;
                uStack_88 = 0x7f;
                uStack_86 = 1;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16
                                   );
              }
              FUN_1001782e9(0,0);
LAB_1005ece7e:
              iVar6 = -0x32;
            }
            else {
              FUN_1005e9102(&DAT_1008c7b60,piVar12,1);
            }
            goto LAB_1005ecb16;
          }
        }
        else {
          if (param_1 == 0x6e756c6c) goto LAB_1005ecb16;
          if (param_1 == 0x696e6974) {
            FUN_1005e9a2c();
            cVar5 = FUN_1005e937f(piVar12);
            if (cVar5 == '\0') {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                local_98._0_2_ = 0x202;
                local_98._2_2_ = 0x822;
                local_98._4_4_ = 0x7a0a90;
                uStack_90 = 1;
                uStack_8c = 0x822;
                uStack_8a = 0x2323;
                uStack_88 = 0x7f;
                uStack_86 = 1;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              goto LAB_1005ece7e;
            }
            lVar10 = param_2[2];
            *(long *)(piVar12 + 0x1a38) = lVar10;
            *(undefined8 *)(piVar12 + 0x1a34) = *param_2;
            *(undefined8 *)(piVar12 + 0x1a36) = param_2[1];
            pbVar2 = (byte *)(lVar10 + 0x2be1);
            *pbVar2 = *pbVar2 | 4;
            local_108 = 0;
            uStack_100 = 0;
            local_118 = 0;
            piStack_110 = (int *)0x0;
            uStack_fa = 0;
            uStack_f8 = 0;
            local_f0 = 0;
            local_ec = 0;
            uStack_eb = 0;
            local_e8 = 0x3ff0000000000000;
            local_e0 = 0;
            uStack_d8 = 0;
            uStack_d7 = 0;
            uStack_d0 = 0;
            uStack_cf = 0;
            cVar5 = FUN_1005e937f(piVar12);
            if (cVar5 == '\0') {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                local_98._0_2_ = 0x202;
                local_98._2_2_ = 0x822;
                local_98._4_4_ = 0x7a0a90;
                uStack_90 = 1;
                uStack_8c = 0x822;
                uStack_8a = 0x2323;
                uStack_88 = 0x7f;
                uStack_86 = 1;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              iVar6 = -0x32;
            }
            else {
              piStack_110 = piVar12 + 4;
              local_ec = 1;
              FUN_100248174(*piVar12,piVar12[0x111],0,&local_98,0,0,0);
              *(undefined2 *)(*(long *)(piVar12 + 0x1a38) + 0x2d18) = (undefined2)local_98;
              FUN_100314834(*(undefined8 *)(piVar12 + 0x1a38),FUN_1005f1f4e,piVar12[0x1a21]);
              iVar6 = FUN_1002e2674(*(undefined8 *)(piVar12 + 0x1a38),0,&local_118,&local_c0);
              if (iVar6 == -0x80) goto LAB_1005ecef6;
              if (iVar6 == 0) {
                FUN_100488970(local_c0);
                if (*(long *)(piVar12 + 0x1a38) != 0) {
                  pbVar2 = (byte *)(*(long *)(piVar12 + 0x1a38) + 0x1bb2);
                  *pbVar2 = *pbVar2 & 0x7f;
                  *(ulong *)(*(long *)(piVar12 + 0x1a38) + 0x1bb0) =
                       *(ulong *)(*(long *)(piVar12 + 0x1a38) + 0x1bb0) & 0xfffffeffffffffff;
                }
                cVar5 = FUN_100247cdd(*piVar12);
                if (cVar5 != '\0') goto LAB_1005ed320;
                if (((char)piVar12[1] != '\x01') || (DAT_1008c7c38 == (undefined8 *)0x0))
                goto LAB_1005ecd4f;
                uVar4 = *(ulong *)(piVar12 + 0x18ea);
                puVar9 = &DAT_1008c7c38;
                puVar11 = DAT_1008c7c38;
                do {
                  if ((ulong)puVar11[4] >= uVar4) {
                    puVar9 = puVar11;
                  }
                  puVar11 = (undefined8 *)puVar11[(ulong)puVar11[4] < uVar4];
                } while (puVar11 != (undefined8 *)0x0);
                if (((((undefined8 **)puVar9 == &DAT_1008c7c38) || (uVar4 < (ulong)puVar9[4])) ||
                    (*(int *)(puVar9 + 5) == 0)) || (piVar12[0xba] != 0)) {
LAB_1005ecd4f:
                  if (*(char *)((long)piVar12 + 6) == '\x01') {
                    local_b8 = (double)FUN_1001711e2();
                    uVar4 = *(ulong *)(piVar12 + 0x18ea);
                    if (uVar4 == 0) {
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        local_98._0_2_ = 0x202;
                        local_98._2_2_ = 0x822;
                        local_98._4_4_ = 0x7a0a90;
                        uStack_90 = 1;
                        uStack_8c = 0x822;
                        uStack_8a = 0x82e;
                        uStack_88 = 0x7b;
                        uStack_86 = 1;
                        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                            &local_98,0x16);
                      }
                      FUN_1001782e9(0,0);
LAB_1005ed0e6:
                      dVar13 = 0.0;
                    }
                    else {
                      if (uVar4 == 0xffffffffffffffff) {
                        uVar8 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar8,0x10);
                        if (cVar5 != '\0') {
                          local_98._0_2_ = 0x202;
                          local_98._2_2_ = 0x822;
                          local_98._4_4_ = 0x7a0a90;
                          uStack_90 = 1;
                          uStack_8c = 0x822;
                          uStack_8a = 0x1e06;
                          uStack_88 = 0x7f;
                          uStack_86 = 1;
                          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                              &local_98,0x16);
                        }
                        FUN_1001782e9(0,0);
                        goto LAB_1005ed0e6;
                      }
                      FUN_100238ca8(&local_98,&DAT_1008c7c48);
                      if (DAT_1008c7c98 == (undefined8 *)0x0) {
LAB_1005ed19e:
                        local_b0 = 0.0;
                      }
                      else {
                        puVar9 = &DAT_1008c7c98;
                        puVar11 = DAT_1008c7c98;
                        do {
                          if ((ulong)puVar11[4] >= uVar4) {
                            puVar9 = puVar11;
                          }
                          puVar11 = (undefined8 *)puVar11[(ulong)puVar11[4] < uVar4];
                        } while (puVar11 != (undefined8 *)0x0);
                        if ((undefined8 **)puVar9 == &DAT_1008c7c98) goto LAB_1005ed19e;
                        local_b0 = 0.0;
                        if ((ulong)puVar9[4] <= uVar4) {
                          local_b0 = (double)puVar9[5];
                        }
                      }
                      FUN_10015a142(&local_98);
                      dVar13 = local_b0;
                    }
                    if (local_b8 - dVar13 < DAT_10070d3a0) {
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar8 = DAT_1008c75b8;
                      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar5 != '\0') {
                        FUN_1005e73f0(&local_98,piVar12);
                        local_a4 = FUN_1001b83ae(&local_98);
                        local_a8 = 0x8220102;
                        __os_log_impl(0x100000000,uVar8,1,
                                      "skipping recovery prompt for device %{public}s",&local_a8,0xc
                                     );
                        FUN_1001b7a50(&local_98);
                      }
                      goto LAB_1005ed320;
                    }
                    uVar3 = piVar12[0x1a21];
                    local_78 = operator_new(0x28);
                    *local_78 = (long)&PTR_FUN_100870078;
                    local_78[1] = (long)FUN_1005f1916;
                    local_78[2] = 0;
                    local_78[3] = (long)&DAT_1008c7b60;
                    *(uint *)(local_78 + 4) = uVar3;
                    local_40 = (long *)0x0;
                    local_50 = 0;
                    uStack_48 = 0;
                    uStack_60 = 0;
                    uStack_59 = 0;
                    local_68 = (ulong)uVar3 << 0x20;
                    FUN_10017869a(&local_98);
                  }
                  else {
                    if (((*(long *)(piVar12 + 0x1a28) == 0) && (*(long *)(piVar12 + 0x1a2a) == 0))
                       && ((*(long *)(piVar12 + 0x1a2c) == 0 &&
                           ((*(long *)(piVar12 + 0x1a24) == 0 ||
                            (*(char *)(*(long *)(piVar12 + 0x1a24) + 28000) == '\0'))))))
                    goto LAB_1005ed320;
                    uVar3 = piVar12[0x1a21];
                    local_98._0_2_ = 0xfff0;
                    local_98._2_2_ = 0x86;
                    local_98._4_4_ = 1;
                    uStack_90 = 0x5f1788;
                    uStack_8c = 1;
                    uStack_8a = 0;
                    uStack_88 = (undefined2)uVar3;
                    uStack_86 = uVar3 >> 0x10;
                    uStack_82 = 0;
                    local_50 = 0;
                    uStack_48 = 0;
                    local_40 = (long *)0x0;
                    uStack_60 = 0;
                    uStack_59 = 0;
                    local_68 = (ulong)uVar3 << 0x20;
                    local_78 = &local_98;
                    FUN_10017869a(&local_98);
                  }
                  if (local_40 != (long *)0x0) {
                    LOCK();
                    plVar1 = local_40 + 1;
                    lVar10 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar10 == 0) {
                      (**(code **)(*local_40 + 0x10))(local_40);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  if (local_78 == &local_98) {
                    lVar10 = 0x20;
                  }
                  else {
                    lVar10 = 0x28;
                    if (local_78 == (long *)0x0) goto LAB_1005ed320;
                  }
                  (**(code **)(*local_78 + lVar10))();
                }
                else {
                  FUN_1005f23ba(piVar12[0x1a21],piVar12[0x1a21],1);
                }
LAB_1005ed320:
                if ((*(long *)(piVar12 + 0x1a24) != 0) &&
                   ((*piVar12 == 0x69545620 || (*piVar12 == 0x57617463)))) {
                  uVar8 = FUN_10055ae0c();
                  lVar10 = _AMDeviceCopyDeviceIdentifier(uVar8);
                  if (lVar10 == 0) {
                    uVar8 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar5 != '\0') {
                      local_98._0_2_ = 0x202;
                      local_98._2_2_ = 0x822;
                      local_98._4_4_ = 0x7a0a90;
                      uStack_90 = 1;
                      uStack_8c = 0x822;
                      uStack_8a = 0x51a0;
                      uStack_88 = 0x7a;
                      uStack_86 = 1;
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                          &local_98,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  iVar7 = FUN_1001ee6ff(FUN_1005f2591,lVar10,0,0,0,"CopyCrashReportsThread");
                  if (iVar7 != -0x80) {
                    if (iVar7 == 0) goto LAB_1005ecef6;
                    local_b8 = (double)FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(local_b8,0x10);
                    if (cVar5 != '\0') {
                      local_98._0_2_ = 0x202;
                      local_98._2_2_ = 0x822;
                      local_98._4_4_ = 0x7a0a90;
                      uStack_90 = 1;
                      uStack_8c = 0x400;
                      uStack_8a = (undefined2)iVar7;
                      uStack_88 = (undefined2)((uint)iVar7 >> 0x10);
                      __os_log_error_impl(0x100000000,local_b8,0x10,"%{public}s: err == (%d)",
                                          &local_98,0x12);
                    }
                  }
                  FUN_10017060f(lVar10);
                }
LAB_1005ecef6:
                param_2[3] = (ulong)(uint)piVar12[0x1a21];
                goto LAB_1005ecb16;
              }
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                local_98._0_2_ = 0x202;
                local_98._2_2_ = 0x822;
                local_98._4_4_ = 0x7a0a90;
                uStack_90 = 1;
                uStack_8c = 0x400;
                uStack_8a = (undefined2)iVar6;
                uStack_88 = (undefined2)((uint)iVar6 >> 0x10);
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_98,0x12)
                ;
              }
              if (iVar6 == 0) {
                iVar6 = 0;
                goto LAB_1005ecef6;
              }
            }
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_98._0_2_ = 0x202;
              local_98._2_2_ = 0x822;
              local_98._4_4_ = 0x7a0a90;
              uStack_90 = 1;
              uStack_8c = 0x400;
              uStack_8a = (undefined2)iVar6;
              uStack_88 = (undefined2)((uint)iVar6 >> 0x10);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_98,0x12);
            }
            goto LAB_1005ecef6;
          }
        }
        iVar6 = -4;
        goto LAB_1005ecb16;
      }
      piVar12 = *(int **)(piVar12 + 0x1a1e);
    } while (piVar12 != (int *)0x0);
  }
  uVar8 = FUN_1001cc310();
  cVar5 = _os_log_type_enabled(uVar8,0x10);
  if (cVar5 != '\0') {
    local_98._0_2_ = 0x202;
    local_98._2_2_ = 0x822;
    local_98._4_4_ = 0x7a0a90;
    uStack_90 = 1;
    uStack_8c = 0x822;
    uStack_8a = 0xf686;
    uStack_88 = 0x7a;
    uStack_86 = 1;
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
  }
  FUN_1001782e9(0,0);
  iVar6 = 0x4e30;
LAB_1005ecb16:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

