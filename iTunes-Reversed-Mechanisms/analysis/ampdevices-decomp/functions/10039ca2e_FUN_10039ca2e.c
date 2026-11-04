// name: FUN_10039ca2e
// address: 10039ca2e

void FUN_10039ca2e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **local_48;
  undefined8 **local_40;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_100856208;
  puVar1 = param_1 + 9;
  local_48 = &local_48;
  local_38 = 0;
  local_40 = local_48;
  if ((undefined8 *)param_1[10] != puVar1) {
    puVar2 = (undefined8 *)param_1[10];
    do {
      if (puVar2[2] != 0) {
        FUN_1001ceee0();
      }
      for (puVar3 = (undefined8 *)puVar2[1]; puVar3 != puVar1; puVar3 = (undefined8 *)puVar3[1]) {
        if (puVar3[2] != 0) {
          FUN_1001ceee0();
        }
      }
      FUN_10039eb7e(&local_48,&local_48,puVar1,puVar2,puVar3);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  FUN_10039e992(&local_48);
  FUN_10039e992(puVar1);
  FUN_1001c7684(param_1);
  return;
}

