// name: FUN_10021bac2
// address: 10021bac2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10021bac2(long *param_1,ulong param_2,int *param_3)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  byte bVar14;
  bool bVar15;
  undefined1 in_XMM0 [16];
  undefined1 auVar16 [16];
  
  uVar6 = param_1[1];
  auVar16._4_12_ = in_XMM0._4_12_;
  if ((uVar6 != 0) && ((float)(param_1[3] + 1) <= (float)uVar6 * *(float *)(param_1 + 4)))
  goto LAB_10021bf06;
  uVar4 = 1;
  if (2 < uVar6) {
    uVar4 = (ulong)((uVar6 & uVar6 - 1) != 0);
  }
  uVar4 = uVar4 | uVar6 * 2;
  auVar16._0_4_ = (float)(param_1[3] + 1) / *(float *)(param_1 + 4);
  auVar16 = roundss(auVar16,auVar16,10);
  uVar8 = (ulong)auVar16._0_4_;
  uVar8 = (long)(auVar16._0_4_ - _DAT_10070844c) & (long)uVar8 >> 0x3f | uVar8;
  if (uVar8 < uVar4) {
    uVar8 = uVar4;
  }
  uVar4 = 2;
  if ((uVar8 != 1) && (uVar4 = uVar8, (uVar8 & uVar8 - 1) != 0)) {
    uVar4 = std::__next_prime(uVar8);
    uVar6 = param_1[1];
  }
  if (uVar4 <= uVar6) {
    if (uVar6 <= uVar4) goto LAB_10021bf06;
    auVar16 = roundss(ZEXT416((uint)((float)(ulong)param_1[3] / *(float *)(param_1 + 4))),
                      ZEXT416((uint)((float)(ulong)param_1[3] / *(float *)(param_1 + 4))),10);
    uVar8 = (ulong)auVar16._0_4_;
    uVar8 = (long)(auVar16._0_4_ - _DAT_10070844c) & (long)uVar8 >> 0x3f | uVar8;
    if ((uVar6 < 3) ||
       (uVar10 = uVar6 - (uVar6 >> 1 & 0x5555555555555555),
       uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
       1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      uVar10 = std::__next_prime(uVar8);
    }
    else {
      lVar3 = 0x3f;
      if (uVar8 - 1 != 0) {
        for (; uVar8 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar10 = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
      if (uVar8 < 2) {
        uVar10 = uVar8;
      }
    }
    if (uVar10 < uVar4) {
      uVar10 = uVar4;
    }
    if (uVar6 <= uVar10) {
      uVar6 = param_1[1];
      goto LAB_10021bf06;
    }
    uVar4 = uVar10;
    if (uVar10 == 0) {
      pvVar1 = (void *)*param_1;
      *param_1 = 0;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      param_1[1] = 0;
      uVar6 = 0;
      goto LAB_10021bf06;
    }
  }
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
  uVar6 = uVar4;
  if (plVar11 != (long *)0x0) {
    uVar8 = plVar11[1];
    uVar10 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar8 = uVar8 % uVar4;
    }
    *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
    if ((long *)*plVar11 != (long *)0x0) {
      plVar12 = (long *)*plVar11;
      do {
        uVar7 = plVar12[1];
        if ((byte)(uVar10 >> 0x38) < 2) {
          uVar7 = uVar7 & uVar4 - 1;
        }
        else if (uVar4 <= uVar7) {
          uVar7 = uVar7 % uVar4;
        }
        if (uVar7 != uVar8) {
          plVar2 = plVar12;
          if (*(long *)(*param_1 + uVar7 * 8) == 0) {
            *(long **)(*param_1 + uVar7 * 8) = plVar11;
            uVar8 = uVar7;
          }
          else {
            do {
              plVar13 = plVar2;
              plVar2 = (long *)*plVar13;
              if (plVar2 == (long *)0x0) break;
            } while ((int)plVar12[2] == (int)plVar2[2]);
            *plVar11 = (long)plVar2;
            *plVar13 = **(long **)(*param_1 + uVar7 * 8);
            **(undefined8 **)(*param_1 + uVar7 * 8) = plVar12;
            plVar12 = plVar11;
          }
        }
        plVar2 = (long *)*plVar12;
        plVar11 = plVar12;
        plVar12 = plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
LAB_10021bf06:
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar4 >> 0x38 < 2) {
    uVar8 = uVar6 - 1 & param_2;
  }
  else {
    uVar8 = param_2;
    if (uVar6 <= param_2) {
      uVar8 = param_2 % uVar6;
    }
  }
  plVar11 = *(long **)(*param_1 + uVar8 * 8);
  if (plVar11 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    bVar14 = 0;
    do {
      plVar12 = plVar11;
      plVar11 = (long *)*plVar12;
      if (plVar11 == (long *)0x0) {
        return plVar12;
      }
      uVar10 = plVar11[1];
      if ((byte)(uVar4 >> 0x38) < 2) {
        uVar7 = uVar10 & uVar6 - 1;
      }
      else {
        uVar7 = uVar10;
        if (uVar6 <= uVar10) {
          uVar7 = uVar10 % uVar6;
        }
      }
      if (uVar7 != uVar8) {
        return plVar12;
      }
      if (uVar10 == param_2) {
        bVar15 = *(int *)(plVar11 + 2) == *param_3;
      }
      else {
        bVar15 = false;
      }
      bVar9 = ~bVar14;
      bVar14 = bVar14 | bVar15;
    } while ((bool)(bVar9 & 1 | bVar15));
  }
  return plVar12;
}

