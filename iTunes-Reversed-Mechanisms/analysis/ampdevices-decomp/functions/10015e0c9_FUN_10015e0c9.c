// name: FUN_10015e0c9
// address: 10015e0c9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10015e0c9(float *param_1,undefined1 (*param_2) [16],uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  undefined2 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  
  dVar22 = DAT_10070c188;
  fVar25 = DAT_10070c178;
  fVar24 = DAT_10070c174;
  fVar21 = _UNK_10070c16c;
  fVar51 = _UNK_10070c168;
  fVar20 = _UNK_10070c164;
  fVar50 = _DAT_10070c160;
  fVar23 = DAT_10070bcf4;
  dVar19 = DAT_100700b00;
  if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
    uVar28 = param_3 >> 5;
    uVar27 = param_3 >> 3 & 3;
    fVar23 = _DAT_10070c160;
    fVar24 = _UNK_10070c164;
    fVar25 = _UNK_10070c168;
    fVar26 = _UNK_10070c16c;
    if (((ulong)param_1 & 0xf) == 0) {
      if (0x1f < param_3) {
        do {
          auVar37._0_4_ = (int)(*param_1 * fVar50);
          auVar37._4_4_ = (int)(param_1[1] * fVar20);
          auVar37._8_4_ = (int)(param_1[2] * fVar51);
          auVar37._12_4_ = (int)(param_1[3] * fVar21);
          auVar42._0_4_ = (int)(param_1[4] * fVar50);
          auVar42._4_4_ = (int)(param_1[5] * fVar20);
          auVar42._8_4_ = (int)(param_1[6] * fVar51);
          auVar42._12_4_ = (int)(param_1[7] * fVar21);
          auVar37 = packssdw(auVar37,auVar42);
          auVar47._0_4_ = (int)(param_1[8] * fVar50);
          auVar47._4_4_ = (int)(param_1[9] * fVar20);
          auVar47._8_4_ = (int)(param_1[10] * fVar51);
          auVar47._12_4_ = (int)(param_1[0xb] * fVar21);
          auVar43._0_4_ = (int)(param_1[0xc] * fVar50);
          auVar43._4_4_ = (int)(param_1[0xd] * fVar20);
          auVar43._8_4_ = (int)(param_1[0xe] * fVar51);
          auVar43._12_4_ = (int)(param_1[0xf] * fVar21);
          auVar42 = packssdw(auVar47,auVar43);
          pfVar1 = param_1 + 0x10;
          pfVar6 = param_1 + 0x11;
          pfVar7 = param_1 + 0x12;
          pfVar8 = param_1 + 0x13;
          pfVar2 = param_1 + 0x14;
          pfVar9 = param_1 + 0x15;
          pfVar10 = param_1 + 0x16;
          pfVar11 = param_1 + 0x17;
          pfVar3 = param_1 + 0x18;
          pfVar12 = param_1 + 0x19;
          pfVar13 = param_1 + 0x1a;
          pfVar14 = param_1 + 0x1b;
          pfVar4 = param_1 + 0x1c;
          pfVar15 = param_1 + 0x1d;
          pfVar16 = param_1 + 0x1e;
          pfVar17 = param_1 + 0x1f;
          param_1 = param_1 + 0x20;
          auVar44._0_4_ = (int)(*pfVar1 * fVar50);
          auVar44._4_4_ = (int)(*pfVar6 * fVar20);
          auVar44._8_4_ = (int)(*pfVar7 * fVar51);
          auVar44._12_4_ = (int)(*pfVar8 * fVar21);
          auVar48._0_4_ = (int)(*pfVar2 * fVar50);
          auVar48._4_4_ = (int)(*pfVar9 * fVar20);
          auVar48._8_4_ = (int)(*pfVar10 * fVar51);
          auVar48._12_4_ = (int)(*pfVar11 * fVar21);
          auVar47 = packssdw(auVar44,auVar48);
          auVar49._0_4_ = (int)(*pfVar3 * fVar50);
          auVar49._4_4_ = (int)(*pfVar12 * fVar20);
          auVar49._8_4_ = (int)(*pfVar13 * fVar51);
          auVar49._12_4_ = (int)(*pfVar14 * fVar21);
          auVar32._4_4_ = (int)(*pfVar15 * fVar20);
          auVar32._0_4_ = (int)(*pfVar4 * fVar50);
          auVar32._8_4_ = (int)(*pfVar16 * fVar51);
          auVar32._12_4_ = (int)(*pfVar17 * fVar21);
          auVar32 = packssdw(auVar49,auVar32);
          *param_2 = auVar37;
          param_2[1] = auVar42;
          param_2[2] = auVar47;
          param_2[3] = auVar32;
          param_2 = param_2 + 4;
          uVar28 = uVar28 - 1;
          fVar23 = _DAT_10070c160;
          fVar24 = _UNK_10070c164;
          fVar25 = _UNK_10070c168;
          fVar26 = _UNK_10070c16c;
        } while (uVar28 != 0);
      }
      for (; fVar21 = _UNK_10070c16c, fVar51 = _UNK_10070c168, fVar20 = _UNK_10070c164,
          fVar50 = _DAT_10070c160, uVar27 != 0; uVar27 = uVar27 - 1) {
        fVar18 = *param_1;
        pfVar2 = param_1 + 1;
        pfVar3 = param_1 + 2;
        pfVar4 = param_1 + 3;
        pfVar1 = param_1 + 4;
        pfVar6 = param_1 + 5;
        pfVar7 = param_1 + 6;
        pfVar8 = param_1 + 7;
        param_1 = param_1 + 8;
        auVar34._0_4_ = (int)(fVar18 * _DAT_10070c160);
        auVar34._4_4_ = (int)(*pfVar2 * _UNK_10070c164);
        auVar34._8_4_ = (int)(*pfVar3 * _UNK_10070c168);
        auVar34._12_4_ = (int)(*pfVar4 * _UNK_10070c16c);
        auVar39._0_4_ = (int)(*pfVar1 * _DAT_10070c160);
        auVar39._4_4_ = (int)(*pfVar6 * _UNK_10070c164);
        auVar39._8_4_ = (int)(*pfVar7 * _UNK_10070c168);
        auVar39._12_4_ = (int)(*pfVar8 * _UNK_10070c16c);
        auVar32 = packssdw(auVar34,auVar39);
        _DAT_10070c160 = fVar23;
        _UNK_10070c164 = fVar24;
        _UNK_10070c168 = fVar25;
        _UNK_10070c16c = fVar26;
        *param_2 = auVar32;
        param_2 = param_2 + 1;
        fVar23 = _DAT_10070c160;
        fVar24 = _UNK_10070c164;
        fVar25 = _UNK_10070c168;
        fVar26 = _UNK_10070c16c;
        _UNK_10070c16c = fVar21;
        _UNK_10070c168 = fVar51;
        _UNK_10070c164 = fVar20;
        _DAT_10070c160 = fVar50;
      }
    }
    else {
      if (0x1f < param_3) {
        do {
          auVar31._0_4_ = (int)(*param_1 * fVar50);
          auVar31._4_4_ = (int)(param_1[1] * fVar20);
          auVar31._8_4_ = (int)(param_1[2] * fVar51);
          auVar31._12_4_ = (int)(param_1[3] * fVar21);
          auVar35._0_4_ = (int)(param_1[4] * fVar50);
          auVar35._4_4_ = (int)(param_1[5] * fVar20);
          auVar35._8_4_ = (int)(param_1[6] * fVar51);
          auVar35._12_4_ = (int)(param_1[7] * fVar21);
          auVar32 = packssdw(auVar31,auVar35);
          auVar36._0_4_ = (int)(param_1[8] * fVar50);
          auVar36._4_4_ = (int)(param_1[9] * fVar20);
          auVar36._8_4_ = (int)(param_1[10] * fVar51);
          auVar36._12_4_ = (int)(param_1[0xb] * fVar21);
          auVar40._0_4_ = (int)(param_1[0xc] * fVar50);
          auVar40._4_4_ = (int)(param_1[0xd] * fVar20);
          auVar40._8_4_ = (int)(param_1[0xe] * fVar51);
          auVar40._12_4_ = (int)(param_1[0xf] * fVar21);
          auVar37 = packssdw(auVar36,auVar40);
          pfVar1 = param_1 + 0x10;
          pfVar6 = param_1 + 0x11;
          pfVar7 = param_1 + 0x12;
          pfVar8 = param_1 + 0x13;
          pfVar2 = param_1 + 0x14;
          pfVar9 = param_1 + 0x15;
          pfVar10 = param_1 + 0x16;
          pfVar11 = param_1 + 0x17;
          pfVar3 = param_1 + 0x18;
          pfVar12 = param_1 + 0x19;
          pfVar13 = param_1 + 0x1a;
          pfVar14 = param_1 + 0x1b;
          pfVar4 = param_1 + 0x1c;
          pfVar15 = param_1 + 0x1d;
          pfVar16 = param_1 + 0x1e;
          pfVar17 = param_1 + 0x1f;
          param_1 = param_1 + 0x20;
          auVar41._0_4_ = (int)(*pfVar1 * fVar50);
          auVar41._4_4_ = (int)(*pfVar6 * fVar20);
          auVar41._8_4_ = (int)(*pfVar7 * fVar51);
          auVar41._12_4_ = (int)(*pfVar8 * fVar21);
          auVar45._0_4_ = (int)(*pfVar2 * fVar50);
          auVar45._4_4_ = (int)(*pfVar9 * fVar20);
          auVar45._8_4_ = (int)(*pfVar10 * fVar51);
          auVar45._12_4_ = (int)(*pfVar11 * fVar21);
          auVar42 = packssdw(auVar41,auVar45);
          auVar46._0_4_ = (int)(*pfVar3 * fVar50);
          auVar46._4_4_ = (int)(*pfVar12 * fVar20);
          auVar46._8_4_ = (int)(*pfVar13 * fVar51);
          auVar46._12_4_ = (int)(*pfVar14 * fVar21);
          auVar5._4_4_ = (int)(*pfVar15 * fVar20);
          auVar5._0_4_ = (int)(*pfVar4 * fVar50);
          auVar5._8_4_ = (int)(*pfVar16 * fVar51);
          auVar5._12_4_ = (int)(*pfVar17 * fVar21);
          auVar47 = packssdw(auVar46,auVar5);
          *param_2 = auVar32;
          param_2[1] = auVar37;
          param_2[2] = auVar42;
          param_2[3] = auVar47;
          param_2 = param_2 + 4;
          uVar28 = uVar28 - 1;
          fVar23 = _DAT_10070c160;
          fVar24 = _UNK_10070c164;
          fVar25 = _UNK_10070c168;
          fVar26 = _UNK_10070c16c;
        } while (uVar28 != 0);
      }
      for (; fVar21 = _UNK_10070c16c, fVar51 = _UNK_10070c168, fVar20 = _UNK_10070c164,
          fVar50 = _DAT_10070c160, uVar27 != 0; uVar27 = uVar27 - 1) {
        fVar18 = *param_1;
        pfVar2 = param_1 + 1;
        pfVar3 = param_1 + 2;
        pfVar4 = param_1 + 3;
        pfVar1 = param_1 + 4;
        pfVar6 = param_1 + 5;
        pfVar7 = param_1 + 6;
        pfVar8 = param_1 + 7;
        param_1 = param_1 + 8;
        auVar33._0_4_ = (int)(fVar18 * _DAT_10070c160);
        auVar33._4_4_ = (int)(*pfVar2 * _UNK_10070c164);
        auVar33._8_4_ = (int)(*pfVar3 * _UNK_10070c168);
        auVar33._12_4_ = (int)(*pfVar4 * _UNK_10070c16c);
        auVar38._0_4_ = (int)(*pfVar1 * _DAT_10070c160);
        auVar38._4_4_ = (int)(*pfVar6 * _UNK_10070c164);
        auVar38._8_4_ = (int)(*pfVar7 * _UNK_10070c168);
        auVar38._12_4_ = (int)(*pfVar8 * _UNK_10070c16c);
        auVar32 = packssdw(auVar33,auVar38);
        _DAT_10070c160 = fVar23;
        _UNK_10070c164 = fVar24;
        _UNK_10070c168 = fVar25;
        _UNK_10070c16c = fVar26;
        *param_2 = auVar32;
        param_2 = param_2 + 1;
        fVar23 = _DAT_10070c160;
        fVar24 = _UNK_10070c164;
        fVar25 = _UNK_10070c168;
        fVar26 = _UNK_10070c16c;
        _UNK_10070c16c = fVar21;
        _UNK_10070c168 = fVar51;
        _UNK_10070c164 = fVar20;
        _DAT_10070c160 = fVar50;
      }
    }
    _UNK_10070c16c = fVar26;
    _UNK_10070c168 = fVar25;
    _UNK_10070c164 = fVar24;
    _DAT_10070c160 = fVar23;
    dVar22 = DAT_10070c188;
    fVar20 = DAT_10070c178;
    fVar50 = DAT_10070c174;
    fVar23 = DAT_10070bcf4;
    dVar19 = DAT_100700b00;
    if ((param_3 & 7) != 0) {
      lVar29 = 0;
      do {
        fVar51 = param_1[lVar29] * fVar50;
        if (fVar51 <= 0.0) {
          if (0.0 <= fVar51) {
            uVar30 = 0;
          }
          else {
            uVar30 = (short)(int)((double)fVar51 + dVar22);
            if (fVar51 < fVar20) {
              uVar30 = 0x8000;
            }
          }
        }
        else {
          uVar30 = (short)(int)((double)fVar51 + dVar19);
          if (fVar23 < fVar51) {
            uVar30 = 0x7fff;
          }
        }
        *(undefined2 *)(*param_2 + lVar29 * 2) = uVar30;
        lVar29 = lVar29 + 1;
      } while ((param_3 & 7) != (uint)lVar29);
    }
  }
  else if (param_3 != 0) {
    lVar29 = 0;
    do {
      fVar50 = param_1[lVar29] * fVar24;
      if (fVar50 <= 0.0) {
        if (0.0 <= fVar50) {
          uVar30 = 0;
        }
        else {
          uVar30 = (short)(int)((double)fVar50 + dVar22);
          if (fVar50 < fVar25) {
            uVar30 = 0x8000;
          }
        }
      }
      else {
        uVar30 = (short)(int)((double)fVar50 + dVar19);
        if (fVar23 < fVar50) {
          uVar30 = 0x7fff;
        }
      }
      *(undefined2 *)(*param_2 + lVar29 * 2) = uVar30;
      lVar29 = lVar29 + 1;
    } while (param_3 != (uint)lVar29);
  }
  return;
}

