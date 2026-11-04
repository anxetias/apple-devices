// name: FUN_1001150be
// address: 1001150be

void FUN_1001150be(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_100835b08;
  FUN_10011511e();
  lVar1 = 0x184c;
  do {
    if ((void *)param_1[lVar1] != (void *)0x0) {
      operator_delete((void *)param_1[lVar1]);
      param_1[lVar1] = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1858);
  if ((long *)param_1[0x1858] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1858] + 8))();
  }
  FUN_10011dda4(param_1);
  return;
}

