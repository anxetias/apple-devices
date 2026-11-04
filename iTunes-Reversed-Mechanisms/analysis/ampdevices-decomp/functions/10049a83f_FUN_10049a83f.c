// name: FUN_10049a83f
// address: 10049a83f

uint FUN_10049a83f(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(uint *)(param_2 + 0x18) <= *(uint *)(param_1 + 0x18)) &&
     (uVar1 = 1, *(uint *)(param_1 + 0x18) == *(uint *)(param_2 + 0x18))) {
    uVar1 = -(uint)(param_1 < param_2) | 1;
  }
  return uVar1;
}

