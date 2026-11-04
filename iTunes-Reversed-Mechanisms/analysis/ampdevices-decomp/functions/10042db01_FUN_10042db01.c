// name: FUN_10042db01
// address: 10042db01

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10042db01(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  byte *pbVar2;
  uint *puVar3;
  int *piVar4;
  ushort *puVar5;
  char *pcVar6;
  byte bVar7;
  long *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined8 local_238;
  long local_230;
  undefined8 local_228;
  long local_220;
  undefined8 local_218;
  long local_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined8 local_198;
  long local_190;
  undefined8 local_188;
  long local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  ulong local_120;
  undefined8 *local_118;
  ulong local_110;
  byte *local_108;
  byte *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  char *local_e4;
  undefined2 local_dc;
  int local_da;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 uStack_4c;
  char cStack_4b;
  undefined2 uStack_4a;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b6 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_ba = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  *param_2 = 0;
  local_118 = param_2 + 1;
  local_f8 = param_4;
  FUN_100217418(local_118,&uStack_c0);
  param_2[0x11] = uStack_40;
  param_2[0xf] = CONCAT26(uStack_4a,CONCAT15(cStack_4b,CONCAT14(uStack_4c,local_50)));
  param_2[0x10] = uStack_48;
  param_2[0xd] = local_60;
  param_2[0xe] = uStack_58;
  param_2[0xb] = local_70;
  param_2[0xc] = uStack_68;
  *(undefined4 *)(param_2 + 9) = (undefined4)local_80;
  *(undefined4 *)((long)param_2 + 0x4c) = local_80._4_4_;
  *(undefined4 *)(param_2 + 10) = (undefined4)uStack_78;
  *(undefined4 *)((long)param_2 + 0x54) = uStack_78._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_90;
  *(undefined4 *)((long)param_2 + 0x3c) = uStack_90._4_4_;
  *(undefined4 *)(param_2 + 8) = local_88;
  *(undefined4 *)((long)param_2 + 0x44) = uStack_84;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_a0;
  *(undefined4 *)((long)param_2 + 0x2c) = uStack_a0._4_4_;
  *(undefined4 *)(param_2 + 6) = (undefined4)local_98;
  *(undefined4 *)((long)param_2 + 0x34) = local_98._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_b0;
  *(undefined4 *)((long)param_2 + 0x1c) = uStack_b0._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_a8;
  *(undefined4 *)((long)param_2 + 0x24) = local_a8._4_4_;
  plVar8 = (long *)CONCAT26(uStack_b2,CONCAT42(uStack_b6,uStack_b8));
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar24 = plVar8 + 1;
    lVar18 = *plVar24;
    *plVar24 = *plVar24 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(uint *)((long)param_2 + 4) = param_3;
  iVar10 = (**(code **)(*(long *)*param_1 + 0xf8))((long *)*param_1,&local_120);
  if (iVar10 == -0x80) goto LAB_10042eb6a;
  if (iVar10 != 0) {
    uVar14 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar14,0x10);
    if (cVar9 != '\0') {
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      uStack_c0 = 1;
      uStack_bc = 0x400;
      uStack_ba = (undefined2)iVar10;
      uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_c8,0x12);
    }
    goto LAB_10042eb6a;
  }
  if ((param_3 & 4) == 0) {
    uVar12 = (**(code **)(*(long *)*param_1 + 0x70))();
    iVar10 = -0x27;
    if (local_120 != uVar12) {
      param_2[0x11] = uVar12;
      local_110 = uVar12;
      goto LAB_10042dcd2;
    }
  }
  else {
    local_110 = 0;
LAB_10042dcd2:
    pcVar6 = (char *)(param_2 + 3);
    param_2[9] = local_120;
    uVar14 = *param_1;
    plVar8 = (long *)param_1[1];
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
    }
    plVar24 = plVar8;
    local_f0 = param_1;
    iVar10 = FUN_10042a48e(uVar14,3,pcVar6,local_f8);
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar26 = plVar8 + 1;
      lVar18 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    param_1 = local_f0;
    if (iVar10 != -0x80) {
      if (iVar10 == 0) {
        if (((*pcVar6 != 'I') || (*(char *)((long)param_2 + 0x19) != 'D')) ||
           (*(char *)((long)param_2 + 0x1a) != '3')) {
          lVar18 = *(long *)*local_f0;
          if ((param_3 & 4) == 0) {
            iVar10 = (**(code **)(lVar18 + 0x10))();
            pbVar2 = (byte *)(param_2 + 9);
            if (iVar10 != 0x646f776e) {
              if (local_110 < 0x81) {
                uVar14 = FUN_1001cc310();
                cVar9 = _os_log_type_enabled(uVar14,0x10);
                if (cVar9 != '\0') {
                  local_c8 = 0x8220202;
                  uStack_c4 = 0x7a0a90;
                  uStack_c0 = 1;
                  uStack_bc = 0x822;
                  uStack_ba = 0xe3c9;
                  uStack_b8 = 0x7c;
                  uStack_b6 = 1;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_c8,
                                      0x16);
                }
                iVar10 = 0;
                FUN_1001782e9(0,0);
              }
              else {
                lVar18 = local_110 - 0x80;
                local_108 = pbVar2;
                iVar10 = (**(code **)(*(long *)*param_1 + 0xf0))((long *)*param_1,lVar18);
                if (iVar10 != -0x80) {
                  if (iVar10 == 0) {
                    iVar10 = (**(code **)(*(long *)*param_1 + 0xf8))((long *)*param_1,local_108);
                    if (iVar10 != -0x80) {
                      if (iVar10 == 0) {
                        local_198 = *param_1;
                        local_190 = param_1[1];
                        if (local_190 != 0) {
                          LOCK();
                          *(long *)(local_190 + 8) = *(long *)(local_190 + 8) + 1;
                          UNLOCK();
                        }
                        iVar10 = FUN_10042a48e(local_198,3,pcVar6,local_f8);
                        FUN_10021e316(&local_198);
                        if (iVar10 != -0x80) {
                          if (iVar10 == 0) {
                            if (((*pcVar6 != 'T') || (*(char *)((long)param_2 + 0x19) != 'A')) ||
                               (*(char *)((long)param_2 + 0x1a) != 'G')) {
                              local_108[0] = 0;
                              local_108[1] = 0;
                              local_108[2] = 0;
                              local_108[3] = 0;
                              local_108[4] = 0;
                              local_108[5] = 0;
                              local_108[6] = 0;
                              local_108[7] = 0;
                              goto LAB_10042dfd0;
                            }
                            *(undefined2 *)((long)param_2 + 0x1b) = 1;
                            *(undefined4 *)((long)param_2 + 0x1e) = 0x7d;
                            iVar10 = (**(code **)(*(long *)*param_1 + 0xf8))
                                               ((long *)*param_1,param_2 + 0xb);
                            param_1 = local_f0;
                            if (iVar10 != -0x80) {
                              if (iVar10 == 0) {
                                local_188 = *local_f0;
                                local_180 = local_f0[1];
                                if (local_180 != 0) {
                                  LOCK();
                                  *(long *)(local_180 + 8) = *(long *)(local_180 + 8) + 1;
                                  UNLOCK();
                                }
                                iVar10 = FUN_10042a48e(local_188,0x7d,(long)&local_c8 + 3,local_f8);
                                FUN_10021e316(&local_188);
                                param_1 = local_f0;
                                if (iVar10 != -0x80) {
                                  if (iVar10 == 0) {
                                    (**(code **)(*(long *)*local_f0 + 0xf0))
                                              ((long *)*local_f0,param_2[0xb]);
                                    if (cStack_4b == '\0') {
                                      *(undefined1 *)((long)param_2 + 0x1c) = 1;
                                    }
                                    param_2[0x10] = local_120;
                                    param_2[10] = param_2[0xb];
                                    param_2[0xc] = (ulong)*(uint *)((long)param_2 + 0x1e) +
                                                   param_2[0xb];
                                    param_2[0x11] = lVar18;
                                    iVar10 = 0;
                                    puVar19 = local_f0;
                                    goto LAB_10042dfd3;
                                  }
                                  uVar14 = FUN_1001cc310();
                                  cVar9 = _os_log_type_enabled(uVar14,0x10);
                                  param_1 = local_f0;
                                  if (cVar9 != '\0') {
                                    puVar17 = &local_e8;
                                    local_e8 = 0x8220202;
                                    local_e4 = "Assertion failure";
                                    local_dc = 0x400;
                                    local_da = iVar10;
                                    goto LAB_10042eb3d;
                                  }
                                }
                              }
                              else {
                                uVar14 = FUN_1001cc310();
                                cVar9 = _os_log_type_enabled(uVar14,0x10);
                                param_1 = local_f0;
                                if (cVar9 != '\0') {
                                  puVar17 = &local_e8;
                                  local_e8 = 0x8220202;
                                  local_e4 = "Assertion failure";
                                  local_dc = 0x400;
                                  local_da = iVar10;
                                  goto LAB_10042eb3d;
                                }
                              }
                            }
                          }
                          else {
                            uVar14 = FUN_1001cc310();
                            cVar9 = _os_log_type_enabled(uVar14,0x10);
                            if (cVar9 != '\0') {
                              uStack_ba = (undefined2)iVar10;
                              uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                              goto LAB_10042df87;
                            }
                          }
                        }
                      }
                      else {
                        uVar14 = FUN_1001cc310();
                        cVar9 = _os_log_type_enabled(uVar14,0x10);
                        if (cVar9 != '\0') {
                          uStack_ba = (undefined2)iVar10;
                          uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                          goto LAB_10042df87;
                        }
                      }
                    }
                  }
                  else {
                    uVar14 = FUN_1001cc310();
                    cVar9 = _os_log_type_enabled(uVar14,0x10);
                    if (cVar9 != '\0') {
                      uStack_ba = (undefined2)iVar10;
                      uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
LAB_10042df87:
                      uStack_c0 = 1;
                      uStack_c4 = 0x7a0a90;
                      uStack_bc = 0x400;
                      local_c8 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",
                                          &local_c8,0x12);
                    }
                  }
                }
              }
              goto LAB_10042eb57;
            }
            pbVar2[0] = 0;
            pbVar2[1] = 0;
            pbVar2[2] = 0;
            pbVar2[3] = 0;
            pbVar2[4] = 0;
            pbVar2[5] = 0;
            pbVar2[6] = 0;
            pbVar2[7] = 0;
          }
          else {
            (**(code **)(lVar18 + 0xe8))((long *)*local_f0,3,pcVar6);
          }
LAB_10042dfd0:
          iVar10 = 0;
          puVar19 = param_1;
LAB_10042dfd3:
          param_2[10] = param_2[0xb];
          FUN_100203686(local_118,puVar19);
          *(undefined4 *)param_2 = 0x49443343;
          goto LAB_10042eb6a;
        }
        uVar25 = *local_f0;
        plVar8 = (long *)local_f0[1];
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar8[1] = plVar8[1] + 1;
          UNLOCK();
        }
        local_108 = (byte *)((long)param_2 + 0x1b);
        plVar26 = plVar8;
        iVar10 = FUN_10042a48e(uVar25,1,local_108,local_f8);
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          lVar18 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar10 != -0x80) {
          if (iVar10 == 0) {
            if (4 < *local_108) {
              uVar13 = FUN_1001cc310();
              cVar9 = _os_log_type_enabled(uVar13,0x10);
              if (cVar9 != '\0') {
                local_c8 = 0x8220202;
                uStack_c4 = 0x7a0a90;
                uStack_c0 = 1;
                uStack_bc = 0x822;
                uStack_ba = 0xe213;
                uStack_b8 = 0x7c;
                uStack_b6 = 1;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_c8,
                                    0x16,uVar14,plVar24,uVar25,plVar26);
              }
              iVar10 = 0;
              FUN_1001782e9(0,0);
              puVar19 = param_1;
              goto LAB_10042dfd3;
            }
            local_238 = *param_1;
            local_230 = param_1[1];
            if (local_230 != 0) {
              LOCK();
              *(long *)(local_230 + 8) = *(long *)(local_230 + 8) + 1;
              UNLOCK();
            }
            pbVar2 = (byte *)((long)param_2 + 0x1c);
            iVar10 = FUN_10042a48e(local_238,1,pbVar2,local_f8);
            FUN_10021e316(&local_238);
            if (iVar10 != -0x80) {
              if (iVar10 == 0) {
                if (*pbVar2 == 0xff) {
                  uVar14 = FUN_1001cc310();
                  cVar9 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar9 != '\0') {
                    local_c8 = 0x8220202;
                    uStack_c4 = 0x7a0a90;
                    uStack_c0 = 1;
                    uStack_bc = 0x822;
                    uStack_ba = 0xe239;
                    uStack_b8 = 0x7c;
                    uStack_b6 = 1;
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_c8
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  goto LAB_10042e44e;
                }
                local_228 = *param_1;
                local_220 = param_1[1];
                if (local_220 != 0) {
                  LOCK();
                  *(long *)(local_220 + 8) = *(long *)(local_220 + 8) + 1;
                  UNLOCK();
                }
                iVar10 = FUN_10042a48e(local_228,1,(long)param_2 + 0x1d,local_f8);
                FUN_10021e316(&local_228);
                if (iVar10 != -0x80) {
                  if (iVar10 == 0) {
                    local_178 = *(undefined4 *)param_1;
                    uStack_174 = *(undefined4 *)((long)param_1 + 4);
                    uStack_170 = *(undefined4 *)(param_1 + 1);
                    uStack_16c = *(undefined4 *)((long)param_1 + 0xc);
                    if (param_1[1] != 0) {
                      LOCK();
                      plVar8 = (long *)(param_1[1] + 8);
                      *plVar8 = *plVar8 + 1;
                      UNLOCK();
                    }
                    iVar10 = FUN_10042f7d1(&local_178,(long)param_2 + 0x1e,local_f8);
                    FUN_10021e316(&local_178);
                    param_1 = local_f0;
                    if (iVar10 != -0x80) {
                      if (iVar10 == 0) {
                        bVar7 = *local_108;
                        if (bVar7 - 3 < 2) {
                          uVar20 = _DAT_100749510;
                          uVar21 = _UNK_100749514;
                          uVar22 = _UNK_100749518;
                          uVar23 = _UNK_10074951c;
                          if (*pbVar2 != 0) goto LAB_10042e63f;
LAB_10042e56b:
                          *(undefined4 *)(param_2 + 0xd) = uVar20;
                          *(undefined4 *)((long)param_2 + 0x6c) = uVar21;
                          *(undefined4 *)(param_2 + 0xe) = uVar22;
                          *(undefined4 *)((long)param_2 + 0x74) = uVar23;
                          if ((*(byte *)((long)param_2 + 0x1d) & 0x10) != 0) {
                            *(undefined4 *)(param_2 + 0xf) = 10;
                          }
                          if ((*(byte *)((long)param_2 + 0x1d) & 0x40) == 0) {
LAB_10042e58a:
                            iVar10 = (**(code **)(*(long *)*local_f0 + 0xf8))
                                               ((long *)*local_f0,&local_128);
                            param_1 = local_f0;
                            if (iVar10 != -0x80) {
                              if (iVar10 == 0) {
                                param_2[0xb] = local_128;
                                lVar18 = param_2[9];
                                param_2[0xc] = lVar18 + 10 + (ulong)*(uint *)((long)param_2 + 0x1e);
                                uVar12 = (ulong)*(uint *)(param_2 + 0xf) + 10 +
                                         lVar18 + (ulong)*(uint *)((long)param_2 + 0x1e);
                                param_2[0x10] = uVar12;
                                param_2[0x11] = local_110;
                                if ((local_110 == 0) || (uVar12 <= local_110)) {
                                  if (uVar12 - lVar18 < 0x6400000) {
                                    if ((param_3 & 4) == 0) {
                                      iVar10 = (**(code **)(*(long *)*local_f0 + 0xf0))
                                                         ((long *)*local_f0,uVar12);
                                      param_1 = local_f0;
                                      if (iVar10 != -0x80) {
                                        if (iVar10 == 0) {
                                          uVar12 = 0;
                                          local_108 = (byte *)0x0;
LAB_10042ec63:
                                          local_128 = param_2[0x10];
                                          if (((param_3 & 4) != 0) ||
                                             (iVar10 = 0, local_128 + 3U <= local_110)) {
                                            local_1f8 = *local_f0;
                                            local_1f0 = local_f0[1];
                                            if (local_1f0 != 0) {
                                              LOCK();
                                              *(long *)(local_1f0 + 8) =
                                                   *(long *)(local_1f0 + 8) + 1;
                                              UNLOCK();
                                            }
                                            pcVar6 = (char *)((long)param_2 + 0x22);
                                            iVar10 = FUN_10042a48e(local_1f8,3,pcVar6,local_f8);
                                            FUN_10021e316(&local_1f8);
                                            if (iVar10 == 0) {
                                              iVar10 = 0;
                                              local_110 = 3;
                                              if (((*pcVar6 == 'I') &&
                                                  (*(char *)((long)param_2 + 0x23) == 'D')) &&
                                                 (*(char *)((long)param_2 + 0x24) == '3')) {
                                                local_1e8 = *local_f0;
                                                local_1e0 = local_f0[1];
                                                if (local_1e0 != 0) {
                                                  LOCK();
                                                  *(long *)(local_1e0 + 8) =
                                                       *(long *)(local_1e0 + 8) + 1;
                                                  UNLOCK();
                                                }
                                                local_100 = (byte *)((long)param_2 + 0x25);
                                                iVar10 = FUN_10042a48e(local_1e8,1,local_100,
                                                                       local_f8);
                                                FUN_10021e316(&local_1e8);
                                                if (iVar10 != -0x80) {
                                                  if (iVar10 == 0) {
                                                    if (*local_100 < 5) {
                                                      local_1d8 = *local_f0;
                                                      local_1d0 = local_f0[1];
                                                      if (local_1d0 != 0) {
                                                        LOCK();
                                                        *(long *)(local_1d0 + 8) =
                                                             *(long *)(local_1d0 + 8) + 1;
                                                        UNLOCK();
                                                      }
                                                      local_100 = (byte *)((long)param_2 + 0x26);
                                                      iVar10 = FUN_10042a48e(local_1d8,1,local_100,
                                                                             local_f8);
                                                      FUN_10021e316(&local_1d8);
                                                      local_110 = 4;
                                                      if (iVar10 != -0x80) {
                                                        if (iVar10 == 0) {
                                                          if (*local_100 == 0xff) {
                                                            uVar14 = FUN_1001cc310();
                                                            cVar9 = _os_log_type_enabled
                                                                              (uVar14,0x10);
                                                            if (cVar9 != '\0') {
                                                              local_c8 = 0x8220202;
                                                              uStack_c4 = 0x7a0a90;
                                                              uStack_c0 = 1;
                                                              uStack_bc = 0x822;
                                                              uStack_ba = 0xe39e;
                                                              uStack_b8 = 0x7c;
                                                              uStack_b6 = 1;
                                                              __os_log_error_impl(0x100000000,uVar14
                                                                                  ,0x10,
                                                  "%{public}s: (%{public}s)",&local_c8,0x16);
                                                  }
                                                  FUN_1001782e9(0,0);
                                                  local_110 = 5;
                                                  goto LAB_10042f301;
                                                  }
                                                  local_1c8 = *local_f0;
                                                  local_1c0 = local_f0[1];
                                                  if (local_1c0 != 0) {
                                                    LOCK();
                                                    *(long *)(local_1c0 + 8) =
                                                         *(long *)(local_1c0 + 8) + 1;
                                                    UNLOCK();
                                                  }
                                                  iVar10 = FUN_10042a48e(local_1c8,1,
                                                                         (long)param_2 + 0x27,
                                                                         local_f8);
                                                  FUN_10021e316(&local_1c8);
                                                  local_110 = 5;
                                                  if (iVar10 != -0x80) {
                                                    if (iVar10 == 0) {
                                                      local_158 = *(undefined4 *)local_f0;
                                                      uStack_154 = *(undefined4 *)
                                                                    ((long)local_f0 + 4);
                                                      uStack_150 = *(undefined4 *)(local_f0 + 1);
                                                      uStack_14c = *(undefined4 *)
                                                                    ((long)local_f0 + 0xc);
                                                      if (local_f0[1] != 0) {
                                                        LOCK();
                                                        plVar8 = (long *)(local_f0[1] + 8);
                                                        *plVar8 = *plVar8 + 1;
                                                        UNLOCK();
                                                      }
                                                      iVar10 = FUN_10042f7d1(&local_158,param_2 + 5,
                                                                             local_f8);
                                                      FUN_10021e316(&local_158);
                                                      local_110 = 6;
                                                      if (iVar10 != -0x80) {
                                                        if (iVar10 == 0) {
                                                          param_2[0x10] =
                                                               param_2[0x10] +
                                                               (ulong)(*(int *)(param_2 + 5) +
                                                                       *(int *)(param_2 + 0xf) + 10)
                                                          ;
                                                          local_110 = 10;
                                                          iVar10 = 0;
                                                        }
                                                        else {
                                                          local_100 = (byte *)FUN_1001cc310();
                                                          cVar9 = _os_log_type_enabled
                                                                            (local_100,0x10);
                                                          if (cVar9 != '\0') {
                                                            uStack_ba = (undefined2)iVar10;
                                                            uStack_b8 = (undefined2)
                                                                        ((uint)iVar10 >> 0x10);
                                                            goto LAB_10042f2ba;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    else {
                                                      local_100 = (byte *)FUN_1001cc310();
                                                      cVar9 = _os_log_type_enabled(local_100,0x10);
                                                      if (cVar9 != '\0') {
                                                        uStack_ba = (undefined2)iVar10;
                                                        uStack_b8 = (undefined2)
                                                                    ((uint)iVar10 >> 0x10);
LAB_10042f2ba:
                                                        uStack_c0 = 1;
                                                        uStack_c4 = 0x7a0a90;
                                                        uStack_bc = 0x400;
                                                        local_c8 = 0x8220202;
                                                        __os_log_error_impl(0x100000000,local_100,
                                                                            0x10,
                                                  "%{public}s: err == (%d)",&local_c8,0x12);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    local_100 = (byte *)FUN_1001cc310();
                                                    cVar9 = _os_log_type_enabled(local_100,0x10);
                                                    if (cVar9 != '\0') {
                                                      uStack_ba = (undefined2)iVar10;
                                                      uStack_b8 = (undefined2)((uint)iVar10 >> 0x10)
                                                      ;
                                                      goto LAB_10042f2ba;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar14 = FUN_1001cc310();
                                                    cVar9 = _os_log_type_enabled(uVar14,0x10);
                                                    if (cVar9 != '\0') {
                                                      local_c8 = 0x8220202;
                                                      uStack_c4 = 0x7a0a90;
                                                      uStack_c0 = 1;
                                                      uStack_bc = 0x822;
                                                      uStack_ba = 0xe372;
                                                      uStack_b8 = 0x7c;
                                                      uStack_b6 = 1;
                                                      __os_log_error_impl(0x100000000,uVar14,0x10,
                                                                          "%{public}s: (%{public}s)"
                                                                          ,&local_c8,0x16);
                                                    }
                                                    FUN_1001782e9(0,0);
                                                    local_110 = 4;
LAB_10042f301:
                                                    iVar10 = 0;
                                                  }
                                                  }
                                                  else {
                                                    local_100 = (byte *)FUN_1001cc310();
                                                    cVar9 = _os_log_type_enabled(local_100,0x10);
                                                    if (cVar9 != '\0') {
                                                      uStack_ba = (undefined2)iVar10;
                                                      uStack_b8 = (undefined2)((uint)iVar10 >> 0x10)
                                                      ;
                                                      goto LAB_10042f2ba;
                                                    }
                                                  }
                                                }
                                              }
                                              if ((param_3 & 4) != 0) {
                                                (**(code **)(*(long *)*local_f0 + 0xe8))
                                                          ((long *)*local_f0,local_110,pcVar6);
                                              }
                                            }
                                          }
                                          iVar11 = (**(code **)(*(long *)*local_f0 + 0x10))();
                                          if ((iVar11 != 0x646f776e) &&
                                             (uVar16 = param_2[0x11], 0x80 < uVar16)) {
                                            while (iVar10 = (**(code **)(*(long *)*local_f0 + 0xf0))
                                                                      ((long *)*local_f0,
                                                                       uVar16 - 0x80), iVar10 == 0)
                                            {
                                              local_1b8 = *local_f0;
                                              local_1b0 = local_f0[1];
                                              if (local_1b0 != 0) {
                                                LOCK();
                                                *(long *)(local_1b0 + 8) =
                                                     *(long *)(local_1b0 + 8) + 1;
                                                UNLOCK();
                                              }
                                              iVar10 = FUN_10042a48e(local_1b8,3,
                                                                     (char *)((long)param_2 + 0x2c),
                                                                     local_f8);
                                              FUN_10021e316(&local_1b8);
                                              if (iVar10 != 0) break;
                                              iVar10 = 0;
                                              if (((*(char *)((long)param_2 + 0x2c) != 'T') ||
                                                  (iVar10 = 0,
                                                  *(char *)((long)param_2 + 0x2d) != 'A')) ||
                                                 (*(char *)((long)param_2 + 0x2e) != 'G')) break;
                                              *(undefined2 *)((long)param_2 + 0x2f) = 1;
                                              *(undefined4 *)((long)param_2 + 0x32) = 0x7d;
                                              local_1a8 = *local_f0;
                                              local_1a0 = local_f0[1];
                                              if (local_1a0 != 0) {
                                                LOCK();
                                                *(long *)(local_1a0 + 8) =
                                                     *(long *)(local_1a0 + 8) + 1;
                                                UNLOCK();
                                              }
                                              iVar10 = FUN_10042a48e(local_1a8,0x7d,
                                                                     (long)&local_c8 + 3,local_f8);
                                              FUN_10021e316(&local_1a8);
                                              if ((iVar10 == 0) && (cStack_4b == '\0')) {
                                                *(undefined1 *)(param_2 + 6) = 1;
                                              }
                                              uVar16 = param_2[0x11] - 0x80;
                                              param_2[0x11] = uVar16;
                                              if (uVar16 < 0x81) break;
                                            }
                                          }
                                          plVar8 = (long *)*local_f0;
                                          if (((param_3 & 4) == 0) || (local_108 == (byte *)0x0)) {
                                            (**(code **)(*plVar8 + 0xf0))(plVar8,param_2[0xb]);
                                            puVar19 = local_f0;
                                          }
                                          else {
                                            (**(code **)(*plVar8 + 0xe8))
                                                      (plVar8,uVar12 & 0xffffffff,local_108);
                                            puVar19 = local_f0;
                                            FUN_1001c64c1(local_108);
                                          }
                                          goto LAB_10042dfd3;
                                        }
                                        uVar14 = FUN_1001cc310();
                                        cVar9 = _os_log_type_enabled(uVar14,0x10);
                                        param_1 = local_f0;
                                        if (cVar9 != '\0') {
                                          puVar17 = &local_c8;
                                          local_c8 = 0x8220202;
                                          uStack_c4 = 0x7a0a90;
                                          uStack_c0 = 1;
                                          uStack_bc = 0x400;
                                          uStack_ba = (undefined2)iVar10;
                                          uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                                          goto LAB_10042eb3d;
                                        }
                                      }
                                    }
                                    else {
                                      uVar12 = uVar12 - local_128;
                                      do {
                                        iVar10 = (**(code **)(*(long *)*local_f0 + 0xd8))();
                                        if ((uint)uVar12 <= (uint)(iVar10 << 0xc)) {
                                          local_108 = (byte *)FUN_1001c63e1(uVar12 & 0xffffffff);
                                          if (local_108 == (byte *)0x0) {
                                            uVar14 = FUN_1001cc310();
                                            cVar9 = _os_log_type_enabled(uVar14,0x10);
                                            if (cVar9 != '\0') {
                                              local_c8 = 0x8220202;
                                              uStack_c4 = 0x7a0a90;
                                              uStack_c0 = 1;
                                              uStack_bc = 0x822;
                                              uStack_ba = 0xe356;
                                              uStack_b8 = 0x7c;
                                              uStack_b6 = 1;
                                              __os_log_error_impl(0x100000000,uVar14,0x10,
                                                                  "%{public}s: (%{public}s)",
                                                                  &local_c8,0x16);
                                            }
                                            FUN_1001782e9(0,0);
                                            iVar10 = -0x6c;
                                            param_1 = local_f0;
                                            goto LAB_10042eb57;
                                          }
                                          local_208 = *local_f0;
                                          local_200 = local_f0[1];
                                          if (local_200 != 0) {
                                            LOCK();
                                            *(long *)(local_200 + 8) = *(long *)(local_200 + 8) + 1;
                                            UNLOCK();
                                          }
                                          iVar10 = FUN_10042a48e(local_208,uVar12 & 0xffffffff,
                                                                 local_108,local_f8);
                                          FUN_10021e316(&local_208);
                                          if (iVar10 != -0x80) {
                                            if (iVar10 == 0) goto LAB_10042ec63;
                                            uVar14 = FUN_1001cc310();
                                            cVar9 = _os_log_type_enabled(uVar14,0x10);
                                            if (cVar9 != '\0') {
                                              local_c8 = 0x8220202;
                                              uStack_c4 = 0x7a0a90;
                                              uStack_c0 = 1;
                                              uStack_bc = 0x400;
                                              uStack_ba = (undefined2)iVar10;
                                              uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                                              __os_log_error_impl(0x100000000,uVar14,0x10,
                                                                  "%{public}s: err == (%d)",
                                                                  &local_c8,0x12);
                                            }
                                          }
                                          FUN_1001c64c1(local_108);
                                          param_1 = local_f0;
                                          goto LAB_10042eb57;
                                        }
                                        iVar10 = (**(code **)(*(long *)*local_f0 + 0xe0))
                                                           ((long *)*local_f0,0x1000);
                                      } while (iVar10 == 0);
                                      param_1 = local_f0;
                                      if (iVar10 != -0x80) {
                                        uVar14 = FUN_1001cc310();
                                        cVar9 = _os_log_type_enabled(uVar14,0x10);
                                        param_1 = local_f0;
                                        if (cVar9 != '\0') {
                                          puVar17 = &local_c8;
                                          local_c8 = 0x8220202;
                                          uStack_c4 = 0x7a0a90;
                                          uStack_c0 = 1;
                                          uStack_bc = 0x400;
                                          uStack_ba = (undefined2)iVar10;
                                          uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                                          goto LAB_10042eb3d;
                                        }
                                      }
                                    }
                                    goto LAB_10042eb57;
                                  }
                                  uVar14 = FUN_1001cc310();
                                  cVar9 = _os_log_type_enabled(uVar14,0x10);
                                  if (cVar9 != '\0') {
                                    local_c8 = 0x8220202;
                                    uStack_c4 = 0x7a0a90;
                                    uStack_c0 = 1;
                                    uStack_bc = 0x822;
                                    uStack_ba = 0xe30e;
                                    uStack_b8 = 0x7c;
                                    uStack_b6 = 1;
                                    __os_log_error_impl(0x100000000,uVar14,0x10,
                                                        "%{public}s: (%{public}s)",&local_c8,0x16);
                                  }
                                  FUN_1001782e9(0,0);
                                  param_1 = local_f0;
                                }
                                else {
                                  uVar14 = FUN_1001cc310();
                                  cVar9 = _os_log_type_enabled(uVar14,0x10);
                                  if (cVar9 != '\0') {
                                    local_c8 = 0x8220202;
                                    uStack_c4 = 0x7a0a90;
                                    uStack_c0 = 1;
                                    uStack_bc = 0x822;
                                    uStack_ba = 0xe2c1;
                                    uStack_b8 = 0x7c;
                                    uStack_b6 = 1;
                                    __os_log_error_impl(0x100000000,uVar14,0x10,
                                                        "%{public}s: (%{public}s)",&local_c8,0x16);
                                  }
                                  FUN_1001782e9(0,0);
                                  param_1 = local_f0;
                                }
LAB_10042e44e:
                                iVar10 = -0x32;
                              }
                              else {
                                uVar14 = FUN_1001cc310();
                                cVar9 = _os_log_type_enabled(uVar14,0x10);
                                param_1 = local_f0;
                                if (cVar9 != '\0') {
                                  puVar17 = &local_c8;
                                  local_c8 = 0x8220202;
                                  uStack_c4 = 0x7a0a90;
                                  uStack_c0 = 1;
                                  uStack_bc = 0x400;
                                  uStack_ba = (undefined2)iVar10;
                                  uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                                  goto LAB_10042eb3d;
                                }
                              }
                            }
                            goto LAB_10042eb57;
                          }
                          uVar14 = *local_f0;
                          if (3 < bVar7) {
                            local_130 = local_f0[1];
                            if (local_130 != 0) {
                              LOCK();
                              *(long *)(local_130 + 8) = *(long *)(local_130 + 8) + 1;
                              UNLOCK();
                            }
                            puVar3 = (uint *)((long)param_2 + 0x36);
                            local_138 = uVar14;
                            iVar10 = FUN_10042f7d1(&local_138,puVar3,local_f8);
                            FUN_10021e316(&local_138);
                            param_1 = local_f0;
                            if (iVar10 != -0x80) {
                              if (iVar10 == 0) {
                                uVar15 = *puVar3;
                                if (uVar15 < 6) {
                                  uVar14 = FUN_1001cc310();
                                  cVar9 = _os_log_type_enabled(uVar14,0x10);
                                  if (cVar9 != '\0') {
                                    local_c8 = 0x8220202;
                                    uStack_c4 = 0x7a0a90;
                                    uStack_c0 = 1;
                                    uStack_bc = 0x822;
                                    uStack_ba = 0xe29c;
                                    uStack_b8 = 0x7c;
                                    uStack_b6 = 1;
                                    __os_log_error_impl(0x100000000,uVar14,0x10,
                                                        "%{public}s: (%{public}s)",&local_c8,0x16);
                                  }
                                  FUN_1001782e9(0,0);
                                  param_1 = local_f0;
                                  goto LAB_10042e44e;
                                }
                                local_168 = *(undefined4 *)local_f0;
                                uStack_164 = *(undefined4 *)((long)local_f0 + 4);
                                uStack_160 = *(undefined4 *)(local_f0 + 1);
                                uStack_15c = *(undefined4 *)((long)local_f0 + 0xc);
                                if (local_f0[1] != 0) {
                                  LOCK();
                                  plVar8 = (long *)(local_f0[1] + 8);
                                  *plVar8 = *plVar8 + 1;
                                  UNLOCK();
                                  uVar15 = *puVar3;
                                }
                                iVar10 = FUN_10042a707(&local_168,uVar15 - 4);
                                FUN_10021e316(&local_168);
                                param_1 = local_f0;
                                if (iVar10 != -0x80) {
                                  if (iVar10 == 0) goto LAB_10042e58a;
                                  uVar14 = FUN_1001cc310();
                                  cVar9 = _os_log_type_enabled(uVar14,0x10);
                                  param_1 = local_f0;
                                  if (cVar9 != '\0') {
                                    puVar17 = &local_c8;
                                    local_c8 = 0x8220202;
                                    uStack_c4 = 0x7a0a90;
                                    uStack_c0 = 1;
                                    uStack_bc = 0x400;
                                    uStack_ba = (undefined2)iVar10;
                                    uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                                    goto LAB_10042eb3d;
                                  }
                                }
                              }
                              else {
                                uVar14 = FUN_1001cc310();
                                cVar9 = _os_log_type_enabled(uVar14,0x10);
                                param_1 = local_f0;
                                if (cVar9 != '\0') {
                                  puVar17 = &local_c8;
                                  local_c8 = 0x8220202;
                                  uStack_c4 = 0x7a0a90;
                                  uStack_c0 = 1;
                                  uStack_bc = 0x400;
                                  uStack_ba = (undefined2)iVar10;
                                  uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                                  goto LAB_10042eb3d;
                                }
                              }
                            }
                            goto LAB_10042eb57;
                          }
                          local_140 = local_f0[1];
                          if (local_140 == 0) {
                            lVar18 = 0;
                          }
                          else {
                            LOCK();
                            *(long *)(local_140 + 8) = *(long *)(local_140 + 8) + 1;
                            UNLOCK();
                            lVar18 = local_140;
                          }
                          piVar4 = (int *)((long)param_2 + 0x36);
                          local_148 = uVar14;
                          iVar10 = FUN_10042f925(uVar14,lVar18,piVar4,local_f8);
                          FUN_10021e316(&local_148);
                          if (iVar10 == 0) {
                            iVar10 = *piVar4;
                            if (0xe < iVar10 - 4U) {
                              uVar14 = FUN_1001cc310();
                              cVar9 = _os_log_type_enabled(uVar14,0x10);
                              if (cVar9 != '\0') {
                                local_c8 = 0x8220202;
                                uStack_c4 = 0x7a0a90;
                                uStack_c0 = 1;
                                uStack_bc = 0x822;
                                uStack_ba = 0xe25e;
                                uStack_b8 = 0x7c;
                                uStack_b6 = 1;
                                __os_log_error_impl(0x100000000,uVar14,0x10,
                                                    "%{public}s: (%{public}s)",&local_c8,0x16);
                              }
                              FUN_1001782e9(0,0);
                              param_1 = local_f0;
                              goto LAB_10042e44e;
                            }
                            local_218 = *local_f0;
                            local_210 = local_f0[1];
                            if (local_210 != 0) {
                              LOCK();
                              *(long *)(local_210 + 8) = *(long *)(local_210 + 8) + 1;
                              UNLOCK();
                              iVar10 = *piVar4;
                            }
                            iVar10 = FUN_10042a48e(local_218,iVar10,(long)param_2 + 0x3a,local_f8);
                            FUN_10021e316(&local_218);
                            param_1 = local_f0;
                            if (iVar10 != -0x80) {
                              if (iVar10 == 0) {
                                puVar5 = (ushort *)((long)param_2 + 0x3a);
                                *puVar5 = *puVar5 << 8 | *puVar5 >> 8;
                                uVar15 = *(uint *)(param_2 + 8);
                                *(uint *)(param_2 + 8) =
                                     uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 |
                                     (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
                                goto LAB_10042e58a;
                              }
                              uVar14 = FUN_1001cc310();
                              cVar9 = _os_log_type_enabled(uVar14,0x10);
                              param_1 = local_f0;
                              if (cVar9 != '\0') {
                                puVar17 = &local_c8;
                                local_c8 = 0x8220202;
                                uStack_c4 = 0x7a0a90;
                                uStack_c0 = 1;
                                uStack_bc = 0x400;
                                uStack_ba = (undefined2)iVar10;
                                uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                                goto LAB_10042eb3d;
                              }
                            }
                            goto LAB_10042eb57;
                          }
                          uVar14 = FUN_1001cc310();
                          cVar9 = _os_log_type_enabled(uVar14,0x10);
                          param_1 = local_f0;
                          if (cVar9 == '\0') goto LAB_10042eb57;
                          puVar17 = &local_c8;
                          local_c8 = 0x8220202;
                          uStack_c4 = 0x7a0a90;
                          uStack_c0 = 1;
                          uStack_bc = 0x400;
                          uStack_ba = (undefined2)iVar10;
                          uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                        }
                        else {
                          if ((bVar7 == 2) &&
                             (uVar20 = _DAT_100749520, uVar21 = _UNK_100749524,
                             uVar22 = _UNK_100749528, uVar23 = _UNK_10074952c, *pbVar2 < 2))
                          goto LAB_10042e56b;
LAB_10042e63f:
                          uVar14 = FUN_1001cc310();
                          cVar9 = _os_log_type_enabled(uVar14,0x10);
                          iVar10 = -0x32;
                          param_1 = local_f0;
                          if (cVar9 == '\0') goto LAB_10042eb57;
                          puVar17 = &local_c8;
                          local_c8 = 0x8220202;
                          uStack_c4 = 0x7a0a90;
                          uStack_c0 = 1;
                          uStack_bc = 0x400;
                          uStack_ba = 0xffce;
                          uStack_b8 = 0xffff;
                        }
LAB_10042eb3d:
                        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",
                                            puVar17,0x12);
                        param_1 = local_f0;
                      }
                      else {
                        uVar14 = FUN_1001cc310();
                        cVar9 = _os_log_type_enabled(uVar14,0x10);
                        param_1 = local_f0;
                        if (cVar9 != '\0') {
                          puVar17 = &local_c8;
                          local_c8 = 0x8220202;
                          uStack_c4 = 0x7a0a90;
                          uStack_c0 = 1;
                          uStack_bc = 0x400;
                          uStack_ba = (undefined2)iVar10;
                          uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                          goto LAB_10042eb3d;
                        }
                      }
                    }
                  }
                  else {
                    uVar14 = FUN_1001cc310();
                    cVar9 = _os_log_type_enabled(uVar14,0x10);
                    if (cVar9 != '\0') {
                      uStack_ba = (undefined2)iVar10;
                      uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                      goto LAB_10042df87;
                    }
                  }
                }
              }
              else {
                uVar14 = FUN_1001cc310();
                cVar9 = _os_log_type_enabled(uVar14,0x10);
                if (cVar9 != '\0') {
                  uStack_ba = (undefined2)iVar10;
                  uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
                  goto LAB_10042df87;
                }
              }
            }
          }
          else {
            uVar14 = FUN_1001cc310();
            cVar9 = _os_log_type_enabled(uVar14,0x10);
            if (cVar9 != '\0') {
              uStack_ba = (undefined2)iVar10;
              uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
              goto LAB_10042df87;
            }
          }
        }
      }
      else {
        uVar14 = FUN_1001cc310();
        cVar9 = _os_log_type_enabled(uVar14,0x10);
        if (cVar9 != '\0') {
          uStack_ba = (undefined2)iVar10;
          uStack_b8 = (undefined2)((uint)iVar10 >> 0x10);
          goto LAB_10042df87;
        }
      }
    }
  }
LAB_10042eb57:
  (**(code **)(*(long *)*param_1 + 0xf0))((long *)*param_1,local_120);
LAB_10042eb6a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar10;
}

