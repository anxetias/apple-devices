// name: FUN_1001a790a
// address: 1001a790a

long * FUN_1001a790a(long *param_1,long param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    _CFRetain(param_2);
  }
  return param_1;
}

