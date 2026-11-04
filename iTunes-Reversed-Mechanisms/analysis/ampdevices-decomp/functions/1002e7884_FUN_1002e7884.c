// name: FUN_1002e7884
// address: 1002e7884

void FUN_1002e7884(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = operator_new(0x58);
  *puVar8 = &PTR_FUN_100852fb8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[1] = *(undefined8 *)(param_1 + 8);
  puVar8[2] = uVar1;
  puVar8[3] = uVar2;
  puVar8[4] = uVar3;
  puVar8[5] = uVar4;
  puVar8[6] = uVar5;
  puVar8[7] = uVar6;
  puVar8[8] = uVar7;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puVar8[9] = *(undefined8 *)(param_1 + 0x48);
  puVar8[10] = uVar1;
  return;
}

