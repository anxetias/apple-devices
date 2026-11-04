// name: FUN_10021ba62
// address: 10021ba62

void FUN_10021ba62(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_10021ba92(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

