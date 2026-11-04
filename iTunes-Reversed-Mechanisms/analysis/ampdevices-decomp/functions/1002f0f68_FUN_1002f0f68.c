// name: FUN_1002f0f68
// address: 1002f0f68

void FUN_1002f0f68(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100853650;
  pvVar1 = (void *)param_1[5];
  if (*(long *)((long)pvVar1 + 0x18) != 0) {
    return;
  }
  FUN_1002842e4(pvVar1);
  operator_delete(pvVar1);
  return;
}

