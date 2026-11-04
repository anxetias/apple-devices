// name: FUN_10057e458
// address: 10057e458

long * FUN_10057e458(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  size_t sVar10;
  
  plVar1 = *(long **)(param_1 + 0x90);
  plVar8 = *(long **)(param_1 + 0x98);
  sVar10 = (long)plVar8 - (long)plVar1;
  lVar9 = (long)sVar10 >> 3;
  lVar2 = *(long *)(param_2 + 0x60);
  lVar5 = lVar9 * -0x5555555555555555;
  plVar6 = plVar1;
  if (0x17 < (long)sVar10) {
    do {
      if (*plVar6 == lVar2) {
        return plVar6;
      }
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 3;
    } while (lVar5 != 0);
  }
  if (plVar8 < *(long **)(param_1 + 0xa0)) {
    *plVar8 = lVar2;
    plVar8[1] = 0;
    *(undefined4 *)((long)plVar8 + 0xf) = 0;
    plVar8 = plVar8 + 3;
  }
  else {
    uVar7 = lVar9 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      FUN_1005812cc();
LAB_10057e5db:
                    /* WARNING: Subroutine does not return */
      FUN_1001082d0();
    }
    lVar5 = (long)*(long **)(param_1 + 0xa0) - (long)plVar1 >> 3;
    uVar3 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar7) goto LAB_10057e5db;
      pvVar4 = operator_new(uVar7 * 0x18);
    }
    plVar6 = (long *)((long)pvVar4 + lVar9 * 8);
    *plVar6 = lVar2;
    plVar6[1] = 0;
    *(undefined4 *)((long)plVar6 + 0xf) = 0;
    plVar8 = (long *)((long)pvVar4 + lVar9 * 8 + 0x18);
    _memcpy((void *)((long)plVar6 - sVar10),plVar1,sVar10);
    *(void **)(param_1 + 0x90) = (void *)((long)plVar6 - sVar10);
    *(long **)(param_1 + 0x98) = plVar8;
    *(void **)(param_1 + 0xa0) = (void *)((long)pvVar4 + uVar7 * 0x18);
    if (plVar1 != (long *)0x0) {
      operator_delete(plVar1);
    }
  }
  *(long **)(param_1 + 0x98) = plVar8;
  return plVar8 + -3;
}

