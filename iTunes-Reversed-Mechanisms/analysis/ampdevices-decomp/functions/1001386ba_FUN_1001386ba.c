// name: FUN_1001386ba
// address: 1001386ba

undefined8 FUN_1001386ba(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  void *local_38 [2];
  char local_28;
  
  uVar1 = *param_2;
  FUN_100323a50(local_38,param_1);
  pvVar2 = local_38[0];
  local_38[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if (local_28 == '\x01') {
      FUN_100135e68((long)pvVar2 + 0x10);
    }
    operator_delete(pvVar2);
  }
  return uVar1;
}

