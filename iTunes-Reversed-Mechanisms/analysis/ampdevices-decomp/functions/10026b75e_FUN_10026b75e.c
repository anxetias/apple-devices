// name: FUN_10026b75e
// address: 10026b75e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10026b75e(ushort *param_1)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = pmovzxbd(in_XMM0,*(undefined4 *)((long)param_1 + 3));
  auVar2 = pmovzxbd(in_XMM1,*(undefined4 *)((long)param_1 + 7));
  auVar2 = pmaddwd(auVar2,_DAT_10071c5a0);
  auVar1 = pmulld(auVar1,_DAT_10071c5b0);
  auVar1 = auVar1 | auVar2;
  auVar2._0_8_ = auVar1._8_8_;
  auVar2._8_4_ = auVar1._8_4_;
  auVar2._12_4_ = auVar1._12_4_;
  return (uint)*param_1 * 0x200000 + (uint)*(byte *)((long)param_1 + 0xb) * 8 |
         (uint)(byte)param_1[1] << 0x13 |
         (uint)*(byte *)((long)param_1 + 0xd) | (uint)(byte)param_1[6] << 2 |
         SUB164(auVar2 | auVar1,4) | SUB164(auVar2 | auVar1,0);
}

