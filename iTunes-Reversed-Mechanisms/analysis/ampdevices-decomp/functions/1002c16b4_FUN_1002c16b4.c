// name: FUN_1002c16b4
// address: 1002c16b4

void FUN_1002c16b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1001b7a5c(uVar1);
    lVar2 = uVar1 + 0x10;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = FUN_1001bd8dc(param_1);
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}

