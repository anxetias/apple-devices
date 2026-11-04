// name: FUN_10016fe18
// address: 10016fe18

void FUN_10016fe18(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28)) - 1;
  lVar1 = *(long *)(*(long *)(param_1 + 8) + (uVar2 / 0xaa) * 8);
  uVar2 = uVar2 % 0xaa;
  FUN_10016f5f2(lVar1 + uVar2 * 0x18 + 0x10);
  FUN_10014d890(lVar1 + uVar2 * 0x18);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  FUN_10016fe88(param_1,1);
  return;
}

