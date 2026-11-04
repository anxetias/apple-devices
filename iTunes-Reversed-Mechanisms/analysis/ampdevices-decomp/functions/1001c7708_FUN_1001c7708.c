// name: FUN_1001c7708
// address: 1001c7708

undefined8 FUN_1001c7708(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  void *local_30 [3];
  
  uVar1 = *param_2;
  FUN_100138756(local_30,param_1);
  pvVar2 = local_30[0];
  local_30[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return uVar1;
}

