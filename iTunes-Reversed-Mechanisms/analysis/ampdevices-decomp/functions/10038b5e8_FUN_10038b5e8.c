// name: FUN_10038b5e8
// address: 10038b5e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038b5e8(undefined1 (*param_1) [16])

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5 = _DAT_100718a70;
  auVar4 = pshufb(*param_1,_DAT_100718a70);
  *param_1 = auVar4;
  uVar1 = *(uint *)param_1[1];
  *(uint *)param_1[1] =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar2 = *(ulong *)(param_1[1] + 4);
  *(ulong *)(param_1[1] + 4) =
       uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
       (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
       (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar1 = *(uint *)(param_1[5] + 0xc);
  *(uint *)(param_1[5] + 0xc) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  auVar4 = pshufb(*(undefined1 (*) [16])(param_1[2] + 4),auVar5);
  *(undefined1 (*) [16])(param_1[2] + 4) = auVar4;
  auVar5 = pshufb(*(undefined1 (*) [16])(param_1[3] + 4),auVar5);
  *(undefined1 (*) [16])(param_1[3] + 4) = auVar5;
  uVar1 = *(uint *)(param_1[4] + 4);
  *(uint *)(param_1[4] + 4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar3 = FUN_1001c0f87(*(undefined8 *)(param_1[4] + 8));
  *(undefined8 *)(param_1[4] + 8) = uVar3;
  uVar3 = FUN_1001c0f87(*(undefined8 *)param_1[5]);
  *(undefined8 *)param_1[5] = uVar3;
  uVar1 = *(uint *)(param_1[5] + 8);
  *(uint *)(param_1[5] + 8) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return;
}

