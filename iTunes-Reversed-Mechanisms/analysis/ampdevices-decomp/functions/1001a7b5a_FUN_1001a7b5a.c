// name: FUN_1001a7b5a
// address: 1001a7b5a

void FUN_1001a7b5a(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  if (lVar1 != 0) {
    _CFRetain();
    return;
  }
  return;
}

