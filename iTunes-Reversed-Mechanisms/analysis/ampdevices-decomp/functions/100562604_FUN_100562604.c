// name: FUN_100562604
// address: 100562604

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100562604(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong local_58;
  
  uVar5 = FUN_1001bd420();
  uVar11 = DAT_1008c25e0;
  if (DAT_1008c25e0 != 0) {
    uVar6 = DAT_1008c25e0 - (DAT_1008c25e0 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar6 >> 0x38 < 2) {
      local_58 = DAT_1008c25e0 - 1 & uVar5;
    }
    else {
      local_58 = uVar5;
      if (DAT_1008c25e0 <= uVar5) {
        local_58 = uVar5 % DAT_1008c25e0;
      }
    }
    plVar7 = *(long **)((long)DAT_1008c25d8 + local_58 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      uVar9 = DAT_1008c25e0 - 1;
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar5) {
          iVar4 = FUN_1001b9c66(plVar7 + 2,param_1);
          if (iVar4 == 0) {
            return plVar7;
          }
        }
        else {
          if ((byte)(uVar6 >> 0x38) < 2) {
            uVar10 = uVar10 & uVar9;
          }
          else if (uVar11 <= uVar10) {
            uVar10 = uVar10 % uVar11;
          }
          if (uVar10 != local_58) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  uVar1 = *param_2;
  plVar7 = operator_new(0x28);
  *plVar7 = 0;
  plVar7[1] = uVar5;
  auVar16._0_8_ = FUN_1001b7a88(plVar7 + 2,uVar1);
  auVar16._8_8_ = extraout_XMM0_Qb;
  plVar7[4] = 0;
  auVar15._4_12_ = auVar16._4_12_;
  if ((uVar11 != 0) && ((float)(DAT_1008c25f0 + 1) <= (float)uVar11 * DAT_1008c25f8))
  goto LAB_100562a00;
  uVar6 = 1;
  if (2 < uVar11) {
    uVar6 = (ulong)((uVar11 & uVar11 - 1) != 0);
  }
  uVar6 = uVar6 | uVar11 * 2;
  auVar15._0_4_ = (float)(DAT_1008c25f0 + 1) / DAT_1008c25f8;
  auVar16 = roundss(auVar15,auVar15,10);
  uVar11 = (ulong)auVar16._0_4_;
  uVar11 = (long)(auVar16._0_4_ - _DAT_10070844c) & (long)uVar11 >> 0x3f | uVar11;
  if (uVar11 < uVar6) {
    uVar11 = uVar6;
  }
  uVar6 = 2;
  if ((uVar11 != 1) && (uVar6 = uVar11, (uVar11 & uVar11 - 1) != 0)) {
    uVar6 = std::__next_prime(uVar11);
  }
  uVar9 = DAT_1008c25e0;
  uVar11 = uVar6;
  if (DAT_1008c25e0 < uVar6) {
LAB_100562855:
    if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001082d0();
    }
    pvVar8 = operator_new(uVar11 * 8);
    pvVar3 = DAT_1008c25d8;
    bVar14 = DAT_1008c25d8 != (void *)0x0;
    DAT_1008c25d8 = pvVar8;
    if (bVar14) {
      operator_delete(pvVar3);
    }
    uVar6 = 0;
    DAT_1008c25e0 = uVar11;
    do {
      *(undefined8 *)((long)DAT_1008c25d8 + uVar6 * 8) = 0;
      plVar12 = DAT_1008c25e8;
      uVar6 = uVar6 + 1;
    } while (uVar11 != uVar6);
    if (DAT_1008c25e8 != (long *)0x0) {
      uVar6 = DAT_1008c25e8[1];
      uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar9 >> 0x38 < 2) {
        uVar6 = uVar6 & uVar11 - 1;
      }
      else if (uVar11 <= uVar6) {
        uVar6 = uVar6 % uVar11;
      }
      *(long ***)((long)DAT_1008c25d8 + uVar6 * 8) = &DAT_1008c25e8;
      plVar13 = (long *)*plVar12;
      if (plVar13 != (long *)0x0) {
        do {
          uVar10 = plVar13[1];
          if ((byte)(uVar9 >> 0x38) < 2) {
            uVar10 = uVar10 & uVar11 - 1;
          }
          else if (uVar11 <= uVar10) {
            uVar10 = uVar10 % uVar11;
          }
          if (uVar10 != uVar6) {
            if (*(long *)((long)DAT_1008c25d8 + uVar10 * 8) == 0) {
              *(long **)((long)DAT_1008c25d8 + uVar10 * 8) = plVar12;
              uVar6 = uVar10;
            }
            else {
              *plVar12 = *plVar13;
              *plVar13 = **(long **)((long)DAT_1008c25d8 + uVar10 * 8);
              **(undefined8 **)((long)DAT_1008c25d8 + uVar10 * 8) = plVar13;
              plVar13 = plVar12;
            }
          }
          plVar12 = plVar13;
          plVar13 = (long *)*plVar12;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  else {
    uVar11 = DAT_1008c25e0;
    if (uVar6 < DAT_1008c25e0) {
      auVar16 = roundss(ZEXT416((uint)((float)DAT_1008c25f0 / DAT_1008c25f8)),
                        ZEXT416((uint)((float)DAT_1008c25f0 / DAT_1008c25f8)),10);
      uVar11 = (ulong)auVar16._0_4_;
      uVar11 = (long)(auVar16._0_4_ - _DAT_10070844c) & (long)uVar11 >> 0x3f | uVar11;
      if ((DAT_1008c25e0 < 3) ||
         (uVar10 = DAT_1008c25e0 - (DAT_1008c25e0 >> 1 & 0x5555555555555555),
         uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
         1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar10 = std::__next_prime(uVar11);
      }
      else {
        lVar2 = 0x3f;
        if (uVar11 - 1 != 0) {
          for (; uVar11 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar10 = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
        if (uVar11 < 2) {
          uVar10 = uVar11;
        }
      }
      pvVar3 = DAT_1008c25d8;
      if (uVar10 < uVar6) {
        uVar10 = uVar6;
      }
      uVar11 = DAT_1008c25e0;
      if (uVar10 < uVar9) {
        uVar11 = uVar10;
        if (uVar10 != 0) goto LAB_100562855;
        DAT_1008c25d8 = (void *)0x0;
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        DAT_1008c25e0 = 0;
        uVar11 = 0;
      }
    }
  }
  if ((uVar11 & uVar11 - 1) == 0) {
    local_58 = uVar5 & uVar11 - 1;
  }
  else {
    local_58 = uVar5;
    if (uVar11 <= uVar5) {
      local_58 = uVar5 % uVar11;
    }
  }
LAB_100562a00:
  plVar12 = *(long **)((long)DAT_1008c25d8 + local_58 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar7 = (long)DAT_1008c25e8;
    DAT_1008c25e8 = plVar7;
    *(long ***)((long)DAT_1008c25d8 + local_58 * 8) = &DAT_1008c25e8;
    if (*plVar7 != 0) {
      uVar5 = *(ulong *)(*plVar7 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar5 = uVar5 & uVar11 - 1;
      }
      else if (uVar11 <= uVar5) {
        uVar5 = uVar5 % uVar11;
      }
      *(long **)((long)DAT_1008c25d8 + uVar5 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar12;
    *plVar12 = (long)plVar7;
  }
  DAT_1008c25f0 = DAT_1008c25f0 + 1;
  return plVar7;
}

