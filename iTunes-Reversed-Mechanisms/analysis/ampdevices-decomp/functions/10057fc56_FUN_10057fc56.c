// name: FUN_10057fc56
// address: 10057fc56

long * FUN_10057fc56(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar2 = *(long **)(param_1 + 0xc0);
  plVar3 = *(long **)(param_1 + 200);
  lVar10 = (long)plVar3 - (long)plVar2 >> 4;
  lVar5 = lVar10;
  plVar8 = plVar2;
  if (0 < lVar10) {
    do {
      if (*plVar8 == param_2) {
        return plVar8;
      }
      lVar5 = lVar5 + -1;
      plVar8 = plVar8 + 2;
    } while (lVar5 != 0);
  }
  if (plVar3 < *(long **)(param_1 + 0xd0)) {
    *plVar3 = param_2;
    *(undefined4 *)(plVar3 + 1) = 0;
    *(undefined1 *)((long)plVar3 + 0xc) = 0;
    plVar9 = plVar3 + 2;
  }
  else {
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_1005812fc();
LAB_10057fdb3:
                    /* WARNING: Subroutine does not return */
      FUN_1001082d0();
    }
    uVar6 = (long)*(long **)(param_1 + 0xd0) - (long)plVar2;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0xfffffffffffffff < uVar7) goto LAB_10057fdb3;
      pvVar4 = operator_new(uVar7 << 4);
    }
    plVar8 = (long *)((long)pvVar4 + lVar10 * 0x10);
    plVar9 = plVar8 + 2;
    *plVar8 = param_2;
    *(undefined4 *)(plVar8 + 1) = 0;
    *(undefined1 *)((long)plVar8 + 0xc) = 0;
    _memcpy(pvVar4,plVar2,(long)plVar3 - (long)plVar2);
    *(void **)(param_1 + 0xc0) = pvVar4;
    *(long **)(param_1 + 200) = plVar9;
    *(void **)(param_1 + 0xd0) = (void *)(uVar7 * 0x10 + (long)pvVar4);
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
    }
  }
  *(long **)(param_1 + 200) = plVar9;
  return plVar9 + -2;
}

