// name: FUN_1001a7a9e
// address: 1001a7a9e

void FUN_1001a7a9e(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(char *)(param_1 + 1) = (char)param_2[1];
  if (lVar1 != 0) {
    _CFRetain();
    return;
  }
  return;
}

