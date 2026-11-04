// name: FUN_1003e52a7
// address: 1003e52a7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e52a7(undefined1 (*param_1) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _DAT_100718a70;
  auVar2 = pshufb(*param_1,_DAT_100718a70);
  *param_1 = auVar2;
  auVar2 = pshufb(param_1[1],auVar3);
  param_1[1] = auVar2;
  auVar3 = pshufb(param_1[2],auVar3);
  param_1[2] = auVar3;
  uVar1 = *(uint *)param_1[3];
  *(uint *)param_1[3] =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1[3] + 8);
  *(uint *)(param_1[3] + 8) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return;
}

