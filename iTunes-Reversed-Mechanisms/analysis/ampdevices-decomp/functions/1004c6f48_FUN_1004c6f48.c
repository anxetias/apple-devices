// name: FUN_1004c6f48
// address: 1004c6f48

void FUN_1004c6f48(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    FUN_1001b7a50(lVar2 + -0x20);
    FUN_1001b7a50(lVar2 + -0x30);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

