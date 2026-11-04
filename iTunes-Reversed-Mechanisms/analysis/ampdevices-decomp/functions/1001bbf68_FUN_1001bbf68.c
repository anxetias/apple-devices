// name: FUN_1001bbf68
// address: 1001bbf68

undefined8 FUN_1001bbf68(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long local_38;
  long local_30;
  long lVar3;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  lVar3 = *param_3;
  if (lVar3 == 0) {
    puVar1 = &DAT_100711b00;
    if (param_3[1] != 0) {
      FUN_1001b8454(param_3);
      lVar3 = *param_3;
      if (lVar3 != 0) goto LAB_1001bbfae;
    }
  }
  else {
LAB_1001bbfae:
    puVar1 = (undefined2 *)(lVar3 + 0xc);
  }
  lVar3 = *param_4;
  if (lVar3 == 0) {
    puVar2 = &DAT_100711b00;
    if (param_4[1] == 0) goto LAB_1001bbfc4;
    FUN_1001b8454(param_4);
    lVar3 = *param_4;
    if (lVar3 == 0) goto LAB_1001bbfc4;
  }
  puVar2 = (undefined2 *)(lVar3 + 0xc);
LAB_1001bbfc4:
  FUN_1001bb630(param_1,&local_38,puVar1,puVar2);
  FUN_1001b811c(&local_38);
  return param_1;
}

