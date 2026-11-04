// name: FUN_10052d5c0
// address: 10052d5c0

undefined8 FUN_10052d5c0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffd9;
  if (param_2 < *(ulong *)(param_1 + 0x5b0)) {
    *(ulong *)(param_1 + 0x510) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

