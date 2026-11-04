// name: FUN_100580098
// address: 100580098

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100580098(long param_1,ulong *param_2,long param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  undefined1 auVar17 [16];
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  long lStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x9bee;
      uStack_48 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100580646;
  }
  uVar10 = *(ulong *)(param_1 + 0xf8);
  if (uVar10 != 0) {
    uVar8 = *param_2;
    uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 >> 0x38 < 2) {
      uVar12 = uVar10 - 1 & uVar8;
    }
    else {
      uVar12 = uVar8;
      if (uVar10 <= uVar8) {
        uVar12 = uVar8 % uVar10;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0xf0) + uVar12 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar14 = plVar6[1];
        if (uVar14 == uVar8) {
          if (plVar6[2] == uVar8) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              FUN_100538b99(plVar6 + 3,param_3);
              return;
            }
            goto LAB_10058080d;
          }
        }
        else {
          if ((byte)(uVar13 >> 0x38) < 2) {
            uVar14 = uVar14 & uVar10 - 1;
          }
          else if (uVar10 <= uVar14) {
            uVar14 = uVar14 % uVar10;
          }
          if (uVar14 != uVar12) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  uStack_48 = 0;
  uStack_42 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_4a = 0;
  FUN_100538b99(&local_58,param_3);
  uVar10 = *param_2;
  uVar8 = *(ulong *)(param_1 + 0xf8);
  if (uVar8 != 0) {
    uVar13 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 >> 0x38 < 2) {
      local_60 = uVar8 - 1 & uVar10;
    }
    else {
      local_60 = uVar10;
      if (uVar8 <= uVar10) {
        local_60 = uVar10 % uVar8;
      }
    }
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 0xf0) + local_60 * 8);
    if ((puVar1 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar1, plVar6 != (long *)0x0)) {
      do {
        uVar12 = plVar6[1];
        if (uVar12 == uVar10) {
          if (plVar6[2] == uVar10) goto LAB_100580634;
        }
        else {
          if ((byte)(uVar13 >> 0x38) < 2) {
            uVar12 = uVar12 & uVar8 - 1;
          }
          else if (uVar8 <= uVar12) {
            uVar12 = uVar12 % uVar8;
          }
          if (uVar12 != local_60) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = operator_new(0x38);
  *plVar6 = 0;
  plVar6[1] = uVar10;
  plVar6[2] = uVar10;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  fVar16 = (float)(*(long *)(param_1 + 0x108) + 1);
  if (!(bool)(~(uVar8 == 0) & fVar16 <= (float)uVar8 * *(float *)(param_1 + 0x110))) {
    uVar13 = 1;
    if (2 < uVar8) {
      uVar13 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar13 = uVar13 | uVar8 * 2;
    auVar17 = ZEXT416((uint)(fVar16 / *(float *)(param_1 + 0x110)));
    auVar17 = roundss(auVar17,auVar17,10);
    uVar12 = (ulong)auVar17._0_4_;
    uVar12 = (long)(auVar17._0_4_ - _DAT_10070844c) & (long)uVar12 >> 0x3f | uVar12;
    if (uVar12 < uVar13) {
      uVar12 = uVar13;
    }
    uVar13 = 2;
    if ((uVar12 != 1) && (uVar13 = uVar12, (uVar12 & uVar12 - 1) != 0)) {
      uVar13 = std::__next_prime(uVar12);
      uVar8 = *(ulong *)(param_1 + 0xf8);
    }
    if (uVar8 < uVar13) {
LAB_100580408:
      if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar7 = operator_new(uVar13 * 8);
      pvVar2 = *(void **)(param_1 + 0xf0);
      *(void **)(param_1 + 0xf0) = pvVar7;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      *(ulong *)(param_1 + 0xf8) = uVar13;
      uVar8 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0xf0) + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar13 != uVar8);
      plVar11 = *(long **)(param_1 + 0x100);
      uVar8 = uVar13;
      if (plVar11 != (long *)0x0) {
        uVar12 = plVar11[1];
        uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar14 >> 0x38 < 2) {
          uVar12 = uVar12 & uVar13 - 1;
        }
        else if (uVar13 <= uVar12) {
          uVar12 = uVar12 % uVar13;
        }
        *(long *)(*(long *)(param_1 + 0xf0) + uVar12 * 8) = param_1 + 0x100;
        plVar15 = (long *)*plVar11;
        if (plVar15 != (long *)0x0) {
          do {
            uVar9 = plVar15[1];
            if ((byte)(uVar14 >> 0x38) < 2) {
              uVar9 = uVar9 & uVar13 - 1;
            }
            else if (uVar13 <= uVar9) {
              uVar9 = uVar9 % uVar13;
            }
            if (uVar9 != uVar12) {
              if (*(long *)(*(long *)(param_1 + 0xf0) + uVar9 * 8) == 0) {
                *(long **)(*(long *)(param_1 + 0xf0) + uVar9 * 8) = plVar11;
                uVar12 = uVar9;
              }
              else {
                *plVar11 = *plVar15;
                *plVar15 = **(long **)(*(long *)(param_1 + 0xf0) + uVar9 * 8);
                **(undefined8 **)(*(long *)(param_1 + 0xf0) + uVar9 * 8) = plVar15;
                plVar15 = plVar11;
              }
            }
            plVar11 = plVar15;
            plVar15 = (long *)*plVar11;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    else if (uVar13 < uVar8) {
      auVar17 = ZEXT416((uint)((float)*(ulong *)(param_1 + 0x108) / *(float *)(param_1 + 0x110)));
      auVar17 = roundss(auVar17,auVar17,10);
      uVar12 = (ulong)auVar17._0_4_;
      uVar12 = (long)(auVar17._0_4_ - _DAT_10070844c) & (long)uVar12 >> 0x3f | uVar12;
      if ((uVar8 < 3) ||
         (uVar14 = uVar8 - (uVar8 >> 1 & 0x5555555555555555),
         uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333),
         1 < (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar14 = std::__next_prime(uVar12);
      }
      else {
        lVar3 = 0x3f;
        if (uVar12 - 1 != 0) {
          for (; uVar12 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        uVar14 = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
        if (uVar12 < 2) {
          uVar14 = uVar12;
        }
      }
      if (uVar14 < uVar13) {
        uVar14 = uVar13;
      }
      if (uVar14 < uVar8) {
        uVar13 = uVar14;
        if (uVar14 != 0) goto LAB_100580408;
        pvVar2 = *(void **)(param_1 + 0xf0);
        *(undefined8 *)(param_1 + 0xf0) = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        *(undefined8 *)(param_1 + 0xf8) = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulong *)(param_1 + 0xf8);
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      local_60 = uVar10 & uVar8 - 1;
    }
    else {
      local_60 = uVar10;
      if (uVar8 <= uVar10) {
        local_60 = uVar10 % uVar8;
      }
    }
  }
  lVar3 = *(long *)(param_1 + 0xf0);
  plVar11 = *(long **)(lVar3 + local_60 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar6 = *(long *)(param_1 + 0x100);
    *(long **)(param_1 + 0x100) = plVar6;
    *(long *)(lVar3 + local_60 * 8) = param_1 + 0x100;
    if (*plVar6 != 0) {
      uVar10 = *(ulong *)(*plVar6 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar10 = uVar10 & uVar8 - 1;
      }
      else if (uVar8 <= uVar10) {
        uVar10 = uVar10 % uVar8;
      }
      plVar11 = (long *)(uVar10 * 8 + *(long *)(param_1 + 0xf0));
      goto LAB_10058062a;
    }
  }
  else {
    *plVar6 = *plVar11;
LAB_10058062a:
    *plVar11 = (long)plVar6;
  }
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
LAB_100580634:
  plVar6[5] = CONCAT26(uStack_42,uStack_48);
  plVar6[6] = lStack_40;
  plVar6[3] = CONCAT44(uStack_54,local_58);
  plVar6[4] = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
LAB_100580646:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_10058080d:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

