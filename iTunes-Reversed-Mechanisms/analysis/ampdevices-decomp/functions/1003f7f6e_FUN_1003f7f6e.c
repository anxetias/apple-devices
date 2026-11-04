// name: FUN_1003f7f6e
// address: 1003f7f6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f7f6e(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)(param_1 + 4);
  auVar2 = pshufb(auVar2,_DAT_10070e4b0);
  *(long *)(param_1 + 4) = auVar2._0_8_;
  auVar2 = _DAT_100718a70;
  lVar1 = -0x10;
  do {
    auVar3 = pshufb(*(undefined1 (*) [16])(param_1 + 0x4c + lVar1 * 4),auVar2);
    *(undefined1 (*) [16])(param_1 + 0x4c + lVar1 * 4) = auVar3;
    auVar3 = pshufb(*(undefined1 (*) [16])(param_1 + 0x8c + lVar1 * 4),auVar2);
    *(undefined1 (*) [16])(param_1 + 0x8c + lVar1 * 4) = auVar3;
    auVar3 = pshufb(*(undefined1 (*) [16])(param_1 + 0xcc + lVar1 * 4),auVar2);
    *(undefined1 (*) [16])(param_1 + 0xcc + lVar1 * 4) = auVar3;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0);
  return;
}

