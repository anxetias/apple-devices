// name: FUN_1001bbec4
// address: 1001bbec4

undefined8 FUN_1001bbec4(undefined8 param_1,long *param_2,long *param_3)

{
  undefined2 *puVar1;
  long local_30;
  long local_28;
  long lVar2;
  
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *param_3;
  if (lVar2 == 0) {
    puVar1 = &DAT_100711b00;
    if (param_3[1] == 0) goto LAB_1001bbf0b;
    FUN_1001b8454(param_3);
    lVar2 = *param_3;
    if (lVar2 == 0) goto LAB_1001bbf0b;
  }
  puVar1 = (undefined2 *)(lVar2 + 0xc);
LAB_1001bbf0b:
  FUN_1001bb630(param_1,&local_30,puVar1);
  FUN_1001b811c(&local_30);
  return param_1;
}

