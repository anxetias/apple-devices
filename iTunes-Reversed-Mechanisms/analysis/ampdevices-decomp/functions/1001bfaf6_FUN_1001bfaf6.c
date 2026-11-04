// name: FUN_1001bfaf6
// address: 1001bfaf6

long FUN_1001bfaf6(long param_1)

{
  long lVar1;
  
  FUN_1001e9de0(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_1001c0de6(param_1 + 0x30,param_1 + 0x38,lVar1);
  }
  FUN_1001e9eb9(param_1 + 0x40);
  return lVar1;
}

