// name: FUN_100390880
// address: 100390880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100390880(ulong *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_1;
  auVar3 = pshufb(auVar3,_DAT_10070e4b0);
  *param_1 = auVar3._0_8_;
  puVar1 = param_1 + 1;
  *(ushort *)puVar1 = (short)*puVar1 << 8 | (ushort)*puVar1 >> 8;
  uVar2 = FUN_1001c0f77();
  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  uVar2 = FUN_1001c0f77();
  *(undefined4 *)(param_1 + 2) = uVar2;
  uVar2 = FUN_1001c0f77();
  *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  uVar2 = FUN_1001c0f77();
  *(undefined4 *)(param_1 + 3) = uVar2;
  return;
}

