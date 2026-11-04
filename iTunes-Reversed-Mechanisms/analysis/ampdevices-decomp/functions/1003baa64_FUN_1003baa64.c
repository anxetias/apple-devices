// name: FUN_1003baa64
// address: 1003baa64

void FUN_1003baa64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x30);
  *puVar4 = &PTR_FUN_100856fc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  puVar4[4] = uVar3;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}

