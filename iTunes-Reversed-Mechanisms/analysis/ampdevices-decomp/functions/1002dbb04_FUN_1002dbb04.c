// name: FUN_1002dbb04
// address: 1002dbb04

undefined8 FUN_1002dbb04(long param_1,ulong *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  bool bVar5;
  
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 != (void *)0x0) {
    uVar1 = *param_2;
    pvVar4 = (void *)(param_1 + 8);
    do {
      bVar5 = *(ulong *)((long)pvVar2 + 0x20) < uVar1;
      if (!bVar5) {
        pvVar4 = pvVar2;
      }
      pvVar2 = *(void **)((long)pvVar2 + (ulong)bVar5 * 8);
    } while (pvVar2 != (void *)0x0);
    if ((pvVar4 == (void *)(param_1 + 8)) || (uVar1 < *(ulong *)((long)pvVar4 + 0x20))) {
      uVar3 = 0;
    }
    else {
      FUN_10020e52a(param_1,pvVar4);
      operator_delete(pvVar4);
      uVar3 = 1;
    }
    return uVar3;
  }
  return 0;
}

