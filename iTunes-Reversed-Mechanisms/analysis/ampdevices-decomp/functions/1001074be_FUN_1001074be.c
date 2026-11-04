// name: FUN_1001074be
// address: 1001074be

void FUN_1001074be(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10082fdb8;
  pvVar1 = (void *)param_1[0x3ec];
  if (pvVar1 != (void *)0x0) {
    FUN_100105c62(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_100107b10(param_1[0x3ed]);
  FUN_100117cb0(param_1);
  return;
}

