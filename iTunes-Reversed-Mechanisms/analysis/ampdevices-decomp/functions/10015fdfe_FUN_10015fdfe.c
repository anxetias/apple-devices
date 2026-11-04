// name: FUN_10015fdfe
// address: 10015fdfe

void FUN_10015fdfe(long *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = param_2 + (int)param_1[2];
    *param_1 = *param_1 + (ulong)(uVar1 >> 3);
    *(uint *)(param_1 + 2) = uVar1 & 7;
  }
  return;
}

