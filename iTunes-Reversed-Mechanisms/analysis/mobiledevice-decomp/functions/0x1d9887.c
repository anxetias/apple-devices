// rea decompile_all
// name: _lzfse_decode_buffer_iboot
// address: 0x1d9887
// body: available
// range: 0x1d9887-0x1da597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _lzfse_decode_buffer_iboot
               (ulong param_1,long param_2,uint *param_3,long param_4,ulong *param_5)

{
  ulong *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ushort uVar20;
  ulong *puVar21;
  ushort uVar22;
  ushort uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  short sVar42;
  short sVar43;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  short sVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined1 auVar41 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined2 uVar36;
  
  ___bzero(param_5 + 7,0x1f60);
  *param_5 = (ulong)param_3;
  param_5[1] = (ulong)param_3;
  puVar15 = (uint *)(param_4 + (long)param_3);
  param_5[2] = (ulong)puVar15;
  param_5[6] = 0;
  param_5[5] = param_1;
  param_5[3] = param_1;
  param_5[4] = param_2 + param_1;
  if (param_4 < 4 || (((uint)param_1 | (uint)(param_2 + param_1)) & 3) != 0) {
                    /* WARNING: Read-only address (ram,0x0032b350) is written */
                    /* WARNING: Read-only address (ram,0x0032b370) is written */
                    /* WARNING: Read-only address (ram,0x003a1d70) is written */
    return 0;
  }
  puVar1 = param_5 + 3;
  puVar13 = param_3 + 1;
  do {
    uVar4 = *param_3;
    *(uint *)(param_5 + 7) = uVar4;
    if ((int)uVar4 < 0x32787662) {
      if (uVar4 == 0x2d787662) {
        if (puVar15 < param_3 + 2) {
          return 0;
        }
        lVar16 = (ulong)*puVar13 + 8;
        if ((long)puVar15 - (long)param_3 < lVar16) {
          return 0;
        }
        iVar5 = _LZFSEIBootBufferPushN(puVar1,(ulong)*puVar13,param_3 + 2);
        if (iVar5 < 0) {
          return 0;
        }
        param_3 = (uint *)(lVar16 + *param_5);
        *param_5 = (ulong)param_3;
      }
      else {
        if (uVar4 != 0x31787662) {
          if (uVar4 != 0x24787662) {
            return 0;
          }
          *param_5 = (ulong)puVar13;
          if (*(int *)((long)param_5 + 0x34) == 0) {
            puVar14 = (undefined4 *)param_5[5];
            uVar8 = 0;
          }
          else {
            puVar14 = (undefined4 *)param_5[5];
            *puVar14 = (int)param_5[6];
            uVar8 = (ulong)*(uint *)((long)param_5 + 0x34);
          }
          return (long)puVar14 + (uVar8 - *puVar1);
        }
LAB_001d99b7:
        *(undefined4 *)(param_5 + 0x68) = 0;
        if (uVar4 == 0x32787662) {
          if (puVar15 < param_3 + 8) {
            return 0;
          }
          uVar8 = *(ulong *)(param_3 + 6);
          uVar4 = (uint)uVar8;
          *(uint *)(param_5 + 0x68) = uVar4;
          if (uVar4 < 0x20) {
            return 0;
          }
          if (puVar15 < (uint *)((uVar8 & 0xffffffff) + (long)param_3)) {
            return 0;
          }
          iVar5 = _lzfseDecodeV1((void *)((long)param_5 + 0x3c),param_3);
          if (iVar5 != 0) {
            return 0;
          }
        }
        else {
          if (puVar15 < param_3 + 0xc1) {
            return 0;
          }
          _memcpy((void *)((long)param_5 + 0x3c),param_3,0x304);
          *(undefined4 *)(param_5 + 0x68) = 0x304;
        }
        lVar37 = 0;
        lVar45 = 0;
        lVar16 = 0x37;
        do {
          uVar4 = *(uint *)((long)param_5 + lVar16 * 2);
          lVar37 = lVar37 + (ulong)(uVar4 & 0xffff);
          lVar45 = lVar45 + (ulong)(ushort)(uVar4 >> 0x10);
          lVar16 = lVar16 + 2;
        } while (lVar16 != 0x4b);
        lVar38 = 0;
        lVar46 = 0;
        lVar16 = 0x4b;
        do {
          uVar12 = *(undefined4 *)((long)param_5 + lVar16 * 2);
          uVar20 = (ushort)((uint)uVar12 >> 0x10);
          lVar38 = lVar38 + ((ulong)CONCAT24(uVar20,uVar12) & 0xffff);
          lVar46 = lVar46 + (ulong)uVar20;
          lVar16 = lVar16 + 2;
        } while (lVar16 != 0x5f);
        lVar39 = 0;
        lVar47 = 0;
        lVar16 = 0x5f;
        do {
          uVar12 = *(undefined4 *)((long)param_5 + lVar16 * 2);
          uVar20 = (ushort)((uint)uVar12 >> 0x10);
          lVar39 = lVar39 + ((ulong)CONCAT24(uVar20,uVar12) & 0xffff);
          lVar47 = lVar47 + (ulong)uVar20;
          lVar16 = lVar16 + 2;
        } while (lVar16 != 0x9f);
        lVar40 = 0;
        lVar48 = 0;
        lVar16 = 0x9f;
        do {
          uVar12 = *(undefined4 *)((long)param_5 + lVar16 * 2);
          uVar20 = (ushort)((uint)uVar12 >> 0x10);
          lVar40 = lVar40 + ((ulong)CONCAT24(uVar20,uVar12) & 0xffff);
          lVar48 = lVar48 + (ulong)uVar20;
          lVar16 = lVar16 + 2;
        } while (lVar16 != 0x19f);
        auVar41._0_2_ = -(ushort)((short)(*(ushort *)((long)param_5 + 0x5c) ^ 0x8000) < -0x7c00);
        sVar42 = -(ushort)((short)(*(ushort *)((long)param_5 + 0x5e) ^ 0x8000) < -0x7c00);
        sVar43 = -(ushort)((short)((ushort)param_5[0xc] ^ 0x8000) < -0x7c00);
        sVar44 = -(ushort)((short)(*(ushort *)((long)param_5 + 0x62) ^ 0x8000) < -0x7c00);
        auVar41._8_8_ =
             (undefined8)
             (CONCAT64(CONCAT42(CONCAT22(sVar44,sVar44),sVar43),CONCAT22(sVar43,sVar44)) >> 0x10);
        auVar41._6_2_ = sVar42;
        auVar41._4_2_ = sVar42;
        auVar41._2_2_ = auVar41._0_2_;
        auVar41 = ~auVar41 & _DAT_0032b370;
        auVar30._0_8_ = auVar41._8_8_;
        auVar30._8_4_ = auVar41._8_4_;
        auVar30._12_4_ = auVar41._12_4_;
        if (((((0x40 < (ulong)(lVar46 + lVar38) || 0x40 < (ulong)(lVar45 + lVar37)) ||
              (0xff < *(ushort *)((long)param_5 + 0x6c) || 0x3f < *(ushort *)((long)param_5 + 0x6a))
              ) || ((char)((0x3f < (ushort)param_5[0xd]) * -0x80 +
                          (10000 < *(uint *)((long)param_5 + 0x4c)) * '\x04') != '\0' ||
                   40000 < (uint)param_5[9])) ||
            (SUB164(auVar30 | auVar41,4) != 0 || SUB164(auVar30 | auVar41,0) != 0)) ||
            ((0x400 < (ulong)(lVar48 + lVar40) || 0x100 < (ulong)(lVar47 + lVar39)) ||
            *(int *)((long)param_5 + 0x3c) != 0x31787662)) {
          return 0;
        }
        uVar4 = *(uint *)((long)param_5 + 0x44);
        if ((long)(param_5[2] - *param_5) < (long)((ulong)(uint)param_5[0x68] + (ulong)uVar4)) {
          return 0;
        }
        lVar16 = 0;
        iVar5 = 0;
        puVar21 = param_5 + 0x1ea;
        do {
          uVar20 = *(ushort *)((long)param_5 + lVar16 * 2 + 0x13e);
          if (uVar20 != 0) {
            uVar28 = (uint)uVar20;
            iVar5 = iVar5 + uVar28;
            if (0x400 < iVar5) {
              return 0;
            }
            iVar6 = 0x1f;
            if (uVar28 != 0) {
              for (; uVar20 >> iVar6 == 0; iVar6 = iVar6 + -1) {
              }
            }
            bVar10 = (byte)iVar6 ^ 0x1f;
            bVar9 = bVar10 - 0x15;
            uVar24 = 0x800 >> (bVar9 & 0x1f);
            bVar10 = bVar10 - 0x16;
            uVar27 = 0;
            do {
              if ((int)uVar27 < (int)(uVar24 - uVar28)) {
                sVar42 = (short)(uVar20 + uVar27 << (bVar9 & 0x1f)) + -0x400;
                bVar11 = bVar9;
              }
              else {
                sVar42 = (short)((uVar20 - uVar24) + uVar27 << (bVar10 & 0x1f));
                bVar11 = bVar10;
              }
              *(byte *)puVar21 = bVar11;
              *(char *)((long)puVar21 + 1) = (char)lVar16;
              *(short *)((long)puVar21 + 2) = sVar42;
              puVar21 = (ulong *)((long)puVar21 + 4);
              uVar27 = uVar27 + 1;
            } while (uVar28 != uVar27);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0x100);
        lVar16 = 0;
        puVar21 = param_5 + 0x6a;
        do {
          uVar20 = *(ushort *)((long)param_5 + lVar16 * 2 + 0x6e);
          if (uVar20 != 0) {
            iVar5 = 0x1f;
            uVar28 = (uint)uVar20;
            if (uVar28 != 0) {
              for (; uVar20 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            bVar10 = (byte)iVar5 ^ 0x1f;
            bVar9 = bVar10 - 0x19;
            uVar24 = 0x80 >> (bVar9 & 0x1f);
            cVar2 = (&_kLSymbolVBits)[lVar16];
            uVar12 = (&_kLSymbolVBase)[lVar16];
            bVar10 = bVar10 - 0x1a;
            uVar27 = 0;
            do {
              if ((int)uVar27 < (int)(uVar24 - uVar28)) {
                sVar42 = (short)(uVar20 + uVar27 << (bVar9 & 0x1f)) + -0x40;
                bVar11 = bVar9;
              }
              else {
                sVar42 = (short)((uVar28 - uVar24) + uVar27 << (bVar10 & 0x1f));
                bVar11 = bVar10;
              }
              *(byte *)puVar21 = bVar11 + cVar2;
              *(char *)((long)puVar21 + 1) = cVar2;
              *(short *)((long)puVar21 + 2) = sVar42;
              *(undefined4 *)((long)puVar21 + 4) = uVar12;
              puVar21 = puVar21 + 1;
              uVar27 = uVar27 + 1;
            } while (uVar20 != uVar27);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0x14);
        lVar16 = 0;
        puVar21 = param_5 + 0xaa;
        do {
          uVar20 = *(ushort *)((long)param_5 + lVar16 * 2 + 0x96);
          if (uVar20 != 0) {
            iVar5 = 0x1f;
            uVar28 = (uint)uVar20;
            if (uVar28 != 0) {
              for (; uVar20 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            bVar10 = (byte)iVar5 ^ 0x1f;
            bVar9 = bVar10 - 0x19;
            uVar24 = 0x80 >> (bVar9 & 0x1f);
            cVar2 = (&_kMSymbolVBits)[lVar16];
            uVar12 = (&_kMSymbolVBase)[lVar16];
            bVar10 = bVar10 - 0x1a;
            uVar27 = 0;
            do {
              if ((int)uVar27 < (int)(uVar24 - uVar28)) {
                sVar42 = (short)(uVar20 + uVar27 << (bVar9 & 0x1f)) + -0x40;
                bVar11 = bVar9;
              }
              else {
                sVar42 = (short)((uVar28 - uVar24) + uVar27 << (bVar10 & 0x1f));
                bVar11 = bVar10;
              }
              *(byte *)puVar21 = bVar11 + cVar2;
              *(char *)((long)puVar21 + 1) = cVar2;
              *(short *)((long)puVar21 + 2) = sVar42;
              *(undefined4 *)((long)puVar21 + 4) = uVar12;
              puVar21 = puVar21 + 1;
              uVar27 = uVar27 + 1;
            } while (uVar20 != uVar27);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0x14);
        lVar16 = 0;
        puVar21 = param_5 + 0xea;
        do {
          uVar20 = *(ushort *)((long)param_5 + lVar16 * 2 + 0xbe);
          if (uVar20 != 0) {
            iVar5 = 0x1f;
            uVar28 = (uint)uVar20;
            if (uVar28 != 0) {
              for (; uVar20 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            bVar10 = (byte)iVar5 ^ 0x1f;
            bVar9 = bVar10 - 0x17;
            uVar24 = 0x200 >> (bVar9 & 0x1f);
            cVar2 = (&_kDSymbolVBits)[lVar16];
            uVar12 = (&_kDSymbolVBase)[lVar16];
            bVar10 = bVar10 - 0x18;
            uVar27 = 0;
            do {
              if ((int)uVar27 < (int)(uVar24 - uVar28)) {
                sVar42 = (short)(uVar20 + uVar27 << (bVar9 & 0x1f)) + -0x100;
                bVar11 = bVar9;
              }
              else {
                sVar42 = (short)((uVar28 - uVar24) + uVar27 << (bVar10 & 0x1f));
                bVar11 = bVar10;
              }
              *(byte *)puVar21 = bVar11 + cVar2;
              *(char *)((long)puVar21 + 1) = cVar2;
              *(short *)((long)puVar21 + 2) = sVar42;
              *(undefined4 *)((long)puVar21 + 4) = uVar12;
              puVar21 = puVar21 + 1;
              uVar27 = uVar27 + 1;
            } while (uVar20 != uVar27);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0x40);
        *(int *)(param_5 + 0x69) = (int)param_5[9];
        uVar28 = (uint)param_5[0x68];
        lVar16 = (ulong)(uint)param_5[10] + (ulong)uVar28;
        uVar8 = *param_5;
        if ((long)(param_5[2] - uVar8) < lVar16) {
          return 0;
        }
        uVar17 = (uint)param_5[10] + uVar8 + (ulong)uVar28;
        param_5[0x3f0] = uVar17;
        param_5[0x3f2] = 0;
        uVar18 = *(ulong *)((long)param_5 + 0x5c);
        param_5[0x3f1] = uVar18;
        uVar24 = (uint)param_5[0xb];
        uVar19 = param_5[1];
        if (uVar24 == 0) {
          if (uVar17 < uVar19 + 7) {
            return 0;
          }
          param_5[0x3f0] = uVar17 - 7;
          uVar12 = *(undefined4 *)(uVar17 - 7);
          *(undefined4 *)((long)param_5 + 0x1f73) = *(undefined4 *)(uVar17 - 4);
          *(undefined4 *)(param_5 + 0x3ee) = uVar12;
          uVar7 = param_5[0x3ee] & 0xffffffffffffff;
          param_5[0x3ee] = uVar7;
          *(undefined4 *)(param_5 + 0x3ef) = 0x38;
          iVar5 = 0x38;
        }
        else {
          if (uVar17 < uVar19 + 8) {
            return 0;
          }
          param_5[0x3f0] = uVar17 - 8;
          uVar7 = *(ulong *)(uVar17 - 8);
          param_5[0x3ee] = uVar7;
          iVar5 = uVar24 + 0x40;
          *(int *)(param_5 + 0x3ef) = iVar5;
          if (uVar24 < 0xfffffff8) {
            return 0;
          }
        }
        if (uVar7 >> ((byte)iVar5 & 0x3f) != 0) {
          return 0;
        }
        uVar36 = (undefined2)(uVar18 >> 0x30);
        auVar33._8_4_ = 0;
        auVar33._0_8_ = uVar18;
        auVar33._12_2_ = uVar36;
        auVar33._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar18 >> 0x20);
        auVar32._12_4_ = auVar33._12_4_;
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar18;
        auVar32._10_2_ = uVar36;
        auVar31._10_6_ = auVar32._10_6_;
        auVar31._8_2_ = uVar36;
        auVar31._0_8_ = uVar18;
        uVar36 = (undefined2)(uVar18 >> 0x10);
        auVar34._8_8_ = auVar31._8_8_;
        auVar34._6_2_ = uVar36;
        auVar34._4_2_ = uVar36;
        auVar34._0_2_ = (undefined2)uVar18;
        auVar34._2_2_ = auVar34._0_2_;
        auVar34 = auVar34 ^ _DAT_0032b350;
        auVar35._0_2_ = -(ushort)((short)DAT_003a1d70 < auVar34._0_2_);
        auVar35._2_2_ = -(ushort)((short)DAT_003a1d70 < auVar34._2_2_);
        auVar35._4_2_ = -(ushort)(DAT_003a1d70._2_2_ < auVar34._4_2_);
        auVar35._6_2_ = -(ushort)(DAT_003a1d70._2_2_ < auVar34._6_2_);
        auVar35._8_2_ = -(ushort)(DAT_003a1d70._4_2_ < auVar34._8_2_);
        auVar35._10_2_ = -(ushort)(DAT_003a1d70._4_2_ < auVar34._10_2_);
        auVar35._12_2_ = -(ushort)(DAT_003a1d70._6_2_ < auVar34._12_2_);
        auVar35._14_2_ = -(ushort)(DAT_003a1d70._6_2_ < auVar34._14_2_);
        uVar12 = movmskps(iVar5,auVar35);
        if ((char)uVar12 != '\0') {
          return 0;
        }
        *(int *)((long)param_5 + 0x344) = *(int *)((long)param_5 + 0x4c);
        if (param_5[2] - uVar8 < lVar16 + (ulong)*(uint *)((long)param_5 + 0x54)) {
          return 0;
        }
        uVar17 = uVar17 + *(uint *)((long)param_5 + 0x54);
        param_5[0x3ec] = uVar17;
        *(ushort *)(param_5 + 0x3ed) = (ushort)param_5[0xd];
        *(ushort *)((long)param_5 + 0x1f6a) = *(ushort *)((long)param_5 + 0x6a);
        *(ushort *)((long)param_5 + 0x1f6c) = *(ushort *)((long)param_5 + 0x6c);
        uVar24 = *(uint *)((long)param_5 + 100);
        if (uVar24 == 0) {
          if (uVar17 < uVar19 + 7) {
            return 0;
          }
          param_5[0x3ec] = uVar17 - 7;
          uVar12 = *(undefined4 *)(uVar17 - 7);
          *(undefined4 *)((long)param_5 + 0x1f53) = *(undefined4 *)(uVar17 - 4);
          *(undefined4 *)(param_5 + 0x3ea) = uVar12;
          uVar18 = param_5[0x3ea] & 0xffffffffffffff;
          param_5[0x3ea] = uVar18;
          *(undefined4 *)(param_5 + 0x3eb) = 0x38;
          iVar5 = 0x38;
        }
        else {
          if (uVar17 < uVar19 + 8) {
            return 0;
          }
          param_5[0x3ec] = uVar17 - 8;
          uVar18 = *(ulong *)(uVar17 - 8);
          param_5[0x3ea] = uVar18;
          iVar5 = uVar24 + 0x40;
          *(int *)(param_5 + 0x3eb) = iVar5;
          if (uVar24 < 0xfffffff8) {
            return 0;
          }
        }
        if (uVar18 >> ((byte)iVar5 & 0x3f) != 0) {
          return 0;
        }
        if (0x3f < (ushort)param_5[0xd]) {
          return 0;
        }
        if (0x3f < *(ushort *)((long)param_5 + 0x6a)) {
          return 0;
        }
        if (0xff < *(ushort *)((long)param_5 + 0x6c)) {
          return 0;
        }
        if (*(int *)((long)param_5 + 0x4c) != 0) {
          uVar28 = 0;
          iVar5 = 0;
          do {
            iVar6 = (int)param_5[0x3eb];
            uVar24 = 0x3fU - iVar6 & 0xfffffff8;
            if ((int)uVar24 < 1) {
              uVar8 = param_5[0x3ea];
            }
            else {
              puVar21 = (ulong *)(param_5[0x3ec] - (ulong)(0x3fU - iVar6 >> 3));
              if (puVar21 < (ulong *)param_5[1]) {
                return 0;
              }
              param_5[0x3ec] = (ulong)puVar21;
              uVar8 = *(ulong *)(&_FSE_mask_lsb64_mtable + (ulong)uVar24 * 8) & *puVar21 |
                      param_5[0x3ea] << ((byte)uVar24 & 0x3f);
              param_5[0x3ea] = uVar8;
              iVar6 = iVar6 + uVar24;
              *(int *)(param_5 + 0x3eb) = iVar6;
            }
            uVar18 = (ulong)(ushort)param_5[0x3ed];
            bVar10 = *(byte *)((long)param_5 + uVar18 * 8 + 0x351);
            lVar16 = (long)iVar6 - (ulong)(byte)param_5[uVar18 + 0x6a];
            uVar24 = (uint)(uVar8 >> ((byte)lVar16 & 0x3f));
            uVar20 = (short)(uVar24 >> (bVar10 & 0x1f)) +
                     *(short *)((long)param_5 + uVar18 * 8 + 0x352);
            iVar29 = (uVar24 & *(uint *)(&_FSE_mask_lsb64_mtable + (ulong)bVar10 * 8)) +
                     *(int *)((long)param_5 + uVar18 * 8 + 0x354);
            *(int *)(param_5 + 0x3eb) = (int)lVar16;
            uVar8 = uVar8 & *(ulong *)(&_FSE_mask_lsb64_mtable + lVar16 * 8);
            param_5[0x3ea] = uVar8;
            *(ushort *)(param_5 + 0x3ed) = uVar20;
            uVar18 = (ulong)*(ushort *)((long)param_5 + 0x1f6a);
            bVar10 = *(byte *)((long)param_5 + uVar18 * 8 + 0x551);
            lVar16 = (long)(int)lVar16 - (ulong)(byte)param_5[uVar18 + 0xaa];
            uVar26 = (uint)(uVar8 >> ((byte)lVar16 & 0x3f));
            uVar22 = (short)(uVar26 >> (bVar10 & 0x1f)) +
                     *(short *)((long)param_5 + uVar18 * 8 + 0x552);
            uVar24 = *(uint *)(&_FSE_mask_lsb64_mtable + (ulong)bVar10 * 8);
            iVar6 = *(int *)((long)param_5 + uVar18 * 8 + 0x554);
            *(int *)(param_5 + 0x3eb) = (int)lVar16;
            uVar8 = uVar8 & *(ulong *)(&_FSE_mask_lsb64_mtable + lVar16 * 8);
            param_5[0x3ea] = uVar8;
            *(ushort *)((long)param_5 + 0x1f6a) = uVar22;
            uVar18 = (ulong)*(ushort *)((long)param_5 + 0x1f6c);
            bVar10 = *(byte *)((long)param_5 + uVar18 * 8 + 0x751);
            lVar16 = (long)(int)lVar16 - (ulong)(byte)param_5[uVar18 + 0xea];
            uVar27 = (uint)(uVar8 >> ((byte)lVar16 & 0x3f));
            uVar23 = (short)(uVar27 >> (bVar10 & 0x1f)) +
                     *(short *)((long)param_5 + uVar18 * 8 + 0x752);
            iVar25 = (uVar27 & *(uint *)(&_FSE_mask_lsb64_mtable + (ulong)bVar10 * 8)) +
                     *(int *)((long)param_5 + uVar18 * 8 + 0x754);
            *(int *)(param_5 + 0x3eb) = (int)lVar16;
            param_5[0x3ea] = uVar8 & *(ulong *)(&_FSE_mask_lsb64_mtable + lVar16 * 8);
            if (iVar25 != 0) {
              iVar5 = iVar25;
            }
            *(ushort *)((long)param_5 + 0x1f6c) = uVar23;
            if (0x3f < uVar20) {
              return 0;
            }
            if (0x3f < uVar22) {
              return 0;
            }
            if (0xff < uVar23) {
              return 0;
            }
            if (iVar29 != 0) {
              iVar25 = *(int *)((long)param_5 + 0x1f94);
              do {
                if (iVar25 == 0) {
                  if ((uint)param_5[0x69] < 4) {
                    return 0;
                  }
                  *(undefined4 *)(param_5 + 0x3f2) = 0;
                  iVar25 = (int)param_5[0x3ef];
                  uVar27 = 0x3fU - iVar25 & 0xfffffff8;
                  if ((int)uVar27 < 1) {
                    uVar8 = param_5[0x3ee];
                  }
                  else {
                    puVar21 = (ulong *)(param_5[0x3f0] - (ulong)(0x3fU - iVar25 >> 3));
                    if (puVar21 < (ulong *)param_5[1]) {
                      return 0;
                    }
                    param_5[0x3f0] = (ulong)puVar21;
                    uVar8 = *(ulong *)(&_FSE_mask_lsb64_mtable + (ulong)uVar27 * 8) & *puVar21 |
                            param_5[0x3ee] << ((byte)uVar27 & 0x3f);
                    iVar25 = iVar25 + uVar27;
                    *(int *)(param_5 + 0x3ef) = iVar25;
                  }
                  uVar27 = *(uint *)((long)param_5 + (ulong)(ushort)param_5[0x3f1] * 4 + 0xf50);
                  iVar25 = iVar25 - (uVar27 & 0xff);
                  *(int *)(param_5 + 0x3ef) = iVar25;
                  uVar18 = *(ulong *)(&_FSE_mask_lsb64_mtable + (long)iVar25 * 8);
                  *(short *)(param_5 + 0x3f1) =
                       (short)(uVar8 >> ((byte)iVar25 & 0x3f)) + (short)(uVar27 >> 0x10);
                  uVar27 = uVar27 >> 8 & 0xff;
                  *(uint *)(param_5 + 0x3f2) = uVar27;
                  uVar3 = *(uint *)((long)param_5 +
                                   (ulong)*(ushort *)((long)param_5 + 0x1f8a) * 4 + 0xf50);
                  iVar25 = iVar25 - (uVar3 & 0xff);
                  *(int *)(param_5 + 0x3ef) = iVar25;
                  uVar19 = uVar8 & uVar18 & *(ulong *)(&_FSE_mask_lsb64_mtable + (long)iVar25 * 8);
                  *(short *)((long)param_5 + 0x1f8a) =
                       (short)((uVar8 & uVar18) >> ((byte)iVar25 & 0x3f)) + (short)(uVar3 >> 0x10);
                  uVar27 = uVar3 & 0xff00 | uVar27;
                  *(uint *)(param_5 + 0x3f2) = uVar27;
                  uVar3 = *(uint *)((long)param_5 +
                                   (ulong)*(ushort *)((long)param_5 + 0x1f8c) * 4 + 0xf50);
                  iVar25 = iVar25 - (uVar3 & 0xff);
                  *(int *)(param_5 + 0x3ef) = iVar25;
                  uVar8 = uVar19 & *(ulong *)(&_FSE_mask_lsb64_mtable + (long)iVar25 * 8);
                  *(short *)((long)param_5 + 0x1f8c) =
                       (short)(uVar19 >> ((byte)iVar25 & 0x3f)) + (short)(uVar3 >> 0x10);
                  uVar27 = (uVar3 & 0xff00) << 8 | uVar27;
                  *(uint *)(param_5 + 0x3f2) = uVar27;
                  uVar3 = *(uint *)((long)param_5 +
                                   (ulong)*(ushort *)((long)param_5 + 0x1f8e) * 4 + 0xf50);
                  iVar25 = iVar25 - (uVar3 & 0xff);
                  *(int *)(param_5 + 0x3ef) = iVar25;
                  param_5[0x3ee] = uVar8 & *(ulong *)(&_FSE_mask_lsb64_mtable + (long)iVar25 * 8);
                  *(short *)((long)param_5 + 0x1f8e) =
                       (short)(uVar8 >> ((byte)iVar25 & 0x3f)) + (short)(uVar3 >> 0x10);
                  uVar27 = (uVar3 & 0xff00) << 0x10 | uVar27;
                  *(uint *)(param_5 + 0x3f2) = uVar27;
                  *(undefined4 *)((long)param_5 + 0x1f94) = 4;
                  *(uint *)(param_5 + 0x69) = (uint)param_5[0x69] - 4;
                }
                else {
                  uVar27 = (uint)param_5[0x3f2];
                }
                iVar25 = _LZFSEIBootBufferPush(puVar1,uVar27 & 0xff);
                if (iVar25 < 0) {
                  return 0;
                }
                *(uint *)(param_5 + 0x3f2) = (uint)param_5[0x3f2] >> 8;
                iVar25 = *(int *)((long)param_5 + 0x1f94) + -1;
                *(int *)((long)param_5 + 0x1f94) = iVar25;
                iVar29 = iVar29 + -1;
              } while (iVar29 != 0);
            }
            iVar6 = _LZFSEIBootBufferCopy(puVar1,(uVar26 & uVar24) + iVar6,iVar5);
            if (iVar6 < 0) {
              return 0;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < *(uint *)((long)param_5 + 0x344));
          uVar28 = (uint)param_5[0x68];
          uVar8 = *param_5;
        }
        param_3 = (uint *)((uVar28 + uVar4) + uVar8);
        *param_5 = (ulong)param_3;
      }
    }
    else {
      if (uVar4 == 0x32787662) goto LAB_001d99b7;
      if (uVar4 != 0x6e787662) {
        return 0;
      }
      iVar5 = _lzfse_decode_lzvn_block_iboot(param_5);
      if (iVar5 < 0) {
        return 0;
      }
      param_3 = (uint *)*param_5;
    }
    puVar15 = (uint *)param_5[2];
    if (puVar15 <= param_3) {
      return 0;
    }
    puVar13 = param_3 + 1;
    if (puVar15 < puVar13) {
      return 0;
    }
  } while( true );
}

