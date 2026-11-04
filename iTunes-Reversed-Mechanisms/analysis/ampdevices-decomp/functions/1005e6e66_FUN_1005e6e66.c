// name: FUN_1005e6e66
// address: 1005e6e66

void FUN_1005e6e66(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = operator_new(0x38);
  *puVar6 = &PTR_FUN_10086fb78;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1 + 0x2c);
  puVar6[1] = *(undefined8 *)(param_1 + 8);
  puVar6[2] = uVar1;
  puVar6[3] = uVar2;
  puVar6[4] = uVar3;
  *(undefined8 *)((long)puVar6 + 0x24) = uVar4;
  *(undefined8 *)((long)puVar6 + 0x2c) = uVar5;
  return;
}

