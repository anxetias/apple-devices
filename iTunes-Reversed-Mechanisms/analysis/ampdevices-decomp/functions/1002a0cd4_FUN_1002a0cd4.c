// name: FUN_1002a0cd4
// address: 1002a0cd4

bool FUN_1002a0cd4(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_100496985();
  if (lVar1 != 0) {
    FUN_1002a3b41(*(long *)(param_1 + 8) + 0x68,param_1);
    FUN_1002a3c25(*(long *)(param_1 + 8) + 0x68,param_1);
    *param_2 = 1;
  }
  return lVar1 != 0;
}

