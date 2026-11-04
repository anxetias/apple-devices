// name: FUN_1002e3d2c
// address: 1002e3d2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002e3d2c(uint *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3._4_12_ = _UNK_100741f04;
  auVar3._0_4_ = DAT_100741f00;
  auVar3 = pshufb(ZEXT416(*param_1),auVar3);
  *param_1 = auVar3._0_4_;
  auVar3 = _DAT_100718a70;
  lVar2 = 0x10;
  auVar4 = ZEXT416(DAT_100741f00);
  do {
    uVar1 = *(uint *)((long)param_1 + lVar2 + -0xc);
    *(uint *)((long)param_1 + lVar2 + -0xc) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    auVar5 = pshufb(ZEXT416(*(uint *)((long)param_1 + lVar2 + -4)),auVar4);
    *(int *)((long)param_1 + lVar2 + -4) = auVar5._0_4_;
    auVar5 = pshufb(*(undefined1 (*) [16])((long)param_1 + lVar2),auVar3);
    *(undefined1 (*) [16])((long)param_1 + lVar2) = auVar5;
    lVar2 = lVar2 + 0x1c;
  } while (lVar2 != 0xb00);
  return;
}

