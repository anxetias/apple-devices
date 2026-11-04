// name: FUN_1004701aa
// address: 1004701aa

long * FUN_1004701aa(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    _CFRetain(param_2);
  }
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    _CFRelease();
  }
  return param_1;
}

