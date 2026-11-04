// name: FUN_1002a0ccc
// address: 1002a0ccc

bool FUN_1002a0ccc(long param_1,char *param_2)

{
  long lVar1;
  
  if (*param_2 == '\0') {
    lVar1 = FUN_100496985();
    if (lVar1 != 0) {
      FUN_1002a3b41(*(long *)(param_1 + 8) + 0x68,param_1);
      FUN_1002a3c25(*(long *)(param_1 + 8) + 0x68,param_1);
      *param_2 = '\x01';
    }
    return lVar1 != 0;
  }
  return false;
}

