// rea decompile_all
// name: _lzbitmap_fast_decode
// address: 0x1e343c
// body: available
// range: 0x1e343c-0x1e36d4 inclusive
// range: 0x1e3a5c-0x1e3c49 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Switch with 1 destination removed at 0x001e39bc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint _lzbitmap_fast_decode(long param_1,uint param_2,undefined1 (*param_3) [16],ulong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  ushort uVar23;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [15];
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar26 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  unkuint10 Var48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 in_XMM14_Ba;
  char cVar60;
  undefined1 in_XMM14_Bb;
  char cVar61;
  undefined1 in_XMM14_Bc;
  char cVar62;
  undefined1 in_XMM14_Bd;
  char cVar63;
  undefined1 in_XMM14_Be;
  char cVar64;
  undefined1 in_XMM14_Bf;
  char cVar65;
  undefined1 in_XMM14_Bg;
  char cVar66;
  undefined1 in_XMM14_Bh;
  char cVar67;
  undefined1 in_XMM14_Bi;
  char cVar68;
  undefined1 in_XMM14_Bj;
  char cVar69;
  undefined1 in_XMM14_Bk;
  char cVar70;
  undefined1 in_XMM14_Bl;
  char cVar71;
  undefined1 in_XMM14_Bm;
  char cVar72;
  undefined1 in_XMM14_Bn;
  char cVar73;
  undefined1 in_XMM14_Bo;
  char cVar74;
  undefined1 in_XMM14_Bp;
  char cVar75;
  undefined1 auStack_88 [16];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 (*local_60) [16];
  undefined1 local_58 [16];
  int local_3c;
  uint local_38;
  uint local_34;
  undefined1 auVar33 [16];
  
  if (param_2 != 0) {
    local_3c = 1;
    local_38 = (uint)CONCAT62((uint6)(ushort)(-param_2 >> 0x10),8);
    iVar10 = -(uint)(CONCAT13(in_XMM14_Bd,CONCAT12(in_XMM14_Bc,CONCAT11(in_XMM14_Bb,in_XMM14_Ba)))
                    == CONCAT13(in_XMM14_Bd,CONCAT12(in_XMM14_Bc,CONCAT11(in_XMM14_Bb,in_XMM14_Ba)))
                    );
    cVar60 = (char)iVar10;
    cVar61 = (char)((uint)iVar10 >> 8);
    cVar62 = (char)((uint)iVar10 >> 0x10);
    cVar63 = (char)((uint)iVar10 >> 0x18);
    iVar10 = -(uint)(CONCAT13(in_XMM14_Bh,CONCAT12(in_XMM14_Bg,CONCAT11(in_XMM14_Bf,in_XMM14_Be)))
                    == CONCAT13(in_XMM14_Bh,CONCAT12(in_XMM14_Bg,CONCAT11(in_XMM14_Bf,in_XMM14_Be)))
                    );
    cVar64 = (char)iVar10;
    cVar65 = (char)((uint)iVar10 >> 8);
    cVar66 = (char)((uint)iVar10 >> 0x10);
    cVar67 = (char)((uint)iVar10 >> 0x18);
    iVar10 = -(uint)(CONCAT13(in_XMM14_Bl,CONCAT12(in_XMM14_Bk,CONCAT11(in_XMM14_Bj,in_XMM14_Bi)))
                    == CONCAT13(in_XMM14_Bl,CONCAT12(in_XMM14_Bk,CONCAT11(in_XMM14_Bj,in_XMM14_Bi)))
                    );
    cVar68 = (char)iVar10;
    cVar69 = (char)((uint)iVar10 >> 8);
    cVar70 = (char)((uint)iVar10 >> 0x10);
    cVar71 = (char)((uint)iVar10 >> 0x18);
    iVar10 = -(uint)(CONCAT13(in_XMM14_Bp,CONCAT12(in_XMM14_Bo,CONCAT11(in_XMM14_Bn,in_XMM14_Bm)))
                    == CONCAT13(in_XMM14_Bp,CONCAT12(in_XMM14_Bo,CONCAT11(in_XMM14_Bn,in_XMM14_Bm)))
                    );
    cVar72 = (char)iVar10;
    cVar73 = (char)((uint)iVar10 >> 8);
    cVar74 = (char)((uint)iVar10 >> 0x10);
    cVar75 = (char)((uint)iVar10 >> 0x18);
    uVar17 = 0;
    local_34 = param_2;
    local_60 = (undefined1 (*) [16])((long)*param_3 + (param_4 & 0xffffffff));
    auVar51 = _DAT_0032b310;
    do {
      uVar14 = local_34;
      pauVar19 = (undefined1 (*) [16])((long)*param_3 + 5);
      if (local_60 < pauVar19) {
        return 0;
      }
      uVar7 = *(uint *)*param_3;
      pauVar18 = (undefined1 (*) [16])((long)*param_3 + 4);
      uVar6 = uVar7 >> 0x10;
      local_58._0_8_ = CONCAT44(0,uVar6);
      uVar13 = uVar7 & 0xffff;
      if ((uVar13 == 0xffff) && ((*pauVar18)[0] == '\0')) {
        if (uVar7 < 0x10000) break;
        if (local_60 < (undefined1 (*) [16])((long)*pauVar19 + CONCAT44(0,uVar6))) {
          return 0;
        }
        uVar11 = (short)local_34 - (short)uVar17;
        if (uVar6 + uVar17 <= local_34) {
          uVar11 = (ushort)(uVar7 >> 0x10);
        }
        local_58._0_8_ = CONCAT62(0,uVar11);
        _memcpy((void *)((ulong)uVar17 + param_1),pauVar19,CONCAT62(0,uVar11));
        iVar10 = -(uint)(CONCAT13(cVar63,CONCAT12(cVar62,CONCAT11(cVar61,cVar60))) ==
                        CONCAT13(cVar63,CONCAT12(cVar62,CONCAT11(cVar61,cVar60))));
        cVar60 = (char)iVar10;
        cVar61 = (char)((uint)iVar10 >> 8);
        cVar62 = (char)((uint)iVar10 >> 0x10);
        cVar63 = (char)((uint)iVar10 >> 0x18);
        iVar10 = -(uint)(CONCAT13(cVar67,CONCAT12(cVar66,CONCAT11(cVar65,cVar64))) ==
                        CONCAT13(cVar67,CONCAT12(cVar66,CONCAT11(cVar65,cVar64))));
        cVar64 = (char)iVar10;
        cVar65 = (char)((uint)iVar10 >> 8);
        cVar66 = (char)((uint)iVar10 >> 0x10);
        cVar67 = (char)((uint)iVar10 >> 0x18);
        iVar10 = -(uint)(CONCAT13(cVar71,CONCAT12(cVar70,CONCAT11(cVar69,cVar68))) ==
                        CONCAT13(cVar71,CONCAT12(cVar70,CONCAT11(cVar69,cVar68))));
        cVar68 = (char)iVar10;
        cVar69 = (char)((uint)iVar10 >> 8);
        cVar70 = (char)((uint)iVar10 >> 0x10);
        cVar71 = (char)((uint)iVar10 >> 0x18);
        iVar10 = -(uint)(CONCAT13(cVar75,CONCAT12(cVar74,CONCAT11(cVar73,cVar72))) ==
                        CONCAT13(cVar75,CONCAT12(cVar74,CONCAT11(cVar73,cVar72))));
        cVar72 = (char)iVar10;
        cVar73 = (char)((uint)iVar10 >> 8);
        cVar74 = (char)((uint)iVar10 >> 0x10);
        cVar75 = (char)((uint)iVar10 >> 0x18);
        uVar17 = uVar17 + local_58._0_4_;
        param_3 = (undefined1 (*) [16])((long)*pauVar19 + local_58._0_8_);
        auVar51 = _DAT_0032b310;
      }
      else if ((local_34 < uVar17 + 0x80) || (local_60 < (undefined1 (*) [16])(param_3[0xb] + 4))) {
        uVar12 = uVar13 - (uVar13 >> 1 & 0x5555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        puVar15 = (ushort *)(*pauVar18 + (((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18))
        ;
        uVar7 = uVar6 - (uVar7 >> 0x11 & 0x5555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        param_3 = (undefined1 (*) [16])
                  (puVar15 + (((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18));
        if (local_60 < param_3) {
          return 0;
        }
        uVar7 = 1;
        do {
          uVar12 = uVar17;
          if ((uVar6 & uVar7) != 0) {
            local_38 = (uint)*puVar15;
            puVar15 = puVar15 + 1;
          }
          if ((uVar7 & uVar13) == 0) {
            bVar43 = 0;
          }
          else {
            bVar43 = (*pauVar18)[0];
            pauVar18 = (undefined1 (*) [16])(*pauVar18 + 1);
          }
          if (local_60 <
              (undefined1 (*) [16])
              ((long)*param_3 +
              (ulong)(((uint)bVar43 * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c))) {
            return 0;
          }
          if ((uVar12 <= (local_38 & 0xffff) - 1) && (bVar43 != 0xff)) {
            return 0;
          }
          uVar16 = 0;
          while (uVar17 = uVar12 + uVar16, uVar16 != 8) {
            uVar2 = uVar16 & 0x1f;
            pauVar19 = (undefined1 (*) [16])
                       ((ulong)((uVar12 - (local_38 & 0xffff)) + uVar16) + param_1);
            if ((bVar43 >> (uVar16 & 0x1f) & 1) != 0) {
              pauVar19 = param_3;
            }
            uVar16 = uVar16 + 1;
            *(undefined1 *)(param_1 + (ulong)uVar17) = (*pauVar19)[0];
            param_3 = (undefined1 (*) [16])((long)*param_3 + (ulong)((bVar43 >> uVar2 & 1) != 0));
            if (-param_2 + uVar12 + uVar16 == 0) {
              return local_34;
            }
          }
          uVar7 = uVar7 * 2;
        } while ((int)uVar7 < 0x10000);
        uVar17 = uVar12 + 8;
        local_78 = pauVar18;
      }
      else {
        if (uVar17 < 8) {
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          if ((*pauVar18)[0] != -1) {
            return 0;
          }
        }
        uVar13 = uVar13 - (uVar13 >> 1 & 0x5555);
        uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
        uVar8 = (ulong)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        auVar21 = pshuflw(ZEXT416(uVar6),ZEXT416(uVar6),0);
        auVar25._0_4_ = auVar21._0_4_;
        auVar25._4_4_ = auVar25._0_4_;
        auVar25._8_4_ = auVar25._0_4_;
        auVar25._12_4_ = auVar25._0_4_;
        auVar25 = pshufb(_DAT_0032b0f0,auVar25 & _DAT_0032b000);
        uVar11 = auVar21._0_2_;
        auVar29._0_2_ = uVar11 >> 4;
        uVar23 = auVar21._2_2_;
        auVar29._2_2_ = uVar23 >> 4;
        auVar29._4_2_ = uVar11 >> 4;
        auVar29._6_2_ = uVar23 >> 4;
        auVar29._8_2_ = uVar11 >> 4;
        auVar29._10_2_ = uVar23 >> 4;
        auVar29._12_2_ = uVar11 >> 4;
        auVar29._14_2_ = uVar23 >> 4;
        auVar21 = pshufb(_DAT_0032b0f0,auVar29 & _DAT_0032b000);
        lVar24 = auVar21._0_8_ + auVar25._0_8_;
        bVar43 = (char)((ulong)lVar24 >> 8) * '\x02';
        auVar21 = *(undefined1 (*) [16])(&_lzbitmap_fast_unpack_dist + ((uVar6 & 0xff) << 4));
        auVar25 = pshuflw(ZEXT416(local_38),ZEXT416(local_38),0);
        uVar20 = auVar25._0_4_;
        auVar28._4_4_ = uVar20;
        auVar28._0_4_ = uVar20;
        auVar28._8_4_ = uVar20;
        auVar28._12_4_ = uVar20;
        auVar25 = pshufb(*(undefined1 (*) [16])(*pauVar18 + uVar8),auVar21);
        auVar22 = SUB1615((undefined1  [16])0x0,1);
        auVar45[0] = -(auVar21[0] < '\0');
        auVar45[1] = -(auVar21[1] < '\0');
        auVar45[2] = -(auVar21[2] < '\0');
        auVar45[3] = -(auVar21[3] < '\0');
        auVar45[4] = -(auVar21[4] < '\0');
        auVar45[5] = -(auVar21[5] < '\0');
        auVar45[6] = -(auVar21[6] < '\0');
        auVar45[7] = -(auVar21[7] < '\0');
        auVar45[8] = -(auVar21[8] < '\0');
        auVar45[9] = -(auVar21[9] < auVar22[8]);
        auVar45[10] = -(auVar21[10] < auVar22[9]);
        auVar45[0xb] = -(auVar21[0xb] < auVar22[10]);
        auVar45[0xc] = -(auVar21[0xc] < auVar22[0xb]);
        auVar45[0xd] = -(auVar21[0xd] < auVar22[0xc]);
        auVar45[0xe] = -(auVar21[0xe] < auVar22[0xd]);
        auVar45[0xf] = -(auVar21[0xf] < auVar22[0xe]);
        auVar25 = auVar45 & auVar28 | auVar25;
        auVar21 = *(undefined1 (*) [16])(&_lzbitmap_fast_unpack_dist + (uVar7 >> 0x14 & 0xfffffff0))
        ;
        auVar29 = pshufhw(auVar28,auVar25,0xff);
        auVar30._8_4_ = auVar29._8_4_;
        auVar30._4_4_ = auVar30._8_4_;
        auVar30._0_4_ = auVar30._8_4_;
        auVar30._12_4_ = auVar30._8_4_;
        uVar9 = (ulong)(CONCAT11(bVar43,(char)lVar24 * '\x02') & 0xff);
        param_3 = (undefined1 (*) [16])(*pauVar18 + bVar43 + uVar9 + uVar8);
        auVar29 = pshufb(*(undefined1 (*) [16])(*pauVar18 + uVar9 + uVar8),auVar21);
        auVar22 = SUB1615((undefined1  [16])0x0,1);
        auVar53[0] = -(auVar21[0] < '\0');
        auVar53[1] = -(auVar21[1] < '\0');
        auVar53[2] = -(auVar21[2] < '\0');
        auVar53[3] = -(auVar21[3] < '\0');
        auVar53[4] = -(auVar21[4] < '\0');
        auVar53[5] = -(auVar21[5] < '\0');
        auVar53[6] = -(auVar21[6] < '\0');
        auVar53[7] = -(auVar21[7] < '\0');
        auVar53[8] = -(auVar21[8] < '\0');
        auVar53[9] = -(auVar21[9] < auVar22[8]);
        auVar53[10] = -(auVar21[10] < auVar22[9]);
        auVar53[0xb] = -(auVar21[0xb] < auVar22[10]);
        auVar53[0xc] = -(auVar21[0xc] < auVar22[0xb]);
        auVar53[0xd] = -(auVar21[0xd] < auVar22[0xc]);
        auVar53[0xe] = -(auVar21[0xe] < auVar22[0xd]);
        auVar53[0xf] = -(auVar21[0xf] < auVar22[0xe]);
        auVar29 = auVar53 & auVar30 | auVar29;
        local_38 = (uint)auVar29._14_2_;
        if (uVar17 < local_34) {
          lVar24 = *(long *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar7 & 0xff) * 8);
          uVar1 = *(undefined8 *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar7 >> 8 & 0xff) * 8);
          bVar43 = (byte)(((uVar7 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c);
          auVar21 = ZEXT216(CONCAT11(bVar43,bVar43));
          auVar45 = pshuflw(auVar21,auVar21,0);
          cVar36 = (char)((ulong)uVar1 >> 8);
          auVar21[9] = auVar45[1] + cVar36;
          auVar21[8] = auVar45[0] + (char)uVar1;
          cVar37 = (char)((ulong)uVar1 >> 0x10);
          auVar21[10] = auVar45[2] + cVar37;
          cVar38 = (char)((ulong)uVar1 >> 0x18);
          auVar21[0xb] = auVar45[3] + cVar38;
          cVar39 = (char)((ulong)uVar1 >> 0x20);
          auVar21[0xc] = auVar45[4] + cVar39;
          cVar40 = (char)((ulong)uVar1 >> 0x28);
          auVar21[0xd] = auVar45[5] + cVar40;
          cVar41 = (char)((ulong)uVar1 >> 0x30);
          auVar21[0xe] = auVar45[6] + cVar41;
          cVar42 = (char)((ulong)uVar1 >> 0x38);
          auVar21[0xf] = auVar45[7] + cVar42;
          auVar21._0_8_ = lVar24;
          auVar22 = SUB1615((undefined1  [16])0x0,1);
          auVar34[0] = -((char)lVar24 < '\0');
          auVar34[1] = -((char)((ulong)lVar24 >> 8) < '\0');
          auVar34[2] = -((char)((ulong)lVar24 >> 0x10) < '\0');
          auVar34[3] = -((char)((ulong)lVar24 >> 0x18) < '\0');
          auVar34[4] = -((char)((ulong)lVar24 >> 0x20) < '\0');
          auVar34[5] = -((char)((ulong)lVar24 >> 0x28) < '\0');
          auVar34[6] = -((char)((ulong)lVar24 >> 0x30) < '\0');
          auVar34[7] = -(lVar24 < 0);
          auVar34[8] = -((char)uVar1 < '\0');
          auVar34[9] = -(cVar36 < auVar22[8]);
          auVar34[10] = -(cVar37 < auVar22[9]);
          auVar34[0xb] = -(cVar38 < auVar22[10]);
          auVar34[0xc] = -(cVar39 < auVar22[0xb]);
          auVar34[0xd] = -(cVar40 < auVar22[0xc]);
          auVar34[0xe] = -(cVar41 < auVar22[0xd]);
          auVar34[0xf] = -(cVar42 < auVar22[0xe]);
          auVar21 = pshufb(*pauVar18,auVar34 | auVar21);
          auVar26._0_8_ = auVar29._8_8_;
          auVar26._8_4_ = auVar29._8_4_;
          local_58._12_4_ = auVar29._12_4_;
          local_58._0_12_ = auVar26;
          uStack_70 = auVar21._12_4_;
          local_78 = (undefined1 (*) [16])CONCAT44(uStack_70,uStack_70);
          uStack_6c = uStack_70;
          auVar44._0_8_ = auVar25._8_8_;
          auVar44._8_4_ = auVar25._8_4_;
          uVar7 = 0;
          do {
            pauVar19 = auVar21._0_8_;
            Var48 = auVar25._0_10_;
            switch(uVar7) {
            case 0:
              pauVar19 = (undefined1 (*) [16])CONCAT44(auVar21._4_4_,auVar21._4_4_);
              Var48 = auVar44._0_10_;
              break;
            case 1:
              pauVar19 = auVar21._8_8_;
              Var48 = auVar29._0_10_;
              break;
            case 2:
              pauVar19 = local_78;
              Var48 = auVar26._0_10_;
            }
            uVar11 = (ushort)(Var48 >> 0x30);
            auVar4._10_2_ = 0;
            auVar4._0_10_ = Var48;
            auVar4._12_2_ = uVar11;
            auVar5._8_2_ = (short)(Var48 >> 0x20);
            auVar5._0_8_ = (long)Var48;
            auVar5._10_4_ = auVar4._10_4_;
            auVar3._2_10_ = SUB1610(ZEXT616(auVar5._8_6_) << 0x40,6);
            auVar3._0_2_ = (short)(Var48 >> 0x10);
            auVar58._4_4_ = uVar17;
            auVar58._0_4_ = uVar17;
            auVar58._8_4_ = uVar17;
            auVar58._12_4_ = uVar17;
            cVar39 = (char)((ulong)pauVar19 >> 0x18);
            cVar38 = (char)((ulong)pauVar19 >> 0x10);
            uVar6 = (uint)pauVar19;
            cVar37 = (char)((ulong)pauVar19 >> 8);
            cVar36 = (char)pauVar19;
            auVar46[0] = -(cVar36 == cVar60);
            auVar46[1] = -(cVar36 == cVar61);
            auVar46[2] = -(cVar36 == cVar62);
            auVar46[3] = -(cVar36 == cVar63);
            auVar46[4] = -(cVar37 == cVar64);
            auVar46[5] = -(cVar37 == cVar65);
            auVar46[6] = -(cVar37 == cVar66);
            auVar46[7] = -(cVar37 == cVar67);
            auVar46[8] = -(cVar38 == cVar68);
            auVar46[9] = -(cVar38 == cVar69);
            auVar46[10] = -(cVar38 == cVar70);
            auVar46[0xb] = -(cVar38 == cVar71);
            auVar46[0xc] = -(cVar39 == cVar72);
            auVar46[0xd] = -(cVar39 == cVar73);
            auVar46[0xe] = -(cVar39 == cVar74);
            auVar46[0xf] = -(cVar39 == cVar75);
            auStack_88._0_4_ = uVar17 - (ushort)Var48;
            auStack_88._4_4_ = (uVar17 - auVar3._0_4_) + 8;
            auStack_88._8_4_ = (uVar17 - auVar5._8_4_) + 0x10;
            auStack_88._12_4_ = (uVar17 - uVar11) + 0x18;
            auStack_88 = ~auVar46 & auStack_88;
            auVar31._0_4_ = uVar17 - 8;
            auVar31._4_4_ = uVar17;
            auVar31._8_4_ = uVar17 + 8;
            auVar31._12_4_ = uVar17 + 0x10;
            auVar45 = auStack_88 ^ auVar51;
            auVar31 = auVar31 ^ auVar51;
            auVar35._0_4_ = -(uint)(auVar31._0_4_ < auVar45._0_4_);
            auVar35._4_4_ = -(uint)(auVar31._4_4_ < auVar45._4_4_);
            auVar35._8_4_ = -(uint)(auVar31._8_4_ < auVar45._8_4_);
            auVar35._12_4_ = -(uint)(auVar31._12_4_ < auVar45._12_4_);
            iVar10 = movmskps((&DAT_001e3c4c)[uVar7] + 0x1e3c4c,auVar35);
            if (iVar10 != 0) {
              local_3c = 0;
            }
            if (iVar10 != 0) {
              return 0;
            }
            uVar13 = uVar6 - (uVar6 >> 1 & 0x5555);
            uVar13 = (uVar13 >> 2 & 0x3333) + (uVar13 & 0x3333);
            uVar13 = (uVar13 >> 4) + uVar13 & 0xf0f;
            uVar13 = (uVar13 >> 8) + uVar13 & 0xff;
            lVar24 = *(long *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar6 & 0xff) * 8);
            uVar1 = *(undefined8 *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar6 >> 8 & 0xff) * 8);
            auVar22 = SUB1615((undefined1  [16])0x0,1);
            auVar52[0] = -((char)lVar24 < '\0');
            auVar52[1] = -((char)((ulong)lVar24 >> 8) < '\0');
            auVar52[2] = -((char)((ulong)lVar24 >> 0x10) < '\0');
            auVar52[3] = -((char)((ulong)lVar24 >> 0x18) < '\0');
            auVar52[4] = -((char)((ulong)lVar24 >> 0x20) < '\0');
            auVar52[5] = -((char)((ulong)lVar24 >> 0x28) < '\0');
            auVar52[6] = -((char)((ulong)lVar24 >> 0x30) < '\0');
            auVar52[7] = -(lVar24 < 0);
            auVar52[8] = -((char)uVar1 < '\0');
            cVar36 = (char)((ulong)uVar1 >> 8);
            auVar52[9] = -(cVar36 < auVar22[8]);
            cVar37 = (char)((ulong)uVar1 >> 0x10);
            auVar52[10] = -(cVar37 < auVar22[9]);
            cVar38 = (char)((ulong)uVar1 >> 0x18);
            auVar52[0xb] = -(cVar38 < auVar22[10]);
            cVar39 = (char)((ulong)uVar1 >> 0x20);
            auVar52[0xc] = -(cVar39 < auVar22[0xb]);
            cVar40 = (char)((ulong)uVar1 >> 0x28);
            auVar52[0xd] = -(cVar40 < auVar22[0xc]);
            cVar41 = (char)((ulong)uVar1 >> 0x30);
            auVar52[0xe] = -(cVar41 < auVar22[0xd]);
            cVar42 = (char)((ulong)uVar1 >> 0x38);
            auVar52[0xf] = -(cVar42 < auVar22[0xe]);
            bVar43 = (byte)(((uVar6 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c);
            auVar45 = ZEXT216(CONCAT11(bVar43,bVar43));
            auVar45 = pshuflw(auVar45,auVar45,0);
            auVar32[9] = auVar45[1] + cVar36;
            auVar32[8] = auVar45[0] + (char)uVar1;
            auVar32[10] = auVar45[2] + cVar37;
            auVar32[0xb] = auVar45[3] + cVar38;
            auVar32[0xc] = auVar45[4] + cVar39;
            auVar32[0xd] = auVar45[5] + cVar40;
            auVar32[0xe] = auVar45[6] + cVar41;
            auVar32[0xf] = auVar45[7] + cVar42;
            auVar32._0_8_ = lVar24;
            auVar32 = auVar32 | auVar52;
            auVar45 = pshufb(*param_3,auVar32);
            uVar11 = (ushort)((ulong)pauVar19 >> 0x10);
            auVar27[0] = -(auVar32[0] == cVar60);
            auVar27[1] = -(auVar32[1] == cVar61);
            auVar27[2] = -(auVar32[2] == cVar62);
            auVar27[3] = -(auVar32[3] == cVar63);
            auVar27[4] = -(auVar32[4] == cVar64);
            auVar27[5] = -(auVar32[5] == cVar65);
            auVar27[6] = -(auVar32[6] == cVar66);
            auVar27[7] = -(auVar32[7] == cVar67);
            auVar27[8] = -(auVar32[8] == cVar68);
            auVar27[9] = -(auVar32[9] == cVar69);
            auVar27[10] = -(auVar32[10] == cVar70);
            auVar27[0xb] = -(auVar32[0xb] == cVar71);
            auVar33[0xc] = -(auVar32[0xc] == cVar72);
            auVar33._0_12_ = auVar27;
            auVar33[0xd] = -(auVar32[0xd] == cVar73);
            auVar33[0xe] = -(auVar32[0xe] == cVar74);
            auVar33[0xf] = -(auVar32[0xf] == cVar75);
            uVar6 = uVar11 & 0xff;
            lVar24 = *(long *)(&_lzbitmap_unpack_perm_table + (ulong)uVar6 * 8);
            uVar1 = *(undefined8 *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar11 >> 8) * 8);
            auVar22 = SUB1615((undefined1  [16])0x0,1);
            auVar57[0] = -((char)lVar24 < '\0');
            auVar57[1] = -((char)((ulong)lVar24 >> 8) < '\0');
            auVar57[2] = -((char)((ulong)lVar24 >> 0x10) < '\0');
            auVar57[3] = -((char)((ulong)lVar24 >> 0x18) < '\0');
            auVar57[4] = -((char)((ulong)lVar24 >> 0x20) < '\0');
            auVar57[5] = -((char)((ulong)lVar24 >> 0x28) < '\0');
            auVar57[6] = -((char)((ulong)lVar24 >> 0x30) < '\0');
            auVar57[7] = -(lVar24 < 0);
            auVar57[8] = -((char)uVar1 < '\0');
            cVar36 = (char)((ulong)uVar1 >> 8);
            auVar57[9] = -(cVar36 < auVar22[8]);
            cVar37 = (char)((ulong)uVar1 >> 0x10);
            auVar57[10] = -(cVar37 < auVar22[9]);
            cVar38 = (char)((ulong)uVar1 >> 0x18);
            auVar57[0xb] = -(cVar38 < auVar22[10]);
            cVar39 = (char)((ulong)uVar1 >> 0x20);
            auVar57[0xc] = -(cVar39 < auVar22[0xb]);
            cVar40 = (char)((ulong)uVar1 >> 0x28);
            auVar57[0xd] = -(cVar40 < auVar22[0xc]);
            cVar41 = (char)((ulong)uVar1 >> 0x30);
            auVar57[0xe] = -(cVar41 < auVar22[0xd]);
            cVar42 = (char)((ulong)uVar1 >> 0x38);
            auVar57[0xf] = -(cVar42 < auVar22[0xe]);
            uVar6 = (uVar6 * 0x8040201 >> 3 & 0x11111111) * 0x11111111;
            bVar43 = (byte)(uVar6 >> 0x1c);
            auVar53 = ZEXT216(CONCAT11(bVar43,bVar43));
            auVar53 = pshuflw(auVar53,auVar53,0);
            auVar55[9] = auVar53[1] + cVar36;
            auVar55[8] = auVar53[0] + (char)uVar1;
            auVar55[10] = auVar53[2] + cVar37;
            auVar55[0xb] = auVar53[3] + cVar38;
            auVar55[0xc] = auVar53[4] + cVar39;
            auVar55[0xd] = auVar53[5] + cVar40;
            auVar55[0xe] = auVar53[6] + cVar41;
            auVar55[0xf] = auVar53[7] + cVar42;
            auVar55._0_8_ = lVar24;
            auVar55 = auVar55 | auVar57;
            auVar53 = pshufb(*(undefined1 (*) [16])((long)*param_3 + (ulong)uVar13),auVar55);
            auVar56[0] = -(auVar55[0] == cVar60);
            auVar56[1] = -(auVar55[1] == cVar61);
            auVar56[2] = -(auVar55[2] == cVar62);
            auVar56[3] = -(auVar55[3] == cVar63);
            auVar56[4] = -(auVar55[4] == cVar64);
            auVar56[5] = -(auVar55[5] == cVar65);
            auVar56[6] = -(auVar55[6] == cVar66);
            auVar56[7] = -(auVar55[7] == cVar67);
            auVar56[8] = -(auVar55[8] == cVar68);
            auVar56[9] = -(auVar55[9] == cVar69);
            auVar56[10] = -(auVar55[10] == cVar70);
            auVar56[0xb] = -(auVar55[0xb] == cVar71);
            auVar56[0xc] = -(auVar55[0xc] == cVar72);
            auVar56[0xd] = -(auVar55[0xd] == cVar73);
            auVar56[0xe] = -(auVar55[0xe] == cVar74);
            auVar56[0xf] = -(auVar55[0xf] == cVar75);
            uVar12 = auStack_88._0_4_;
            auVar49._0_4_ = uVar12 + 8;
            auVar49._4_4_ = auStack_88._4_4_ + 8;
            auVar49._8_4_ = auStack_88._8_4_ + 8;
            auVar49._12_4_ = auStack_88._12_4_ + 8;
            auVar58 = auVar58 ^ auVar51;
            auVar49 = auVar49 ^ auVar51;
            auVar50._0_4_ = -(uint)(auVar58._0_4_ < auVar49._0_4_);
            auVar50._4_4_ = -(uint)(auVar58._4_4_ < auVar49._4_4_);
            auVar50._8_4_ = -(uint)(auVar58._8_4_ < auVar49._8_4_);
            auVar50._12_4_ = -(uint)(auVar58._12_4_ < auVar49._12_4_);
            iVar10 = movmskps(uVar6 >> 0x1c,auVar50);
            if (iVar10 != 0) {
              auVar59._0_8_ = auVar45._8_8_;
              auVar59._8_4_ = auVar45._8_4_;
              auVar59._12_4_ = auVar45._12_4_;
              uVar14 = 0;
              uVar8 = *(ulong *)(param_1 + (ulong)uVar12);
              auVar51 = auVar33;
              do {
                *(ulong *)(param_1 + (ulong)uVar17) = uVar8 & auVar51._0_8_ | auVar45._0_8_;
                uVar17 = uVar17 + 8;
                uVar14 = uVar14 + 1;
                uVar8 = *(ulong *)(param_1 + (ulong)*(uint *)(auStack_88 + (ulong)(uVar14 & 3) * 4))
                ;
                auVar51[4] = auVar33[0xc];
                auVar51._0_4_ = auVar27._8_4_;
                auVar51[5] = auVar33[0xd];
                auVar51[6] = auVar33[0xe];
                auVar51[7] = auVar33[0xf];
                auVar51[8] = auVar27[8];
                auVar51[9] = auVar27[9];
                auVar51[10] = auVar27[10];
                auVar51[0xb] = auVar27[0xb];
                auVar51[0xc] = auVar33[0xc];
                auVar51[0xd] = auVar33[0xd];
                auVar51[0xe] = auVar33[0xe];
                auVar51[0xf] = auVar33[0xf];
                auVar45 = auVar59;
              } while( true );
            }
            auVar47._8_8_ = *(undefined8 *)(param_1 + (ulong)auStack_88._4_4_);
            auVar47._0_8_ = *(undefined8 *)(param_1 + (ulong)uVar12);
            auVar54._8_8_ = *(undefined8 *)(param_1 + (ulong)auStack_88._12_4_);
            auVar54._0_8_ = *(undefined8 *)(param_1 + (ulong)auStack_88._8_4_);
            *(undefined1 (*) [16])(param_1 + 0x10 + (ulong)uVar17) = auVar54 & auVar56 | auVar53;
            *(undefined1 (*) [16])(param_1 + (ulong)uVar17) = auVar47 & auVar33 | auVar45;
            uVar17 = uVar17 + 0x20;
            uVar6 = (uint)uVar11 - (uVar11 >> 1 & 0x5555);
            uVar6 = (uVar6 >> 2 & 0x3333) + (uVar6 & 0x3333);
            uVar6 = (uVar6 >> 4) + uVar6 & 0xf0f;
            param_3 = (undefined1 (*) [16])
                      ((long)*param_3 + (ulong)((uVar6 >> 8) + uVar6 + uVar13 & 0xff));
          } while ((uVar7 < 3) && (uVar7 = uVar7 + 1, uVar17 < local_34));
        }
      }
    } while (uVar17 < uVar14);
    if (local_3c != 0) {
      return uVar17;
    }
  }
                    /* WARNING: Read-only address (ram,0x0032b000) is written */
                    /* WARNING: Read-only address (ram,0x0032b0f0) is written */
                    /* WARNING: Read-only address (ram,0x0032b310) is written */
                    /* WARNING: Read-only address (ram,0x0032b000) is written */
                    /* WARNING: Read-only address (ram,0x0032b0f0) is written */
                    /* WARNING: Read-only address (ram,0x0032b310) is written */
  return 0;
}

