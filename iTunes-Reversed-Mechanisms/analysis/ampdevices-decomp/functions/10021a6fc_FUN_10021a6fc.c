// name: FUN_10021a6fc
// address: 10021a6fc

void FUN_10021a6fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_1001b7a88(param_1 + 0x30,param_2 + 0x30);
  FUN_1001b7a88(param_1 + 0x40,param_2 + 0x40);
  FUN_1001b7a88(param_1 + 0x50,param_2 + 0x50);
  FUN_1001b7a88(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_1001a7abe(param_1 + 0x78,param_2 + 0x78);
  FUN_1001a8c36(param_1 + 0x88,param_2 + 0x88);
  FUN_1001a7abe(param_1 + 0x90,param_2 + 0x90);
  lVar1 = *(long *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(long *)(param_1 + 0xa0) = lVar1;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  lVar2 = *(long *)(param_2 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar2;
  lVar3 = *(long *)(param_2 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar3;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar2 + 8);
    uVar4 = *(ulong *)(param_1 + 0xa8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar5 = uVar5 & uVar4 - 1;
    }
    else if (uVar4 <= uVar5) {
      uVar5 = uVar5 % uVar4;
    }
    *(long *)(lVar1 + uVar5 * 8) = param_1 + 0xb0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 0xb8) = 0;
  }
  return;
}

