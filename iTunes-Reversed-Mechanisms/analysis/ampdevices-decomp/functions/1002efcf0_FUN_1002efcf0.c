// name: FUN_1002efcf0
// address: 1002efcf0

void FUN_1002efcf0(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x40))
                      ((*(long **)(param_1 + 8))[1],uVar1 & 0xffffffff);
    if ((uint)uVar1 <= uVar2) {
      uVar2 = (uint)((ulong)uVar2 % (uVar1 & 0xffffffff));
    }
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + (ulong)uVar2;
  }
  return;
}

