// name: FUN_10016fe88
// address: 10016fe88

ulong FUN_10016fe88(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 unaff_R14;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar1 != *(long *)(param_1 + 8)) {
    lVar2 = (lVar1 - *(long *)(param_1 + 8) >> 3) * 0xaa + -1;
  }
  uVar3 = lVar2 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  bVar4 = (uVar3 < 0xaa | param_2) & uVar3 < 0x154;
  if (bVar4 == 0) {
    operator_delete(*(void **)(lVar1 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return (CONCAT71((int7)((ulong)unaff_R14 >> 8),bVar4) ^ 1) & 0xffffffff;
}

