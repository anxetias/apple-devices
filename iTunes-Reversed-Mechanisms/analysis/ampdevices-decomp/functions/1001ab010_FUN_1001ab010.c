// name: FUN_1001ab010
// address: 1001ab010

long * FUN_1001ab010(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    _CFRelease();
  }
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    _CFRetain();
  }
  return param_1;
}

