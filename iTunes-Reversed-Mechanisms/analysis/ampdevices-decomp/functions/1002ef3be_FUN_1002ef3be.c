// name: FUN_1002ef3be
// address: 1002ef3be

void FUN_1002ef3be(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_100853340;
  _free((void *)param_1[2]);
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      puVar1[1] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
    return;
  }
  return;
}

