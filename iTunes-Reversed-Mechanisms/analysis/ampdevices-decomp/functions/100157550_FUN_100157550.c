// name: FUN_100157550
// address: 100157550

void FUN_100157550(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,uint param_7)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  uint *puVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 (*local_a0) [16];
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  undefined1 (*local_70) [16];
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  
  if (((param_2 * 4 < param_4 || param_2 * 4 - param_4 == 0) && param_1 != 0) &&
      (0xffffffffffffd8ef < param_3 - 0x2711 && 0xffffffffffffd8ef < param_2 - 0x2711)) {
    uVar15 = param_5 - 1;
    if (param_6 < param_5) {
      uVar15 = param_6;
    }
    uVar13 = param_3 - param_5;
    local_50 = uVar13 >> 1;
    uVar14 = uVar13 - local_50;
    lVar16 = param_2 * 0x10;
    local_88 = param_2;
    local_80 = uVar14;
    local_78 = lVar16;
    local_68 = param_5;
    local_58 = param_2;
    local_48 = param_3;
    local_40 = param_1;
    local_38 = param_4;
    iVar6 = _posix_memalign(&local_a0,0x20,uVar14 * lVar16);
    local_70 = (undefined1 (*) [16])0x0;
    if (iVar6 == 0) {
      local_70 = local_a0;
    }
    if (local_70 != (undefined1 (*) [16])0x0) {
      lVar9 = (uVar15 + uVar14) * local_38;
      puVar7 = (uint *)(local_40 + lVar9);
      auVar3 = vpmovzxbd_avx(ZEXT416(*(uint *)(local_40 + lVar9)));
      *local_70 = auVar3;
      if (1 < local_58) {
        uVar10 = 1;
        do {
          local_a0 = local_a0 + 1;
          auVar4 = vpmovzxbd_avx(ZEXT416(puVar7[uVar10]));
          auVar5._0_4_ = auVar3._0_4_ + auVar4._0_4_;
          auVar5._4_4_ = auVar3._4_4_ + auVar4._4_4_;
          auVar5._8_4_ = auVar3._8_4_ + auVar4._8_4_;
          auVar5._12_4_ = auVar3._12_4_ + auVar4._12_4_;
          *local_a0 = auVar5;
          uVar10 = uVar10 + 1;
          auVar3 = auVar5;
        } while (local_58 != uVar10);
      }
      if (1 < uVar14) {
        uVar10 = 1;
        pauVar8 = local_70;
        pauVar11 = local_70 + param_2;
        do {
          auVar5 = vpmovzxbd_avx(ZEXT416(*puVar7));
          auVar3._0_4_ = auVar5._0_4_ + *(int *)*pauVar8;
          auVar3._4_4_ = auVar5._4_4_ + *(int *)(*pauVar8 + 4);
          auVar3._8_4_ = auVar5._8_4_ + *(int *)(*pauVar8 + 8);
          auVar3._12_4_ = auVar5._12_4_ + *(int *)(*pauVar8 + 0xc);
          *pauVar11 = auVar3;
          if (1 < local_58) {
            lVar12 = 4;
            lVar9 = local_58 - 1;
            do {
              auVar4 = vpsubd_avx(auVar3,*(undefined1 (*) [16])(pauVar8[-1] + lVar12 * 4));
              piVar1 = (int *)(*pauVar8 + lVar12 * 4);
              auVar5 = vpmovzxbd_avx(ZEXT416(*(uint *)((long)puVar7 + lVar12)));
              auVar3._0_4_ = auVar4._0_4_ + *piVar1 + auVar5._0_4_;
              auVar3._4_4_ = auVar4._4_4_ + piVar1[1] + auVar5._4_4_;
              auVar3._8_4_ = auVar4._8_4_ + piVar1[2] + auVar5._8_4_;
              auVar3._12_4_ = auVar4._12_4_ + piVar1[3] + auVar5._12_4_;
              *(undefined1 (*) [16])(*pauVar11 + lVar12 * 4) = auVar3;
              lVar12 = lVar12 + 4;
              lVar9 = lVar9 + -1;
              lVar16 = local_78;
            } while (lVar9 != 0);
          }
          uVar10 = uVar10 + 1;
          pauVar8 = pauVar11;
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + lVar16);
        } while (uVar10 < uVar14);
      }
      uVar10 = local_58;
      local_98 = uVar13;
      local_90 = uVar15;
      local_60 = uVar14;
      if (local_48 != local_68) {
        local_48 = uVar14 + (uVar14 == 0);
        uVar15 = 0;
        lVar16 = local_40;
        do {
          if (uVar10 != 0) {
            uVar13 = 0;
            do {
              uVar17 = FUN_1001578dc(&local_88,uVar13 & 0xffffffff,uVar15 & 0xffffffff,param_7 | 1);
              *(uint *)(lVar16 + uVar13 * 4) =
                   (uint)(byte)uVar17 +
                   ((uint)(byte)((ulong)uVar17 >> 0x20) << 8 | (uint)extraout_var[0] << 0x10) +
                   -0x1000000;
              uVar13 = uVar13 + 1;
              uVar10 = local_58;
            } while (local_58 != uVar13);
          }
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + local_38;
        } while (uVar15 != local_48);
      }
      uVar15 = local_90;
      if (local_68 == 1) {
        uVar15 = 1;
      }
      lVar16 = local_40 + (local_68 + local_60) * local_38;
      puVar7 = (uint *)(lVar16 - uVar15 * local_38);
      auVar3 = vpmovzxbd_avx(ZEXT416(*puVar7));
      *local_70 = auVar3;
      if (1 < uVar10) {
        uVar15 = 1;
        pauVar8 = local_70;
        do {
          pauVar8 = pauVar8 + 1;
          auVar5 = vpmovzxbd_avx(ZEXT416(puVar7[uVar15]));
          auVar4._0_4_ = auVar3._0_4_ + auVar5._0_4_;
          auVar4._4_4_ = auVar3._4_4_ + auVar5._4_4_;
          auVar4._8_4_ = auVar3._8_4_ + auVar5._8_4_;
          auVar4._12_4_ = auVar3._12_4_ + auVar5._12_4_;
          *pauVar8 = auVar4;
          uVar15 = uVar15 + 1;
          auVar3 = auVar4;
        } while (uVar10 != uVar15);
      }
      if (1 < local_60) {
        uVar15 = 1;
        pauVar8 = local_70;
        do {
          pauVar11 = (undefined1 (*) [16])(*pauVar8 + local_78);
          auVar3 = vpmovzxbd_avx(ZEXT416(*puVar7));
          auVar2._0_4_ = auVar3._0_4_ + *(int *)*pauVar8;
          auVar2._4_4_ = auVar3._4_4_ + *(int *)(*pauVar8 + 4);
          auVar2._8_4_ = auVar3._8_4_ + *(int *)(*pauVar8 + 8);
          auVar2._12_4_ = auVar3._12_4_ + *(int *)(*pauVar8 + 0xc);
          *pauVar11 = auVar2;
          if (1 < uVar10) {
            lVar12 = 4;
            lVar9 = uVar10 - 1;
            do {
              auVar5 = vpsubd_avx(auVar2,*(undefined1 (*) [16])(pauVar8[-1] + lVar12 * 4));
              piVar1 = (int *)(*pauVar8 + lVar12 * 4);
              auVar3 = vpmovzxbd_avx(ZEXT416(*(uint *)((long)puVar7 + lVar12)));
              auVar2._0_4_ = auVar5._0_4_ + *piVar1 + auVar3._0_4_;
              auVar2._4_4_ = auVar5._4_4_ + piVar1[1] + auVar3._4_4_;
              auVar2._8_4_ = auVar5._8_4_ + piVar1[2] + auVar3._8_4_;
              auVar2._12_4_ = auVar5._12_4_ + piVar1[3] + auVar3._12_4_;
              *(undefined1 (*) [16])(*pauVar11 + lVar12 * 4) = auVar2;
              lVar12 = lVar12 + 4;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          uVar15 = uVar15 + 1;
          pauVar8 = pauVar11;
        } while (uVar15 < local_60);
      }
      if (1 < local_98) {
        local_50 = local_50 + (local_50 == 0);
        uVar15 = 0;
        do {
          if (uVar10 != 0) {
            uVar13 = 0;
            do {
              uVar17 = FUN_1001578dc(&local_88,uVar13 & 0xffffffff,uVar15 & 0xffffffff,param_7 | 1);
              *(uint *)(lVar16 + uVar13 * 4) =
                   (uint)(byte)uVar17 +
                   ((uint)(byte)((ulong)uVar17 >> 0x20) << 8 | (uint)extraout_var_00[0] << 0x10) +
                   -0x1000000;
              uVar13 = uVar13 + 1;
              uVar10 = local_58;
            } while (local_58 != uVar13);
          }
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + local_38;
        } while (uVar15 != local_50);
      }
    }
    _free(local_70);
  }
  return;
}

