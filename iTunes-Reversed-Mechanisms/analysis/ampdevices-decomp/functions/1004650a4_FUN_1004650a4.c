// name: FUN_1004650a4
// address: 1004650a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1004650a4(long *param_1,long *param_2)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar3 = FUN_1001bd420();
  auVar18._8_8_ = extraout_XMM0_Qb;
  auVar18._0_8_ = extraout_XMM0_Qa;
  param_2[1] = uVar3;
  uVar6 = param_1[1];
  auVar17._4_12_ = auVar18._4_12_;
  if ((uVar6 == 0) || ((float)uVar6 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar6) {
      uVar4 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar4 = uVar4 | uVar6 * 2;
    auVar17._0_4_ = (float)(param_1[3] + 1) / *(float *)(param_1 + 4);
    auVar18 = roundss(auVar17,auVar17,10);
    uVar8 = (ulong)auVar18._0_4_;
    uVar8 = (long)(auVar18._0_4_ - _DAT_10070844c) & (long)uVar8 >> 0x3f | uVar8;
    if (uVar8 < uVar4) {
      uVar8 = uVar4;
    }
    uVar4 = 2;
    if ((uVar8 != 1) && (uVar4 = uVar8, (uVar8 & uVar8 - 1) != 0)) {
      uVar4 = std::__next_prime(uVar8);
      uVar6 = param_1[1];
    }
    if (uVar6 < uVar4) {
LAB_1004651ca:
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar5 = operator_new(uVar4 * 8);
      pvVar1 = (void *)*param_1;
      *param_1 = (long)pvVar5;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      param_1[1] = uVar4;
      uVar6 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
      plVar11 = (long *)param_1[2];
      if (plVar11 != (long *)0x0) {
        uVar6 = plVar11[1];
        uVar8 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
        uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar8 >> 0x38 < 2) {
          uVar6 = uVar6 & uVar4 - 1;
        }
        else if (uVar4 <= uVar6) {
          uVar6 = uVar6 % uVar4;
        }
        *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
        if ((long *)*plVar11 != (long *)0x0) {
          plVar12 = (long *)*plVar11;
          do {
            uVar15 = plVar12[1];
            if ((byte)(uVar8 >> 0x38) < 2) {
              uVar15 = uVar15 & uVar4 - 1;
            }
            else if (uVar4 <= uVar15) {
              uVar15 = uVar15 % uVar4;
            }
            if (uVar15 != uVar6) {
              if (*(long *)(*param_1 + uVar15 * 8) == 0) {
                *(long **)(*param_1 + uVar15 * 8) = plVar11;
                uVar6 = uVar15;
              }
              else {
                lVar10 = *plVar12;
                plVar9 = plVar12;
                if (lVar10 == 0) {
                  plVar7 = (long *)0x0;
                }
                else {
                  do {
                    iVar2 = FUN_1001b9c66(plVar12 + 2,lVar10 + 0x10);
                    plVar7 = (long *)*plVar9;
                    if (iVar2 != 0) goto LAB_100465388;
                    lVar10 = *plVar7;
                    plVar9 = plVar7;
                  } while (lVar10 != 0);
                  plVar7 = (long *)0x0;
                }
LAB_100465388:
                *plVar11 = (long)plVar7;
                *plVar9 = **(long **)(*param_1 + uVar15 * 8);
                **(undefined8 **)(*param_1 + uVar15 * 8) = plVar12;
                plVar12 = plVar11;
              }
            }
            plVar9 = (long *)*plVar12;
            plVar11 = plVar12;
            plVar12 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    else if (uVar4 < uVar6) {
      auVar18 = roundss(ZEXT416((uint)((float)(ulong)param_1[3] / *(float *)(param_1 + 4))),
                        ZEXT416((uint)((float)(ulong)param_1[3] / *(float *)(param_1 + 4))),10);
      uVar8 = (ulong)auVar18._0_4_;
      uVar8 = (long)(auVar18._0_4_ - _DAT_10070844c) & (long)uVar8 >> 0x3f | uVar8;
      if ((uVar6 < 3) ||
         (uVar15 = uVar6 - (uVar6 >> 1 & 0x5555555555555555),
         uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
         1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar15 = std::__next_prime(uVar8);
      }
      else {
        lVar10 = 0x3f;
        if (uVar8 - 1 != 0) {
          for (; uVar8 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar15 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
        if (uVar8 < 2) {
          uVar15 = uVar8;
        }
      }
      if (uVar15 < uVar4) {
        uVar15 = uVar4;
      }
      if (uVar15 < uVar6) {
        uVar4 = uVar15;
        if (uVar15 != 0) goto LAB_1004651ca;
        pvVar1 = (void *)*param_1;
        *param_1 = 0;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
        param_1[1] = 0;
      }
    }
    uVar6 = param_1[1];
  }
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  bVar13 = (byte)(uVar4 >> 0x38);
  if (uVar4 >> 0x38 < 2) {
    uVar4 = uVar6 - 1 & uVar3;
  }
  else {
    uVar4 = uVar3;
    if (uVar6 <= uVar3) {
      uVar4 = uVar3 % uVar6;
    }
  }
  plVar11 = *(long **)(*param_1 + uVar4 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    lVar10 = *plVar11;
    if (lVar10 != 0) {
      bVar14 = 0;
      do {
        uVar8 = *(ulong *)(lVar10 + 8);
        if (bVar13 < 2) {
          uVar15 = uVar8 & uVar6 - 1;
        }
        else {
          uVar15 = uVar8;
          if (uVar6 <= uVar8) {
            uVar15 = uVar8 % uVar6;
          }
        }
        if (uVar15 != uVar4) break;
        if (uVar8 == uVar3) {
          iVar2 = FUN_1001b9c66(lVar10 + 0x10,param_2 + 2);
          bVar16 = iVar2 == 0;
        }
        else {
          bVar16 = false;
        }
        if (!(bool)(~bVar14 & 1 | bVar16)) break;
        bVar14 = bVar14 | bVar16;
        plVar11 = (long *)*plVar11;
        lVar10 = *plVar11;
      } while (lVar10 != 0);
      uVar6 = param_1[1];
      uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
      bVar13 = (byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    }
  }
  uVar3 = param_2[1];
  if (bVar13 < 2) {
    uVar3 = uVar3 & uVar6 - 1;
  }
  else if (uVar6 <= uVar3) {
    uVar3 = uVar3 % uVar6;
  }
  if (plVar11 == (long *)0x0) {
    *param_2 = param_1[2];
    param_1[2] = (long)param_2;
    *(long **)(*param_1 + uVar3 * 8) = param_1 + 2;
    if (*param_2 == 0) goto LAB_1004656f8;
    uVar4 = *(ulong *)(*param_2 + 8);
    if (bVar13 < 2) {
      uVar4 = uVar4 & uVar6 - 1;
    }
    else if (uVar6 <= uVar4) {
      uVar4 = uVar4 % uVar6;
    }
  }
  else {
    *param_2 = *plVar11;
    *plVar11 = (long)param_2;
    if (*param_2 == 0) goto LAB_1004656f8;
    uVar4 = *(ulong *)(*param_2 + 8);
    if (bVar13 < 2) {
      uVar4 = uVar4 & uVar6 - 1;
    }
    else if (uVar6 <= uVar4) {
      uVar4 = uVar4 % uVar6;
    }
    if (uVar4 == uVar3) goto LAB_1004656f8;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_1004656f8:
  param_1[3] = param_1[3] + 1;
  return param_2;
}

