// name: FUN_1001a8bb0
// address: 1001a8bb0

long * FUN_1001a8bb0(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    _CFRetain(param_2);
  }
  return param_1;
}

