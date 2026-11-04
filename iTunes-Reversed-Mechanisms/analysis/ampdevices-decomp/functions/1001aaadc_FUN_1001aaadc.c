// name: FUN_1001aaadc
// address: 1001aaadc

long * FUN_1001aaadc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 != lVar1) {
    if (*param_1 != 0) {
      _CFRelease();
      lVar1 = *param_2;
    }
    *param_1 = lVar1;
  }
  *param_2 = 0;
  return param_1;
}

