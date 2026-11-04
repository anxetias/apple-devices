// name: FUN_1003cfebc
// address: 1003cfebc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003cfebc(long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  float fVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  size_t sVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  long lVar20;
  long *plVar21;
  ulong unaff_R13;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (7 < (int)param_2) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inObjectKind < kObjecTKind_NumObjectKinds";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1003d0403;
  }
  param_1 = param_1 + (ulong)param_2 * 0x28;
  plVar16 = (long *)(param_1 + 0x18);
  uVar12 = (ulong)param_3;
  uVar8 = *(ulong *)(param_1 + 0x20);
  if (uVar8 != 0) {
    uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar4 >> 0x38 < 2) {
      unaff_R13 = (ulong)(param_3 & (int)uVar8 - 1U);
    }
    else {
      unaff_R13 = uVar12;
      if (uVar8 <= uVar12) {
        unaff_R13 = (ulong)param_3 % (uVar8 & 0xffffffff);
      }
    }
    puVar18 = *(undefined8 **)(*plVar16 + unaff_R13 * 8);
    if ((puVar18 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar18, plVar6 != (long *)0x0)) {
      do {
        uVar14 = plVar6[1];
        if (uVar14 == uVar12) {
          if (*(uint *)(plVar6 + 2) == param_3) goto LAB_1003d0322;
        }
        else {
          if ((byte)(uVar4 >> 0x38) < 2) {
            uVar14 = uVar14 & uVar8 - 1;
          }
          else if (uVar8 <= uVar14) {
            uVar14 = uVar14 % uVar8;
          }
          if (uVar14 != unaff_R13) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = operator_new(0x30);
  *plVar6 = 0;
  plVar6[1] = uVar12;
  *(uint *)(plVar6 + 2) = param_3;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  fVar2 = (float)(*(long *)(param_1 + 0x30) + 1);
  plVar1 = (long *)(param_1 + 0x28);
  if ((uVar8 == 0) || ((float)uVar8 * *(float *)(param_1 + 0x38) < fVar2)) {
    uVar4 = 1;
    if (2 < uVar8) {
      uVar4 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar4 = uVar4 | uVar8 * 2;
    auVar23 = ZEXT416((uint)(fVar2 / *(float *)(param_1 + 0x38)));
    auVar23 = roundss(auVar23,auVar23,10);
    uVar14 = (ulong)auVar23._0_4_;
    uVar14 = (long)(auVar23._0_4_ - _DAT_10070844c) & (long)uVar14 >> 0x3f | uVar14;
    if (uVar14 < uVar4) {
      uVar14 = uVar4;
    }
    uVar4 = 2;
    if ((uVar14 != 1) && (uVar4 = uVar14, (uVar14 & uVar14 - 1) != 0)) {
      uVar4 = std::__next_prime(uVar14);
      uVar8 = *(ulong *)(param_1 + 0x20);
    }
    if (uVar8 < uVar4) {
LAB_1003d0129:
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar7 = operator_new(uVar4 * 8);
      pvVar19 = (void *)*plVar16;
      *plVar16 = (long)pvVar7;
      if (pvVar19 != (void *)0x0) {
        operator_delete(pvVar19);
      }
      *(ulong *)(param_1 + 0x20) = uVar4;
      uVar8 = 0;
      do {
        *(undefined8 *)(*plVar16 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
      plVar11 = (long *)*plVar1;
      uVar8 = uVar4;
      if (plVar11 != (long *)0x0) {
        uVar14 = plVar11[1];
        uVar9 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
        uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar9 >> 0x38 < 2) {
          uVar14 = uVar14 & uVar4 - 1;
        }
        else if (uVar4 <= uVar14) {
          uVar14 = uVar14 % uVar4;
        }
        *(long **)(*plVar16 + uVar14 * 8) = plVar1;
        plVar21 = (long *)*plVar11;
        if (plVar21 != (long *)0x0) {
          do {
            uVar10 = plVar21[1];
            if ((byte)(uVar9 >> 0x38) < 2) {
              uVar10 = uVar10 & uVar4 - 1;
            }
            else if (uVar4 <= uVar10) {
              uVar10 = uVar10 % uVar4;
            }
            if (uVar10 != uVar14) {
              if (*(long *)(*plVar16 + uVar10 * 8) == 0) {
                *(long **)(*plVar16 + uVar10 * 8) = plVar11;
                uVar14 = uVar10;
              }
              else {
                *plVar11 = *plVar21;
                *plVar21 = **(long **)(*plVar16 + uVar10 * 8);
                **(undefined8 **)(*plVar16 + uVar10 * 8) = plVar21;
                plVar21 = plVar11;
              }
            }
            plVar11 = plVar21;
            plVar21 = (long *)*plVar11;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    else if (uVar4 < uVar8) {
      auVar23 = ZEXT416((uint)((float)*(ulong *)(param_1 + 0x30) / *(float *)(param_1 + 0x38)));
      auVar23 = roundss(auVar23,auVar23,10);
      uVar14 = (ulong)auVar23._0_4_;
      uVar14 = (long)(auVar23._0_4_ - _DAT_10070844c) & (long)uVar14 >> 0x3f | uVar14;
      if ((uVar8 < 3) ||
         (uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555),
         uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
         1 < (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar9 = std::__next_prime(uVar14);
      }
      else {
        lVar17 = 0x3f;
        if (uVar14 - 1 != 0) {
          for (; uVar14 - 1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar9 = 1L << (-((byte)lVar17 ^ 0x3f) & 0x3f);
        if (uVar14 < 2) {
          uVar9 = uVar14;
        }
      }
      if (uVar9 < uVar4) {
        uVar9 = uVar4;
      }
      if (uVar9 < uVar8) {
        uVar4 = uVar9;
        if (uVar9 != 0) goto LAB_1003d0129;
        pvVar19 = (void *)*plVar16;
        *plVar16 = 0;
        if (pvVar19 != (void *)0x0) {
          operator_delete(pvVar19);
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulong *)(param_1 + 0x20);
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_R13 = (ulong)(param_3 & (int)uVar8 - 1U);
    }
    else {
      unaff_R13 = uVar12;
      if (uVar8 <= uVar12) {
        unaff_R13 = uVar12 % uVar8;
      }
    }
  }
  lVar17 = *plVar16;
  plVar11 = *(long **)(lVar17 + unaff_R13 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar6 = *plVar1;
    *plVar1 = (long)plVar6;
    *(long **)(lVar17 + unaff_R13 * 8) = plVar1;
    if (*plVar6 != 0) {
      uVar12 = *(ulong *)(*plVar6 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar12 = uVar12 & uVar8 - 1;
      }
      else if (uVar8 <= uVar12) {
        uVar12 = uVar12 % uVar8;
      }
      plVar11 = (long *)(uVar12 * 8 + *plVar16);
      goto LAB_1003d031b;
    }
  }
  else {
    *plVar6 = *plVar11;
LAB_1003d031b:
    *plVar11 = (long)plVar6;
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
LAB_1003d0322:
  puVar18 = (undefined8 *)plVar6[4];
  if (puVar18 < (undefined8 *)plVar6[5]) {
    *puVar18 = param_4;
    puVar18 = puVar18 + 1;
  }
  else {
    pvVar19 = (void *)plVar6[3];
    sVar15 = (long)puVar18 - (long)pvVar19;
    lVar17 = (long)sVar15 >> 3;
    uVar8 = lVar17 + 1;
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100283ee2();
    }
    uVar4 = plVar6[5] - (long)pvVar19;
    uVar12 = (long)uVar4 >> 2;
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      auVar23 = ZEXT816(0);
      lVar20 = lVar17;
    }
    else {
      auVar23 = FUN_100249b6c(plVar6 + 5,uVar12);
      pvVar19 = (void *)plVar6[3];
      sVar15 = plVar6[4] - (long)pvVar19;
      lVar20 = (long)sVar15 >> 3;
    }
    lVar13 = auVar23._0_8_;
    puVar22 = (undefined8 *)(lVar13 + lVar17 * 8);
    *puVar22 = param_4;
    puVar18 = (undefined8 *)(lVar13 + lVar17 * 8 + 8);
    puVar22 = puVar22 + -lVar20;
    _memcpy(puVar22,pvVar19,sVar15);
    pvVar19 = (void *)plVar6[3];
    plVar6[3] = (long)puVar22;
    plVar6[4] = (long)puVar18;
    plVar6[5] = lVar13 + auVar23._8_8_ * 8;
    if (pvVar19 != (void *)0x0) {
      operator_delete(pvVar19);
    }
  }
  plVar6[4] = (long)puVar18;
LAB_1003d0403:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

