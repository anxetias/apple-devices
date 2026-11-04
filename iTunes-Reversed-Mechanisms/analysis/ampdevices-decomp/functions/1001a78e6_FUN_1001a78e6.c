// name: FUN_1001a78e6
// address: 1001a78e6

void FUN_1001a78e6(long *param_1,long param_2,char param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 != 0 && param_3 == '\x01') {
    _CFRetain(param_2);
    return;
  }
  return;
}

