// name: FUN_10040efd8
// address: 10040efd8

void FUN_10040efd8(void *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10031b48b();
  if (lVar1 != 0) {
    FUN_100318858(lVar1);
  }
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}

