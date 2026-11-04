// name: FUN_100105ab4
// address: 100105ab4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100105ab4(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar14 = ___bzero(param_1,1000);
  dVar8 = DAT_100700458;
  dVar7 = DAT_100700450;
  iVar6 = _UNK_10070044c;
  iVar5 = _UNK_100700448;
  iVar4 = _UNK_100700444;
  iVar3 = _DAT_100700440;
  auVar2 = _DAT_100700430;
  auVar11._0_8_ = auVar14._8_8_;
  auVar11._8_8_ = extraout_XMM1_Qb;
  auVar14._8_8_ = extraout_XMM0_Qb;
  lVar9 = 0;
  auVar14 = pmovsxbq(auVar14,_DAT_100700464);
  auVar11 = pmovsxbq(auVar11,_DAT_100700466);
  lVar10 = 0;
  do {
    auVar12._8_4_ = (int)lVar10;
    auVar12._0_8_ = lVar10;
    auVar12._12_4_ = (int)((ulong)lVar10 >> 0x20);
    auVar13 = (auVar12 | auVar11) ^ auVar2;
    iVar1 = (int)lVar9;
    if (auVar13._4_4_ == iVar4 && auVar13._0_4_ < iVar3) {
      *(float *)(param_1 + 0x1f8 + lVar9 * 4) = (float)(dVar8 / SQRT((double)(iVar1 + 4) * dVar7));
    }
    if (auVar13._12_4_ == iVar6 && auVar13._8_4_ < iVar5) {
      *(float *)(param_1 + 0x208 + lVar9 * 4) = (float)(dVar8 / SQRT((double)(iVar1 + 8) * dVar7));
    }
    auVar12 = (auVar12 | auVar14) ^ auVar2;
    if (auVar12._4_4_ == iVar4 && auVar12._0_4_ < iVar3) {
      *(float *)(param_1 + 0x218 + lVar9 * 4) = (float)(dVar8 / SQRT((double)(iVar1 + 0xc) * dVar7))
      ;
    }
    if (auVar12._12_4_ == iVar6 && auVar12._8_4_ < iVar5) {
      *(float *)(param_1 + 0x228 + lVar9 * 4) =
           (float)(dVar8 / SQRT((double)(iVar1 + 0x10) * dVar7));
    }
    lVar10 = lVar10 + 4;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x80);
  return;
}

