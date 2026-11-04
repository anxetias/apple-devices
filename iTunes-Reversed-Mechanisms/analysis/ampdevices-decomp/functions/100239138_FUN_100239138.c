// name: FUN_100239138
// address: 100239138

void FUN_100239138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  uVar5 = *param_5;
  uVar6 = param_5[1];
  if (param_5[1] != 0) {
    LOCK();
    plVar1 = (long *)(param_5[1] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  uVar2 = *param_6;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar7 = operator_new(0x40);
  *puVar7 = &PTR_FUN_10083e880;
  puVar7[1] = param_2;
  puVar7[2] = param_3;
  puVar7[5] = uVar5;
  puVar7[6] = uVar6;
  puVar7[3] = uVar3;
  puVar7[4] = uVar4;
  *(undefined4 *)(puVar7 + 7) = uVar2;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

