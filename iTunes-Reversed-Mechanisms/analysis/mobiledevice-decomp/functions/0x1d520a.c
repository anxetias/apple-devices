// rea decompile_all
// name: _lzbitmap_fast_encode
// address: 0x1d520a
// body: available
// range: 0x1d520a-0x1d6673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d666f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _lzbitmap_fast_encode
              (undefined2 *param_1,ulong param_2,void *param_3,uint param_4,void *param_5,
              uint param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  byte bVar23;
  ushort uVar24;
  uint *puVar25;
  long lVar26;
  undefined8 *puVar27;
  uint *puVar28;
  uint *puVar29;
  byte bVar30;
  uint uVar31;
  size_t sVar32;
  ulong uVar33;
  undefined8 *puVar34;
  ushort uVar35;
  undefined8 *puVar36;
  ushort uVar37;
  short sVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  short sVar42;
  ushort uVar43;
  ushort uVar44;
  uint uVar45;
  short sVar46;
  uint uVar47;
  ulong uVar48;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar56;
  char cVar57;
  int iVar55;
  char cVar58;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  int local_378;
  ushort local_33e [3];
  ulong local_338;
  ulong local_330;
  ulong local_328;
  size_t local_320;
  void *local_318;
  uint *local_310;
  ulong local_308;
  ulong local_300;
  ulong local_2f8;
  ulong local_2f0;
  ulong local_2e8;
  uint local_2dc;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_378 = 0;
  if (param_5 == (void *)0x0 || param_4 == 0) goto LAB_001d664d;
  puVar25 = (uint *)((param_2 & 0xffffffff) + (long)param_1);
  sVar32 = 8;
  if (param_4 < 8) {
    sVar32 = (size_t)param_4;
  }
  puVar28 = (uint *)((long)param_1 + sVar32 + 5);
  if (puVar25 < puVar28) goto LAB_001d664d;
  *param_1 = 0xffff;
  param_1[1] = (short)sVar32;
  *(undefined1 *)(param_1 + 2) = 0;
  local_320 = sVar32;
  local_2dc = param_4;
  _memcpy((void *)((long)param_1 + 5),param_3,sVar32);
  if (param_6 < 3) {
    _memset_pattern16(param_5,&DAT_0032b1a0,*(size_t *)(&DAT_003a1958 + (ulong)param_6 * 8));
  }
  auVar62 = _DAT_0032b160;
  auVar59 = _DAT_0032b140;
  auVar50 = _DAT_0032b130;
  uVar39 = (uint)local_320;
  local_318 = param_3;
  if (param_6 == 2) {
    local_48 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    if (local_2dc < (uVar39 | 0x90)) {
LAB_001d5fe7:
      local_c8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      uVar48 = local_320 & 0xffffffff;
    }
    else {
      uVar39 = 8;
      uVar48 = local_320 & 0xffffffff;
      do {
        puVar29 = puVar28;
        if (puVar25 < puVar29 + 0x29) goto LAB_001d65e6;
        uVar21 = 0xfffffffffffffffe;
        puVar28 = (uint *)local_2b8;
        do {
          auVar73 = *(undefined1 (*) [16])((long)param_3 + uVar21 * 8 + uVar48 + 0x10);
          auVar70 = *(undefined1 (*) [16])((long)param_3 + uVar21 * 8 + uVar48 + 0x20);
          auVar78 = pshufb(auVar73,auVar50);
          auVar81 = pshufb(auVar73,auVar59);
          puVar28[-4] = (uint)(auVar81._0_4_ * -0x61c8864f) >> 0x11;
          puVar28[-3] = (uint)(auVar81._4_4_ * -0x61c8864f) >> 0x11;
          puVar28[-2] = (uint)((auVar81._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x11;
          puVar28[-1] = (uint)(auVar81._12_4_ * -0x61c8864f) >> 0x11;
          puVar28[-8] = (uint)(auVar78._0_4_ * -0x61c8864f) >> 0x11;
          puVar28[-7] = (uint)(auVar78._4_4_ * -0x61c8864f) >> 0x11;
          puVar28[-6] = (uint)((auVar78._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x11;
          puVar28[-5] = (uint)(auVar78._12_4_ * -0x61c8864f) >> 0x11;
          auVar7._16_16_ = auVar70;
          auVar7._0_16_ = auVar73;
          auVar70 = pshufb(auVar7._12_16_,auVar50);
          auVar73 = pshufb(auVar73,auVar62);
          iVar61 = auVar73._4_4_;
          auVar78._4_4_ = iVar61;
          auVar78._0_4_ = iVar61;
          auVar78._8_4_ = auVar73._12_4_;
          auVar78._12_4_ = auVar73._12_4_;
          iVar55 = auVar70._4_4_;
          auVar81._4_4_ = iVar55;
          auVar81._0_4_ = iVar55;
          auVar81._8_4_ = auVar70._12_4_;
          auVar81._12_4_ = auVar70._12_4_;
          *puVar28 = (uint)(auVar73._0_4_ * -0x61c8864f) >> 0x11;
          puVar28[1] = (uint)(iVar61 * -0x61c8864f) >> 0x11;
          puVar28[2] = (uint)((auVar73._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x11;
          puVar28[3] = (uint)((auVar78._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x11;
          puVar28[4] = (uint)(auVar70._0_4_ * -0x61c8864f) >> 0x11;
          puVar28[5] = (uint)(iVar55 * -0x61c8864f) >> 0x11;
          puVar28[6] = (uint)((auVar70._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x11;
          puVar28[7] = (uint)((auVar81._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x11;
          uVar21 = uVar21 + 2;
          puVar28 = puVar28 + 0x10;
        } while (uVar21 < 0xe);
        *puVar29 = 0;
        lVar19 = 0;
        uVar33 = 0;
        local_2f0 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar41 = uVar39;
        do {
          uVar3 = *(ulong *)((long)param_3 + uVar48);
          uVar2 = *(undefined8 *)((long)param_3 + (uVar48 - uVar41));
          auVar73[0] = -((char)uVar2 == (char)uVar3);
          cVar51 = (char)(uVar3 >> 8);
          auVar73[1] = -((char)((ulong)uVar2 >> 8) == cVar51);
          cVar52 = (char)(uVar3 >> 0x10);
          auVar73[2] = -((char)((ulong)uVar2 >> 0x10) == cVar52);
          cVar53 = (char)(uVar3 >> 0x18);
          auVar73[3] = -((char)((ulong)uVar2 >> 0x18) == cVar53);
          cVar54 = (char)(uVar3 >> 0x20);
          auVar73[4] = -((char)((ulong)uVar2 >> 0x20) == cVar54);
          cVar56 = (char)(uVar3 >> 0x28);
          auVar73[5] = -((char)((ulong)uVar2 >> 0x28) == cVar56);
          cVar57 = (char)(uVar3 >> 0x30);
          auVar73[6] = -((char)((ulong)uVar2 >> 0x30) == cVar57);
          cVar58 = (char)(uVar3 >> 0x38);
          auVar73[7] = -((char)((ulong)uVar2 >> 0x38) == cVar58);
          auVar73[8] = 0xff;
          auVar73[9] = 0xff;
          auVar73[10] = 0xff;
          auVar73[0xb] = 0xff;
          auVar73[0xc] = 0xff;
          auVar73[0xd] = 0xff;
          auVar73[0xe] = 0xff;
          auVar73[0xf] = 0xff;
          uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7);
          iVar55 = (int)uVar48;
          if ((char)uVar16 != '\0') {
            uVar31 = ((uVar16 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111;
            uVar17 = uVar31 >> 0x1c;
            local_2e8 = uVar22;
            if ((byte)(uVar31 >> 0x1c) != 1) {
              lVar26 = lVar19 * 0x20;
              local_338 = (ulong)*(uint *)(local_2c8 + lVar26);
              local_2f8 = CONCAT44(local_2f8._4_4_,iVar55 + 4);
              sVar46 = (short)(iVar55 + 4);
              local_33e[0] = sVar46 - *(short *)((long)param_5 + local_338 * 2);
              local_330 = (ulong)*(uint *)(local_2d8 + lVar26);
              local_328 = (ulong)*(uint *)(local_2d8 + lVar26 + 4);
              sVar38 = (short)uVar48;
              local_33e[1] = sVar38 - *(short *)((long)param_5 + local_330 * 2);
              uVar31 = *(uint *)(local_2d8 + lVar26 + 8);
              local_33e[2] = (sVar38 + 2) - *(short *)((long)param_5 + (ulong)uVar31 * 2);
              uVar45 = *(uint *)(local_2d8 + lVar26 + 0xc);
              uVar47 = *(uint *)(local_2c8 + lVar26 + 4);
              uVar4 = *(uint *)(local_2c8 + lVar26 + 8);
              uVar5 = *(uint *)(local_2c8 + lVar26 + 0xc);
              *(short *)((long)param_5 + local_328 * 2) = sVar38 + 1;
              *(short *)((long)param_5 + (ulong)uVar31 * 2) = sVar38 + 2;
              *(short *)((long)param_5 + (ulong)uVar45 * 2) = sVar38 + 3;
              *(short *)((long)param_5 + (ulong)uVar47 * 2) = sVar38 + 5;
              *(short *)((long)param_5 + (ulong)uVar4 * 2) = sVar38 + 6;
              *(short *)((long)param_5 + (ulong)uVar5 * 2) = sVar38 + 7;
              *(short *)((long)param_5 + local_338 * 2) = sVar46;
              *(short *)((long)param_5 + local_330 * 2) = sVar38;
              lVar26 = 0;
              uVar40 = (ulong)uVar41;
              do {
                uVar24 = local_33e[lVar26];
                uVar2 = *(undefined8 *)((long)param_3 + (uVar48 - uVar24));
                auVar70[0] = -((char)uVar2 == (char)uVar3);
                auVar70[1] = -((char)((ulong)uVar2 >> 8) == cVar51);
                auVar70[2] = -((char)((ulong)uVar2 >> 0x10) == cVar52);
                auVar70[3] = -((char)((ulong)uVar2 >> 0x18) == cVar53);
                auVar70[4] = -((char)((ulong)uVar2 >> 0x20) == cVar54);
                auVar70[5] = -((char)((ulong)uVar2 >> 0x28) == cVar56);
                auVar70[6] = -((char)((ulong)uVar2 >> 0x30) == cVar57);
                auVar70[7] = -((char)((ulong)uVar2 >> 0x38) == cVar58);
                auVar70[8] = 0xff;
                auVar70[9] = 0xff;
                auVar70[10] = 0xff;
                auVar70[0xb] = 0xff;
                auVar70[0xc] = 0xff;
                auVar70[0xd] = 0xff;
                auVar70[0xe] = 0xff;
                auVar70[0xf] = 0xff;
                uVar31 = ~(uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7);
                uVar45 = uVar24 - 8 >> 0x18;
                uVar47 = uVar45 | uVar31;
                local_308 = uVar33;
                local_300 = uVar21;
                if ((char)uVar47 == '\0') {
                  uVar41 = (uint)uVar22 | 0x10000 << ((byte)lVar19 & 0x1f);
                  uVar22 = (ulong)uVar41;
                  *puVar29 = uVar41;
                  *(ushort *)(local_d8 + local_2f0 * 2) = uVar24;
                  uVar41 = (uint)uVar24;
                  local_2f0 = (ulong)(byte)((char)local_2f0 + 1);
                  goto LAB_001d6459;
                }
                bVar23 = (byte)(((uVar45 | uVar31 & 0xff) * 0x8040201 >> 3 & 0x11111111) *
                                0x11111111 >> 0x1c) + 2;
                if ((bVar23 < (byte)uVar17) &&
                   (uVar17 = (uint)bVar23, uVar40 = (ulong)uVar24, uVar16 = uVar47,
                   uVar31 = (uint)uVar24, lVar26 == 2)) goto LAB_001d63b5;
                lVar26 = lVar26 + 1;
              } while (lVar26 != 3);
              uVar31 = (uint)uVar40;
              if ((short)uVar40 != (short)uVar41) {
LAB_001d63b5:
                uVar41 = uVar31;
                *puVar29 = 0x10000 << ((byte)lVar19 & 0x1f) | (uint)uVar22;
                *(short *)(local_d8 + local_2f0 * 2) = (short)uVar41;
                local_2f0 = (ulong)(byte)((char)local_2f0 + 1);
              }
            }
            auVar77._8_8_ = 0;
            auVar77._0_8_ = *(ulong *)(&_lzbitmap_pack_perm_table + (ulong)(uVar16 & 0xff) * 8);
            auVar72._8_8_ = 0;
            auVar72._0_8_ = uVar3;
            auVar73 = pshufb(auVar72,auVar77);
            *(long *)(local_b8 + uVar33) = auVar73._0_8_;
            uVar33 = (ulong)(byte)((char)uVar33 +
                                  (byte)(((uVar16 & 0xff) * 0x8040201 >> 3 & 0x11111111) *
                                         0x11111111 >> 0x1c));
            uVar17 = *puVar29 | 1 << ((uint)lVar19 & 0x1f);
            uVar22 = (ulong)uVar17;
            *puVar29 = uVar17;
            *(char *)((long)puVar29 + uVar21 + 4) = (char)uVar16;
            uVar21 = (ulong)(byte)((char)uVar21 + 1);
          }
LAB_001d6459:
          lVar19 = lVar19 + 1;
          uVar48 = (ulong)(iVar55 + 8);
        } while (lVar19 != 0x10);
        lVar26 = uVar21 + 4;
        lVar19 = uVar33 + local_2f0 * 2;
        if ((uint)((int)lVar19 + (int)lVar26) < 0x86) {
          puVar18 = (undefined8 *)((long)puVar29 + lVar26);
          puVar27 = (undefined8 *)(lVar26 + (long)puVar29);
          puVar27[2] = local_c8._0_8_;
          puVar27[3] = local_c8._8_8_;
          *puVar27 = local_d8._0_8_;
          puVar27[1] = local_d8._8_8_;
          if (puVar18 < puVar27 + 4) {
            puVar36 = (undefined8 *)local_d8;
            puVar34 = puVar18;
            do {
              uVar2 = *puVar36;
              uVar8 = puVar36[1];
              puVar1 = puVar36 + 2;
              uVar9 = puVar36[3];
              puVar36 = puVar36 + 4;
              puVar34[2] = *puVar1;
              puVar34[3] = uVar9;
              *puVar34 = uVar2;
              puVar34[1] = uVar8;
              puVar34 = puVar34 + 4;
            } while (puVar34 < puVar27 + 4);
          }
          puVar28 = (uint *)((long)puVar18 + lVar19);
          puVar20 = (uint *)((long)puVar28 - uVar33);
          *(undefined8 *)(puVar20 + 4) = local_a8._0_8_;
          *(undefined8 *)(puVar20 + 6) = local_a8._8_8_;
          *(undefined8 *)puVar20 = local_b8._0_8_;
          *(undefined8 *)(puVar20 + 2) = local_b8._8_8_;
          uVar39 = uVar41;
          if (puVar20 < puVar28) {
            puVar18 = (undefined8 *)local_b8;
            do {
              uVar2 = *puVar18;
              uVar8 = puVar18[1];
              puVar27 = puVar18 + 2;
              uVar9 = puVar18[3];
              puVar18 = puVar18 + 4;
              *(undefined8 *)(puVar20 + 4) = *puVar27;
              *(undefined8 *)(puVar20 + 6) = uVar9;
              *(undefined8 *)puVar20 = uVar2;
              *(undefined8 *)(puVar20 + 2) = uVar8;
              puVar20 = puVar20 + 8;
            } while (puVar20 < puVar28);
          }
        }
        else {
          *puVar29 = 0x80ffff;
          *(undefined1 *)(puVar29 + 1) = 0;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x80));
          uVar2 = puVar18[1];
          puVar27 = (undefined8 *)((long)param_3 + (uVar48 - 0x70));
          uVar8 = *puVar27;
          uVar9 = puVar27[1];
          puVar27 = (undefined8 *)((long)param_3 + (uVar48 - 0x60));
          uVar10 = *puVar27;
          uVar11 = puVar27[1];
          puVar27 = (undefined8 *)((long)param_3 + (uVar48 - 0x50));
          uVar12 = *puVar27;
          uVar13 = puVar27[1];
          *(undefined8 *)((long)puVar29 + 5) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0xd) = uVar2;
          *(undefined8 *)((long)puVar29 + 0x15) = uVar8;
          *(undefined8 *)((long)puVar29 + 0x1d) = uVar9;
          *(undefined8 *)((long)puVar29 + 0x25) = uVar10;
          *(undefined8 *)((long)puVar29 + 0x2d) = uVar11;
          *(undefined8 *)((long)puVar29 + 0x35) = uVar12;
          *(undefined8 *)((long)puVar29 + 0x3d) = uVar13;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x40));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x45) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x4d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x30));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x55) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x5d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x20));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x65) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x6d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x10));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x75) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x7d) = uVar2;
          puVar28 = (uint *)((long)puVar29 + 0x85);
        }
        local_310 = puVar29;
      } while (iVar55 + 0x98U <= local_2dc);
    }
  }
  else {
    local_378 = 0;
    if (param_6 == 1) {
      local_48 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      if (local_2dc < (uVar39 | 0x90)) goto LAB_001d5fe7;
      uVar24 = 8;
      uVar48 = local_320 & 0xffffffff;
      do {
        puVar29 = puVar28;
        if (puVar25 < puVar29 + 0x29) goto LAB_001d65e6;
        uVar21 = 0xfffffffffffffffe;
        puVar28 = (uint *)local_2b8;
        do {
          auVar73 = *(undefined1 (*) [16])((long)param_3 + uVar21 * 8 + uVar48 + 0x10);
          auVar70 = *(undefined1 (*) [16])((long)param_3 + uVar21 * 8 + uVar48 + 0x20);
          auVar78 = pshufb(auVar73,auVar50);
          auVar81 = pshufb(auVar73,auVar59);
          puVar28[-4] = (uint)(auVar81._0_4_ * -0x61c8864f) >> 0x13;
          puVar28[-3] = (uint)(auVar81._4_4_ * -0x61c8864f) >> 0x13;
          puVar28[-2] = (uint)((auVar81._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
          puVar28[-1] = (uint)(auVar81._12_4_ * -0x61c8864f) >> 0x13;
          puVar28[-8] = (uint)(auVar78._0_4_ * -0x61c8864f) >> 0x13;
          puVar28[-7] = (uint)(auVar78._4_4_ * -0x61c8864f) >> 0x13;
          puVar28[-6] = (uint)((auVar78._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
          puVar28[-5] = (uint)(auVar78._12_4_ * -0x61c8864f) >> 0x13;
          auVar6._16_16_ = auVar70;
          auVar6._0_16_ = auVar73;
          auVar70 = pshufb(auVar6._12_16_,auVar50);
          auVar73 = pshufb(auVar73,auVar62);
          iVar61 = auVar73._4_4_;
          auVar79._4_4_ = iVar61;
          auVar79._0_4_ = iVar61;
          auVar79._8_4_ = auVar73._12_4_;
          auVar79._12_4_ = auVar73._12_4_;
          iVar55 = auVar70._4_4_;
          auVar80._4_4_ = iVar55;
          auVar80._0_4_ = iVar55;
          auVar80._8_4_ = auVar70._12_4_;
          auVar80._12_4_ = auVar70._12_4_;
          *puVar28 = (uint)(auVar73._0_4_ * -0x61c8864f) >> 0x13;
          puVar28[1] = (uint)(iVar61 * -0x61c8864f) >> 0x13;
          puVar28[2] = (uint)((auVar73._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
          puVar28[3] = (uint)((auVar79._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
          puVar28[4] = (uint)(auVar70._0_4_ * -0x61c8864f) >> 0x13;
          puVar28[5] = (uint)(iVar55 * -0x61c8864f) >> 0x13;
          puVar28[6] = (uint)((auVar70._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
          puVar28[7] = (uint)((auVar80._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
          uVar21 = uVar21 + 2;
          puVar28 = puVar28 + 0x10;
        } while (uVar21 < 0xe);
        *puVar29 = 0;
        uVar39 = 0;
        uVar22 = 0;
        uVar33 = 0;
        local_2f0 = 0;
        uVar21 = 0;
        uVar44 = uVar24;
        do {
          iVar55 = (int)uVar48;
          uVar3 = *(ulong *)((long)param_3 + uVar48);
          uVar2 = *(undefined8 *)((long)param_3 + (uVar48 - uVar44));
          auVar74[0] = -((char)uVar2 == (char)uVar3);
          cVar51 = (char)(uVar3 >> 8);
          auVar74[1] = -((char)((ulong)uVar2 >> 8) == cVar51);
          cVar52 = (char)(uVar3 >> 0x10);
          auVar74[2] = -((char)((ulong)uVar2 >> 0x10) == cVar52);
          cVar53 = (char)(uVar3 >> 0x18);
          auVar74[3] = -((char)((ulong)uVar2 >> 0x18) == cVar53);
          cVar54 = (char)(uVar3 >> 0x20);
          auVar74[4] = -((char)((ulong)uVar2 >> 0x20) == cVar54);
          cVar56 = (char)(uVar3 >> 0x28);
          auVar74[5] = -((char)((ulong)uVar2 >> 0x28) == cVar56);
          cVar57 = (char)(uVar3 >> 0x30);
          auVar74[6] = -((char)((ulong)uVar2 >> 0x30) == cVar57);
          cVar58 = (char)(uVar3 >> 0x38);
          auVar74[7] = -((char)((ulong)uVar2 >> 0x38) == cVar58);
          auVar74[8] = 0xff;
          auVar74[9] = 0xff;
          auVar74[10] = 0xff;
          auVar74[0xb] = 0xff;
          auVar74[0xc] = 0xff;
          auVar74[0xd] = 0xff;
          auVar74[0xe] = 0xff;
          auVar74[0xf] = 0xff;
          uVar41 = ~(uint)(ushort)((ushort)(SUB161(auVar74 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7);
          if ((char)uVar41 != '\0') {
            uVar16 = ((uVar41 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111;
            uVar17 = uVar16 >> 0x1c;
            if ((byte)(uVar16 >> 0x1c) != 1) {
              lVar19 = uVar22 * 0x20;
              local_330 = (ulong)*(uint *)(local_2c8 + lVar19);
              sVar42 = (short)uVar48;
              sVar38 = *(short *)((long)param_5 + local_330 * 2);
              local_338 = CONCAT62(local_338._2_6_,uVar44);
              uVar16 = *(uint *)(local_2d8 + lVar19);
              sVar46 = *(short *)((long)param_5 + (ulong)uVar16 * 2);
              uVar31 = *(uint *)(local_2d8 + lVar19 + 8);
              uVar45 = *(uint *)(local_2d8 + lVar19 + 0xc);
              uVar47 = *(uint *)(local_2c8 + lVar19 + 4);
              local_328 = (ulong)*(uint *)(local_2c8 + lVar19 + 8);
              uVar4 = *(uint *)(local_2c8 + lVar19 + 0xc);
              *(short *)((long)param_5 + (ulong)*(uint *)(local_2d8 + lVar19 + 4) * 2) = sVar42 + 1;
              *(short *)((long)param_5 + (ulong)uVar31 * 2) = sVar42 + 2;
              *(short *)((long)param_5 + (ulong)uVar45 * 2) = sVar42 + 3;
              *(short *)((long)param_5 + (ulong)uVar47 * 2) = sVar42 + 5;
              *(short *)((long)param_5 + local_328 * 2) = sVar42 + 6;
              *(short *)((long)param_5 + (ulong)uVar4 * 2) = sVar42 + 7;
              *(short *)((long)param_5 + local_330 * 2) = sVar42 + 4;
              *(short *)((long)param_5 + (ulong)uVar16 * 2) = sVar42;
              uVar35 = (sVar42 + 4) - sVar38;
              uVar43 = uVar44;
              bVar15 = true;
              do {
                bVar14 = bVar15;
                uVar2 = *(undefined8 *)((long)param_3 + (uVar48 - uVar35));
                auVar75[0] = -((char)uVar2 == (char)uVar3);
                auVar75[1] = -((char)((ulong)uVar2 >> 8) == cVar51);
                auVar75[2] = -((char)((ulong)uVar2 >> 0x10) == cVar52);
                auVar75[3] = -((char)((ulong)uVar2 >> 0x18) == cVar53);
                auVar75[4] = -((char)((ulong)uVar2 >> 0x20) == cVar54);
                auVar75[5] = -((char)((ulong)uVar2 >> 0x28) == cVar56);
                auVar75[6] = -((char)((ulong)uVar2 >> 0x30) == cVar57);
                auVar75[7] = -((char)((ulong)uVar2 >> 0x38) == cVar58);
                auVar75[8] = 0xff;
                auVar75[9] = 0xff;
                auVar75[10] = 0xff;
                auVar75[0xb] = 0xff;
                auVar75[0xc] = 0xff;
                auVar75[0xd] = 0xff;
                auVar75[0xe] = 0xff;
                auVar75[0xf] = 0xff;
                uVar31 = ~(uint)(ushort)((ushort)(SUB161(auVar75 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7);
                uVar45 = uVar35 - 8 >> 0x18;
                uVar16 = uVar45 | uVar31;
                local_308 = uVar33;
                local_300 = uVar22;
                local_2f8 = uVar21;
                local_2e8 = uVar48;
                if ((char)uVar16 == '\0') {
                  uVar39 = uVar39 | 0x10000 << ((byte)uVar22 & 0x1f);
                  *puVar29 = uVar39;
                  *(ushort *)(local_d8 + local_2f0 * 2) = uVar35;
                  uVar44 = uVar35;
                  local_2f0 = (ulong)(byte)((char)local_2f0 + 1);
                  goto LAB_001d5e10;
                }
                uVar45 = uVar45 | uVar31 & 0xff;
                bVar23 = (byte)((uVar45 * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c) + 2;
                bVar30 = (byte)uVar17;
                if ((bool)(~bVar14 & bVar23 < bVar30)) goto LAB_001d5d70;
                uVar37 = uVar35;
                if (bVar30 <= bVar23) {
                  uVar37 = uVar43;
                }
                uVar16 = uVar41 & 0xff;
                uVar41 = uVar45;
                if (bVar30 <= bVar23) {
                  uVar41 = uVar16;
                }
                uVar16 = (uint)bVar23;
                if (bVar30 < bVar23) {
                  uVar16 = uVar17;
                }
                uVar17 = uVar16;
                uVar35 = sVar42 - sVar46;
                uVar43 = uVar37;
                bVar15 = false;
              } while (bVar14);
              uVar35 = uVar37;
              uVar16 = uVar41;
              if (uVar37 != uVar44) {
LAB_001d5d70:
                uVar41 = uVar16;
                uVar44 = uVar35;
                *puVar29 = 0x10000 << ((byte)uVar22 & 0x1f) | uVar39;
                *(ushort *)(local_d8 + local_2f0 * 2) = uVar44;
                local_2f0 = (ulong)(byte)((char)local_2f0 + 1);
              }
            }
            auVar76._8_8_ = 0;
            auVar76._0_8_ = *(ulong *)(&_lzbitmap_pack_perm_table + (ulong)(uVar41 & 0xff) * 8);
            auVar71._8_8_ = 0;
            auVar71._0_8_ = uVar3;
            auVar73 = pshufb(auVar71,auVar76);
            *(long *)(local_b8 + uVar33) = auVar73._0_8_;
            uVar33 = (ulong)(byte)((char)uVar33 +
                                  (byte)(((uVar41 & 0xff) * 0x8040201 >> 3 & 0x11111111) *
                                         0x11111111 >> 0x1c));
            uVar39 = *puVar29 | 1 << ((uint)uVar22 & 0x1f);
            *puVar29 = uVar39;
            *(char *)((long)puVar29 + uVar21 + 4) = (char)uVar41;
            uVar21 = (ulong)(byte)((char)uVar21 + 1);
          }
LAB_001d5e10:
          uVar22 = uVar22 + 1;
          uVar48 = (ulong)(iVar55 + 8);
        } while (uVar22 != 0x10);
        lVar26 = uVar21 + 4;
        lVar19 = uVar33 + local_2f0 * 2;
        if ((uint)((int)lVar19 + (int)lVar26) < 0x86) {
          puVar18 = (undefined8 *)((long)puVar29 + lVar26);
          puVar27 = (undefined8 *)(lVar26 + (long)puVar29);
          puVar27[2] = local_c8._0_8_;
          puVar27[3] = local_c8._8_8_;
          *puVar27 = local_d8._0_8_;
          puVar27[1] = local_d8._8_8_;
          if (puVar18 < puVar27 + 4) {
            puVar36 = (undefined8 *)local_d8;
            puVar34 = puVar18;
            do {
              uVar2 = *puVar36;
              uVar8 = puVar36[1];
              puVar1 = puVar36 + 2;
              uVar9 = puVar36[3];
              puVar36 = puVar36 + 4;
              puVar34[2] = *puVar1;
              puVar34[3] = uVar9;
              *puVar34 = uVar2;
              puVar34[1] = uVar8;
              puVar34 = puVar34 + 4;
            } while (puVar34 < puVar27 + 4);
          }
          puVar28 = (uint *)((long)puVar18 + lVar19);
          puVar20 = (uint *)((long)puVar28 - uVar33);
          *(undefined8 *)(puVar20 + 4) = local_a8._0_8_;
          *(undefined8 *)(puVar20 + 6) = local_a8._8_8_;
          *(undefined8 *)puVar20 = local_b8._0_8_;
          *(undefined8 *)(puVar20 + 2) = local_b8._8_8_;
          uVar24 = uVar44;
          if (puVar20 < puVar28) {
            puVar18 = (undefined8 *)local_b8;
            do {
              uVar2 = *puVar18;
              uVar8 = puVar18[1];
              puVar27 = puVar18 + 2;
              uVar9 = puVar18[3];
              puVar18 = puVar18 + 4;
              *(undefined8 *)(puVar20 + 4) = *puVar27;
              *(undefined8 *)(puVar20 + 6) = uVar9;
              *(undefined8 *)puVar20 = uVar2;
              *(undefined8 *)(puVar20 + 2) = uVar8;
              puVar20 = puVar20 + 8;
            } while (puVar20 < puVar28);
          }
        }
        else {
          *puVar29 = 0x80ffff;
          *(undefined1 *)(puVar29 + 1) = 0;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x80));
          uVar2 = puVar18[1];
          puVar27 = (undefined8 *)((long)param_3 + (uVar48 - 0x70));
          uVar8 = *puVar27;
          uVar9 = puVar27[1];
          puVar27 = (undefined8 *)((long)param_3 + (uVar48 - 0x60));
          uVar10 = *puVar27;
          uVar11 = puVar27[1];
          puVar27 = (undefined8 *)((long)param_3 + (uVar48 - 0x50));
          uVar12 = *puVar27;
          uVar13 = puVar27[1];
          *(undefined8 *)((long)puVar29 + 5) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0xd) = uVar2;
          *(undefined8 *)((long)puVar29 + 0x15) = uVar8;
          *(undefined8 *)((long)puVar29 + 0x1d) = uVar9;
          *(undefined8 *)((long)puVar29 + 0x25) = uVar10;
          *(undefined8 *)((long)puVar29 + 0x2d) = uVar11;
          *(undefined8 *)((long)puVar29 + 0x35) = uVar12;
          *(undefined8 *)((long)puVar29 + 0x3d) = uVar13;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x40));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x45) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x4d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x30));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x55) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x5d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x20));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x65) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x6d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x10));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x75) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x7d) = uVar2;
          puVar28 = (uint *)((long)puVar29 + 0x85);
        }
        local_310 = puVar29;
      } while (iVar55 + 0x98U <= local_2dc);
    }
    else {
      if (param_6 != 0) goto LAB_001d664d;
      local_268 = (undefined1  [16])0x0;
      local_278 = (undefined1  [16])0x0;
      local_288 = (undefined1  [16])0x0;
      local_298 = (undefined1  [16])0x0;
      local_2a8 = (undefined1  [16])0x0;
      local_2b8 = (undefined1  [16])0x0;
      local_2c8 = (undefined1  [16])0x0;
      local_2d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      if (local_2dc < (uVar39 | 0x90)) goto LAB_001d5fe7;
      local_328 = (long)param_3 - 0x80;
      uVar24 = 8;
      uVar48 = local_320 & 0xffffffff;
      do {
        puVar29 = puVar28;
        if (puVar25 < puVar29 + 0x29) goto LAB_001d65e6;
        auVar50 = *(undefined1 (*) [16])((long)param_3 + uVar48);
        auVar59 = *(undefined1 (*) [16])((long)param_3 + uVar48 + 0x10);
        iVar61 = auVar59._4_4_;
        auVar62._4_4_ = iVar61;
        auVar62._0_4_ = iVar61;
        auVar62._8_4_ = auVar59._12_4_;
        auVar62._12_4_ = auVar59._12_4_;
        iVar55 = auVar50._4_4_;
        auVar63._4_4_ = iVar55;
        auVar63._0_4_ = iVar55;
        auVar63._8_4_ = auVar50._12_4_;
        auVar63._12_4_ = auVar50._12_4_;
        local_a8._4_4_ = (uint)(iVar61 * -0x61c8864f) >> 0x13;
        local_a8._0_4_ = (uint)(auVar59._0_4_ * -0x61c8864f) >> 0x13;
        local_a8._8_4_ = (uint)((auVar59._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_a8._12_4_ = (uint)((auVar62._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_b8._4_4_ = (uint)(iVar55 * -0x61c8864f) >> 0x13;
        local_b8._0_4_ = (uint)(auVar50._0_4_ * -0x61c8864f) >> 0x13;
        local_b8._8_4_ = (uint)((auVar50._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_b8._12_4_ = (uint)((auVar63._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        auVar50 = *(undefined1 (*) [16])((long)param_3 + uVar48 + 0x20);
        auVar59 = *(undefined1 (*) [16])((long)param_3 + uVar48 + 0x30);
        iVar61 = auVar59._4_4_;
        auVar64._4_4_ = iVar61;
        auVar64._0_4_ = iVar61;
        auVar64._8_4_ = auVar59._12_4_;
        auVar64._12_4_ = auVar59._12_4_;
        iVar55 = auVar50._4_4_;
        auVar65._4_4_ = iVar55;
        auVar65._0_4_ = iVar55;
        auVar65._8_4_ = auVar50._12_4_;
        auVar65._12_4_ = auVar50._12_4_;
        local_88._4_4_ = (uint)(iVar61 * -0x61c8864f) >> 0x13;
        local_88._0_4_ = (uint)(auVar59._0_4_ * -0x61c8864f) >> 0x13;
        local_88._8_4_ = (uint)((auVar59._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_88._12_4_ = (uint)((auVar64._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_98._4_4_ = (uint)(iVar55 * -0x61c8864f) >> 0x13;
        local_98._0_4_ = (uint)(auVar50._0_4_ * -0x61c8864f) >> 0x13;
        local_98._8_4_ = (uint)((auVar50._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_98._12_4_ = (uint)((auVar65._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        auVar50 = *(undefined1 (*) [16])((long)param_3 + uVar48 + 0x40);
        auVar59 = *(undefined1 (*) [16])((long)param_3 + uVar48 + 0x50);
        iVar61 = auVar59._4_4_;
        auVar66._4_4_ = iVar61;
        auVar66._0_4_ = iVar61;
        auVar66._8_4_ = auVar59._12_4_;
        auVar66._12_4_ = auVar59._12_4_;
        iVar55 = auVar50._4_4_;
        auVar67._4_4_ = iVar55;
        auVar67._0_4_ = iVar55;
        auVar67._8_4_ = auVar50._12_4_;
        auVar67._12_4_ = auVar50._12_4_;
        local_68._4_4_ = (uint)(iVar61 * -0x61c8864f) >> 0x13;
        local_68._0_4_ = (uint)(auVar59._0_4_ * -0x61c8864f) >> 0x13;
        local_68._8_4_ = (uint)((auVar59._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_68._12_4_ = (uint)((auVar66._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_78._4_4_ = (uint)(iVar55 * -0x61c8864f) >> 0x13;
        local_78._0_4_ = (uint)(auVar50._0_4_ * -0x61c8864f) >> 0x13;
        local_78._8_4_ = (uint)((auVar50._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_78._12_4_ = (uint)((auVar67._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        auVar50 = *(undefined1 (*) [16])((long)param_3 + uVar48 + 0x60);
        auVar59 = *(undefined1 (*) [16])((long)param_3 + uVar48 + 0x70);
        iVar61 = auVar59._4_4_;
        auVar68._4_4_ = iVar61;
        auVar68._0_4_ = iVar61;
        auVar68._8_4_ = auVar59._12_4_;
        auVar68._12_4_ = auVar59._12_4_;
        iVar55 = auVar50._4_4_;
        auVar69._4_4_ = iVar55;
        auVar69._0_4_ = iVar55;
        auVar69._8_4_ = auVar50._12_4_;
        auVar69._12_4_ = auVar50._12_4_;
        local_48._4_4_ = (uint)(iVar61 * -0x61c8864f) >> 0x13;
        local_48._0_4_ = (uint)(auVar59._0_4_ * -0x61c8864f) >> 0x13;
        local_48._8_4_ = (uint)((auVar59._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_48._12_4_ = (uint)((auVar68._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_58._4_4_ = (uint)(iVar55 * -0x61c8864f) >> 0x13;
        local_58._0_4_ = (uint)(auVar50._0_4_ * -0x61c8864f) >> 0x13;
        local_58._8_4_ = (uint)((auVar50._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        local_58._12_4_ = (uint)((auVar69._8_8_ & 0xffffffff) * 0x9e3779b1) >> 0x13;
        *puVar29 = 0;
        uVar39 = 0;
        lVar19 = 0;
        local_330 = CONCAT62(local_330._2_6_,uVar24);
        uVar22 = 0;
        uVar21 = 0;
        local_2f8 = 0;
        uVar44 = uVar24;
        do {
          uVar33 = *(ulong *)((long)param_3 + uVar48);
          uVar2 = *(undefined8 *)((long)param_3 + (uVar48 - uVar44));
          auVar50[0] = -((char)uVar2 == (char)uVar33);
          cVar51 = (char)(uVar33 >> 8);
          auVar50[1] = -((char)((ulong)uVar2 >> 8) == cVar51);
          cVar52 = (char)(uVar33 >> 0x10);
          auVar50[2] = -((char)((ulong)uVar2 >> 0x10) == cVar52);
          cVar53 = (char)(uVar33 >> 0x18);
          auVar50[3] = -((char)((ulong)uVar2 >> 0x18) == cVar53);
          cVar54 = (char)(uVar33 >> 0x20);
          auVar50[4] = -((char)((ulong)uVar2 >> 0x20) == cVar54);
          cVar56 = (char)(uVar33 >> 0x28);
          auVar50[5] = -((char)((ulong)uVar2 >> 0x28) == cVar56);
          cVar57 = (char)(uVar33 >> 0x30);
          auVar50[6] = -((char)((ulong)uVar2 >> 0x30) == cVar57);
          cVar58 = (char)(uVar33 >> 0x38);
          auVar50[7] = -((char)((ulong)uVar2 >> 0x38) == cVar58);
          auVar50[8] = 0xff;
          auVar50[9] = 0xff;
          auVar50[10] = 0xff;
          auVar50[0xb] = 0xff;
          auVar50[0xc] = 0xff;
          auVar50[0xd] = 0xff;
          auVar50[0xe] = 0xff;
          auVar50[0xf] = 0xff;
          uVar41 = ~(uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7);
          if ((char)uVar41 != '\0') {
            uVar16 = ((uVar41 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111;
            uVar17 = uVar16 >> 0x1c;
            if ((byte)(uVar16 >> 0x1c) != 1) {
              uVar16 = *(uint *)(local_b8 + lVar19 * 8);
              sVar38 = *(short *)((long)param_5 + (ulong)uVar16 * 2);
              sVar42 = (short)uVar48;
              sVar46 = *(short *)((long)param_5 + (ulong)*(uint *)(local_b8 + lVar19 * 8 + 4) * 2);
              *(short *)((long)param_5 + (ulong)*(uint *)(local_b8 + lVar19 * 8 + 4) * 2) =
                   sVar42 + 4;
              *(short *)((long)param_5 + (ulong)uVar16 * 2) = sVar42;
              local_338 = CONCAT62(local_338._2_6_,uVar44);
              uVar35 = uVar44;
              uVar43 = sVar42 - sVar38;
              bVar15 = true;
              do {
                bVar14 = bVar15;
                uVar2 = *(undefined8 *)((long)param_3 + (uVar48 - uVar43));
                auVar59[0] = -((char)uVar2 == (char)uVar33);
                auVar59[1] = -((char)((ulong)uVar2 >> 8) == cVar51);
                auVar59[2] = -((char)((ulong)uVar2 >> 0x10) == cVar52);
                auVar59[3] = -((char)((ulong)uVar2 >> 0x18) == cVar53);
                auVar59[4] = -((char)((ulong)uVar2 >> 0x20) == cVar54);
                auVar59[5] = -((char)((ulong)uVar2 >> 0x28) == cVar56);
                auVar59[6] = -((char)((ulong)uVar2 >> 0x30) == cVar57);
                auVar59[7] = -((char)((ulong)uVar2 >> 0x38) == cVar58);
                auVar59[8] = 0xff;
                auVar59[9] = 0xff;
                auVar59[10] = 0xff;
                auVar59[0xb] = 0xff;
                auVar59[0xc] = 0xff;
                auVar59[0xd] = 0xff;
                auVar59[0xe] = 0xff;
                auVar59[0xf] = 0xff;
                uVar31 = ~(uint)(ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7);
                uVar45 = uVar43 - 8 >> 0x18;
                uVar16 = uVar45 | uVar31;
                local_308 = uVar22;
                local_300 = uVar21;
                local_2e8 = uVar48;
                if ((char)uVar16 == '\0') {
                  uVar39 = uVar39 | 0x10000 << ((byte)lVar19 & 0x1f);
                  *puVar29 = uVar39;
                  *(ushort *)(local_d8 + local_2f8 * 2) = uVar43;
                  uVar44 = uVar43;
                  local_2f8 = (ulong)(byte)((char)local_2f8 + 1);
                  goto LAB_001d578a;
                }
                uVar45 = uVar45 | uVar31 & 0xff;
                bVar30 = (byte)((uVar45 * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c) + 2;
                bVar23 = (byte)uVar17;
                if ((bool)(~bVar14 & bVar30 < bVar23)) goto LAB_001d56e6;
                if (bVar23 <= bVar30) {
                  uVar43 = uVar35;
                }
                uVar35 = uVar43;
                uVar16 = uVar41 & 0xff;
                uVar41 = uVar45;
                if (bVar23 <= bVar30) {
                  uVar41 = uVar16;
                }
                uVar16 = (uint)bVar30;
                if (bVar23 < bVar30) {
                  uVar16 = uVar17;
                }
                uVar17 = uVar16;
                uVar43 = (sVar42 + 4) - sVar46;
                bVar15 = false;
              } while (bVar14);
              uVar43 = uVar35;
              uVar16 = uVar41;
              if (uVar35 != uVar44) {
LAB_001d56e6:
                uVar41 = uVar16;
                uVar44 = uVar43;
                *puVar29 = 0x10000 << ((byte)lVar19 & 0x1f) | uVar39;
                *(ushort *)(local_d8 + local_2f8 * 2) = uVar44;
                local_2f8 = (ulong)(byte)((char)local_2f8 + 1);
              }
            }
            auVar60._8_8_ = 0;
            auVar60._0_8_ = *(ulong *)(&_lzbitmap_pack_perm_table + (ulong)(uVar41 & 0xff) * 8);
            auVar49._8_8_ = 0;
            auVar49._0_8_ = uVar33;
            auVar50 = pshufb(auVar49,auVar60);
            *(long *)(local_2d8 + uVar22) = auVar50._0_8_;
            uVar22 = (ulong)(byte)((char)uVar22 +
                                  (byte)(((uVar41 & 0xff) * 0x8040201 >> 3 & 0x11111111) *
                                         0x11111111 >> 0x1c));
            uVar39 = *puVar29 | 1 << ((uint)lVar19 & 0x1f);
            *puVar29 = uVar39;
            *(char *)((long)puVar29 + uVar21 + 4) = (char)uVar41;
            uVar21 = (ulong)(byte)((char)uVar21 + 1);
          }
LAB_001d578a:
          iVar55 = (int)uVar48;
          lVar19 = lVar19 + 1;
          uVar48 = (ulong)(iVar55 + 8);
        } while (lVar19 != 0x10);
        lVar26 = uVar21 + 4;
        lVar19 = uVar22 + local_2f8 * 2;
        if ((uint)((int)lVar19 + (int)lVar26) < 0x86) {
          puVar18 = (undefined8 *)((long)puVar29 + lVar26);
          puVar27 = (undefined8 *)(lVar26 + (long)puVar29);
          puVar27[2] = local_c8._0_8_;
          puVar27[3] = local_c8._8_8_;
          *puVar27 = local_d8._0_8_;
          puVar27[1] = local_d8._8_8_;
          if (puVar18 < puVar27 + 4) {
            puVar36 = (undefined8 *)local_d8;
            puVar34 = puVar18;
            do {
              uVar2 = *puVar36;
              uVar8 = puVar36[1];
              puVar1 = puVar36 + 2;
              uVar9 = puVar36[3];
              puVar36 = puVar36 + 4;
              puVar34[2] = *puVar1;
              puVar34[3] = uVar9;
              *puVar34 = uVar2;
              puVar34[1] = uVar8;
              puVar34 = puVar34 + 4;
            } while (puVar34 < puVar27 + 4);
          }
          puVar28 = (uint *)((long)puVar18 + lVar19);
          puVar20 = (uint *)((long)puVar28 - uVar22);
          *(undefined8 *)(puVar20 + 4) = local_2c8._0_8_;
          *(undefined8 *)(puVar20 + 6) = local_2c8._8_8_;
          *(undefined8 *)puVar20 = local_2d8._0_8_;
          *(undefined8 *)(puVar20 + 2) = local_2d8._8_8_;
          uVar24 = uVar44;
          if (puVar20 < puVar28) {
            puVar18 = (undefined8 *)local_2d8;
            do {
              uVar2 = *puVar18;
              uVar8 = puVar18[1];
              puVar27 = puVar18 + 2;
              uVar9 = puVar18[3];
              puVar18 = puVar18 + 4;
              *(undefined8 *)(puVar20 + 4) = *puVar27;
              *(undefined8 *)(puVar20 + 6) = uVar9;
              *(undefined8 *)puVar20 = uVar2;
              *(undefined8 *)(puVar20 + 2) = uVar8;
              puVar20 = puVar20 + 8;
            } while (puVar20 < puVar28);
          }
        }
        else {
          *puVar29 = 0x80ffff;
          *(undefined1 *)(puVar29 + 1) = 0;
          uVar2 = ((undefined8 *)(local_328 + uVar48))[1];
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x70));
          uVar8 = *puVar18;
          uVar9 = puVar18[1];
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x60));
          uVar10 = *puVar18;
          uVar11 = puVar18[1];
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x50));
          uVar12 = *puVar18;
          uVar13 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 5) = *(undefined8 *)(local_328 + uVar48);
          *(undefined8 *)((long)puVar29 + 0xd) = uVar2;
          *(undefined8 *)((long)puVar29 + 0x15) = uVar8;
          *(undefined8 *)((long)puVar29 + 0x1d) = uVar9;
          *(undefined8 *)((long)puVar29 + 0x25) = uVar10;
          *(undefined8 *)((long)puVar29 + 0x2d) = uVar11;
          *(undefined8 *)((long)puVar29 + 0x35) = uVar12;
          *(undefined8 *)((long)puVar29 + 0x3d) = uVar13;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x40));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x45) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x4d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x30));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x55) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x5d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x20));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x65) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x6d) = uVar2;
          puVar18 = (undefined8 *)((long)param_3 + (uVar48 - 0x10));
          uVar2 = puVar18[1];
          *(undefined8 *)((long)puVar29 + 0x75) = *puVar18;
          *(undefined8 *)((long)puVar29 + 0x7d) = uVar2;
          puVar28 = (uint *)((long)puVar29 + 0x85);
        }
        local_310 = puVar29;
      } while (iVar55 + 0x98U <= local_2dc);
    }
  }
LAB_001d65f2:
  if (puVar28 == (uint *)0x0) {
LAB_001d663e:
    local_378 = 0;
  }
  else {
    do {
      uVar41 = (uint)uVar48;
      uVar39 = local_2dc - uVar41;
      puVar29 = puVar28;
      if (local_2dc < uVar41) break;
      puVar29 = (uint *)((long)puVar28 + (ulong)uVar39 + 5);
      if (puVar25 < puVar29) goto LAB_001d663e;
      *(undefined2 *)puVar28 = 0xffff;
      *(short *)((long)puVar28 + 2) = (short)uVar39;
      *(undefined1 *)(puVar28 + 1) = 0;
      _memcpy((void *)((long)puVar28 + 5),(void *)(uVar48 + (long)param_3),(ulong)uVar39);
      uVar48 = (ulong)local_2dc;
      puVar28 = puVar29;
    } while (local_2dc != uVar41);
    local_378 = (int)param_1;
    local_378 = (int)puVar29 - local_378;
  }
LAB_001d664d:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_378;
LAB_001d65e6:
  uVar48 = local_320 & 0xffffffff;
  puVar28 = (uint *)0x0;
  goto LAB_001d65f2;
}

