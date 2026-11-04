// name: FUN_1001089fc
// address: 1001089fc

void FUN_1001089fc(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar3 = param_2;
  uVar4 = param_3;
  while (uVar4 != 0) {
    uVar5 = uVar3 % uVar4;
    uVar3 = uVar4;
    uVar4 = uVar5;
  }
  uVar1 = (ulong)param_3 / (ulong)uVar3;
  *(int *)(param_1 + 0x30) = (int)uVar1;
  uVar2 = (ulong)param_2 / (ulong)uVar3;
  *(int *)(param_1 + 0x34) = (int)uVar2;
  *(int *)(param_1 + 0x38) = (int)(uVar2 / uVar1);
  *(int *)(param_1 + 0x3c) = (int)(uVar2 % uVar1);
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

