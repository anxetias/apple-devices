// name: FUN_10027364e
// address: 10027364e

void FUN_10027364e(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_10015a092(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

