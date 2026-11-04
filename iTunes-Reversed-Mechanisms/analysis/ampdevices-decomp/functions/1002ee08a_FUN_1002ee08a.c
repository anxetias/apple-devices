// name: FUN_1002ee08a
// address: 1002ee08a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ee08a(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  size_t sVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar16 [16];
  ulong local_40;
  
  param_1[7] = param_1[7] + 1;
  plVar1 = (long *)param_1[0x11];
  lVar12 = *(long *)(param_2 + 8);
  uVar3 = ~(lVar12 << 0x20) + lVar12;
  uVar3 = uVar3 >> 0x16 ^ uVar3;
  uVar3 = ~(uVar3 << 0xd) + uVar3;
  uVar8 = (uVar3 >> 8 ^ uVar3) * 9;
  uVar8 = uVar8 >> 0xf ^ uVar8;
  uVar8 = ~(uVar8 << 0x1b) + uVar8;
  uVar8 = uVar8 >> 0x1f ^ uVar8;
  uVar3 = plVar1[1];
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar4 >> 0x38 < 2) {
      local_40 = uVar3 - 1 & uVar8;
    }
    else {
      local_40 = uVar8;
      if (uVar3 <= uVar8) {
        local_40 = uVar8 % uVar3;
      }
    }
    plVar6 = *(long **)(*plVar1 + local_40 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar5 = plVar6[1];
        if (uVar5 == uVar8) {
          if (plVar6[2] == lVar12) goto LAB_1002ee34d;
        }
        else {
          if ((byte)(uVar4 >> 0x38) < 2) {
            uVar5 = uVar5 & uVar3 - 1;
          }
          else if (uVar3 <= uVar5) {
            uVar5 = uVar5 % uVar3;
          }
          if (uVar5 != local_40) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = operator_new(0x18);
  *plVar6 = 0;
  plVar6[1] = uVar8;
  plVar6[2] = lVar12;
  auVar16._4_12_ = extraout_XMM0._4_12_;
  if ((uVar3 == 0) || ((float)uVar3 * *(float *)(plVar1 + 4) < (float)(plVar1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar3) {
      uVar4 = (ulong)((uVar3 & uVar3 - 1) != 0);
    }
    uVar4 = uVar4 | uVar3 * 2;
    auVar16._0_4_ = (float)(plVar1[3] + 1) / *(float *)(plVar1 + 4);
    auVar16 = roundss(auVar16,auVar16,10);
    uVar3 = (ulong)auVar16._0_4_;
    uVar3 = (long)(auVar16._0_4_ - _DAT_10070844c) & (long)uVar3 >> 0x3f | uVar3;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    FUN_1002f1266(plVar1,uVar3);
    uVar3 = plVar1[1];
    if ((uVar3 & uVar3 - 1) == 0) {
      local_40 = uVar8 & uVar3 - 1;
    }
    else {
      local_40 = uVar8;
      if (uVar3 <= uVar8) {
        local_40 = uVar8 % uVar3;
      }
    }
  }
  lVar12 = *plVar1;
  plVar7 = *(long **)(lVar12 + local_40 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar6 = plVar1[2];
    plVar1[2] = (long)plVar6;
    *(long **)(lVar12 + local_40 * 8) = plVar1 + 2;
    if (*plVar6 == 0) goto LAB_1002ee349;
    uVar8 = *(ulong *)(*plVar6 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar8 = uVar8 & uVar3 - 1;
    }
    else if (uVar3 <= uVar8) {
      uVar8 = uVar8 % uVar3;
    }
    plVar7 = (long *)(uVar8 * 8 + *plVar1);
  }
  else {
    *plVar6 = *plVar7;
  }
  *plVar7 = (long)plVar6;
LAB_1002ee349:
  plVar1[3] = plVar1[3] + 1;
LAB_1002ee34d:
  lVar12 = *param_1;
  lVar11 = *(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40);
  if (lVar11 != 0) {
    lVar11 = lVar11 >> 3;
    lVar13 = 0;
    do {
      plVar1 = *(long **)(*(long *)(lVar12 + 0x40) + lVar13 * 8);
      (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined8 *)(param_1[0x13] + lVar13 * 8),param_2);
      lVar13 = lVar13 + 1;
    } while (lVar11 + (ulong)(lVar11 == 0) != lVar13);
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar15 = (undefined8 *)param_1[0xf];
  if (puVar15 < (undefined8 *)param_1[0x10]) {
    *puVar15 = uVar2;
    puVar15 = puVar15 + 1;
  }
  else {
    pvVar10 = (void *)param_1[0xe];
    sVar9 = (long)puVar15 - (long)pvVar10;
    lVar12 = (long)sVar9 >> 3;
    uVar3 = lVar12 + 1;
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100283ee2();
    }
    uVar4 = param_1[0x10] - (long)pvVar10;
    uVar8 = (long)uVar4 >> 2;
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      auVar16 = ZEXT816(0);
      lVar11 = lVar12;
    }
    else {
      auVar16 = FUN_100249b6c(param_1 + 0x10,uVar8);
      pvVar10 = (void *)param_1[0xe];
      sVar9 = param_1[0xf] - (long)pvVar10;
      lVar11 = (long)sVar9 >> 3;
    }
    lVar13 = auVar16._0_8_;
    puVar14 = (undefined8 *)(lVar13 + lVar12 * 8);
    *puVar14 = uVar2;
    puVar15 = (undefined8 *)(lVar13 + lVar12 * 8 + 8);
    puVar14 = puVar14 + -lVar11;
    _memcpy(puVar14,pvVar10,sVar9);
    pvVar10 = (void *)param_1[0xe];
    param_1[0xe] = (long)puVar14;
    param_1[0xf] = (long)puVar15;
    param_1[0x10] = lVar13 + auVar16._8_8_ * 8;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  param_1[0xf] = (long)puVar15;
  return;
}

