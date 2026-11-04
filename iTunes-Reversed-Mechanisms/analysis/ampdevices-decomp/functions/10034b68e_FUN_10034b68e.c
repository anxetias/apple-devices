// name: FUN_10034b68e
// address: 10034b68e

undefined8 FUN_10034b68e(long param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x16808) + 8);
  if (lVar4 != 0) {
    lVar2 = *(long *)(param_1 + 0x16808) + 8;
    uVar1 = *param_2;
    lVar5 = lVar2;
    do {
      bVar6 = *(ulong *)(lVar4 + 0x20) < uVar1;
      if (!bVar6) {
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar6 * 8);
    } while (lVar4 != 0);
    if ((lVar5 != lVar2) && (*(ulong *)(lVar5 + 0x20) <= uVar1)) {
      uVar3 = FUN_1004e0c3f(param_1,1);
      uVar3 = FUN_1002f9e29(uVar3,*(undefined4 *)(lVar5 + 0x28));
      return uVar3;
    }
  }
  return 0;
}

