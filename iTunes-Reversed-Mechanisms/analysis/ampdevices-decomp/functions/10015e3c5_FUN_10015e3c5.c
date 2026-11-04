// name: FUN_10015e3c5
// address: 10015e3c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10015e3c5(long param_1,long param_2,uint param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  auVar2 = _DAT_10070c140;
  if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
    if (0x10 < param_3) {
      uVar3 = param_3 & 0xfffffff8;
      uVar5 = param_3 >> 3;
      lVar4 = 0;
      do {
        auVar6 = pshufb(*(undefined1 (*) [16])(param_1 + lVar4),auVar2);
        *(undefined1 (*) [16])(param_2 + lVar4) = auVar6;
        lVar4 = lVar4 + 0x10;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      param_3 = param_3 & 7;
      param_2 = param_2 + (ulong)uVar3 * 2;
      param_1 = param_1 + (ulong)uVar3 * 2;
    }
    if (param_3 != 0) {
      lVar4 = 0;
      do {
        uVar1 = *(ushort *)(param_1 + lVar4 * 2);
        *(ushort *)(param_2 + lVar4 * 2) = uVar1 << 8 | uVar1 >> 8;
        lVar4 = lVar4 + 1;
      } while (param_3 != (uint)lVar4);
    }
    return;
  }
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + lVar4 * 2);
      *(ushort *)(param_2 + lVar4 * 2) = uVar1 << 8 | uVar1 >> 8;
      lVar4 = lVar4 + 1;
    } while (param_3 != (uint)lVar4);
  }
  return;
}

