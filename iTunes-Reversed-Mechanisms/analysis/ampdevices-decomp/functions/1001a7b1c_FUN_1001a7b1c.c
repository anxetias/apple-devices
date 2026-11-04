// name: FUN_1001a7b1c
// address: 1001a7b1c

long * FUN_1001a7b1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 != lVar1) {
    if (*param_1 != 0) {
      _CFRelease();
      lVar1 = *param_2;
    }
    *param_1 = lVar1;
    *(char *)(param_1 + 1) = (char)param_2[1];
  }
  *param_2 = 0;
  return param_1;
}

