// name: FUN_10049bdfe
// address: 10049bdfe

uint FUN_10049bdfe(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (*(ulong *)(param_2 + 0x20) <= *(ulong *)(param_1 + 0x20)) {
    if (*(ulong *)(param_2 + 0x20) < *(ulong *)(param_1 + 0x20)) {
      uVar1 = 1;
    }
    else if ((*(uint *)(param_2 + 0x18) <= *(uint *)(param_1 + 0x18)) &&
            (uVar1 = 1, *(uint *)(param_1 + 0x18) == *(uint *)(param_2 + 0x18))) {
      uVar1 = -(uint)(param_1 < param_2) | 1;
    }
  }
  return uVar1;
}

