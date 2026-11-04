// name: FUN_1005673d2
// address: 1005673d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005673d2(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = _UNK_10073fe6c;
  uVar2 = _UNK_10073fe68;
  uVar1 = _UNK_10073fe64;
  *(undefined4 *)(param_1 + 0x28) = _DAT_10073fe60;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined1 *)(param_1 + 0x38) = 1;
  FUN_1001b7a44(param_1 + 0x40);
  FUN_1001b7a44(param_1 + 0x50);
  FUN_1001b7a44(param_1 + 0x60);
  FUN_1001b7a44(param_1 + 0x70);
  FUN_1001b7a44(param_1 + 0x80);
  return;
}

