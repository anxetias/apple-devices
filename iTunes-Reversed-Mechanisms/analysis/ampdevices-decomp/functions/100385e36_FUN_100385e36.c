// name: FUN_100385e36
// address: 100385e36

void FUN_100385e36(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    FUN_1001ab3c4(lVar2 + -0x10);
    FUN_1001ab006(lVar2 + -0x28);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

