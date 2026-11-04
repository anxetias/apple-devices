// name: FUN_100108afc
// address: 100108afc

undefined8 FUN_100108afc(long param_1,uint param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  lVar3 = *(long *)(param_1 + 0x60);
  uVar2 = 0x6368616e;
  if (uVar4 < (ulong)(*(long *)(param_1 + 0x68) - lVar3 >> 3)) {
    pvVar1 = *(void **)(lVar3 + uVar4 * 8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      lVar3 = *(long *)(param_1 + 0x60);
    }
    *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
    *(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = param_1;
    uVar2 = 0;
  }
  return uVar2;
}

