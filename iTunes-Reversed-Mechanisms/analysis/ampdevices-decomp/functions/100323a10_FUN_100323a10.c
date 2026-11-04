// name: FUN_100323a10
// address: 100323a10

undefined8 FUN_100323a10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  void *local_30 [3];
  
  uVar1 = *param_2;
  FUN_100323a50(local_30,param_1);
  pvVar2 = local_30[0];
  local_30[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return uVar1;
}

