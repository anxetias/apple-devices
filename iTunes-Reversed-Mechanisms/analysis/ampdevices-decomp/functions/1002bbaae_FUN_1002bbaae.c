// name: FUN_1002bbaae
// address: 1002bbaae

void FUN_1002bbaae(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x48;
    FUN_1001b7a50(lVar2 + -0x28);
    FUN_1001b7a50(lVar2 + -0x38);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

