// name: FUN_1004d0422
// address: 1004d0422

void FUN_1004d0422(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = operator_new(0x38);
  *puVar6 = &PTR_FUN_10085e8c0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[1] = *(undefined8 *)(param_1 + 8);
  puVar6[2] = uVar1;
  puVar6[3] = uVar2;
  puVar6[4] = uVar3;
  puVar6[5] = uVar4;
  puVar6[6] = uVar5;
  return;
}

