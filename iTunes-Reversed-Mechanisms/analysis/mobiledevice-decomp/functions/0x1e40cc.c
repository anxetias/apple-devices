// rea decompile_all
// name: _lzbitmap_process_block
// address: 0x1e40cc
// body: available
// range: 0x1e40cc-0x1e5cd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e5cd2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * _lzbitmap_process_block(long *param_1,uint *param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  long lVar12;
  short sVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  short sVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined1 (*pauVar24) [16];
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  char *pcVar34;
  ushort uVar35;
  undefined1 (*pauVar36) [16];
  undefined8 *puVar37;
  uint *puVar38;
  ulong uVar39;
  void *pvVar40;
  ulong uVar41;
  uint uVar42;
  ulong uVar43;
  long lVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined4 uVar49;
  long lVar50;
  ulong uVar51;
  bool bVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  undefined1 auVar61 [16];
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
  ulong local_270;
  uint local_25c;
  ushort local_258 [16];
  uint local_238 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  puVar1 = (undefined8 *)((long)param_2 + 6);
  if (param_2 == (uint *)0x0 || (undefined8 *)param_1[6] < puVar1) {
    puVar23 = (undefined1 *)0x0;
    goto LAB_001e5cad;
  }
  if ((param_4 < 0x91) ||
     (puVar37 = (undefined8 *)((long)param_2 + 0xf), (undefined8 *)param_1[6] < puVar37)) {
LAB_001e5c5f:
    puVar23 = (undefined1 *)((long)puVar1 + (ulong)param_4);
    if ((undefined1 *)param_1[6] < puVar23) {
      puVar23 = (undefined1 *)0x0;
    }
    else {
      _memcpy(puVar1,(void *)((param_3 & 0xffffffff) + param_1[5]),(ulong)param_4);
    }
  }
  else {
    uVar29 = *(uint *)(param_1 + 0xd);
    if ((ulong)uVar29 != 0) {
      lVar50 = param_1[3];
      iVar53 = 4;
      iVar54 = 5;
      iVar55 = 6;
      iVar56 = 7;
      iVar57 = 0;
      iVar58 = 1;
      iVar59 = 2;
      iVar60 = 3;
      uVar31 = 0;
      do {
        piVar2 = (int *)(lVar50 + uVar31 * 4);
        *piVar2 = iVar57;
        piVar2[1] = iVar58;
        piVar2[2] = iVar59;
        piVar2[3] = iVar60;
        piVar2 = (int *)(lVar50 + 0x10 + uVar31 * 4);
        *piVar2 = iVar53;
        piVar2[1] = iVar54;
        piVar2[2] = iVar55;
        piVar2[3] = iVar56;
        uVar31 = uVar31 + 8;
        iVar57 = iVar57 + 8;
        iVar58 = iVar58 + 8;
        iVar59 = iVar59 + 8;
        iVar60 = iVar60 + 8;
        iVar53 = iVar53 + 8;
        iVar54 = iVar54 + 8;
        iVar55 = iVar55 + 8;
        iVar56 = iVar56 + 8;
      } while (uVar31 < uVar29);
    }
    auVar61 = _DAT_0032b160;
    auVar19 = _DAT_0032b140;
    auVar18 = _DAT_0032b130;
    iVar53 = *(int *)((long)param_1 + 0x54);
    iVar54 = (int)param_3;
    if (iVar53 == 2) {
      puVar10 = (undefined8 *)param_1[5];
      piVar2 = (int *)param_1[3];
      puVar11 = (undefined2 *)param_1[2];
      uVar29 = (int)param_1[7] - 0x10;
      if (param_4 + iVar54 < uVar29) {
        uVar29 = param_4 + iVar54;
      }
      if (uVar29 < iVar54 + 0x80U) {
        uVar25 = 0;
        uVar29 = 8;
        uVar31 = 0;
        uVar39 = param_3 & 0xffffffff;
      }
      else {
        lVar50 = param_1[1];
        local_270 = 8;
        uVar39 = param_3 & 0xffffffff;
        uVar31 = 0;
        uVar41 = 0;
        do {
          if ((ulong)param_1[6] < (long)param_2 + uVar31 + 0x8f) goto LAB_001e57e4;
          lVar44 = param_1[0xb];
          uVar26 = 0xfffffffffffffffe;
          puVar38 = local_238 + 8;
          do {
            auVar72 = *(undefined1 (*) [16])((long)puVar10 + uVar26 * 8 + uVar39 + 0x10);
            auVar73 = *(undefined1 (*) [16])((long)puVar10 + uVar26 * 8 + uVar39 + 0x20);
            auVar76 = pshufb(auVar72,auVar18);
            auVar79 = pshufb(auVar72,auVar19);
            uVar33 = (ulong)(0x20 - (int)lVar44);
            puVar38[-4] = (uint)(auVar79._0_4_ * -0x61c8864f) >> uVar33;
            puVar38[-3] = (uint)(auVar79._4_4_ * -0x61c8864f) >> uVar33;
            puVar38[-2] = (uint)((auVar79._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar33;
            puVar38[-1] = (uint)(auVar79._12_4_ * -0x61c8864f) >> uVar33;
            puVar38[-8] = (uint)(auVar76._0_4_ * -0x61c8864f) >> uVar33;
            puVar38[-7] = (uint)(auVar76._4_4_ * -0x61c8864f) >> uVar33;
            puVar38[-6] = (uint)((auVar76._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar33;
            puVar38[-5] = (uint)(auVar76._12_4_ * -0x61c8864f) >> uVar33;
            auVar15._16_16_ = auVar73;
            auVar15._0_16_ = auVar72;
            auVar73 = pshufb(auVar15._12_16_,auVar18);
            auVar72 = pshufb(auVar72,auVar61);
            iVar55 = auVar72._4_4_;
            auVar76._4_4_ = iVar55;
            auVar76._0_4_ = iVar55;
            auVar76._8_4_ = auVar72._12_4_;
            auVar76._12_4_ = auVar72._12_4_;
            iVar53 = auVar73._4_4_;
            auVar79._4_4_ = iVar53;
            auVar79._0_4_ = iVar53;
            auVar79._8_4_ = auVar73._12_4_;
            auVar79._12_4_ = auVar73._12_4_;
            *puVar38 = (uint)(auVar72._0_4_ * -0x61c8864f) >> uVar33;
            puVar38[1] = (uint)(iVar55 * -0x61c8864f) >> uVar33;
            puVar38[2] = (uint)((auVar72._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar33;
            puVar38[3] = (uint)((auVar76._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar33;
            puVar38[4] = (uint)(auVar73._0_4_ * -0x61c8864f) >> uVar33;
            puVar38[5] = (uint)(iVar53 * -0x61c8864f) >> uVar33;
            puVar38[6] = (uint)((auVar73._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar33;
            puVar38[7] = (uint)((auVar79._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar33;
            uVar26 = uVar26 + 2;
            puVar38 = puVar38 + 0x10;
          } while (uVar26 < 0xe);
          if ((int)uVar39 == 0) {
            *puVar11 = 0xff;
            piVar2[0xff] = piVar2[0xff] + 0x10000;
            *puVar37 = *puVar10;
            uVar31 = 8;
            uVar39 = 8;
          }
          uVar26 = (ulong)((int)uVar39 == 8);
          do {
            auVar72 = *(undefined1 (*) [16])((long)puVar10 + uVar39);
            pcVar34 = (char *)((long)puVar10 + (uVar39 - local_270));
            auVar73[0] = -(*pcVar34 == auVar72[0]);
            auVar73[1] = -(pcVar34[1] == auVar72[1]);
            auVar73[2] = -(pcVar34[2] == auVar72[2]);
            auVar73[3] = -(pcVar34[3] == auVar72[3]);
            auVar73[4] = -(pcVar34[4] == auVar72[4]);
            auVar73[5] = -(pcVar34[5] == auVar72[5]);
            auVar73[6] = -(pcVar34[6] == auVar72[6]);
            auVar73[7] = -(pcVar34[7] == auVar72[7]);
            auVar73[8] = -(pcVar34[8] == auVar72[8]);
            auVar73[9] = -(pcVar34[9] == auVar72[9]);
            auVar73[10] = -(pcVar34[10] == auVar72[10]);
            auVar73[0xb] = -(pcVar34[0xb] == auVar72[0xb]);
            auVar73[0xc] = -(pcVar34[0xc] == auVar72[0xc]);
            auVar73[0xd] = -(pcVar34[0xd] == auVar72[0xd]);
            auVar73[0xe] = -(pcVar34[0xe] == auVar72[0xe]);
            auVar73[0xf] = -(pcVar34[0xf] == auVar72[0xf]);
            uVar30 = (uint)(ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(auVar73[0xf] >> 7) << 0xf);
            uVar42 = uVar30 ^ 0xffff;
            uVar33 = (ulong)uVar42;
            uVar47 = (uint)uVar39;
            uVar25 = uVar47 - iVar54 >> 3;
            if ((uVar42 & 0xff) == 0) {
              lVar44 = *param_1;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8 + 1] * 2) =
                   uVar47 + 1 & 0xffff |
                   *(int *)(lVar44 + (ulong)local_238[uVar26 * 8 + 1] * 2) << 0x10;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8 + 2] * 2) =
                   uVar47 + 2 & 0xffff |
                   *(int *)(lVar44 + (ulong)local_238[uVar26 * 8 + 2] * 2) << 0x10;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8 + 3] * 2) =
                   uVar47 + 3 & 0xffff |
                   *(int *)(lVar44 + (ulong)local_238[uVar26 * 8 + 3] * 2) << 0x10;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8 + 5] * 2) =
                   uVar47 + 5 & 0xffff |
                   *(int *)(lVar44 + (ulong)local_238[uVar26 * 8 + 5] * 2) << 0x10;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8 + 6] * 2) =
                   uVar47 + 6 & 0xffff |
                   *(int *)(lVar44 + (ulong)local_238[uVar26 * 8 + 6] * 2) << 0x10;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8 + 7] * 2) =
                   uVar47 + 7 & 0xffff |
                   *(int *)(lVar44 + (ulong)local_238[uVar26 * 8 + 7] * 2) << 0x10;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8 + 4] * 2) =
                   uVar47 + 4 & 0xffff |
                   *(int *)(lVar44 + (ulong)local_238[uVar26 * 8 + 4] * 2) << 0x10;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8] * 2) =
                   uVar47 & 0xffff | *(int *)(lVar44 + (ulong)local_238[uVar26 * 8] * 2) << 0x10;
              puVar11[uVar25] = 0;
              *piVar2 = *piVar2 + 0x10000;
            }
            else {
              lVar44 = *param_1;
              uVar27 = (ulong)local_238[uVar26 * 8];
              uVar32 = (ulong)local_238[uVar26 * 8 + 2];
              uVar49 = *(undefined4 *)(lVar44 + uVar27 * 2);
              sVar20 = (short)uVar39;
              local_258[0] = sVar20 - (short)uVar49;
              local_258[8] = sVar20 - (short)((uint)uVar49 >> 0x10);
              uVar21 = (ulong)local_238[uVar26 * 8 + 4];
              uVar49 = *(undefined4 *)(lVar44 + uVar21 * 2);
              local_258[1] = (short)(uVar47 + 4) - (short)uVar49;
              local_258[9] = (sVar20 - (short)((uint)uVar49 >> 0x10)) + 4;
              uVar49 = *(undefined4 *)(lVar44 + uVar32 * 2);
              local_258[2] = (short)(uVar47 + 2) - (short)uVar49;
              local_258[10] = (sVar20 - (short)((uint)uVar49 >> 0x10)) + 2;
              uVar22 = (ulong)local_238[uVar26 * 8 + 3];
              uVar49 = *(undefined4 *)(lVar44 + uVar22 * 2);
              local_258[3] = (short)(uVar47 + 3) - (short)uVar49;
              local_258[0xb] = (sVar20 - (short)((uint)uVar49 >> 0x10)) + 3;
              iVar53 = *(int *)(lVar44 + (ulong)local_238[uVar26 * 8 + 1] * 2);
              local_258[4] = (short)(uVar47 + 1) - (short)iVar53;
              local_258[0xc] = (sVar20 - (short)((uint)iVar53 >> 0x10)) + 1;
              uVar28 = (ulong)local_238[uVar26 * 8 + 5];
              uVar49 = *(undefined4 *)(lVar44 + uVar28 * 2);
              local_258[5] = (short)(uVar47 + 5) - (short)uVar49;
              local_258[0xd] = (sVar20 - (short)((uint)uVar49 >> 0x10)) + 5;
              uVar43 = (ulong)local_238[uVar26 * 8 + 6];
              uVar49 = *(undefined4 *)(lVar44 + uVar43 * 2);
              local_258[6] = (short)(uVar47 + 6) - (short)uVar49;
              local_258[0xe] = (sVar20 - (short)((uint)uVar49 >> 0x10)) + 6;
              uVar51 = (ulong)local_238[uVar26 * 8 + 7];
              uVar49 = *(undefined4 *)(lVar44 + uVar51 * 2);
              local_258[7] = (short)(uVar47 + 7) - (short)uVar49;
              local_258[0xf] = (sVar20 - (short)((uint)uVar49 >> 0x10)) + 7;
              *(uint *)(lVar44 + (ulong)local_238[uVar26 * 8 + 1] * 2) =
                   uVar47 + 1 & 0xffff | iVar53 << 0x10;
              *(uint *)(lVar44 + uVar32 * 2) =
                   uVar47 + 2 & 0xffff | *(int *)(lVar44 + uVar32 * 2) << 0x10;
              *(uint *)(lVar44 + uVar22 * 2) =
                   uVar47 + 3 & 0xffff | *(int *)(lVar44 + uVar22 * 2) << 0x10;
              *(uint *)(lVar44 + uVar28 * 2) =
                   uVar47 + 5 & 0xffff | *(int *)(lVar44 + uVar28 * 2) << 0x10;
              *(uint *)(lVar44 + uVar43 * 2) =
                   uVar47 + 6 & 0xffff | *(int *)(lVar44 + uVar43 * 2) << 0x10;
              *(uint *)(lVar44 + uVar51 * 2) =
                   uVar47 + 7 & 0xffff | *(int *)(lVar44 + uVar51 * 2) << 0x10;
              *(uint *)(lVar44 + uVar21 * 2) =
                   uVar47 + 4 & 0xffff | *(int *)(lVar44 + uVar21 * 2) << 0x10;
              *(uint *)(lVar44 + uVar27 * 2) =
                   uVar47 & 0xffff | *(int *)(lVar44 + uVar27 * 2) << 0x10;
              uVar30 = (uint)(byte)((byte)(((uVar42 >> 8) * 0x8040201 >> 3 & 0x11111111) *
                                           0x11111111 >> 0x1c) +
                                    (byte)((((uVar30 ^ 0xffff) & 0xff) * 0x8040201 >> 3 & 0x11111111
                                           ) * 0x11111111 >> 0x1c) * '\x04' + 4);
              lVar44 = 0;
              uVar42 = 0;
              uVar35 = (ushort)local_270;
              do {
                uVar5 = local_258[lVar44];
                pcVar34 = (char *)((long)puVar10 + (uVar39 - uVar5));
                auVar67[0] = -(*pcVar34 == auVar72[0]);
                auVar67[1] = -(pcVar34[1] == auVar72[1]);
                auVar67[2] = -(pcVar34[2] == auVar72[2]);
                auVar67[3] = -(pcVar34[3] == auVar72[3]);
                auVar67[4] = -(pcVar34[4] == auVar72[4]);
                auVar67[5] = -(pcVar34[5] == auVar72[5]);
                auVar67[6] = -(pcVar34[6] == auVar72[6]);
                auVar67[7] = -(pcVar34[7] == auVar72[7]);
                auVar67[8] = -(pcVar34[8] == auVar72[8]);
                auVar67[9] = -(pcVar34[9] == auVar72[9]);
                auVar67[10] = -(pcVar34[10] == auVar72[10]);
                auVar67[0xb] = -(pcVar34[0xb] == auVar72[0xb]);
                auVar67[0xc] = -(pcVar34[0xc] == auVar72[0xc]);
                auVar67[0xd] = -(pcVar34[0xd] == auVar72[0xd]);
                auVar67[0xe] = -(pcVar34[0xe] == auVar72[0xe]);
                auVar67[0xf] = -(pcVar34[0xf] == auVar72[0xf]);
                uVar46 = (int)(uVar5 - 8) >> 0x18 |
                         (ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar67[0xf] >> 7) << 0xf) ^ 0xffff;
                uVar45 = uVar5 + 0x1ff00 >> 0x10;
                uVar48 = (((uVar46 >> 8 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c)
                         + (uint)((short)uVar33 != 0) * 4 +
                         ((((uVar46 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c) +
                         uVar45) * 4;
                if (uVar48 < uVar30) {
                  uVar33 = (ulong)uVar46;
                  uVar30 = uVar48;
                  uVar35 = uVar5;
                  uVar42 = uVar45;
                }
                lVar44 = lVar44 + 1;
              } while (lVar44 != 0x10);
              local_270 = (ulong)uVar35;
              *(ushort *)(lVar50 + (uVar41 & 0xffff)) = uVar35;
              uVar41 = (ulong)((int)uVar41 + uVar42);
              uVar33 = uVar33 & 0xff;
              auVar68._8_8_ = 0;
              auVar68._0_8_ = *(ulong *)(&_lzbitmap_pack_perm_table + uVar33 * 8);
              auVar72._8_8_ = 0;
              auVar72 = pshufb(auVar72,auVar68);
              *(long *)((long)puVar37 + uVar31) = auVar72._0_8_;
              puVar11[uVar25] = (ushort)(uVar42 << 8) | (ushort)uVar33;
              piVar2[uVar42 << 8 | (uint)uVar33] = piVar2[uVar42 << 8 | (uint)uVar33] + 0x10000;
              uVar31 = (ulong)((int)uVar31 +
                              (((uint)uVar33 * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c));
            }
            uVar26 = uVar26 + 1;
            uVar39 = (ulong)(uVar47 + 8);
          } while (uVar26 != 0x10);
        } while (uVar47 + 0x88 <= uVar29);
        uVar29 = (uint)(ushort)local_270;
        uVar25 = (uint)uVar41 & 0xffff;
      }
      uVar47 = (param_4 + 0x3f & 0xffffffc0) + iVar54;
      uVar49 = (undefined4)uVar31;
      if ((ulong)param_1[6] < (long)puVar37 + (uVar47 - (uint)uVar39) + uVar31) goto LAB_001e57e4;
      if ((uint)uVar39 < uVar47) {
        do {
          iVar55 = (int)uVar39;
          uVar30 = (uint)(iVar55 - iVar54) >> 3;
          puVar11[uVar30] = 0;
          uVar35 = 0;
          iVar53 = 0;
          do {
            if (((uint)(iVar55 + iVar53) < *(uint *)(param_1 + 7)) &&
               (cVar4 = *(char *)((long)puVar10 + (ulong)(uint)(iVar55 + iVar53)),
               cVar4 != *(char *)((long)puVar10 + (ulong)((iVar55 - uVar29) + iVar53)))) {
              *(char *)((long)puVar37 + uVar31) = cVar4;
              uVar31 = (ulong)((int)uVar31 + 1);
              uVar35 = (ushort)(1 << ((byte)iVar53 & 0x1f)) | puVar11[uVar30];
              puVar11[uVar30] = uVar35;
            }
            iVar53 = iVar53 + 1;
          } while (iVar53 != 8);
          piVar2[uVar35] = piVar2[uVar35] + 0x10000;
          uVar39 = (ulong)(iVar55 + 8U);
        } while (iVar55 + 8U < uVar47);
        uVar49 = (undefined4)uVar31;
      }
      *(undefined4 *)(param_1 + 0xf) = uVar49;
      *(uint *)((long)param_1 + 0x7c) = uVar25;
LAB_001e5887:
      pvVar40 = (void *)((long)puVar37 + uVar31);
    }
    else {
      if (iVar53 == 1) {
        puVar10 = (undefined8 *)param_1[5];
        piVar2 = (int *)param_1[3];
        puVar11 = (undefined2 *)param_1[2];
        uVar29 = (int)param_1[7] - 0x10;
        if (param_4 + iVar54 < uVar29) {
          uVar29 = param_4 + iVar54;
        }
        if (uVar29 < iVar54 + 0x80U) {
          uVar25 = 0;
          iVar53 = 8;
          local_25c = 0;
          uVar31 = param_3 & 0xffffffff;
        }
        else {
          lVar50 = param_1[1];
          local_270 = 8;
          uVar31 = param_3 & 0xffffffff;
          local_25c = 0;
          uVar25 = 0;
          do {
            if ((ulong)param_1[6] < (long)param_2 + (ulong)local_25c + 0x8f) goto LAB_001e57e4;
            lVar44 = param_1[0xb];
            uVar39 = 0xfffffffffffffffe;
            puVar38 = local_238 + 8;
            do {
              auVar72 = *(undefined1 (*) [16])((long)puVar10 + uVar39 * 8 + uVar31 + 0x10);
              auVar73 = *(undefined1 (*) [16])((long)puVar10 + uVar39 * 8 + uVar31 + 0x20);
              auVar76 = pshufb(auVar72,auVar18);
              auVar79 = pshufb(auVar72,auVar19);
              uVar41 = (ulong)(0x20 - (int)lVar44);
              puVar38[-4] = (uint)(auVar79._0_4_ * -0x61c8864f) >> uVar41;
              puVar38[-3] = (uint)(auVar79._4_4_ * -0x61c8864f) >> uVar41;
              puVar38[-2] = (uint)((auVar79._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar41;
              puVar38[-1] = (uint)(auVar79._12_4_ * -0x61c8864f) >> uVar41;
              puVar38[-8] = (uint)(auVar76._0_4_ * -0x61c8864f) >> uVar41;
              puVar38[-7] = (uint)(auVar76._4_4_ * -0x61c8864f) >> uVar41;
              puVar38[-6] = (uint)((auVar76._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar41;
              puVar38[-5] = (uint)(auVar76._12_4_ * -0x61c8864f) >> uVar41;
              auVar14._16_16_ = auVar73;
              auVar14._0_16_ = auVar72;
              auVar73 = pshufb(auVar14._12_16_,auVar18);
              auVar72 = pshufb(auVar72,auVar61);
              iVar55 = auVar72._4_4_;
              auVar75._4_4_ = iVar55;
              auVar75._0_4_ = iVar55;
              auVar75._8_4_ = auVar72._12_4_;
              auVar75._12_4_ = auVar72._12_4_;
              iVar53 = auVar73._4_4_;
              auVar78._4_4_ = iVar53;
              auVar78._0_4_ = iVar53;
              auVar78._8_4_ = auVar73._12_4_;
              auVar78._12_4_ = auVar73._12_4_;
              *puVar38 = (uint)(auVar72._0_4_ * -0x61c8864f) >> uVar41;
              puVar38[1] = (uint)(iVar55 * -0x61c8864f) >> uVar41;
              puVar38[2] = (uint)((auVar72._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar41;
              puVar38[3] = (uint)((auVar75._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar41;
              puVar38[4] = (uint)(auVar73._0_4_ * -0x61c8864f) >> uVar41;
              puVar38[5] = (uint)(iVar53 * -0x61c8864f) >> uVar41;
              puVar38[6] = (uint)((auVar73._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar41;
              puVar38[7] = (uint)((auVar78._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar41;
              uVar39 = uVar39 + 2;
              puVar38 = puVar38 + 0x10;
            } while (uVar39 < 0xe);
            if ((int)uVar31 == 0) {
              *puVar11 = 0xff;
              piVar2[0xff] = piVar2[0xff] + 0x10000;
              *puVar37 = *puVar10;
              local_25c = 8;
              uVar31 = 8;
            }
            uVar39 = (ulong)((int)uVar31 == 8);
            do {
              iVar53 = (int)uVar31;
              auVar72 = *(undefined1 (*) [16])((long)puVar10 + uVar31);
              pcVar34 = (char *)((long)puVar10 + (uVar31 - local_270));
              auVar64[0] = -(*pcVar34 == auVar72[0]);
              auVar64[1] = -(pcVar34[1] == auVar72[1]);
              auVar64[2] = -(pcVar34[2] == auVar72[2]);
              auVar64[3] = -(pcVar34[3] == auVar72[3]);
              auVar64[4] = -(pcVar34[4] == auVar72[4]);
              auVar64[5] = -(pcVar34[5] == auVar72[5]);
              auVar64[6] = -(pcVar34[6] == auVar72[6]);
              auVar64[7] = -(pcVar34[7] == auVar72[7]);
              auVar64[8] = -(pcVar34[8] == auVar72[8]);
              auVar64[9] = -(pcVar34[9] == auVar72[9]);
              auVar64[10] = -(pcVar34[10] == auVar72[10]);
              auVar64[0xb] = -(pcVar34[0xb] == auVar72[0xb]);
              auVar64[0xc] = -(pcVar34[0xc] == auVar72[0xc]);
              auVar64[0xd] = -(pcVar34[0xd] == auVar72[0xd]);
              auVar64[0xe] = -(pcVar34[0xe] == auVar72[0xe]);
              auVar64[0xf] = -(pcVar34[0xf] == auVar72[0xf]);
              uVar47 = (ushort)((ushort)(SUB161(auVar64 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar64[0xf] >> 7) << 0xf) ^ 0xffff;
              uVar42 = (uint)(iVar53 - iVar54) >> 3;
              uVar30 = uVar47 & 0xff;
              if (uVar30 == 0) {
                puVar11[uVar42] = 0;
                *piVar2 = *piVar2 + 0x10000;
              }
              else {
                uVar48 = (uVar30 * 0x8040201 >> 3 & 0x11111111) * 0x11111111;
                if ((ushort)(uVar48 >> 0x1c) == 1) {
                  uVar47 = 1;
                  uVar48 = 0;
                }
                else {
                  lVar44 = *param_1;
                  uVar46 = local_238[uVar39 * 8];
                  sVar20 = (short)uVar31;
                  local_258[0] = sVar20 - *(short *)(lVar44 + (ulong)uVar46 * 2);
                  uVar30 = local_238[uVar39 * 8 + 4];
                  local_258[1] = (sVar20 + 4) - *(short *)(lVar44 + (ulong)uVar30 * 2);
                  uVar45 = local_238[uVar39 * 8 + 2];
                  local_258[2] = (sVar20 + 2) - *(short *)(lVar44 + (ulong)uVar45 * 2);
                  uVar6 = local_238[uVar39 * 8 + 3];
                  local_258[3] = (sVar20 + 3) - *(short *)(lVar44 + (ulong)uVar6 * 2);
                  local_258[4] = (sVar20 + 1) -
                                 *(short *)(lVar44 + (ulong)local_238[uVar39 * 8 + 1] * 2);
                  uVar7 = local_238[uVar39 * 8 + 5];
                  local_258[5] = (sVar20 + 5) - *(short *)(lVar44 + (ulong)uVar7 * 2);
                  uVar8 = local_238[uVar39 * 8 + 6];
                  local_258[6] = (sVar20 + 6) - *(short *)(lVar44 + (ulong)uVar8 * 2);
                  uVar9 = local_238[uVar39 * 8 + 7];
                  local_258[7] = (sVar20 + 7) - *(short *)(lVar44 + (ulong)uVar9 * 2);
                  *(short *)(lVar44 + (ulong)local_238[uVar39 * 8 + 1] * 2) = sVar20 + 1;
                  *(short *)(lVar44 + (ulong)uVar45 * 2) = sVar20 + 2;
                  *(short *)(lVar44 + (ulong)uVar6 * 2) = sVar20 + 3;
                  *(short *)(lVar44 + (ulong)uVar7 * 2) = sVar20 + 5;
                  *(short *)(lVar44 + (ulong)uVar8 * 2) = sVar20 + 6;
                  *(short *)(lVar44 + (ulong)uVar9 * 2) = sVar20 + 7;
                  *(short *)(lVar44 + (ulong)uVar30 * 2) = sVar20 + 4;
                  uVar30 = (((uVar47 >> 8) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c) +
                           (uVar48 >> 0x1c) * 4;
                  *(short *)(lVar44 + (ulong)uVar46 * 2) = sVar20;
                  lVar44 = 0;
                  uVar48 = 0;
                  do {
                    uVar35 = local_258[lVar44];
                    pcVar34 = (char *)((long)puVar10 + (uVar31 - uVar35));
                    auVar65[0] = -(*pcVar34 == auVar72[0]);
                    auVar65[1] = -(pcVar34[1] == auVar72[1]);
                    auVar65[2] = -(pcVar34[2] == auVar72[2]);
                    auVar65[3] = -(pcVar34[3] == auVar72[3]);
                    auVar65[4] = -(pcVar34[4] == auVar72[4]);
                    auVar65[5] = -(pcVar34[5] == auVar72[5]);
                    auVar65[6] = -(pcVar34[6] == auVar72[6]);
                    auVar65[7] = -(pcVar34[7] == auVar72[7]);
                    auVar65[8] = -(pcVar34[8] == auVar72[8]);
                    auVar65[9] = -(pcVar34[9] == auVar72[9]);
                    auVar65[10] = -(pcVar34[10] == auVar72[10]);
                    auVar65[0xb] = -(pcVar34[0xb] == auVar72[0xb]);
                    auVar65[0xc] = -(pcVar34[0xc] == auVar72[0xc]);
                    auVar65[0xd] = -(pcVar34[0xd] == auVar72[0xd]);
                    auVar65[0xe] = -(pcVar34[0xe] == auVar72[0xe]);
                    auVar65[0xf] = -(pcVar34[0xf] == auVar72[0xf]);
                    uVar46 = (int)(uVar35 - 8) >> 0x18 |
                             ~(uint)(ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(auVar65[0xf] >> 7) << 0xf);
                    uVar45 = uVar35 + 0x1ff00 >> 0x10;
                    if ((short)uVar46 == 0) {
                      puVar11[uVar42] = (short)(uVar45 << 8);
                      piVar3 = (int *)((long)piVar2 + (ulong)(uVar45 << 10));
                      *piVar3 = *piVar3 + 0x10000;
                      *(ushort *)(lVar50 + (ulong)(uVar25 & 0xffff)) = uVar35;
                      uVar25 = uVar45 + uVar25;
                      local_270 = (ulong)(uint)uVar35;
                      goto LAB_001e4892;
                    }
                    uVar6 = ((((uVar46 & 0xffff) >> 8) * 0x8040201 >> 3 & 0x11111111) * 0x11111111
                            >> 0x1c) +
                            ((((uVar46 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c)
                            + uVar45) * 4;
                    if (uVar6 < uVar30) {
                      local_270 = (ulong)uVar35;
                      uVar47 = uVar46;
                      uVar48 = uVar45;
                      uVar30 = uVar6;
                    }
                    lVar44 = lVar44 + 1;
                  } while (lVar44 != 8);
                  *(ushort *)(lVar50 + (ulong)(uVar25 & 0xffff)) = (ushort)local_270;
                  uVar25 = uVar48 + uVar25;
                  uVar30 = uVar47 & 0xff;
                  uVar47 = (uVar30 * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c;
                }
                auVar66._8_8_ = 0;
                auVar66._0_8_ = *(ulong *)(&_lzbitmap_pack_perm_table + (ulong)uVar30 * 8);
                auVar62._0_8_ = auVar72._0_8_;
                auVar62._8_8_ = 0;
                auVar72 = pshufb(auVar62,auVar66);
                *(long *)((long)puVar37 + (ulong)local_25c) = auVar72._0_8_;
                puVar11[uVar42] = (ushort)(uVar48 << 8) | (ushort)uVar30;
                piVar2[uVar48 << 8 | uVar30] = piVar2[uVar48 << 8 | uVar30] + 0x10000;
                local_25c = local_25c + uVar47;
              }
LAB_001e4892:
              uVar39 = uVar39 + 1;
              uVar31 = (ulong)(iVar53 + 8);
            } while (uVar39 != 0x10);
          } while (iVar53 + 0x88U <= uVar29);
          iVar53 = (int)local_270;
          uVar25 = uVar25 & 0xffff;
        }
        uVar29 = (param_4 + 0x3f & 0xffffffc0) + iVar54;
        uVar39 = (ulong)local_25c;
        if ((long)puVar37 + (uVar29 - (uint)uVar31) + uVar39 <= (ulong)param_1[6]) {
          if ((uint)uVar31 < uVar29) {
            uVar39 = (ulong)local_25c;
            do {
              iVar56 = (int)uVar31;
              uVar47 = (uint)(iVar56 - iVar54) >> 3;
              puVar11[uVar47] = 0;
              uVar31 = 0;
              iVar55 = 0;
              do {
                if (((uint)(iVar55 + iVar56) < *(uint *)(param_1 + 7)) &&
                   (cVar4 = *(char *)((long)puVar10 + (ulong)(uint)(iVar55 + iVar56)),
                   cVar4 != *(char *)((long)puVar10 + (ulong)(uint)((iVar56 - iVar53) + iVar55)))) {
                  *(char *)((long)puVar37 + uVar39) = cVar4;
                  uVar39 = (ulong)((int)uVar39 + 1);
                  uVar35 = (ushort)(1 << ((byte)iVar55 & 0x1f)) | puVar11[uVar47];
                  uVar31 = (ulong)uVar35;
                  puVar11[uVar47] = uVar35;
                }
                local_25c = (uint)uVar39;
                iVar55 = iVar55 + 1;
              } while (iVar55 != 8);
              piVar2[uVar31] = piVar2[uVar31] + 0x10000;
              uVar31 = (ulong)(iVar56 + 8U);
            } while (iVar56 + 8U < uVar29);
          }
          *(uint *)(param_1 + 0xf) = local_25c;
          *(uint *)((long)param_1 + 0x7c) = uVar25;
          pvVar40 = (void *)((long)puVar37 + uVar39);
          goto LAB_001e5891;
        }
      }
      else {
        if (iVar53 != 0) goto LAB_001e5c5f;
        puVar10 = (undefined8 *)param_1[5];
        piVar2 = (int *)param_1[3];
        puVar11 = (undefined2 *)param_1[2];
        uVar29 = (int)param_1[7] - 0x10;
        if (param_4 + iVar54 < uVar29) {
          uVar29 = param_4 + iVar54;
        }
        if (uVar29 < iVar54 + 0x80U) {
          local_25c = 0;
          uVar25 = 8;
          uVar29 = 0;
          uVar39 = param_3 & 0xffffffff;
        }
        else {
          lVar50 = param_1[1];
          local_270 = 8;
          uVar39 = param_3 & 0xffffffff;
          uVar31 = 0;
          local_25c = 0;
          do {
            if ((ulong)param_1[6] < (long)param_2 + uVar31 + 0x8f) goto LAB_001e57e4;
            lVar44 = param_1[0xb];
            uVar41 = 0xfffffffffffffffe;
            puVar38 = local_238 + 8;
            do {
              auVar72 = *(undefined1 (*) [16])((long)puVar10 + uVar41 * 8 + uVar39 + 0x10);
              auVar73 = *(undefined1 (*) [16])((long)puVar10 + uVar41 * 8 + uVar39 + 0x20);
              auVar76 = pshufb(auVar72,auVar18);
              auVar79 = pshufb(auVar72,auVar19);
              uVar26 = (ulong)(0x20 - (int)lVar44);
              puVar38[-4] = (uint)(auVar79._0_4_ * -0x61c8864f) >> uVar26;
              puVar38[-3] = (uint)(auVar79._4_4_ * -0x61c8864f) >> uVar26;
              puVar38[-2] = (uint)((auVar79._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar26;
              puVar38[-1] = (uint)(auVar79._12_4_ * -0x61c8864f) >> uVar26;
              puVar38[-8] = (uint)(auVar76._0_4_ * -0x61c8864f) >> uVar26;
              puVar38[-7] = (uint)(auVar76._4_4_ * -0x61c8864f) >> uVar26;
              puVar38[-6] = (uint)((auVar76._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar26;
              puVar38[-5] = (uint)(auVar76._12_4_ * -0x61c8864f) >> uVar26;
              auVar16._16_16_ = auVar73;
              auVar16._0_16_ = auVar72;
              auVar73 = pshufb(auVar16._12_16_,auVar18);
              auVar72 = pshufb(auVar72,auVar61);
              iVar55 = auVar72._4_4_;
              auVar77._4_4_ = iVar55;
              auVar77._0_4_ = iVar55;
              auVar77._8_4_ = auVar72._12_4_;
              auVar77._12_4_ = auVar72._12_4_;
              iVar53 = auVar73._4_4_;
              auVar80._4_4_ = iVar53;
              auVar80._0_4_ = iVar53;
              auVar80._8_4_ = auVar73._12_4_;
              auVar80._12_4_ = auVar73._12_4_;
              *puVar38 = (uint)(auVar72._0_4_ * -0x61c8864f) >> uVar26;
              puVar38[1] = (uint)(iVar55 * -0x61c8864f) >> uVar26;
              puVar38[2] = (uint)((auVar72._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar26;
              puVar38[3] = (uint)((auVar77._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar26;
              puVar38[4] = (uint)(auVar73._0_4_ * -0x61c8864f) >> uVar26;
              puVar38[5] = (uint)(iVar53 * -0x61c8864f) >> uVar26;
              puVar38[6] = (uint)((auVar73._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar26;
              puVar38[7] = (uint)((auVar80._8_8_ & 0xffffffff) * 0x9e3779b1) >> uVar26;
              uVar41 = uVar41 + 2;
              puVar38 = puVar38 + 0x10;
            } while (uVar41 < 0xe);
            if ((int)uVar39 == 0) {
              *puVar11 = 0xff;
              piVar2[0xff] = piVar2[0xff] + 0x10000;
              *puVar37 = *puVar10;
              uVar31 = 8;
              uVar39 = 8;
            }
            uVar41 = (ulong)((int)uVar39 == 8);
            do {
              iVar53 = (int)uVar39;
              auVar72 = *(undefined1 (*) [16])((long)puVar10 + uVar39);
              pcVar34 = (char *)((long)puVar10 + (uVar39 - local_270));
              auVar69[0] = -(*pcVar34 == auVar72[0]);
              auVar69[1] = -(pcVar34[1] == auVar72[1]);
              auVar69[2] = -(pcVar34[2] == auVar72[2]);
              auVar69[3] = -(pcVar34[3] == auVar72[3]);
              auVar69[4] = -(pcVar34[4] == auVar72[4]);
              auVar69[5] = -(pcVar34[5] == auVar72[5]);
              auVar69[6] = -(pcVar34[6] == auVar72[6]);
              auVar69[7] = -(pcVar34[7] == auVar72[7]);
              auVar69[8] = -(pcVar34[8] == auVar72[8]);
              auVar69[9] = -(pcVar34[9] == auVar72[9]);
              auVar69[10] = -(pcVar34[10] == auVar72[10]);
              auVar69[0xb] = -(pcVar34[0xb] == auVar72[0xb]);
              auVar69[0xc] = -(pcVar34[0xc] == auVar72[0xc]);
              auVar69[0xd] = -(pcVar34[0xd] == auVar72[0xd]);
              auVar69[0xe] = -(pcVar34[0xe] == auVar72[0xe]);
              auVar69[0xf] = -(pcVar34[0xf] == auVar72[0xf]);
              uVar47 = (ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar69[0xf] >> 7) << 0xf) ^ 0xffff;
              uVar33 = (ulong)uVar47;
              uVar25 = (uint)(iVar53 - iVar54) >> 3;
              uVar26 = uVar33 & 0xff;
              if ((int)uVar26 == 0) {
                puVar11[uVar25] = 0;
                *piVar2 = *piVar2 + 0x10000;
              }
              else {
                uVar30 = ((uint)((int)uVar26 * 0x8040201) >> 3 & 0x11111111) * 0x11111111;
                if ((ushort)(uVar30 >> 0x1c) == 1) {
                  uVar47 = 1;
                  uVar30 = 0;
                }
                else {
                  lVar44 = *param_1;
                  uVar42 = local_238[uVar41 * 8];
                  sVar20 = (short)uVar39;
                  local_258[0] = sVar20 - *(short *)(lVar44 + (ulong)uVar42 * 2);
                  uVar48 = local_238[uVar41 * 8 + 4];
                  local_258[1] = (sVar20 + 4) - *(short *)(lVar44 + (ulong)uVar48 * 2);
                  uVar46 = local_238[uVar41 * 8 + 2];
                  local_258[2] = (sVar20 + 2) - *(short *)(lVar44 + (ulong)uVar46 * 2);
                  uVar45 = local_238[uVar41 * 8 + 3];
                  local_258[3] = (sVar20 + 3) - *(short *)(lVar44 + (ulong)uVar45 * 2);
                  *(short *)(lVar44 + (ulong)local_238[uVar41 * 8 + 1] * 2) = sVar20 + 1;
                  *(short *)(lVar44 + (ulong)uVar46 * 2) = sVar20 + 2;
                  *(short *)(lVar44 + (ulong)uVar45 * 2) = sVar20 + 3;
                  *(short *)(lVar44 + (ulong)local_238[uVar41 * 8 + 5] * 2) = sVar20 + 5;
                  *(short *)(lVar44 + (ulong)local_238[uVar41 * 8 + 6] * 2) = sVar20 + 6;
                  *(short *)(lVar44 + (ulong)local_238[uVar41 * 8 + 7] * 2) = sVar20 + 7;
                  *(short *)(lVar44 + (ulong)uVar48 * 2) = sVar20 + 4;
                  uVar47 = (((uVar47 >> 8) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c) +
                           (uVar30 >> 0x1c) * 4;
                  *(short *)(lVar44 + (ulong)uVar42 * 2) = sVar20;
                  lVar44 = 0;
                  uVar30 = 0;
                  uVar42 = (uint)(ushort)local_270;
                  do {
                    uVar35 = local_258[lVar44];
                    pcVar34 = (char *)((long)puVar10 + (uVar39 - uVar35));
                    auVar70[0] = -(*pcVar34 == auVar72[0]);
                    auVar70[1] = -(pcVar34[1] == auVar72[1]);
                    auVar70[2] = -(pcVar34[2] == auVar72[2]);
                    auVar70[3] = -(pcVar34[3] == auVar72[3]);
                    auVar70[4] = -(pcVar34[4] == auVar72[4]);
                    auVar70[5] = -(pcVar34[5] == auVar72[5]);
                    auVar70[6] = -(pcVar34[6] == auVar72[6]);
                    auVar70[7] = -(pcVar34[7] == auVar72[7]);
                    auVar70[8] = -(pcVar34[8] == auVar72[8]);
                    auVar70[9] = -(pcVar34[9] == auVar72[9]);
                    auVar70[10] = -(pcVar34[10] == auVar72[10]);
                    auVar70[0xb] = -(pcVar34[0xb] == auVar72[0xb]);
                    auVar70[0xc] = -(pcVar34[0xc] == auVar72[0xc]);
                    auVar70[0xd] = -(pcVar34[0xd] == auVar72[0xd]);
                    auVar70[0xe] = -(pcVar34[0xe] == auVar72[0xe]);
                    auVar70[0xf] = -(pcVar34[0xf] == auVar72[0xf]);
                    uVar48 = (int)(uVar35 - 8) >> 0x18 |
                             ~(uint)(ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(auVar70[0xf] >> 7) << 0xf);
                    uVar46 = uVar35 + 0x1ff00 >> 0x10;
                    if ((short)uVar48 == 0) {
                      puVar11[uVar25] = (short)(uVar46 << 8);
                      piVar3 = (int *)((long)piVar2 + (ulong)(uVar46 << 10));
                      *piVar3 = *piVar3 + 0x10000;
                      *(ushort *)(lVar50 + (ulong)(local_25c & 0xffff)) = uVar35;
                      local_25c = uVar46 + local_25c;
                      local_270 = (ulong)uVar35;
                      goto LAB_001e577d;
                    }
                    uVar45 = ((((uVar48 & 0xffff) >> 8) * 0x8040201 >> 3 & 0x11111111) * 0x11111111
                             >> 0x1c) +
                             ((((uVar48 & 0xff) * 0x8040201 >> 3 & 0x11111111) * 0x11111111 >> 0x1c)
                             + uVar46) * 4;
                    if (uVar45 < uVar47) {
                      uVar33 = (ulong)uVar48;
                      uVar30 = uVar46;
                      uVar42 = (uint)uVar35;
                      uVar47 = uVar45;
                    }
                    lVar44 = lVar44 + 1;
                  } while (lVar44 != 4);
                  local_270 = (ulong)(ushort)uVar42;
                  *(ushort *)(lVar50 + (ulong)(local_25c & 0xffff)) = (ushort)uVar42;
                  local_25c = uVar30 + local_25c;
                  uVar26 = uVar33 & 0xff;
                  uVar47 = ((uint)((int)uVar26 * 0x8040201) >> 3 & 0x11111111) * 0x11111111 >> 0x1c;
                }
                auVar71._8_8_ = 0;
                auVar71._0_8_ = *(ulong *)(&_lzbitmap_pack_perm_table + uVar26 * 8);
                auVar63._0_8_ = auVar72._0_8_;
                auVar63._8_8_ = 0;
                auVar72 = pshufb(auVar63,auVar71);
                *(long *)((long)puVar37 + uVar31) = auVar72._0_8_;
                puVar11[uVar25] = (ushort)(uVar30 << 8) | (ushort)uVar26;
                piVar2[uVar30 << 8 | (uint)uVar26] = piVar2[uVar30 << 8 | (uint)uVar26] + 0x10000;
                uVar31 = (ulong)((int)uVar31 + uVar47);
              }
LAB_001e577d:
              uVar41 = uVar41 + 1;
              uVar39 = (ulong)(iVar53 + 8);
            } while (uVar41 != 0x10);
          } while (iVar53 + 0x88U <= uVar29);
          uVar25 = (uint)(ushort)local_270;
          local_25c = local_25c & 0xffff;
          uVar29 = (uint)uVar31;
        }
        uVar47 = (param_4 + 0x3f & 0xffffffc0) + iVar54;
        uVar31 = (ulong)uVar29;
        if ((long)puVar37 + (uVar47 - (uint)uVar39) + uVar31 <= (ulong)param_1[6]) {
          if ((uint)uVar39 < uVar47) {
            uVar31 = (ulong)uVar29;
            do {
              iVar55 = (int)uVar39;
              uVar30 = (uint)(iVar55 - iVar54) >> 3;
              puVar11[uVar30] = 0;
              uVar35 = 0;
              iVar53 = 0;
              do {
                if (((uint)(iVar55 + iVar53) < *(uint *)(param_1 + 7)) &&
                   (cVar4 = *(char *)((long)puVar10 + (ulong)(uint)(iVar55 + iVar53)),
                   cVar4 != *(char *)((long)puVar10 + (ulong)((iVar55 - uVar25) + iVar53)))) {
                  *(char *)((long)puVar37 + uVar31) = cVar4;
                  uVar31 = (ulong)((int)uVar31 + 1);
                  uVar35 = (ushort)(1 << ((byte)iVar53 & 0x1f)) | puVar11[uVar30];
                  puVar11[uVar30] = uVar35;
                }
                uVar29 = (uint)uVar31;
                iVar53 = iVar53 + 1;
              } while (iVar53 != 8);
              piVar2[uVar35] = piVar2[uVar35] + 0x10000;
              uVar39 = (ulong)(iVar55 + 8U);
            } while (iVar55 + 8U < uVar47);
          }
          *(uint *)(param_1 + 0xf) = uVar29;
          *(uint *)((long)param_1 + 0x7c) = local_25c;
          goto LAB_001e5887;
        }
      }
LAB_001e57e4:
      pvVar40 = (void *)0x0;
    }
LAB_001e5891:
    if (pvVar40 == (void *)0x0) goto LAB_001e5c5f;
    uVar31 = (long)pvVar40 + (ulong)*(uint *)((long)param_1 + 0x7c);
    if ((ulong)param_1[6] < uVar31) goto LAB_001e5c5f;
    _memcpy(pvVar40,(void *)param_1[1],(ulong)*(uint *)((long)param_1 + 0x7c));
    uVar29 = 0;
    uVar25 = 0;
    do {
      iVar53 = uVar25 * 0x10001 + 0x1000100;
      lVar50 = param_1[4];
      uVar39 = 0;
      do {
        piVar2 = (int *)((ulong)uVar29 * 2 + lVar50 + uVar39);
        *piVar2 = iVar53;
        piVar2[1] = iVar53;
        piVar2[2] = iVar53;
        piVar2[3] = iVar53;
        uVar39 = uVar39 + 0x10;
      } while (uVar39 < 0x1f1);
      uVar25 = uVar25 + 1;
      uVar29 = uVar29 + 0x100;
    } while (uVar25 <= *(uint *)((long)param_1 + 100));
    lVar50 = param_1[3];
    uVar29 = *(uint *)(param_1 + 0xd);
    uVar25 = *(uint *)((long)param_1 + 0x6c);
    if ((ulong)uVar29 == 0) {
LAB_001e59f1:
      ___bzero();
    }
    else {
      uVar41 = 0;
      uVar39 = 0;
      do {
        uVar47 = *(uint *)(lVar50 + uVar41 * 4);
        *(uint *)(lVar50 + uVar39 * 4) = uVar47;
        uVar41 = uVar41 + 1;
        uVar47 = ((int)uVar39 + 1) - (uint)(uVar47 < 0x10000);
        uVar39 = (ulong)uVar47;
      } while (uVar29 != uVar41);
      if (uVar47 <= uVar25) goto LAB_001e59f1;
      uVar41 = 0;
      do {
        uVar30 = (uint)uVar41;
        uVar29 = *(uint *)(lVar50 + uVar41 * 4);
        uVar26 = (ulong)((int)uVar39 - 1);
        uVar47 = *(uint *)(lVar50 + uVar26 * 4);
        if (uVar47 < uVar29) {
          *(uint *)(lVar50 + uVar41 * 4) = uVar47;
          *(uint *)(lVar50 + uVar26 * 4) = uVar29;
          uVar47 = uVar29;
        }
        uVar33 = (ulong)(uVar30 + (int)uVar39 >> 1);
        uVar29 = *(uint *)(lVar50 + uVar33 * 4);
        if (uVar47 < uVar29) {
          *(uint *)(lVar50 + uVar33 * 4) = uVar47;
          *(uint *)(lVar50 + uVar26 * 4) = uVar29;
          uVar29 = *(uint *)(lVar50 + uVar33 * 4);
        }
        uVar47 = *(uint *)(lVar50 + uVar41 * 4);
        if (uVar47 < uVar29) {
          *(uint *)(lVar50 + uVar41 * 4) = uVar29;
          *(uint *)(lVar50 + uVar33 * 4) = uVar47;
          uVar47 = *(uint *)(lVar50 + uVar41 * 4);
        }
        uVar26 = (ulong)(uVar30 - 1);
        uVar41 = uVar39;
        while( true ) {
          do {
            uVar42 = (int)uVar26 + 1;
            uVar26 = (ulong)uVar42;
            uVar29 = *(uint *)(lVar50 + uVar26 * 4);
          } while (uVar47 < uVar29);
          uVar48 = (int)uVar41 + 1;
          do {
            uVar45 = uVar48;
            uVar46 = *(uint *)(lVar50 + (ulong)(uVar45 - 2) * 4);
            uVar48 = uVar45 - 1;
          } while (uVar46 < uVar47);
          uVar41 = (ulong)(uVar45 - 2);
          if (uVar45 - 2 <= uVar42) break;
          *(uint *)(lVar50 + (ulong)(uVar45 - 2) * 4) = uVar29;
          *(uint *)(lVar50 + uVar26 * 4) = uVar46;
        }
        bVar52 = uVar48 != uVar25;
        if (uVar25 <= uVar48) {
          uVar39 = (ulong)uVar48;
          uVar48 = uVar30;
        }
        uVar41 = (ulong)uVar48;
      } while (bVar52);
    }
    uVar25 = param_4 + 0x3f >> 3 & 0xfffffff8;
    *(undefined1 (*) [16])((long)param_1 + 0x3c) = (undefined1  [16])0x0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    uVar29 = uVar25;
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      lVar50 = param_1[3];
      uVar47 = 0;
      uVar39 = 0;
      do {
        uVar30 = *(uint *)(lVar50 + uVar39 * 4);
        if (uVar30 < 0x10000) break;
        puVar38 = (uint *)((long)param_1 + (ulong)(uVar47 >> 4) * 2 + 0x3c);
        *puVar38 = *puVar38 | (uVar30 & 0xffff) << ((byte)uVar47 & 0xe);
        *(short *)(param_1[4] + (ulong)(ushort)uVar30 * 2) =
             (short)*(undefined4 *)((long)param_1 + 100) + (short)uVar39 + 1;
        uVar29 = uVar29 - *(ushort *)(lVar50 + 2 + uVar39 * 4);
        uVar39 = uVar39 + 1;
        uVar47 = uVar47 + 10;
      } while (uVar39 < *(uint *)((long)param_1 + 0x6c));
    }
    *(uint *)(param_1 + 0x10) = uVar29;
    uVar39 = (ulong)uVar29;
    puVar23 = (undefined1 *)param_1[6];
    if (puVar23 < (undefined1 *)(uVar31 + uVar39)) goto LAB_001e5c5f;
    if (uVar25 != 0) {
      lVar50 = param_1[1];
      lVar44 = param_1[2];
      lVar12 = param_1[4];
      uVar39 = 0;
      uVar29 = 0;
      do {
        uVar35 = *(ushort *)(lVar12 + (ulong)*(ushort *)(lVar44 + uVar39 * 2) * 2);
        *(char *)(lVar50 + uVar39) = (char)uVar35;
        *(undefined1 *)(uVar31 + uVar29) = *(undefined1 *)(lVar44 + uVar39 * 2);
        uVar29 = uVar29 + (uVar35 >> 8);
        uVar39 = uVar39 + 1;
      } while (uVar25 != uVar39);
      uVar39 = (ulong)*(uint *)(param_1 + 0x10);
      puVar23 = (undefined1 *)param_1[6];
    }
    pauVar36 = (undefined1 (*) [16])(uVar31 + uVar39);
    if (puVar23 < *pauVar36 + (uVar25 >> 1)) goto LAB_001e5c5f;
    if ((*(byte *)(param_1 + 10) & 4) == 0) {
      lVar50 = param_1[2];
      uVar25 = _lzbitmap_encode_rle(lVar50,param_1[1],uVar25);
    }
    else {
      lVar50 = param_1[1];
    }
    auVar19 = _DAT_0032b180;
    auVar18 = _DAT_0032b170;
    uVar31 = 0;
    if (0x1f < uVar25) {
      pauVar24 = pauVar36;
      uVar39 = 0;
      do {
        auVar61 = *(undefined1 (*) [16])(lVar50 + 0x10 + uVar39);
        auVar72 = auVar61 & auVar18;
        auVar73 = *(undefined1 (*) [16])(lVar50 + uVar39) & auVar18;
        sVar20 = auVar73._0_2_;
        sVar13 = auVar73._2_2_;
        auVar74[1] = (0 < sVar13) * (sVar13 < 0x100) * auVar73[2] - (0xff < sVar13);
        auVar74[0] = (0 < sVar20) * (sVar20 < 0x100) * auVar73[0] - (0xff < sVar20);
        sVar20 = auVar73._4_2_;
        auVar74[2] = (0 < sVar20) * (sVar20 < 0x100) * auVar73[4] - (0xff < sVar20);
        sVar20 = auVar73._6_2_;
        auVar74[3] = (0 < sVar20) * (sVar20 < 0x100) * auVar73[6] - (0xff < sVar20);
        sVar20 = auVar73._8_2_;
        auVar74[4] = (0 < sVar20) * (sVar20 < 0x100) * auVar73[8] - (0xff < sVar20);
        sVar20 = auVar73._10_2_;
        auVar74[5] = (0 < sVar20) * (sVar20 < 0x100) * auVar73[10] - (0xff < sVar20);
        sVar20 = auVar73._12_2_;
        auVar74[6] = (0 < sVar20) * (sVar20 < 0x100) * auVar73[0xc] - (0xff < sVar20);
        sVar20 = auVar73._14_2_;
        auVar74[7] = (0 < sVar20) * (sVar20 < 0x100) * auVar73[0xe] - (0xff < sVar20);
        sVar20 = auVar72._0_2_;
        auVar74[8] = (0 < sVar20) * (sVar20 < 0x100) * auVar72[0] - (0xff < sVar20);
        sVar20 = auVar72._2_2_;
        auVar74[9] = (0 < sVar20) * (sVar20 < 0x100) * auVar72[2] - (0xff < sVar20);
        sVar20 = auVar72._4_2_;
        auVar74[10] = (0 < sVar20) * (sVar20 < 0x100) * auVar72[4] - (0xff < sVar20);
        sVar20 = auVar72._6_2_;
        auVar74[0xb] = (0 < sVar20) * (sVar20 < 0x100) * auVar72[6] - (0xff < sVar20);
        sVar20 = auVar72._8_2_;
        auVar74[0xc] = (0 < sVar20) * (sVar20 < 0x100) * auVar72[8] - (0xff < sVar20);
        sVar20 = auVar72._10_2_;
        auVar74[0xd] = (0 < sVar20) * (sVar20 < 0x100) * auVar72[10] - (0xff < sVar20);
        sVar20 = auVar72._12_2_;
        auVar74[0xe] = (0 < sVar20) * (sVar20 < 0x100) * auVar72[0xc] - (0xff < sVar20);
        sVar20 = auVar72._14_2_;
        auVar74[0xf] = (0 < sVar20) * (sVar20 < 0x100) * auVar72[0xe] - (0xff < sVar20);
        auVar72 = pshufb(auVar61,ZEXT816(0xf0d0b0907050301));
        auVar61 = pshufb(*(undefined1 (*) [16])(lVar50 + uVar39),ZEXT816(0xf0d0b0907050301));
        auVar61._8_8_ = auVar72._0_8_;
        auVar61 = psllw(auVar61,4);
        *pauVar24 = auVar61 & auVar19 | auVar74;
        uVar31 = uVar39 + 0x20;
        pauVar24 = pauVar24 + 1;
        uVar41 = uVar39 + 0x40;
        uVar39 = uVar31;
      } while (uVar41 <= uVar25);
    }
    uVar29 = (uint)uVar31;
    ___bzero(*pauVar36 + (uVar31 >> 1 & 0x7fffffff),(uVar25 + 1) - uVar29 >> 1);
    if (uVar29 < uVar25) {
      uVar31 = uVar31 & 0xffffffff;
      uVar29 = uVar29 << 2;
      do {
        *(uint *)(*pauVar36 + (ulong)(uVar29 >> 4) * 2) =
             *(uint *)(*pauVar36 + (ulong)(uVar29 >> 4) * 2) |
             (uint)*(byte *)(lVar50 + uVar31) << ((byte)uVar29 & 0xc);
        uVar31 = uVar31 + 1;
        uVar29 = uVar29 + 4;
      } while (uVar25 != uVar31);
    }
    uVar31 = (ulong)(uVar25 + 1 >> 1);
    puVar23 = pauVar36[1] + uVar31 + 1;
    if ((undefined1 *)param_1[6] < puVar23) goto LAB_001e5c5f;
    puVar37 = (undefined8 *)(*pauVar36 + uVar31);
    *(undefined1 *)(puVar37 + 2) = *(undefined1 *)((long)param_1 + 0x4c);
    uVar17 = *(undefined8 *)((long)param_1 + 0x44);
    *puVar37 = *(undefined8 *)((long)param_1 + 0x3c);
    puVar37[1] = uVar17;
    uVar29 = (int)param_1[0xf] + 0xf;
    uVar25 = *(int *)((long)param_1 + 0x7c) + uVar29;
    uVar47 = (int)param_1[0x10] + uVar25;
    *(ulong *)((long)param_2 + 6) =
         ((ulong)uVar47 << 0x30) + (ulong)uVar25 * 0x1000000 + (ulong)uVar29;
    *(char *)((long)param_2 + 0xe) = (char)(uVar47 >> 0x10);
    if ((long)(ulong)(param_4 + 6) <= (long)puVar23 - (long)param_2) goto LAB_001e5c5f;
  }
  *param_2 = param_4 << 0x18 | (int)puVar23 - (int)param_2;
  *(short *)(param_2 + 1) = (short)(param_4 >> 8);
LAB_001e5cad:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return puVar23;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

