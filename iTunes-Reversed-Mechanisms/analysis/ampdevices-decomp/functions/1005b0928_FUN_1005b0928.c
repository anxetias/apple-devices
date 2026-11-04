// name: FUN_1005b0928
// address: 1005b0928

long FUN_1005b0928(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  param_1 = param_1 + 8;
  lVar1 = param_1;
  if (lVar2 != 0) {
    do {
      bVar3 = *(uint *)(lVar2 + 0x20) < param_2;
      if (*(uint *)(lVar2 + 0x20) == param_2) {
        bVar3 = *(ulong *)(lVar2 + 0x28) < param_3;
      }
      if (bVar3 == false) {
        lVar1 = lVar2;
      }
      lVar2 = *(long *)(lVar2 + (ulong)bVar3 * 8);
    } while (lVar2 != 0);
    if (lVar1 != param_1) {
      bVar3 = param_2 < *(uint *)(lVar1 + 0x20);
      if (*(uint *)(lVar1 + 0x20) == param_2) {
        bVar3 = param_3 < *(ulong *)(lVar1 + 0x28);
      }
      if (!bVar3) {
        return lVar1;
      }
    }
  }
  return param_1;
}

