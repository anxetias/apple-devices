// name: FUN_1001a8c1c
// address: 1001a8c1c

void FUN_1001a8c1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    _CFRetain();
    return;
  }
  return;
}

