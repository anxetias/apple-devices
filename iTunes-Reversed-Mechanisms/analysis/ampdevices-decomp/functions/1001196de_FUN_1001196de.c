// name: FUN_1001196de
// address: 1001196de

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001196de(long param_1,long param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  
  iVar8 = (uint)*(byte *)(param_1 + 0x41) * (uint)*(byte *)(param_1 + 0x40);
  lVar4 = *param_3;
  FUN_100105fee(param_1 + 8,*(undefined8 *)(param_2 + 0x18),lVar4,lVar4 + 0x10,iVar8);
  FUN_100106168(param_1 + 8,*(undefined8 *)(param_2 + 0x18),lVar4 + 8,lVar4 + 0x18,iVar8);
  uVar3 = *(undefined1 *)(*(long *)(lVar4 + 0x10) + 0x19f5);
  ___bzero(lVar4 + 0x40,500);
  *(undefined1 *)(lVar4 + 0x230) = uVar3;
  lVar5 = (ulong)param_4 * 0x13e;
  lVar7 = param_1 + lVar5 + 0x58;
  lVar6 = param_1 + 0xf7 + lVar5;
  auVar12._8_8_ = -lVar6;
  auVar12._0_8_ = -lVar7;
  auVar14 = pmovsxbq(in_XMM3,_DAT_100705e64);
  *(long *)(lVar4 + 0x238) = SUB168(auVar12 & auVar14,0) + lVar7;
  *(long *)(lVar4 + 0x240) = SUB168(auVar12 & auVar14,8) + lVar6;
  lVar6 = param_1 + 0xf40 + lVar5;
  uVar1 = param_1 + 0xfdf + lVar5;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar9._8_8_ = -uVar1;
  auVar9._0_8_ = -lVar6;
  auVar11._0_8_ = SUB168(auVar9 & auVar14,0) + lVar6;
  auVar11._8_8_ = SUB168(auVar9 & auVar14,8) + uVar1;
  *(undefined1 (*) [16])(lVar4 + 0x248) = auVar11;
  lVar6 = lVar4 + 0x260;
  lVar5 = 0;
  auVar9 = pmovsxwq(auVar11,_DAT_100705eb0);
  auVar11 = pmovsxwq(auVar10,_DAT_100705eb4);
  do {
    auVar14._8_4_ = (int)lVar6;
    auVar14._0_8_ = lVar6;
    auVar14._12_4_ = (int)((ulong)lVar6 >> 0x20);
    plVar2 = (long *)(lVar4 + 0x7660 + lVar5 * 8);
    *plVar2 = lVar6 + auVar9._0_8_;
    plVar2[1] = auVar14._8_8_ + auVar9._8_8_;
    plVar2 = (long *)(lVar4 + 0x77b0 + lVar5 * 8);
    *plVar2 = lVar6 + auVar11._0_8_;
    plVar2[1] = auVar14._8_8_ + auVar11._8_8_;
    lVar5 = lVar5 + 2;
    lVar6 = lVar6 + 0x400;
  } while (lVar5 != 6);
  lVar6 = lVar4 + 0x2e60;
  lVar5 = -0x120;
  do {
    auVar13._8_4_ = (int)lVar6;
    auVar13._0_8_ = lVar6;
    auVar13._12_4_ = (int)((ulong)lVar6 >> 0x20);
    plVar2 = (long *)(lVar4 + 0x77b0 + lVar5);
    *plVar2 = lVar6 + auVar9._0_8_;
    plVar2[1] = auVar13._8_8_ + auVar9._8_8_;
    plVar2 = (long *)(lVar4 + 0x7900 + lVar5);
    *plVar2 = lVar6 + auVar11._0_8_;
    plVar2[1] = auVar13._8_8_ + auVar11._8_8_;
    lVar6 = lVar6 + 0x400;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0);
  return 0;
}

