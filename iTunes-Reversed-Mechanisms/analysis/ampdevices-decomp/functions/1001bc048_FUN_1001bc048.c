// name: FUN_1001bc048
// address: 1001bc048

undefined8 FUN_1001bc048(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long local_40;
  long local_38;
  long lVar4;
  
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  lVar4 = *param_3;
  if (lVar4 == 0) {
    puVar1 = &DAT_100711b00;
    if (param_3[1] != 0) {
      FUN_1001b8454(param_3);
      lVar4 = *param_3;
      if (lVar4 != 0) goto LAB_1001bc093;
    }
  }
  else {
LAB_1001bc093:
    puVar1 = (undefined2 *)(lVar4 + 0xc);
  }
  lVar4 = *param_4;
  if (lVar4 == 0) {
    puVar2 = &DAT_100711b00;
    if (param_4[1] != 0) {
      FUN_1001b8454(param_4);
      lVar4 = *param_4;
      if (lVar4 != 0) goto LAB_1001bc0a3;
    }
  }
  else {
LAB_1001bc0a3:
    puVar2 = (undefined2 *)(lVar4 + 0xc);
  }
  lVar4 = *param_5;
  if (lVar4 == 0) {
    puVar3 = &DAT_100711b00;
    if (param_5[1] == 0) goto LAB_1001bc0bd;
    FUN_1001b8454(param_5);
    lVar4 = *param_5;
    if (lVar4 == 0) goto LAB_1001bc0bd;
  }
  puVar3 = (undefined2 *)(lVar4 + 0xc);
LAB_1001bc0bd:
  FUN_1001bb630(param_1,&local_40,puVar1,puVar2,puVar3);
  FUN_1001b811c(&local_40);
  return param_1;
}

