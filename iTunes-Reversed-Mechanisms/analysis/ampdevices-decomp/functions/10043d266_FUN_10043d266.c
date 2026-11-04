// name: FUN_10043d266
// address: 10043d266

void FUN_10043d266(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    FUN_10043a8b3(param_1,0x636c7220,0);
    *(int *)(param_1[2] + 100) = *(int *)(param_1[2] + 100) + -1;
  }
  puVar2 = &DAT_1008c7680;
  puVar1 = (undefined8 *)0x0;
  do {
    puVar3 = puVar1;
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10043d2c2;
    puVar1 = puVar2;
  } while (puVar2 != param_1);
  puVar2 = &DAT_1008c7680;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  *puVar2 = *param_1;
  *param_1 = 0;
LAB_10043d2c2:
  FUN_1001c64c1(param_1);
  return;
}

