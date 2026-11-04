// name: FUN_10037beb8
// address: 10037beb8

void FUN_10037beb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_100855b90;
  FUN_10037bf52();
  puVar1 = (undefined8 *)param_1[0x11];
  puVar2 = (undefined8 *)param_1[0x12];
  while (puVar2 != puVar1) {
    puVar2 = puVar2 + -10;
    (**(code **)*puVar2)(puVar2);
  }
  param_1[0x12] = puVar1;
  FUN_100382da2();
  param_1[7] = &PTR_FUN_100855b70;
  FUN_100205d70(param_1 + 0xf);
  FUN_10021e316(param_1 + 0xd);
  return;
}

