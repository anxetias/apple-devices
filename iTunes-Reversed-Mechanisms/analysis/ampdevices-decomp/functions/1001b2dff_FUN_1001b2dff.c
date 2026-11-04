// name: FUN_1001b2dff
// address: 1001b2dff

undefined8 * FUN_1001b2dff(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = param_1;
  pvVar1 = operator_new(0x80,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar1 != (void *)0x0) {
    FUN_1001b3536((int)local_28,pvVar1,param_3);
  }
  FUN_1001b4d2e(&local_38,pvVar1);
  *param_2 = local_38;
  param_2[1] = uStack_30;
  return param_2;
}

