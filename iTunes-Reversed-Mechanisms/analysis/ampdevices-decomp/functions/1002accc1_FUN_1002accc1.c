// name: FUN_1002accc1
// address: 1002accc1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002accc1(long *param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  long *plVar13;
  undefined8 uVar14;
  void *pvVar15;
  long lVar16;
  void *pvVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  void *pvVar23;
  void *unaff_R13;
  long lVar24;
  bool bVar25;
  float fVar26;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar27 [16];
  undefined8 local_278;
  undefined1 local_270 [16];
  long local_260;
  long *local_258;
  long *local_250;
  void *local_248;
  long local_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined6 uStack_228;
  undefined2 uStack_222;
  undefined8 uStack_220;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7a0a90;
      uStack_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0x6950;
      uStack_228 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002ad943;
  }
  local_260 = param_2;
  if (param_1[1] != 0) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7a0a90;
      uStack_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0x8d5c;
      uStack_228 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*param_1 != 0) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_238._0_4_ = 0x8220202;
      local_238._4_4_ = 0x7a0a90;
      uStack_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0x8d80;
      uStack_228 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_240 = *(long *)(local_260 + 0x10);
  param_1[1] = local_260;
  local_258 = (long *)(local_260 + 0x58);
  puVar1 = *(undefined8 **)(local_260 + 0x58);
  if (param_3 == '\0' && puVar1 != (undefined8 *)0x0) {
    do {
      puVar10 = puVar1;
      puVar1 = (undefined8 *)*puVar10;
    } while (puVar1 != (undefined8 *)0x0);
    *puVar10 = param_1;
    *param_1 = 0;
  }
  else {
    *param_1 = (long)puVar1;
    *local_258 = (long)param_1;
  }
  *(undefined8 *)(local_260 + 0x60) = 0;
  *(int *)(local_240 + 0xa0) = *(int *)(local_240 + 0xa0) + 1;
  *(byte *)(local_240 + 0x1bb0) = *(byte *)(local_240 + 0x1bb0) | 0x80;
  if ((int)param_1[6] != 0) {
    FUN_1002ada1e(local_240 + 0x25e8,(int)param_1[6],param_1);
  }
  pvVar15 = (void *)param_1[5];
  lVar16 = local_240;
  if (pvVar15 != (void *)0x0) {
    pvVar17 = *(void **)(local_240 + 0x2618);
    if (pvVar17 != (void *)0x0) {
      uVar11 = (long)pvVar17 - ((ulong)pvVar17 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
      uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar11 >> 0x38 < 2) {
        unaff_R13 = (void *)((long)pvVar17 - 1U & (ulong)pvVar15);
      }
      else {
        unaff_R13 = pvVar15;
        if (pvVar17 <= pvVar15) {
          unaff_R13 = (void *)((ulong)pvVar15 % (ulong)pvVar17);
        }
      }
      plVar13 = *(long **)(*(long *)(local_240 + 0x2610) + (long)unaff_R13 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        do {
          pvVar23 = (void *)plVar13[1];
          if (pvVar23 == pvVar15) {
            if ((void *)plVar13[2] == pvVar15) goto LAB_1002ad2d8;
          }
          else {
            if ((byte)(uVar11 >> 0x38) < 2) {
              pvVar23 = (void *)((ulong)pvVar23 & (long)pvVar17 - 1U);
            }
            else if (pvVar17 <= pvVar23) {
              pvVar23 = (void *)((ulong)pvVar23 % (ulong)pvVar17);
            }
            if (pvVar23 != unaff_R13) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
    local_250 = operator_new(0x20);
    lVar16 = local_240;
    *local_250 = 0;
    local_250[1] = (long)pvVar15;
    local_250[2] = (long)pvVar15;
    local_250[3] = (long)param_1;
    auVar27._4_12_ = extraout_XMM0._4_12_;
    fVar26 = (float)(*(long *)(local_240 + 0x2628) + 1);
    if (!(bool)(~(pvVar17 == (void *)0x0) &
               fVar26 <= (float)pvVar17 * *(float *)(local_240 + 0x2630))) {
      uVar11 = 1;
      if ((void *)0x2 < pvVar17) {
        uVar11 = (ulong)(((ulong)pvVar17 & (long)pvVar17 - 1U) != 0);
      }
      pvVar12 = (void *)(uVar11 | (long)pvVar17 * 2);
      auVar27._0_4_ = fVar26 / *(float *)(local_240 + 0x2630);
      auVar27 = roundss(auVar27,auVar27,10);
      uVar11 = (ulong)auVar27._0_4_;
      pvVar23 = (void *)((long)(auVar27._0_4_ - _DAT_10070844c) & (long)uVar11 >> 0x3f | uVar11);
      if (pvVar23 < pvVar12) {
        pvVar23 = pvVar12;
      }
      local_248 = (void *)0x2;
      pvVar12 = local_248;
      if ((pvVar23 != (void *)0x1) &&
         (pvVar12 = pvVar23, ((ulong)pvVar23 & (long)pvVar23 - 1U) != 0)) {
        pvVar12 = (void *)std::__next_prime((ulong)pvVar23);
        pvVar17 = *(void **)(lVar16 + 0x2618);
      }
      local_248 = pvVar12;
      pvVar23 = local_248;
      if (pvVar17 < local_248) {
LAB_1002ad0a8:
        pvVar17 = pvVar23;
        if ((ulong)pvVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1001082d0();
        }
        pvVar12 = operator_new((long)pvVar17 * 8);
        pvVar23 = *(void **)(lVar16 + 0x2610);
        *(void **)(lVar16 + 0x2610) = pvVar12;
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
        *(void **)(lVar16 + 0x2618) = pvVar17;
        pvVar23 = (void *)0x0;
        do {
          *(undefined8 *)(*(long *)(lVar16 + 0x2610) + (long)pvVar23 * 8) = 0;
          pvVar23 = (void *)((long)pvVar23 + 1);
        } while (pvVar17 != pvVar23);
        plVar13 = *(long **)(lVar16 + 0x2620);
        if (plVar13 != (long *)0x0) {
          pvVar23 = (void *)plVar13[1];
          uVar11 = (long)pvVar17 - ((ulong)pvVar17 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
          uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar11 >> 0x38 < 2) {
            pvVar23 = (void *)((ulong)pvVar23 & (long)pvVar17 - 1U);
          }
          else if (pvVar17 <= pvVar23) {
            pvVar23 = (void *)((ulong)pvVar23 % (ulong)pvVar17);
          }
          *(long *)(*(long *)(lVar16 + 0x2610) + (long)pvVar23 * 8) = lVar16 + 0x2620;
          plVar20 = (long *)*plVar13;
          if (plVar20 != (long *)0x0) {
            do {
              pvVar12 = (void *)plVar20[1];
              if ((byte)(uVar11 >> 0x38) < 2) {
                pvVar12 = (void *)((ulong)pvVar12 & (long)pvVar17 - 1U);
              }
              else if (pvVar17 <= pvVar12) {
                pvVar12 = (void *)((ulong)pvVar12 % (ulong)pvVar17);
              }
              if (pvVar12 != pvVar23) {
                if (*(long *)(*(long *)(lVar16 + 0x2610) + (long)pvVar12 * 8) == 0) {
                  *(long **)(*(long *)(lVar16 + 0x2610) + (long)pvVar12 * 8) = plVar13;
                  pvVar23 = pvVar12;
                }
                else {
                  *plVar13 = *plVar20;
                  *plVar20 = **(long **)(*(long *)(lVar16 + 0x2610) + (long)pvVar12 * 8);
                  **(undefined8 **)(*(long *)(lVar16 + 0x2610) + (long)pvVar12 * 8) = plVar20;
                  plVar20 = plVar13;
                }
              }
              plVar13 = plVar20;
              plVar20 = (long *)*plVar13;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      else if (local_248 < pvVar17) {
        auVar27 = ZEXT416((uint)((float)*(ulong *)(lVar16 + 0x2628) / *(float *)(lVar16 + 0x2630)));
        auVar27 = roundss(auVar27,auVar27,10);
        uVar11 = (ulong)auVar27._0_4_;
        pvVar12 = (void *)((long)(auVar27._0_4_ - _DAT_10070844c) & (long)uVar11 >> 0x3f | uVar11);
        if ((pvVar17 < (void *)0x3) ||
           (uVar11 = (long)pvVar17 - ((ulong)pvVar17 >> 1 & 0x5555555555555555),
           uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
           1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          pvVar23 = (void *)std::__next_prime((ulong)pvVar12);
        }
        else {
          lVar21 = 0x3f;
          if ((long)pvVar12 - 1U != 0) {
            for (; (long)pvVar12 - 1U >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          pvVar23 = (void *)(1L << (-((byte)lVar21 ^ 0x3f) & 0x3f));
          if (pvVar12 < (void *)0x2) {
            pvVar23 = pvVar12;
          }
        }
        if (pvVar23 < local_248) {
          pvVar23 = local_248;
        }
        if (pvVar23 < pvVar17) {
          if (pvVar23 != (void *)0x0) goto LAB_1002ad0a8;
          pvVar17 = *(void **)(lVar16 + 0x2610);
          *(undefined8 *)(lVar16 + 0x2610) = 0;
          if (pvVar17 != (void *)0x0) {
            operator_delete(pvVar17);
          }
          *(undefined8 *)(lVar16 + 0x2618) = 0;
          pvVar17 = (void *)0x0;
        }
        else {
          pvVar17 = *(void **)(lVar16 + 0x2618);
        }
      }
      if (((ulong)pvVar17 & (long)pvVar17 - 1U) == 0) {
        unaff_R13 = (void *)((ulong)pvVar15 & (long)pvVar17 - 1U);
      }
      else {
        unaff_R13 = pvVar15;
        if (pvVar17 <= pvVar15) {
          unaff_R13 = (void *)((ulong)pvVar15 % (ulong)pvVar17);
        }
      }
    }
    lVar21 = *(long *)(lVar16 + 0x2610);
    plVar13 = *(long **)(lVar21 + (long)unaff_R13 * 8);
    if (plVar13 == (long *)0x0) {
      *local_250 = *(long *)(lVar16 + 0x2620);
      *(long **)(lVar16 + 0x2620) = local_250;
      *(long *)(lVar21 + (long)unaff_R13 * 8) = lVar16 + 0x2620;
      if (*local_250 != 0) {
        pvVar15 = *(void **)(*local_250 + 8);
        if (((ulong)pvVar17 & (long)pvVar17 - 1U) == 0) {
          pvVar15 = (void *)((ulong)pvVar15 & (long)pvVar17 - 1U);
        }
        else if (pvVar17 <= pvVar15) {
          pvVar15 = (void *)((ulong)pvVar15 % (ulong)pvVar17);
        }
        plVar13 = (long *)((long)pvVar15 * 8 + *(long *)(lVar16 + 0x2610));
        goto LAB_1002ad2ce;
      }
    }
    else {
      *local_250 = *plVar13;
LAB_1002ad2ce:
      *plVar13 = (long)local_250;
    }
    *(long *)(lVar16 + 0x2628) = *(long *)(lVar16 + 0x2628) + 1;
  }
LAB_1002ad2d8:
  uVar7 = uStack_22a;
  uVar6 = uStack_22c;
  uVar5 = uStack_230;
  uStack_22c = (undefined2)((ulong)param_1 >> 0x20);
  uVar3 = uStack_22c;
  uStack_22a = (undefined2)((ulong)param_1 >> 0x30);
  uVar4 = uStack_22a;
  uStack_230 = SUB84(param_1,0);
  uVar2 = uStack_230;
  if ((((*(long *)(lVar16 + 0x2638) != 0) && (param_1[1] != 0)) &&
      (*(long *)(param_1[1] + 0x10) != 0)) && (*(long *)(param_1[2] + 0x38) != 0)) {
    local_238._0_4_ = (undefined4)*(undefined8 *)(param_1[4] + 0x20);
    local_238._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_1[4] + 0x20) >> 0x20);
    FUN_1002b7dfc();
    lVar16 = local_240;
    uVar5 = uStack_230;
    uVar6 = uStack_22c;
    uVar7 = uStack_22a;
  }
  uStack_22a = uVar7;
  uStack_22c = uVar6;
  uStack_230 = uVar5;
  if (((*(long *)(lVar16 + 0x2640) != 0) && (param_1[1] != 0)) &&
     ((*(long *)(param_1[1] + 0x10) != 0 && (lVar21 = *(long *)(param_1[4] + 0x20), lVar21 != 0))))
  {
    local_238._0_4_ = (undefined4)lVar21;
    local_238._4_4_ = (undefined4)((ulong)lVar21 >> 0x20);
    uStack_230 = uVar2;
    uStack_22c = uVar3;
    uStack_22a = uVar4;
    FUN_1002b7dfc();
    lVar16 = local_240;
  }
  lVar21 = *(long *)(lVar16 + 0x2648);
  if ((lVar21 != 0) && (*(int *)(param_1[2] + 0x68) != 0)) {
    uVar9 = FUN_1002acb5a(param_1);
    local_238._0_4_ = (undefined4)uVar9;
    local_238._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
    uStack_230 = uVar2;
    uStack_22c = uVar3;
    uStack_22a = uVar4;
    FUN_1002b7dfc(lVar21);
    lVar16 = local_240;
  }
  local_238 = (long *)CONCAT44(local_238._4_4_,(undefined4)local_238);
  if ((*(long *)(lVar16 + 0x2730) != 0) &&
     (local_238 = (long *)CONCAT44(local_238._4_4_,(undefined4)local_238),
     *(long *)(param_1[2] + 0x40) != 0)) {
    FUN_10047a7b5(param_1[1],&local_238);
    FUN_1001b8dfc(local_270,&local_238);
    cVar8 = FUN_1001b8428(local_270);
    local_238 = (long *)CONCAT44(local_238._4_4_,(undefined4)local_238);
    if ((cVar8 == '\0') &&
       (local_238 = (long *)CONCAT44(local_238._4_4_,(undefined4)local_238),
       *(long *)(local_260 + 0x28) != 0)) {
      uVar9 = *(undefined8 *)(param_1[2] + 0x40);
      local_278 = *(undefined8 *)(*(long *)(local_260 + 0x28) + 0x20);
      plVar13 = local_258;
      if (*(long *)(local_260 + 0x10) == 0) {
        uVar14 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar14,0x10);
        if (cVar8 != '\0') {
          local_238._0_4_ = 0x8220202;
          local_238._4_4_ = 0x7a0a90;
          uStack_230 = 1;
          uStack_22c = 0x822;
          uStack_22a = 0x6950;
          uStack_228 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        bVar25 = false;
        FUN_1001782e9(0,0);
      }
      else {
        do {
          plVar13 = (long *)*plVar13;
          bVar25 = plVar13 != (long *)0x0;
          if (plVar13 == (long *)0x0) break;
        } while (*(int *)((long)plVar13 + 0x3c) != 0x46494c45);
      }
      pvVar15 = operator_new(0x58,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar15 != (void *)0x0) {
        FUN_1001b7a44(pvVar15);
        *(undefined8 *)((long)pvVar15 + 0x28) = 0;
        *(undefined8 *)((long)pvVar15 + 0x30) = 0;
        *(long *)((long)pvVar15 + 0x20) = (long)pvVar15 + 0x28;
        *(undefined8 *)((long)pvVar15 + 0x40) = 0;
        *(undefined8 *)((long)pvVar15 + 0x48) = 0;
        *(long *)((long)pvVar15 + 0x38) = (long)pvVar15 + 0x40;
      }
      FUN_1001b8172(pvVar15,local_270);
      *(undefined8 *)((long)pvVar15 + 0x10) = uVar9;
      *(bool *)((long)pvVar15 + 0x50) = bVar25;
      local_238 = (long *)&uStack_230;
      uStack_230 = 0;
      uStack_22c = 0;
      uStack_22a = 0;
      uStack_228 = 0;
      uStack_222 = 0;
      FUN_1002b7e7c(&local_238,&local_278);
      plVar13 = local_238;
      plVar20 = (long *)((long)pvVar15 + 0x38);
      if (bVar25 == false) {
        plVar20 = (long *)((long)pvVar15 + 0x20);
      }
      local_258 = plVar20;
      if (plVar20[2] != 0) {
        local_250 = plVar20 + 1;
        lVar16 = *plVar20;
        *plVar20 = (long)local_250;
        *(undefined8 *)(plVar20[1] + 0x10) = 0;
        plVar20[1] = 0;
        plVar20[2] = 0;
        lVar21 = *(long *)(lVar16 + 8);
        if (lVar21 == 0) {
          lVar21 = lVar16;
        }
        if (lVar21 == 0) {
          FUN_1002a41f4(plVar20,0);
        }
        else {
          local_248 = pvVar15;
          lVar16 = FUN_1002b7f1c(lVar21);
          lVar24 = lVar21;
          if (plVar13 != (long *)&uStack_230) {
            do {
              lVar21 = lVar16;
              uVar11 = plVar13[4];
              *(ulong *)(lVar24 + 0x20) = uVar11;
              plVar18 = (long *)*local_250;
              plVar20 = local_250;
              while (plVar19 = plVar20, plVar18 != (long *)0x0) {
                while (plVar19 = plVar18, (ulong)plVar19[4] <= uVar11) {
                  plVar18 = (long *)plVar19[1];
                  if ((long *)plVar19[1] == (long *)0x0) {
                    plVar20 = plVar19 + 1;
                    goto LAB_1002ad5a8;
                  }
                }
                plVar20 = plVar19;
                plVar18 = (long *)*plVar19;
              }
LAB_1002ad5a8:
              FUN_10020e4b6(local_258,plVar19,plVar20,lVar24);
              if (lVar21 == 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = FUN_1002b7f1c(lVar21);
              }
              plVar20 = (long *)plVar13[1];
              plVar18 = plVar13;
              if ((long *)plVar13[1] == (long *)0x0) {
                do {
                  plVar13 = (long *)plVar18[2];
                  bVar25 = (long *)*plVar13 != plVar18;
                  plVar18 = plVar13;
                } while (bVar25);
              }
              else {
                do {
                  plVar13 = plVar20;
                  plVar20 = (long *)*plVar13;
                } while ((long *)*plVar13 != (long *)0x0);
              }
            } while ((lVar21 != 0) && (lVar24 = lVar21, plVar13 != (long *)&uStack_230));
          }
          plVar20 = local_258;
          FUN_1002a41f4(local_258,lVar21);
          pvVar15 = local_248;
          if (lVar16 != 0) {
            lVar21 = *(long *)(lVar16 + 0x10);
            while (lVar24 = lVar21, lVar24 != 0) {
              lVar16 = lVar24;
              lVar21 = *(long *)(lVar24 + 0x10);
            }
            FUN_1002a41f4(plVar20,lVar16);
            pvVar15 = local_248;
          }
        }
      }
      if (plVar13 != (long *)&uStack_230) {
        do {
          uVar11 = plVar13[4];
          pvVar17 = operator_new(0x28);
          *(ulong *)((long)pvVar17 + 0x20) = uVar11;
          plVar19 = (long *)plVar20[1];
          plVar18 = plVar20 + 1;
          while (plVar22 = plVar18, plVar19 != (long *)0x0) {
            while (plVar22 = plVar19, (ulong)plVar22[4] <= uVar11) {
              plVar19 = (long *)plVar22[1];
              if ((long *)plVar22[1] == (long *)0x0) {
                plVar18 = plVar22 + 1;
                goto LAB_1002ad896;
              }
            }
            plVar18 = plVar22;
            plVar19 = (long *)*plVar22;
          }
LAB_1002ad896:
          FUN_10020e4b6(local_258,plVar22,plVar18,pvVar17);
          plVar18 = (long *)plVar13[1];
          plVar19 = plVar13;
          if ((long *)plVar13[1] == (long *)0x0) {
            do {
              plVar13 = (long *)plVar19[2];
              bVar25 = (long *)*plVar13 != plVar19;
              plVar19 = plVar13;
            } while (bVar25);
          }
          else {
            do {
              plVar13 = plVar18;
              plVar18 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
        } while (plVar13 != (long *)&uStack_230);
      }
      FUN_100307d3d(local_240,pvVar15);
      FUN_1002a41f4(&local_238,CONCAT26(uStack_22a,CONCAT24(uStack_22c,uStack_230)));
    }
    FUN_1001b7a50(local_270);
  }
  if (*(char *)(local_260 + 0xc0) != '\0') {
    *(undefined1 *)(local_260 + 0xc0) = 0;
    uStack_228 = 0;
    uStack_222 = 0;
    uStack_220 = 0;
    local_238._0_4_ = 0;
    local_238._4_4_ = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_22a = 0;
    FUN_1005389ba(&local_238,0x85);
    FUN_1004755ef(local_260,0,&local_238);
  }
LAB_1002ad943:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

