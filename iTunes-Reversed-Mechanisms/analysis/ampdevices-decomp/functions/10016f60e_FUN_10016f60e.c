// name: FUN_10016f60e
// address: 10016f60e

void FUN_10016f60e(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != lVar4) {
    uVar2 = (*(long *)(param_1 + 0x10) - lVar4 >> 3) * 0xaa - 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  uVar1 = *(long *)(param_1 + 0x20) + lVar3;
  if (uVar2 == uVar1) {
    FUN_10016f6ba(param_1);
    lVar4 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x28);
    uVar1 = *(long *)(param_1 + 0x20) + lVar3;
  }
  lVar4 = *(long *)(lVar4 + (uVar1 / 0xaa) * 8);
  uVar1 = uVar1 % 0xaa;
  *(undefined8 *)(lVar4 + uVar1 * 0x18) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar4 + 8 + uVar1 * 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + 0x10 + uVar1 * 0x18) = param_2[2];
  param_2[2] = 0;
  *(long *)(param_1 + 0x28) = lVar3 + 1;
  return;
}

