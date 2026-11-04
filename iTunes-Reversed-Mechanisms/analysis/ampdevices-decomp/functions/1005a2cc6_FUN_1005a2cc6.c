// name: FUN_1005a2cc6
// address: 1005a2cc6

void FUN_1005a2cc6(long param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0x70);
  while (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x68);
    pvVar3 = (void *)plVar2[2];
    lVar4 = *plVar2;
    plVar5 = (long *)plVar2[1];
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    *(long *)(param_1 + 0x70) = lVar1 + -1;
    operator_delete(plVar2);
    if (pvVar3 != (void *)0x0) {
      FUN_1005a2236(pvVar3);
      operator_delete(pvVar3);
    }
    lVar1 = *(long *)(param_1 + 0x70);
  }
  return;
}

