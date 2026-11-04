// rea decompile_all
// name: _lzbitmap_decode
// address: 0x57eac
// body: available
// range: 0x57eac-0x58acc inclusive
// range: 0x58c25-0x58e67 inclusive
// range: 0x58f84-0x58f9a inclusive
// range: 0x58fb5-0x59108 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Switch with 1 destination removed at 0x00058b38 */
/* WARNING: Switch with 1 destination removed at 0x00058ed9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _lzbitmap_decode(long param_1,uint param_2,char *param_3,uint param_4,long param_5)

{
  char *pcVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [12];
  unkbyte10 Var8;
  uint uVar9;
  ulong uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  uint *puVar20;
  ulong uVar21;
  int iVar22;
  bool bVar23;
  undefined1 uVar24;
  byte bVar25;
  byte bVar26;
  undefined1 auVar27 [12];
  byte bVar36;
  byte bVar39;
  byte bVar41;
  byte bVar43;
  byte bVar45;
  byte bVar47;
  char cVar49;
  undefined8 uVar50;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char cVar37;
  char cVar40;
  char cVar42;
  char cVar44;
  char cVar46;
  char cVar48;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar38 [15];
  undefined1 auVar34 [16];
  undefined1 auVar51 [12];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  long lVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  uint uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar103 [16];
  undefined1 auVar105 [12];
  undefined8 uVar104;
  undefined1 auVar106 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar116 [12];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  long lVar124;
  undefined1 auVar125 [16];
  undefined1 in_XMM14 [16];
  undefined1 in_XMM15 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  uint *local_1c8;
  char *local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  long local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  long local_d0;
  undefined1 local_c8 [16];
  ulong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 (*local_70) [16];
  ulong *local_68;
  uint local_5c;
  uint *local_58;
  undefined1 (*local_50) [16];
  int local_48;
  uint local_44;
  undefined1 (*local_40) [16];
  uint local_34;
  undefined1 auVar35 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar64 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar70 [16];
  undefined1 auVar68 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar107 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  
  if (param_4 < 4) {
    return 0;
  }
  if (*param_3 != 'Z') {
    return 0;
  }
  if (param_3[1] != 'B') {
    return 0;
  }
  if (param_3[2] != 'M') {
    return 0;
  }
  bVar26 = param_3[3];
  if (0xf < bVar26) {
    return 0;
  }
  if ((bVar26 & 3) - 2 < 2) {
    return 0;
  }
  local_5c = 0x4000;
  if ((bVar26 & 3) != 0) {
    local_5c = 0x8000;
  }
  if (param_2 == 0) {
    return 0;
  }
  local_dc = (bVar26 < 8) + 3;
  local_d4 = local_5c >> 4;
  local_1c0 = "/System/Library/Frameworks/DiskArbitration.framework/Versions/A/DiskArbitration" +
              param_5 + 0x40;
  uVar24 = (undefined1)local_dc;
  auVar93 = ZEXT216(CONCAT11(uVar24,uVar24));
  local_268 = pshuflw(auVar93,auVar93,0);
  local_d8 = ((bVar26 < 8 ^ 0xd) + (bVar26 >> 2 | 0xfffffffe) + 1) * 10;
  local_88 = (undefined1  [16])0x0;
  uVar10 = 4;
  local_48 = 1;
  local_1b8 = (undefined1  [16])0x0;
  uVar21 = 0;
  local_d0 = param_5;
  local_34 = param_2;
  local_e0 = (uint)bVar26;
  do {
    uVar18 = local_dc;
    auVar93 = _DAT_0032b000;
    iVar12 = (int)uVar10;
    uVar9 = iVar12 + 6;
    if (param_4 < uVar9) {
      return 0;
    }
    puVar20 = (uint *)(param_3 + (uVar10 & 0xffffffff));
    uVar17 = *puVar20 & 0xffffff;
    local_40 = (undefined1 (*) [16])(ulong)uVar17;
    iVar22 = (int)uVar21;
    if (local_40 == (undefined1 (*) [16])0x6 && *(uint *)((long)puVar20 + 2) < 0x100) break;
    if (uVar17 < 6) {
      return 0;
    }
    uVar14 = *(uint *)((long)puVar20 + 2) >> 8;
    if (local_5c < uVar14) {
      return 0;
    }
    if (uVar14 + 6 < uVar17) {
      return 0;
    }
    uVar2 = uVar14 + iVar22;
    if (local_34 <= uVar14 + iVar22) {
      uVar2 = local_34;
    }
    uVar15 = (ulong)uVar2;
    local_a8 = in_XMM14;
    local_98 = in_XMM15;
    if (uVar14 + 6 == uVar17) {
      if (param_4 < (uVar2 - iVar22) + uVar9) {
        return 0;
      }
      _memcpy((void *)(uVar21 + param_1),param_3 + uVar9,(ulong)(uVar2 - iVar22));
      uVar10 = (ulong)(uint)(iVar12 + (int)local_40);
      uVar21 = uVar15;
    }
    else {
      if (uVar17 < 0x20) {
        return 0;
      }
      if (param_4 < iVar12 + uVar17) {
        return 0;
      }
      if (*(uint *)((long)puVar20 + 5) < 0xf00) {
        return 0;
      }
      uVar14 = *(uint *)((long)puVar20 + 5) >> 8;
      local_70 = (undefined1 (*) [16])(ulong)uVar14;
      uVar9 = puVar20[2] >> 8;
      local_68 = (ulong *)(ulong)uVar9;
      if (uVar9 < uVar14) {
        return 0;
      }
      uVar14 = *(uint *)((long)puVar20 + 0xb) >> 8;
      if (uVar14 < uVar9) {
        return 0;
      }
      uVar9 = uVar17 - 0x11;
      if (uVar9 < uVar14) {
        return 0;
      }
      local_b0 = (ulong)(iVar12 + uVar17);
      local_40 = (undefined1 (*) [16])((long)local_40 + (long)puVar20);
      local_118._0_4_ = (uVar2 - iVar22) + 0x3f >> 3 & 0xfffffff8;
      uVar17 = 0;
      local_248 = local_88;
      uVar104 = local_1b8._0_8_;
      uVar50 = local_1b8._8_8_;
      do {
        local_248[uVar17 & 0xf] = 0;
        local_238 = uVar104;
        uStack_230 = uVar50;
        *(char *)((long)&local_238 + (ulong)(uVar17 & 0xf)) = (char)uVar17;
        uVar96 = local_d8;
        uVar17 = uVar17 + 1;
        uVar104 = local_238;
        uVar50 = uStack_230;
      } while (uVar18 != uVar17);
      local_50 = (undefined1 (*) [16])CONCAT44(local_50._4_4_,uVar9);
      uVar17 = 0;
      auVar53 = local_248;
      local_228 = local_238;
      uStack_220 = uStack_230;
      local_58 = puVar20;
      do {
        uVar3 = *(ushort *)((long)puVar20 + (ulong)(uVar17 >> 3) + (ulong)uVar9) >>
                ((byte)uVar17 & 6);
        local_218 = auVar53;
        local_218[uVar18 & 0xf] = (char)uVar3;
        auVar53 = local_218;
        *(byte *)((long)&local_228 + (ulong)(uVar18 & 0xf)) = (byte)(uVar3 >> 8) & 3;
        uVar17 = uVar17 + 10;
        uVar18 = uVar18 + 1;
      } while (uVar96 != uVar17);
      local_1b8._8_8_ = uStack_220;
      local_1b8._0_8_ = local_228;
      if ((local_e0 & 4) == 0) {
        if (local_d4 < uVar9 - uVar14) {
          return 0;
        }
        local_88 = auVar53;
        if ((uint)local_50 != uVar14) {
          uVar10 = 0;
          do {
            auVar53 = *(undefined1 (*) [16])((long)local_58 + uVar10 + uVar14);
            auVar52 = auVar53 & auVar93;
            auVar28._0_2_ = auVar53._0_2_ >> 4;
            auVar28._2_2_ = auVar53._2_2_ >> 4;
            auVar28._4_2_ = auVar53._4_2_ >> 4;
            auVar28._6_2_ = auVar53._6_2_ >> 4;
            auVar28._8_2_ = auVar53._8_2_ >> 4;
            auVar28._10_2_ = auVar53._10_2_ >> 4;
            auVar28._12_2_ = auVar53._12_2_ >> 4;
            auVar28._14_2_ = auVar53._14_2_ >> 4;
            auVar28 = auVar28 & auVar93;
            auVar110._0_14_ = auVar52._0_14_;
            auVar110[0xe] = auVar52[7];
            auVar110[0xf] = auVar28[7];
            auVar53._14_2_ = auVar110._14_2_;
            auVar53._0_13_ = auVar52._0_13_;
            auVar53[0xd] = auVar28[6];
            auVar117._13_3_ = auVar53._13_3_;
            auVar117._0_12_ = auVar52._0_12_;
            auVar117[0xc] = auVar52[6];
            auVar123._12_4_ = auVar117._12_4_;
            auVar123._0_11_ = auVar52._0_11_;
            auVar123[0xb] = auVar28[5];
            auVar68._11_5_ = auVar123._11_5_;
            auVar68._0_10_ = auVar52._0_10_;
            auVar68[10] = auVar52[5];
            auVar67._10_6_ = auVar68._10_6_;
            auVar67._0_9_ = auVar52._0_9_;
            auVar67[9] = auVar28[4];
            auVar66._9_7_ = auVar67._9_7_;
            auVar66._0_8_ = auVar52._0_8_;
            auVar66[8] = auVar52[4];
            auVar65._8_8_ = auVar66._8_8_;
            auVar65[7] = auVar28[3];
            auVar65[6] = auVar52[3];
            auVar65[5] = auVar28[2];
            auVar65[4] = auVar52[2];
            auVar65[3] = auVar28[1];
            auVar65[2] = auVar52[1];
            auVar65[0] = auVar52[0];
            auVar65[1] = auVar28[0];
            pcVar1 = local_1c0 + uVar10 * 2 + 0x10;
            *pcVar1 = auVar52[8];
            pcVar1[1] = auVar28[8];
            pcVar1[2] = auVar52[9];
            pcVar1[3] = auVar28[9];
            pcVar1[4] = auVar52[10];
            pcVar1[5] = auVar28[10];
            pcVar1[6] = auVar52[0xb];
            pcVar1[7] = auVar28[0xb];
            pcVar1[8] = auVar52[0xc];
            pcVar1[9] = auVar28[0xc];
            pcVar1[10] = auVar52[0xd];
            pcVar1[0xb] = auVar28[0xd];
            pcVar1[0xc] = auVar52[0xe];
            pcVar1[0xd] = auVar28[0xe];
            pcVar1[0xe] = auVar52[0xf];
            pcVar1[0xf] = auVar28[0xf];
            *(undefined1 (*) [16])(local_1c0 + uVar10 * 2) = auVar65;
            uVar10 = uVar10 + 0x10;
          } while (uVar10 < uVar9 - uVar14);
        }
        _lzbitmap_decode_rle(local_d0,local_1c0,local_118._0_4_);
      }
      else {
        if ((uint)local_50 < ((uint)local_118._0_4_ >> 1) + uVar14) {
          return 0;
        }
        uVar10 = local_b0;
        local_88 = auVar53;
        if (local_118._0_4_ == 0) goto LAB_000590dd;
        puVar20 = (uint *)((ulong)uVar14 + (long)local_58);
        uVar10 = 0;
        do {
          uVar18 = *puVar20;
          *(ulong *)(local_d0 + uVar10) =
               (ulong)(uVar18 & 0xf0000000) << 0x1c |
               (ulong)(uVar18 & 0xf000000) << 0x18 |
               (ulong)(uVar18 & 0xf00000) << 0x14 |
               (ulong)(uVar18 & 0xf0000) << 0x10 |
               (ulong)((uVar18 & 0xf000) << 0xc |
                      (uVar18 & 0xf00) << 8 | (uVar18 & 0xf0) << 4 | uVar18 & 0xf);
          uVar10 = uVar10 + 8;
          puVar20 = puVar20 + 1;
        } while (uVar10 < (uint)local_118._0_4_);
      }
      uVar10 = local_b0;
      if (local_118._0_4_ != 0) {
        pauVar16 = (undefined1 (*) [16])((long)local_58 + 0xf);
        local_68 = (ulong *)((long)local_68 + (long)local_58);
        local_70 = (undefined1 (*) [16])(*local_70 + (long)local_58);
        local_1c8 = (uint *)(ulong)(uint)local_118._0_4_;
        uVar11 = 8;
        local_58 = (uint *)0x0;
LAB_000583b1:
        auVar93._8_4_ = 0xffffffff;
        auVar93._0_8_ = 0xffffffffffffffff;
        auVar93._12_4_ = 0xffffffff;
        if (local_40 < (undefined1 (*) [16])(local_68 + 1)) {
          return 0;
        }
        if (local_40 < local_70 + 1) {
          return 0;
        }
        uVar104 = *(undefined8 *)(local_d0 + (long)local_58);
        auVar52._8_4_ = 0xffffffff;
        auVar52._0_8_ = uVar104;
        auVar52._12_4_ = 0xffffffff;
        auVar53 = pshufb(local_1b8,auVar52);
        uVar88 = auVar53[7];
        auVar75._0_14_ = auVar53._0_14_;
        auVar75[0xe] = uVar88;
        auVar75[0xf] = uVar88;
        uVar87 = auVar53[6];
        auVar74._14_2_ = auVar75._14_2_;
        auVar74._0_13_ = auVar53._0_13_;
        auVar74[0xd] = uVar87;
        auVar73._13_3_ = auVar74._13_3_;
        auVar73._0_12_ = auVar53._0_12_;
        auVar73[0xc] = uVar87;
        uVar86 = auVar53[5];
        auVar72._12_4_ = auVar73._12_4_;
        auVar72._0_11_ = auVar53._0_11_;
        auVar72[0xb] = uVar86;
        auVar71._11_5_ = auVar72._11_5_;
        auVar71._0_10_ = auVar53._0_10_;
        auVar71[10] = uVar86;
        uVar85 = auVar53[4];
        auVar70._10_6_ = auVar71._10_6_;
        auVar70._0_9_ = auVar53._0_9_;
        auVar70[9] = uVar85;
        auVar69._9_7_ = auVar70._9_7_;
        auVar69._0_8_ = auVar53._0_8_;
        auVar69[8] = uVar85;
        uVar84 = auVar53[3];
        Var8 = CONCAT91(CONCAT81(auVar69._8_8_,uVar84),uVar84);
        uVar83 = auVar53[2];
        auVar7._2_10_ = Var8;
        auVar7[1] = uVar83;
        auVar7[0] = uVar83;
        uVar24 = auVar53[1];
        auVar6._2_12_ = auVar7;
        auVar6[1] = uVar24;
        auVar6[0] = uVar24;
        auVar76[0] = auVar53[0];
        auVar76[1] = auVar76[0];
        auVar76._2_2_ = auVar6._0_2_ * 4;
        auVar76._4_2_ = auVar7._0_2_ * 0x10;
        auVar76._6_2_ = (short)Var8 * 0x40;
        auVar76._8_2_ = auVar69._8_2_;
        auVar76._10_2_ = auVar71._10_2_ * 4;
        auVar76._12_2_ = auVar73._12_2_ * 0x10;
        auVar76._14_2_ = auVar74._14_2_ * 0x40;
        auVar53 = pshufb(auVar76,_DAT_0032b020);
        auVar61[0xe] = uVar88;
        auVar61._0_14_ = auVar75._0_14_;
        auVar61[0xf] = auVar53[7];
        auVar60._14_2_ = auVar61._14_2_;
        auVar60[0xd] = auVar53[6];
        auVar60._0_13_ = auVar74._0_13_;
        auVar59._13_3_ = auVar60._13_3_;
        auVar59[0xc] = uVar87;
        auVar59._0_12_ = auVar73._0_12_;
        auVar58._12_4_ = auVar59._12_4_;
        auVar58[0xb] = auVar53[5];
        auVar58._0_11_ = auVar72._0_11_;
        auVar57._11_5_ = auVar58._11_5_;
        auVar57[10] = uVar86;
        auVar57._0_10_ = auVar71._0_10_;
        auVar56._10_6_ = auVar57._10_6_;
        auVar56[9] = auVar53[4];
        auVar56._0_9_ = auVar70._0_9_;
        auVar55._9_7_ = auVar56._9_7_;
        auVar55[8] = uVar85;
        auVar55._0_8_ = auVar69._0_8_;
        auVar54._8_8_ = auVar55._8_8_;
        auVar54[7] = auVar53[3];
        auVar54[6] = uVar84;
        auVar54[5] = auVar53[2];
        auVar54[4] = uVar83;
        auVar54[3] = auVar53[1];
        auVar54[2] = uVar24;
        auVar54[1] = auVar53[0];
        auVar54[0] = auVar76[0];
        auVar53 = pshufb(auVar54,_DAT_0032b030);
        auVar28 = phaddd(auVar53,auVar53);
        uVar18 = auVar53._12_4_ + auVar53._8_4_ + auVar28._0_4_;
        if (local_40 < (undefined1 (*) [16])(local_70[1] + (uVar18 & 0xff))) {
          return 0;
        }
        auVar28 = pshufb(local_88,auVar52);
        bVar25 = (byte)uVar104;
        bVar36 = (byte)((ulong)uVar104 >> 8);
        bVar39 = (byte)((ulong)uVar104 >> 0x10);
        bVar41 = (byte)((ulong)uVar104 >> 0x18);
        bVar43 = (byte)((ulong)uVar104 >> 0x20);
        bVar45 = (byte)((ulong)uVar104 >> 0x28);
        bVar47 = (byte)((ulong)uVar104 >> 0x30);
        bVar26 = (byte)((ulong)uVar104 >> 0x38);
        auVar29[0] = -((byte)((bVar25 < local_268[0]) * local_268[0] |
                             (bVar25 >= local_268[0]) * bVar25) == bVar25);
        auVar29[1] = -((byte)((bVar36 < local_268[1]) * local_268[1] |
                             (bVar36 >= local_268[1]) * bVar36) == bVar36);
        auVar29[2] = -((byte)((bVar39 < local_268[2]) * local_268[2] |
                             (bVar39 >= local_268[2]) * bVar39) == bVar39);
        auVar29[3] = -((byte)((bVar41 < local_268[3]) * local_268[3] |
                             (bVar41 >= local_268[3]) * bVar41) == bVar41);
        auVar29[4] = -((byte)((bVar43 < local_268[4]) * local_268[4] |
                             (bVar43 >= local_268[4]) * bVar43) == bVar43);
        auVar29[5] = -((byte)((bVar45 < local_268[5]) * local_268[5] |
                             (bVar45 >= local_268[5]) * bVar45) == bVar45);
        auVar29[6] = -((byte)((bVar47 < local_268[6]) * local_268[6] |
                             (bVar47 >= local_268[6]) * bVar47) == bVar47);
        auVar29[7] = -((byte)((bVar26 < local_268[7]) * local_268[7] |
                             (bVar26 >= local_268[7]) * bVar26) == bVar26);
        auVar29[8] = -((char)((local_268[8] != '\0') * local_268[8]) == '\0');
        auVar29[9] = -((char)((local_268[9] != '\0') * local_268[9]) == '\0');
        auVar29[10] = -((char)((local_268[10] != '\0') * local_268[10]) == '\0');
        auVar29[0xb] = -((char)((local_268[0xb] != '\0') * local_268[0xb]) == '\0');
        auVar29[0xc] = -((char)((local_268[0xc] != '\0') * local_268[0xc]) == '\0');
        auVar29[0xd] = -((char)((local_268[0xd] != '\0') * local_268[0xd]) == '\0');
        auVar29[0xe] = -((char)((local_268[0xe] != '\0') * local_268[0xe]) == '\0');
        auVar29[0xf] = -((char)((local_268[0xf] != '\0') * local_268[0xf]) == '\0');
        uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7) & 0xff;
        auVar77._8_8_ = 0;
        auVar77._0_8_ = *(ulong *)(&_lzbitmap_unpack_perm_table + (ulong)uVar17 * 8);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *local_68;
        auVar53 = pshufb(auVar30,auVar77);
        auVar78._0_12_ = SUB1612(*local_70,0);
        auVar78._12_4_ = uVar11;
        uVar9 = uVar18 >> 0xc & 0xff0;
        auVar52 = pshufb(auVar78,*(undefined1 (*) [16])(&_lzbitmap_unpack_dist_perm_table + uVar9));
        auVar122._0_12_ = SUB1612(*(undefined1 (*) [16])(*local_70 + (uVar18 & 0xff)),0);
        auVar122._12_4_ = auVar52._12_4_;
        auVar123 = pshufb(auVar122,*(undefined1 (*) [16])
                                    (&_lzbitmap_unpack_dist_perm_table + ((uVar18 >> 0x18) << 4)));
        auVar53 = auVar53 | auVar28 & auVar29;
        uVar14 = (uint)uVar21;
        auVar89._4_4_ = uVar14 + 8;
        auVar89._0_4_ = uVar14;
        auVar89._8_4_ = uVar14 + 0x10;
        auVar89._12_4_ = uVar14 + 0x18;
        auVar92._0_4_ = uVar14 + 0x20;
        auVar92._4_4_ = uVar14 + 0x28;
        auVar92._8_4_ = uVar14 + 0x30;
        auVar92._12_4_ = uVar14 + 0x38;
        auVar28 = auVar123 ^ _DAT_0032b310;
        auVar97._0_4_ = -(uint)(auVar28._0_4_ < -0x7ffffff8);
        auVar97._4_4_ = -(uint)(auVar28._4_4_ < -0x7ffffff8);
        auVar97._8_4_ = -(uint)(auVar28._8_4_ < -0x7ffffff8);
        auVar97._12_4_ = -(uint)(auVar28._12_4_ < -0x7ffffff8);
        auVar110 = auVar52 ^ _DAT_0032b310;
        auVar117 = auVar92 ^ _DAT_0032b310;
        auVar106._0_4_ = -(uint)(auVar117._0_4_ < auVar28._0_4_);
        auVar106._4_4_ = -(uint)(auVar117._4_4_ < auVar28._4_4_);
        auVar106._8_4_ = -(uint)(auVar117._8_4_ < auVar28._8_4_);
        auVar106._12_4_ = -(uint)(auVar117._12_4_ < auVar28._12_4_);
        auVar118._0_4_ = -(uint)(auVar110._0_4_ < -0x7ffffff8);
        auVar118._4_4_ = -(uint)(auVar110._4_4_ < -0x7ffffff8);
        auVar118._8_4_ = -(uint)(auVar110._8_4_ < -0x7ffffff8);
        auVar118._12_4_ = -(uint)(auVar110._12_4_ < -0x7ffffff8);
        auVar28 = auVar89 ^ _DAT_0032b310;
        auVar111._0_4_ = -(uint)(auVar28._0_4_ < auVar110._0_4_);
        auVar111._4_4_ = -(uint)(auVar28._4_4_ < auVar110._4_4_);
        auVar111._8_4_ = -(uint)(auVar28._8_4_ < auVar110._8_4_);
        auVar111._12_4_ = -(uint)(auVar28._12_4_ < auVar110._12_4_);
        uVar96 = auVar53._0_4_;
        auVar98[0] = -(auVar53[0] == -1);
        auVar98[1] = -(auVar53[0] == -1);
        auVar98[2] = -(auVar53[1] == -1);
        auVar98[3] = -(auVar53[1] == -1);
        auVar98[4] = -(auVar53[2] == -1);
        auVar98[5] = -(auVar53[2] == -1);
        auVar98[6] = -(auVar53[3] == -1);
        auVar98[7] = -(auVar53[3] == -1);
        auVar98[8] = -(auVar53[4] == -1);
        auVar98[9] = -(auVar53[4] == -1);
        auVar98[10] = -(auVar53[5] == -1);
        auVar98[0xb] = -(auVar53[5] == -1);
        auVar98[0xc] = -(auVar53[6] == -1);
        auVar98[0xd] = -(auVar53[6] == -1);
        auVar98[0xe] = -(auVar53[7] == -1);
        auVar98[0xf] = -(auVar53[7] == -1);
        auVar110 = packssdw(auVar111 | auVar118,auVar106 | auVar97);
        auVar28 = ~auVar98 & auVar110;
        auVar115._0_12_ = auVar110._0_12_;
        auVar115._12_2_ = auVar110._6_2_;
        auVar115._14_2_ = auVar28._6_2_;
        auVar114._12_4_ = auVar115._12_4_;
        auVar114._0_10_ = auVar110._0_10_;
        auVar114._10_2_ = auVar28._4_2_;
        auVar113._10_6_ = auVar114._10_6_;
        auVar113._0_8_ = auVar110._0_8_;
        auVar113._8_2_ = auVar110._4_2_;
        auVar112._8_8_ = auVar113._8_8_;
        auVar112._6_2_ = auVar28._2_2_;
        auVar112._4_2_ = auVar110._2_2_;
        auVar112._0_2_ = auVar110._0_2_;
        auVar112._2_2_ = auVar28._0_2_;
        iVar12 = movmskps(uVar9,auVar112);
        if (iVar12 != 0) {
          return 0;
        }
        local_68 = (ulong *)((long)local_68 +
                            (ulong)((uVar17 * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c));
        uVar9 = uVar18 >> 8 & 0xff;
        local_70 = (undefined1 (*) [16])
                   (*(undefined1 (*) [16])(*local_70 + (uVar18 & 0xff)) + uVar9);
        auVar105._0_8_ = CONCAT26(auVar28._10_2_,CONCAT24(auVar28._10_2_,(uint)auVar28._8_2_));
        auVar105._8_2_ = auVar28._12_2_;
        auVar105._10_2_ = auVar28._12_2_;
        auVar107._14_2_ = auVar28._14_2_;
        auVar107._12_2_ = auVar107._14_2_;
        auVar107._0_12_ = auVar105;
        auVar108._0_4_ = (int)((uint)auVar28._8_2_ << 0x1f) >> 0x1f;
        auVar108._4_4_ = ((int)((ulong)auVar105._0_8_ >> 0x20) << 0x1f) >> 0x1f;
        auVar108._8_4_ = (auVar105._8_4_ << 0x1f) >> 0x1f;
        auVar108._12_4_ = (auVar107._12_4_ << 0x1f) >> 0x1f;
        iVar12 = movmskps(uVar9,auVar108);
        if (iVar12 != 0) {
          local_48 = 0;
        }
        else {
          auVar98 = auVar98 ^ auVar93;
          auVar109._2_2_ = auVar98._8_2_;
          auVar109._0_2_ = auVar98._8_2_;
          auVar109._4_2_ = auVar98._10_2_;
          auVar109._6_2_ = auVar98._10_2_;
          auVar109._8_2_ = auVar98._12_2_;
          auVar109._10_2_ = auVar98._12_2_;
          auVar109._14_2_ = auVar98._14_2_;
          auVar109._12_2_ = auVar109._14_2_;
          auVar102._0_12_ = auVar98._0_12_;
          auVar102._12_2_ = auVar98._6_2_;
          auVar102._14_2_ = auVar98._6_2_;
          auVar101._12_4_ = auVar102._12_4_;
          auVar101._0_10_ = auVar98._0_10_;
          auVar101._10_2_ = auVar98._4_2_;
          auVar100._10_6_ = auVar101._10_6_;
          auVar100._0_8_ = auVar98._0_8_;
          auVar100._8_2_ = auVar98._4_2_;
          auVar99._8_8_ = auVar100._8_8_;
          auVar99._6_2_ = auVar98._2_2_;
          auVar99._4_2_ = auVar98._2_2_;
          auVar99._0_2_ = auVar98._0_2_;
          auVar99._2_2_ = auVar99._0_2_;
          local_98._0_4_ = auVar92._0_4_ - auVar123._0_4_;
          local_98._4_4_ = auVar92._4_4_ - auVar123._4_4_;
          local_98._8_4_ = auVar92._8_4_ - auVar123._8_4_;
          local_98._12_4_ = auVar92._12_4_ - auVar123._12_4_;
          local_98 = local_98 & auVar109;
          local_a8._0_4_ = uVar14 - auVar52._0_4_;
          local_a8._4_4_ = auVar89._4_4_ - auVar52._4_4_;
          local_a8._8_4_ = auVar89._8_4_ - auVar52._8_4_;
          local_a8._12_4_ = auVar89._12_4_ - auVar52._12_4_;
          local_a8 = local_a8 & auVar99;
        }
        if (iVar12 != 0) {
          return 0;
        }
        if (uVar14 + 0x40 <= uVar2) goto code_r0x0005863b;
        uVar18 = 0;
        do {
          if (local_40 < (undefined1 (*) [16])(*pauVar16 + 8)) {
            return 0;
          }
          uVar9 = (uint)uVar21;
          if (uVar9 < uVar2) {
            local_278 = auVar53;
            bVar26 = local_278[uVar18 & 0xf];
            local_298 = local_a8;
            local_288 = local_98;
            iVar12 = *(int *)(local_298 + (ulong)(uVar18 & 7) * 4);
            uVar10 = 0;
            do {
              uVar21 = uVar21 + 1;
              bVar23 = (bVar26 >> ((uint)uVar10 & 0x1f) & 1) != 0;
              pauVar19 = (undefined1 (*) [16])((ulong)((uint)uVar10 + iVar12) + param_1);
              if (bVar23) {
                pauVar19 = pauVar16;
              }
              pauVar16 = (undefined1 (*) [16])(*pauVar16 + bVar23);
              *(undefined1 *)(param_1 + -1 + uVar21) = (*pauVar19)[0];
              uVar15 = uVar10 + 1;
            } while ((uVar10 < 7) && (uVar10 = uVar15, uVar21 < uVar2));
            uVar21 = (ulong)(uVar9 + (int)uVar15);
          }
          uVar18 = uVar18 + 1;
          uVar10 = local_b0;
        } while (uVar18 != 8);
      }
    }
LAB_000590dd:
    in_XMM14 = local_a8;
    in_XMM15 = local_98;
  } while ((uint)uVar21 < local_34);
  if (local_48 == 0) {
                    /* WARNING: Read-only address (ram,0x0032b000) is written */
                    /* WARNING: Read-only address (ram,0x0032b020) is written */
                    /* WARNING: Read-only address (ram,0x0032b030) is written */
                    /* WARNING: Read-only address (ram,0x0032b310) is written */
                    /* WARNING: Read-only address (ram,0x0032b000) is written */
                    /* WARNING: Read-only address (ram,0x0032b020) is written */
                    /* WARNING: Read-only address (ram,0x0032b030) is written */
                    /* WARNING: Read-only address (ram,0x0032b310) is written */
    return 0;
  }
  return uVar21;
code_r0x0005863b:
  if (local_40 < pauVar16 + 1) {
    return 0;
  }
  uVar18 = uVar96 - (uVar96 >> 1 & 0x5555);
  uVar18 = (uVar18 >> 2 & 0x3333) + (uVar18 & 0x3333);
  uVar18 = (uVar18 >> 4) + uVar18 & 0xf0f;
  uVar18 = (uVar18 >> 8) + uVar18 & 0xff;
  if (local_40 < (undefined1 (*) [16])(pauVar16[1] + uVar18)) {
    return 0;
  }
  pauVar19 = (undefined1 (*) [16])(*pauVar16 + uVar18);
  uVar3 = auVar53._2_2_;
  uVar18 = (uint)uVar3 - (uVar3 >> 1 & 0x5555);
  uVar18 = (uVar18 >> 2 & 0x3333) + (uVar18 & 0x3333);
  uVar18 = (uVar18 >> 4) + uVar18 & 0xf0f;
  uVar18 = (uVar18 >> 8) + uVar18 & 0xff;
  if (local_40 < (undefined1 (*) [16])(pauVar19[1] + uVar18)) {
    return 0;
  }
  pauVar13 = (undefined1 (*) [16])(*pauVar19 + uVar18);
  uVar4 = auVar53._4_2_;
  uVar18 = (uint)uVar4 - (uVar4 >> 1 & 0x5555);
  uVar18 = (uVar18 >> 2 & 0x3333) + (uVar18 & 0x3333);
  uVar18 = (uVar18 >> 4) + uVar18 & 0xf0f;
  uVar18 = (uVar18 >> 8) + uVar18 & 0xff;
  if (local_40 < (undefined1 (*) [16])(pauVar13[1] + uVar18)) {
    return 0;
  }
  local_50 = (undefined1 (*) [16])(*pauVar13 + uVar18);
  uVar5 = auVar53._6_2_;
  uVar18 = uVar5 & 0xff;
  local_108 = (ulong)uVar18;
  lVar124 = *(long *)(&_lzbitmap_unpack_perm_table + (ulong)uVar18 * 8);
  local_44 = (uint)uVar5;
  uVar104 = *(undefined8 *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar5 >> 8) * 8);
  lVar91 = *(long *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar96 & 0xff) * 8);
  uVar50 = *(undefined8 *)(&_lzbitmap_unpack_perm_table + (ulong)((uVar96 & 0xffff) >> 8) * 8);
  bVar26 = (byte)(((uVar96 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c);
  auVar93 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar93 = pshuflw(auVar93,auVar93,0);
  cVar37 = (char)((ulong)uVar50 >> 8);
  auVar79[9] = auVar93[1] + cVar37;
  auVar79[8] = auVar93[0] + (char)uVar50;
  cVar40 = (char)((ulong)uVar50 >> 0x10);
  auVar79[10] = auVar93[2] + cVar40;
  cVar42 = (char)((ulong)uVar50 >> 0x18);
  auVar79[0xb] = auVar93[3] + cVar42;
  cVar44 = (char)((ulong)uVar50 >> 0x20);
  auVar79[0xc] = auVar93[4] + cVar44;
  cVar46 = (char)((ulong)uVar50 >> 0x28);
  auVar79[0xd] = auVar93[5] + cVar46;
  cVar48 = (char)((ulong)uVar50 >> 0x30);
  auVar79[0xe] = auVar93[6] + cVar48;
  cVar49 = (char)((ulong)uVar50 >> 0x38);
  auVar79[0xf] = auVar93[7] + cVar49;
  auVar79._0_8_ = lVar91;
  auVar38 = SUB1615((undefined1  [16])0x0,1);
  auVar119[0] = -((char)lVar91 < '\0');
  auVar119[1] = -((char)((ulong)lVar91 >> 8) < '\0');
  auVar119[2] = -((char)((ulong)lVar91 >> 0x10) < '\0');
  auVar119[3] = -((char)((ulong)lVar91 >> 0x18) < '\0');
  auVar119[4] = -((char)((ulong)lVar91 >> 0x20) < '\0');
  auVar119[5] = -((char)((ulong)lVar91 >> 0x28) < '\0');
  auVar119[6] = -((char)((ulong)lVar91 >> 0x30) < '\0');
  auVar119[7] = -(lVar91 < 0);
  auVar119[8] = -((char)uVar50 < '\0');
  auVar119[9] = -(cVar37 < auVar38[8]);
  auVar119[10] = -(cVar40 < auVar38[9]);
  auVar119[0xb] = -(cVar42 < auVar38[10]);
  auVar119[0xc] = -(cVar44 < auVar38[0xb]);
  auVar119[0xd] = -(cVar46 < auVar38[0xc]);
  auVar119[0xe] = -(cVar48 < auVar38[0xd]);
  auVar119[0xf] = -(cVar49 < auVar38[0xe]);
  auVar119 = auVar119 | auVar79;
  local_118 = pshufb(*pauVar16,auVar119);
  auVar116[0] = -(auVar119[0] == -1);
  auVar116[1] = -(auVar119[1] == -1);
  auVar116[2] = -(auVar119[2] == -1);
  auVar116[3] = -(auVar119[3] == -1);
  auVar116[4] = -(auVar119[4] == -1);
  auVar116[5] = -(auVar119[5] == -1);
  auVar116[6] = -(auVar119[6] == -1);
  auVar116[7] = -(auVar119[7] == -1);
  auVar116[8] = -(auVar119[8] == -1);
  auVar116[9] = -(auVar119[9] == -1);
  auVar116[10] = -(auVar119[10] == -1);
  auVar116[0xb] = -(auVar119[0xb] == -1);
  local_258[0xc] = -(auVar119[0xc] == -1);
  local_258._0_12_ = auVar116;
  local_258[0xd] = -(auVar119[0xd] == -1);
  local_258[0xe] = -(auVar119[0xe] == -1);
  local_258[0xf] = -(auVar119[0xf] == -1);
  lVar91 = *(long *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar3 & 0xff) * 8);
  uVar50 = *(undefined8 *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar3 >> 8) * 8);
  bVar26 = (byte)(((uVar3 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c);
  auVar93 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar93 = pshuflw(auVar93,auVar93,0);
  cVar37 = (char)((ulong)uVar50 >> 8);
  auVar31[9] = auVar93[1] + cVar37;
  auVar31[8] = auVar93[0] + (char)uVar50;
  cVar40 = (char)((ulong)uVar50 >> 0x10);
  auVar31[10] = auVar93[2] + cVar40;
  cVar42 = (char)((ulong)uVar50 >> 0x18);
  auVar31[0xb] = auVar93[3] + cVar42;
  cVar44 = (char)((ulong)uVar50 >> 0x20);
  auVar31[0xc] = auVar93[4] + cVar44;
  cVar46 = (char)((ulong)uVar50 >> 0x28);
  auVar31[0xd] = auVar93[5] + cVar46;
  cVar48 = (char)((ulong)uVar50 >> 0x30);
  auVar31[0xe] = auVar93[6] + cVar48;
  cVar49 = (char)((ulong)uVar50 >> 0x38);
  auVar31[0xf] = auVar93[7] + cVar49;
  auVar31._0_8_ = lVar91;
  auVar38 = SUB1615((undefined1  [16])0x0,1);
  auVar120[0] = -((char)lVar91 < '\0');
  auVar120[1] = -((char)((ulong)lVar91 >> 8) < '\0');
  auVar120[2] = -((char)((ulong)lVar91 >> 0x10) < '\0');
  auVar120[3] = -((char)((ulong)lVar91 >> 0x18) < '\0');
  auVar120[4] = -((char)((ulong)lVar91 >> 0x20) < '\0');
  auVar120[5] = -((char)((ulong)lVar91 >> 0x28) < '\0');
  auVar120[6] = -((char)((ulong)lVar91 >> 0x30) < '\0');
  auVar120[7] = -(lVar91 < 0);
  auVar120[8] = -((char)uVar50 < '\0');
  auVar120[9] = -(cVar37 < auVar38[8]);
  auVar120[10] = -(cVar40 < auVar38[9]);
  auVar120[0xb] = -(cVar42 < auVar38[10]);
  auVar120[0xc] = -(cVar44 < auVar38[0xb]);
  auVar120[0xd] = -(cVar46 < auVar38[0xc]);
  auVar120[0xe] = -(cVar48 < auVar38[0xd]);
  auVar120[0xf] = -(cVar49 < auVar38[0xe]);
  auVar120 = auVar120 | auVar31;
  lVar91 = *(long *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar4 & 0xff) * 8);
  local_f8._8_8_ = 0;
  local_f8._0_8_ = *(ulong *)(&_lzbitmap_unpack_perm_table + (ulong)(uVar4 >> 8) * 8);
  auVar53 = pshufb(*pauVar19,auVar120);
  auVar121[0] = -(auVar120[0] == -1);
  auVar121[1] = -(auVar120[1] == -1);
  auVar121[2] = -(auVar120[2] == -1);
  auVar121[3] = -(auVar120[3] == -1);
  auVar121[4] = -(auVar120[4] == -1);
  auVar121[5] = -(auVar120[5] == -1);
  auVar121[6] = -(auVar120[6] == -1);
  auVar121[7] = -(auVar120[7] == -1);
  auVar121[8] = -(auVar120[8] == -1);
  auVar121[9] = -(auVar120[9] == -1);
  auVar121[10] = -(auVar120[10] == -1);
  auVar121[0xb] = -(auVar120[0xb] == -1);
  auVar121[0xc] = -(auVar120[0xc] == -1);
  auVar121[0xd] = -(auVar120[0xd] == -1);
  auVar121[0xe] = -(auVar120[0xe] == -1);
  auVar121[0xf] = -(auVar120[0xf] == -1);
  local_c8 = *pauVar13;
  auVar93 = *local_50;
  uVar9 = local_a8._0_4_;
  auVar32._0_4_ = -(uint)((int)(uVar14 ^ 0x80000000) < (int)(uVar9 + 8 ^ 0x80000000));
  auVar32._4_4_ = -(uint)((int)(uVar14 ^ 0x80000000) < (int)(local_a8._4_4_ + 8 ^ 0x80000000));
  auVar32._8_4_ = -(uint)((int)(uVar14 ^ 0x80000000) < (int)(local_a8._8_4_ + 8 ^ 0x80000000));
  auVar32._12_4_ = -(uint)((int)(uVar14 ^ 0x80000000) < (int)(local_a8._12_4_ + 8 ^ 0x80000000));
  iVar12 = movmskps((int)local_50,auVar32);
  local_158 = auVar123;
  if (iVar12 == 0) {
    auVar33._8_8_ = *(undefined8 *)(param_1 + (ulong)local_a8._4_4_);
    auVar33._0_8_ = *(undefined8 *)(param_1 + (ulong)uVar9);
    auVar62._8_8_ = *(undefined8 *)(param_1 + (ulong)local_a8._12_4_);
    auVar62._0_8_ = *(undefined8 *)(param_1 + (ulong)local_a8._8_4_);
    local_178 = auVar33 & local_258 | local_118;
    local_168 = auVar62 & auVar121 | auVar53;
    pauVar16 = (undefined1 (*) [16])(uVar21 + param_1);
    if (uVar14 + 0x20 < uVar2) {
      *pauVar16 = local_178;
      pauVar16[1] = local_168;
      uVar9 = uVar14 + 0x20;
    }
    else {
      uStack_140 = 0;
      uStack_130 = 0;
      uStack_120 = 0;
      local_1a8 = auVar93;
      local_198 = auVar121;
      local_188 = auVar53;
      local_148 = lVar124;
      local_138 = uVar104;
      local_128 = lVar91;
      _memcpy(pauVar16,local_178,(ulong)(uVar2 - uVar14));
      uVar18 = (uint)local_108;
      auVar93 = local_1a8;
      uVar9 = uVar2;
      lVar124 = local_148;
      lVar91 = local_128;
      uVar104 = local_138;
    }
  }
  else {
    local_128 = lVar91;
    uStack_120 = 0;
    local_138 = uVar104;
    uStack_130 = 0;
    local_148 = lVar124;
    uStack_140 = 0;
    auVar80._0_8_ = local_118._8_8_;
    auVar80._8_4_ = local_118._8_4_;
    auVar80._12_4_ = local_118._12_4_;
    auVar90._4_4_ = local_258._12_4_;
    auVar90._0_4_ = auVar116._8_4_;
    auVar90._8_4_ = auVar116._8_4_;
    auVar90._12_4_ = local_258._12_4_;
    uVar17 = 0;
    local_208 = local_a8;
    local_1f8 = local_98;
    uVar10 = *(ulong *)(param_1 + (ulong)uVar9);
    auVar28 = local_118;
    auVar52 = local_258;
    while( true ) {
      uVar10 = uVar10 & auVar52._0_8_ | auVar28._0_8_;
      local_178._0_8_ = uVar10;
      uVar9 = (int)uVar21 + 8;
      if (uVar2 <= uVar9) break;
      *(ulong *)(uVar21 + param_1) = uVar10;
      uVar17 = uVar17 + 1;
      lVar124 = local_148;
      lVar91 = local_128;
      uVar104 = local_138;
      if (uVar17 == 4) goto LAB_00058c25;
      uVar10 = *(ulong *)(param_1 + (ulong)*(uint *)(local_208 + (ulong)(uVar17 & 7) * 4));
      uVar21 = (ulong)uVar9;
      auVar28 = auVar80;
      auVar52 = auVar90;
    }
    local_1a8 = auVar93;
    local_198 = auVar121;
    local_188 = auVar53;
    _memcpy((ulong *)(uVar21 + param_1),local_178,(ulong)(uVar2 - (int)uVar21));
    uVar18 = (uint)local_108;
    auVar93 = local_1a8;
    uVar9 = uVar2;
    lVar124 = local_148;
    lVar91 = local_128;
    uVar104 = local_138;
  }
LAB_00058c25:
  bVar26 = (byte)((uVar18 * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c);
  auVar53 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar53 = pshuflw(auVar53,auVar53,0);
  cVar37 = (char)((ulong)uVar104 >> 8);
  auVar125[9] = auVar53[1] + cVar37;
  auVar125[8] = auVar53[0] + (char)uVar104;
  cVar40 = (char)((ulong)uVar104 >> 0x10);
  auVar125[10] = auVar53[2] + cVar40;
  cVar42 = (char)((ulong)uVar104 >> 0x18);
  auVar125[0xb] = auVar53[3] + cVar42;
  cVar44 = (char)((ulong)uVar104 >> 0x20);
  auVar125[0xc] = auVar53[4] + cVar44;
  cVar46 = (char)((ulong)uVar104 >> 0x28);
  auVar125[0xd] = auVar53[5] + cVar46;
  cVar48 = (char)((ulong)uVar104 >> 0x30);
  auVar125[0xe] = auVar53[6] + cVar48;
  cVar49 = (char)((ulong)uVar104 >> 0x38);
  auVar125[0xf] = auVar53[7] + cVar49;
  auVar125._0_8_ = lVar124;
  auVar38 = SUB1615((undefined1  [16])0x0,1);
  auVar34[0] = -((char)lVar124 < '\0');
  auVar34[1] = -((char)((ulong)lVar124 >> 8) < '\0');
  auVar34[2] = -((char)((ulong)lVar124 >> 0x10) < '\0');
  auVar34[3] = -((char)((ulong)lVar124 >> 0x18) < '\0');
  auVar34[4] = -((char)((ulong)lVar124 >> 0x20) < '\0');
  auVar34[5] = -((char)((ulong)lVar124 >> 0x28) < '\0');
  auVar34[6] = -((char)((ulong)lVar124 >> 0x30) < '\0');
  auVar34[7] = -(lVar124 < 0);
  auVar34[8] = -((char)uVar104 < '\0');
  auVar34[9] = -(cVar37 < auVar38[8]);
  auVar34[10] = -(cVar40 < auVar38[9]);
  auVar34[0xb] = -(cVar42 < auVar38[10]);
  auVar34[0xc] = -(cVar44 < auVar38[0xb]);
  auVar34[0xd] = -(cVar46 < auVar38[0xc]);
  auVar34[0xe] = -(cVar48 < auVar38[0xd]);
  auVar34[0xf] = -(cVar49 < auVar38[0xe]);
  auVar34 = auVar34 | auVar125;
  uVar18 = ((uVar4 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111;
  bVar26 = (byte)(uVar18 >> 0x1c);
  auVar53 = ZEXT216(CONCAT11(bVar26,bVar26));
  auVar53 = pshuflw(auVar53,auVar53,0);
  auVar94[9] = auVar53[1] + local_f8[1];
  auVar94[8] = auVar53[0] + local_f8[0];
  auVar94[10] = auVar53[2] + local_f8[2];
  auVar94[0xb] = auVar53[3] + local_f8[3];
  auVar94[0xc] = auVar53[4] + local_f8[4];
  auVar94[0xd] = auVar53[5] + local_f8[5];
  auVar94[0xe] = auVar53[6] + local_f8[6];
  auVar94[0xf] = auVar53[7] + local_f8[7];
  auVar94._0_8_ = lVar91;
  auVar38 = SUB1615((undefined1  [16])0x0,1);
  auVar63[0] = -((char)lVar91 < '\0');
  auVar63[1] = -((char)((ulong)lVar91 >> 8) < '\0');
  auVar63[2] = -((char)((ulong)lVar91 >> 0x10) < '\0');
  auVar63[3] = -((char)((ulong)lVar91 >> 0x18) < '\0');
  auVar63[4] = -((char)((ulong)lVar91 >> 0x20) < '\0');
  auVar63[5] = -((char)((ulong)lVar91 >> 0x28) < '\0');
  auVar63[6] = -((char)((ulong)lVar91 >> 0x30) < '\0');
  auVar63[7] = -(lVar91 < 0);
  auVar63[8] = -(local_f8[0] < '\0');
  auVar63[9] = -(local_f8[1] < auVar38[8]);
  auVar63[10] = -(local_f8[2] < auVar38[9]);
  auVar63[0xb] = -(local_f8[3] < auVar38[10]);
  auVar63[0xc] = -(local_f8[4] < auVar38[0xb]);
  auVar63[0xd] = -(local_f8[5] < auVar38[0xc]);
  auVar63[0xe] = -(local_f8[6] < auVar38[0xd]);
  auVar63[0xf] = -(local_f8[7] < auVar38[0xe]);
  auVar63 = auVar63 | auVar94;
  auVar53 = pshufb(local_c8,auVar63);
  auVar51[0] = -(auVar63[0] == -1);
  auVar51[1] = -(auVar63[1] == -1);
  auVar51[2] = -(auVar63[2] == -1);
  auVar51[3] = -(auVar63[3] == -1);
  auVar51[4] = -(auVar63[4] == -1);
  auVar51[5] = -(auVar63[5] == -1);
  auVar51[6] = -(auVar63[6] == -1);
  auVar51[7] = -(auVar63[7] == -1);
  auVar51[8] = -(auVar63[8] == -1);
  auVar51[9] = -(auVar63[9] == -1);
  auVar51[10] = -(auVar63[10] == -1);
  auVar51[0xb] = -(auVar63[0xb] == -1);
  auVar64[0xc] = -(auVar63[0xc] == -1);
  auVar64._0_12_ = auVar51;
  auVar64[0xd] = -(auVar63[0xd] == -1);
  auVar64[0xe] = -(auVar63[0xe] == -1);
  auVar64[0xf] = -(auVar63[0xf] == -1);
  auVar93 = pshufb(auVar93,auVar34);
  auVar27[0] = -(auVar34[0] == -1);
  auVar27[1] = -(auVar34[1] == -1);
  auVar27[2] = -(auVar34[2] == -1);
  auVar27[3] = -(auVar34[3] == -1);
  auVar27[4] = -(auVar34[4] == -1);
  auVar27[5] = -(auVar34[5] == -1);
  auVar27[6] = -(auVar34[6] == -1);
  auVar27[7] = -(auVar34[7] == -1);
  auVar27[8] = -(auVar34[8] == -1);
  auVar27[9] = -(auVar34[9] == -1);
  auVar27[10] = -(auVar34[10] == -1);
  auVar27[0xb] = -(auVar34[0xb] == -1);
  auVar35[0xc] = -(auVar34[0xc] == -1);
  auVar35._0_12_ = auVar27;
  auVar35[0xd] = -(auVar34[0xd] == -1);
  auVar35[0xe] = -(auVar34[0xe] == -1);
  auVar35[0xf] = -(auVar34[0xf] == -1);
  uVar17 = local_98._0_4_;
  auVar81._0_4_ = -(uint)((int)(uVar9 ^ 0x80000000) < (int)(uVar17 + 8 ^ 0x80000000));
  auVar81._4_4_ = -(uint)((int)(uVar9 ^ 0x80000000) < (int)(local_98._4_4_ + 8 ^ 0x80000000));
  auVar81._8_4_ = -(uint)((int)(uVar9 ^ 0x80000000) < (int)(local_98._8_4_ + 8 ^ 0x80000000));
  auVar81._12_4_ = -(uint)((int)(uVar9 ^ 0x80000000) < (int)(local_98._12_4_ + 8 ^ 0x80000000));
  iVar12 = movmskps(uVar18 >> 0x1c,auVar81);
  if (iVar12 == 0) {
    auVar82._8_8_ = *(undefined8 *)(param_1 + (ulong)local_98._4_4_);
    auVar82._0_8_ = *(undefined8 *)(param_1 + (ulong)uVar17);
    auVar95._8_8_ = *(undefined8 *)(param_1 + (ulong)local_98._12_4_);
    auVar95._0_8_ = *(undefined8 *)(param_1 + (ulong)local_98._8_4_);
    local_178 = auVar64 & auVar82 | auVar53;
    local_168 = auVar35 & auVar95 | auVar93;
    pauVar16 = (undefined1 (*) [16])((ulong)uVar9 + param_1);
    if (uVar9 + 0x20 < uVar2) {
      *pauVar16 = local_178;
      pauVar16[1] = local_168;
      uVar21 = (ulong)(uVar9 + 0x20);
    }
    else {
      _memcpy(pauVar16,local_178,(ulong)(uVar2 - uVar9));
      uVar21 = uVar15;
    }
  }
  else {
    local_c8._0_8_ = auVar93._8_8_;
    local_c8._8_4_ = auVar93._8_4_;
    local_c8._12_4_ = auVar93._12_4_;
    local_108 = CONCAT44(auVar35._12_4_,auVar27._8_4_);
    uStack_100 = auVar27._8_4_;
    uStack_fc = auVar35._12_4_;
    local_f8._0_8_ = auVar53._8_8_;
    local_f8._8_4_ = auVar53._8_4_;
    local_f8._12_4_ = auVar53._12_4_;
    auVar103._4_4_ = auVar64._12_4_;
    auVar103._0_4_ = auVar51._8_4_;
    auVar103._8_4_ = auVar51._8_4_;
    auVar103._12_4_ = auVar64._12_4_;
    uVar18 = 4;
    local_1e8 = local_a8;
    local_1d8 = local_98;
    uVar21 = *(ulong *)(param_1 + (ulong)uVar17);
    while( true ) {
      uVar10 = uVar21 & auVar64._0_8_ | auVar53._0_8_;
      local_178._0_8_ = uVar10;
      uVar17 = uVar9 + 8;
      uVar21 = (ulong)uVar17;
      if (uVar2 <= uVar17) break;
      *(ulong *)((ulong)uVar9 + param_1) = uVar10;
      uVar18 = uVar18 + 1;
      if (uVar18 == 8) {
        uVar11 = local_158._12_4_;
        goto LAB_00058fb5;
      }
      uVar21 = *(ulong *)(param_1 + (ulong)*(uint *)(local_1e8 + (ulong)(uVar18 & 7) * 4));
      auVar53 = local_f8;
      auVar64 = auVar103;
      uVar9 = uVar17;
    }
    _memcpy((ulong *)((ulong)uVar9 + param_1),local_178,(ulong)(uVar2 - uVar9));
    uVar21 = uVar15;
  }
  uVar11 = local_158._12_4_;
LAB_00058fb5:
  uVar18 = local_44 - (local_44 >> 1 & 0x5555);
  uVar18 = (uVar18 >> 2 & 0x3333) + (uVar18 & 0x3333);
  uVar18 = (uVar18 >> 4) + uVar18 & 0xf0f;
  pauVar16 = (undefined1 (*) [16])(*local_50 + ((uVar18 >> 8) + uVar18 & 0xff));
  local_58 = local_58 + 2;
  uVar10 = local_b0;
  if (local_1c8 <= local_58) goto LAB_000590dd;
  goto LAB_000583b1;
}

