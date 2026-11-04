// name: FUN_10057a53a
// address: 10057a53a

void FUN_10057a53a(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_10026340c((long)pvVar1 + 0x30);
    FUN_10057a0de(*(undefined8 *)((long)pvVar1 + 0x20));
    FUN_100205d70((long)pvVar1 + 8);
    operator_delete(pvVar1);
    return;
  }
  return;
}

