// name: FUN_10017afda
// address: 10017afda

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017afda(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_10083c198;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1001ad03c(param_1 + 8);
  FUN_1001ad03c(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = DAT_1008c4e40;
  uVar3 = _DAT_1008c4e38;
  uVar2 = uRam00000001008c4e28;
  uVar1 = _DAT_1008c4e20;
  param_1[10] = _DAT_1008c4e30;
  param_1[0xb] = uVar3;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  *(undefined4 *)(param_1 + 0x11) = DAT_1008c4e70;
  uVar3 = uRam00000001008c4e68;
  uVar2 = uRam00000001008c4e58;
  uVar1 = _DAT_1008c4e50;
  param_1[0xf] = _DAT_1008c4e60;
  param_1[0x10] = uVar3;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0x12] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  uVar1 = _UNK_10070e4f8;
  param_1[0x13] = _DAT_10070e4f0;
  param_1[0x14] = uVar1;
  return;
}

