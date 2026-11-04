// name: FUN_10022fba2
// address: 10022fba2

undefined8 FUN_10022fba2(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  int *piVar10;
  undefined4 *puVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined1 auVar18 [16];
  
  pvVar12 = *(void **)(param_1 + 0x250);
  plVar14 = *(long **)(param_1 + 600);
  sVar9 = (long)plVar14 - (long)pvVar12;
  if ((*(int *)(param_1 + 0x204) == 0) || (*(uint *)((long)pvVar12 + (sVar9 - 4)) != param_3)) {
    if (plVar14 < *(long **)(param_1 + 0x260)) {
      *plVar14 = ((ulong)param_3 << 0x20) + 1;
      plVar14 = plVar14 + 1;
    }
    else {
      uVar1 = ((long)sVar9 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_10022ff70();
LAB_10022ff65:
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      uVar8 = (long)*(long **)(param_1 + 0x260) - (long)pvVar12;
      uVar6 = (long)uVar8 >> 2;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar6 = 0x1fffffffffffffff;
      }
      if (uVar6 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar6) goto LAB_10022ff65;
        pvVar5 = operator_new(uVar6 * 8);
      }
      plVar2 = (long *)((long)pvVar5 + ((long)sVar9 >> 3) * 8);
      plVar14 = plVar2 + 1;
      *plVar2 = ((ulong)param_3 << 0x20) + 1;
      _memcpy(pvVar5,pvVar12,sVar9);
      *(void **)(param_1 + 0x250) = pvVar5;
      *(long **)(param_1 + 600) = plVar14;
      *(void **)(param_1 + 0x260) = (void *)((long)pvVar5 + uVar6 * 8);
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
    }
    *(long **)(param_1 + 600) = plVar14;
    *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
  }
  else {
    piVar15 = (int *)((long)pvVar12 + (sVar9 - 8));
    *piVar15 = *piVar15 + 1;
  }
  piVar15 = *(int **)(param_1 + 0x270);
  if (piVar15 < *(int **)(param_1 + 0x278)) {
    *piVar15 = param_2;
    piVar15 = piVar15 + 1;
  }
  else {
    pvVar12 = *(void **)(param_1 + 0x268);
    sVar9 = (long)piVar15 - (long)pvVar12;
    lVar16 = (long)sVar9 >> 2;
    uVar1 = lVar16 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001bd596();
    }
    uVar8 = (long)*(int **)(param_1 + 0x278) - (long)pvVar12;
    uVar6 = (long)uVar8 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar6 = 0x3fffffffffffffff;
    }
    if (uVar6 == 0) {
      auVar18 = ZEXT816(0);
      lVar13 = lVar16;
    }
    else {
      auVar18 = FUN_1001b5f6e(param_1 + 0x278,uVar6);
      pvVar12 = *(void **)(param_1 + 0x268);
      sVar9 = *(long *)(param_1 + 0x270) - (long)pvVar12;
      lVar13 = (long)sVar9 >> 2;
    }
    lVar7 = auVar18._0_8_;
    piVar10 = (int *)(lVar7 + lVar16 * 4);
    *piVar10 = param_2;
    piVar15 = (int *)(lVar7 + lVar16 * 4 + 4);
    piVar10 = piVar10 + -lVar13;
    _memcpy(piVar10,pvVar12,sVar9);
    pvVar12 = *(void **)(param_1 + 0x268);
    *(int **)(param_1 + 0x268) = piVar10;
    *(int **)(param_1 + 0x270) = piVar15;
    *(long *)(param_1 + 0x278) = lVar7 + auVar18._8_8_ * 4;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  *(int **)(param_1 + 0x270) = piVar15;
  *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
  iVar4 = *(int *)(param_1 + 0x248);
  if (iVar4 == 0) {
    puVar17 = *(undefined4 **)(param_1 + 0x288);
    if (puVar17 < *(undefined4 **)(param_1 + 0x290)) {
      *puVar17 = *(undefined4 *)(param_1 + 0x24c);
      puVar17 = puVar17 + 1;
    }
    else {
      pvVar12 = *(void **)(param_1 + 0x280);
      sVar9 = (long)puVar17 - (long)pvVar12;
      lVar16 = (long)sVar9 >> 2;
      uVar1 = lVar16 + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001b5f5e();
      }
      uVar8 = (long)*(undefined4 **)(param_1 + 0x290) - (long)pvVar12;
      uVar6 = (long)uVar8 >> 1;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar8) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 == 0) {
        auVar18 = ZEXT816(0);
        lVar13 = lVar16;
      }
      else {
        auVar18 = FUN_1001b5f6e(param_1 + 0x290,uVar6);
        pvVar12 = *(void **)(param_1 + 0x280);
        sVar9 = *(long *)(param_1 + 0x288) - (long)pvVar12;
        lVar13 = (long)sVar9 >> 2;
      }
      lVar7 = auVar18._0_8_;
      puVar11 = (undefined4 *)(lVar7 + lVar16 * 4);
      *puVar11 = *(undefined4 *)(param_1 + 0x24c);
      puVar17 = (undefined4 *)(lVar7 + lVar16 * 4 + 4);
      puVar11 = puVar11 + -lVar13;
      _memcpy(puVar11,pvVar12,sVar9);
      pvVar12 = *(void **)(param_1 + 0x280);
      *(undefined4 **)(param_1 + 0x280) = puVar11;
      *(undefined4 **)(param_1 + 0x288) = puVar17;
      *(long *)(param_1 + 0x290) = lVar7 + auVar18._8_8_ * 4;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
    }
    *(undefined4 **)(param_1 + 0x288) = puVar17;
    *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
    iVar4 = *(int *)(param_1 + 0x248);
  }
  *(uint *)(param_1 + 0x248) = iVar4 + 1U;
  uVar3 = *(uint *)(param_1 + 0x244);
  if (uVar3 <= iVar4 + 1U) {
    lVar16 = *(long *)(param_1 + 0x210);
    if (*(int *)(lVar16 + 0xc) == 0) {
      *(undefined8 *)(lVar16 + 0xc) = 0x100000001;
      *(uint *)(lVar16 + 0x14) = uVar3;
      *(undefined4 *)(lVar16 + 0x18) = 1;
    }
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + param_2;
  return 0;
}

