// name: FUN_10049be35
// address: 10049be35

uint FUN_10049be35(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (*(ulong *)(param_2 + 0x30) <= *(ulong *)(param_1 + 0x30)) {
    if (*(ulong *)(param_2 + 0x30) < *(ulong *)(param_1 + 0x30)) {
      uVar1 = 1;
    }
    else if ((*(uint *)(param_2 + 0x18) <= *(uint *)(param_1 + 0x18)) &&
            (uVar1 = 1, *(uint *)(param_1 + 0x18) == *(uint *)(param_2 + 0x18))) {
      uVar1 = -(uint)(param_1 < param_2) | 1;
    }
  }
  return uVar1;
}

