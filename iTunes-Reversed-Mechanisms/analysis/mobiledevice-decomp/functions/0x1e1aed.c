// rea decompile_all
// name: _smb_lz77h_decode_buffer
// address: 0x1e1aed
// body: available
// range: 0x1e1aed-0x1e2540 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e253c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _smb_lz77h_decode_buffer(long param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  byte bVar27;
  short sVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  byte bVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  int iVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar43;
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  int iVar63;
  int iVar76;
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
  int iVar77;
  int iVar83;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 in_XMM7 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined2 local_48;
  long local_38;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar20 = 0xf;
  if (0xf < param_2) {
    uVar20 = param_2;
  }
  uVar35 = 0;
  uVar38 = 0;
  auVar52 = _DAT_0032b000;
  while( true ) {
    uVar37 = uVar38 + 0x100;
    if (param_4 < uVar37) {
      uVar37 = uVar35;
      if (uVar35 != param_2) {
        uVar37 = 0;
      }
      goto LAB_001e2509;
    }
    pauVar21 = (undefined1 (*) [16])(param_3 + uVar38);
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_48 = 0;
    uVar29 = 0xffffffffffffffe0;
    do {
      auVar49 = *pauVar21;
      auVar44 = auVar49 & auVar52;
      auVar39._0_2_ = auVar49._0_2_ >> 4;
      auVar39._2_2_ = auVar49._2_2_ >> 4;
      auVar39._4_2_ = auVar49._4_2_ >> 4;
      auVar39._6_2_ = auVar49._6_2_ >> 4;
      auVar39._8_2_ = auVar49._8_2_ >> 4;
      auVar39._10_2_ = auVar49._10_2_ >> 4;
      auVar39._12_2_ = auVar49._12_2_ >> 4;
      auVar39._14_2_ = auVar49._14_2_ >> 4;
      auVar39 = auVar39 & auVar52;
      auVar56._0_14_ = auVar44._0_14_;
      auVar56[0xe] = auVar44[7];
      auVar56[0xf] = auVar39[7];
      auVar88._14_2_ = auVar56._14_2_;
      auVar88._0_13_ = auVar44._0_13_;
      auVar88[0xd] = auVar39[6];
      auVar84._13_3_ = auVar88._13_3_;
      auVar84._0_12_ = auVar44._0_12_;
      auVar84[0xc] = auVar44[6];
      auVar51._12_4_ = auVar84._12_4_;
      auVar51._0_11_ = auVar44._0_11_;
      auVar51[0xb] = auVar39[5];
      auVar57._11_5_ = auVar51._11_5_;
      auVar57._0_10_ = auVar44._0_10_;
      auVar57[10] = auVar44[5];
      auVar50._10_6_ = auVar57._10_6_;
      auVar50._0_9_ = auVar44._0_9_;
      auVar50[9] = auVar39[4];
      auVar66._9_7_ = auVar50._9_7_;
      auVar66._0_8_ = auVar44._0_8_;
      auVar66[8] = auVar44[4];
      auVar49._8_8_ = auVar66._8_8_;
      auVar49[7] = auVar39[3];
      auVar49[6] = auVar44[3];
      auVar49[5] = auVar39[2];
      auVar49[4] = auVar44[2];
      auVar49[3] = auVar39[1];
      auVar49[2] = auVar44[1];
      auVar49[0] = auVar44[0];
      auVar49[1] = auVar39[0];
      pcVar4 = "/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
               + uVar29 + param_5 + 0x38;
      *pcVar4 = auVar44[8];
      pcVar4[1] = auVar39[8];
      pcVar4[2] = auVar44[9];
      pcVar4[3] = auVar39[9];
      pcVar4[4] = auVar44[10];
      pcVar4[5] = auVar39[10];
      pcVar4[6] = auVar44[0xb];
      pcVar4[7] = auVar39[0xb];
      pcVar4[8] = auVar44[0xc];
      pcVar4[9] = auVar39[0xc];
      pcVar4[10] = auVar44[0xd];
      pcVar4[0xb] = auVar39[0xd];
      pcVar4[0xc] = auVar44[0xe];
      pcVar4[0xd] = auVar39[0xe];
      pcVar4[0xe] = auVar44[0xf];
      pcVar4[0xf] = auVar39[0xf];
      *(undefined1 (*) [16])
       (
       "/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
       + uVar29 + param_5 + 0x28) = auVar49;
      uVar29 = uVar29 + 0x20;
      pauVar21 = pauVar21 + 1;
    } while (uVar29 < 0x1e0);
    uVar29 = 0xfffffffffffffffc;
    do {
      *(short *)(local_68 +
                (ulong)(byte)"/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                             [uVar29 + param_5 + 0xc] * 2 + 2) =
           *(short *)(local_68 +
                     (ulong)(byte)"/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                                  [uVar29 + param_5 + 0xc] * 2 + 2) + 1;
      *(short *)(local_68 +
                (ulong)(byte)"/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                             [uVar29 + param_5 + 0xd] * 2 + 2) =
           *(short *)(local_68 +
                     (ulong)(byte)"/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                                  [uVar29 + param_5 + 0xd] * 2 + 2) + 1;
      *(short *)(local_68 +
                (ulong)(byte)"/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                             [uVar29 + param_5 + 0xe] * 2 + 2) =
           *(short *)(local_68 +
                     (ulong)(byte)"/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                                  [uVar29 + param_5 + 0xe] * 2 + 2) + 1;
      *(short *)(local_68 +
                (ulong)(byte)"/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                             [uVar29 + param_5 + 0xf] * 2 + 2) =
           *(short *)(local_68 +
                     (ulong)(byte)"/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                                  [uVar29 + param_5 + 0xf] * 2 + 2) + 1;
      uVar29 = uVar29 + 4;
    } while (uVar29 < 0x1fc);
    local_68._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar52._12_4_ = 0;
    auVar52._0_12_ = local_68._4_12_;
    local_68 = auVar52 << 0x20;
    lVar22 = 2;
    sVar28 = 0;
    do {
      sVar28 = sVar28 + *(short *)(local_68 + lVar22 * 2);
      *(short *)(local_68 + lVar22 * 2) = sVar28;
      lVar22 = lVar22 + 1;
    } while (lVar22 != 0x11);
    local_68._0_2_ = local_48;
    lVar22 = 0;
    pbVar23 = (byte *)(
                      "/Library/Apple/System/Library/PrivateFrameworks/DeviceInterface.framework/Versions/A/DeviceInterface"
                      + param_5 + 8);
    do {
      bVar32 = *pbVar23;
      uVar5 = *(ushort *)(local_68 + (ulong)bVar32 * 2);
      *(ushort *)(local_68 + (ulong)bVar32 * 2) = uVar5 + 1;
      *(ushort *)(param_5 + 0x1000 + (ulong)uVar5 * 2) = (short)lVar22 + (ushort)bVar32;
      lVar22 = lVar22 + 0x10;
      pbVar23 = pbVar23 + 1;
    } while (lVar22 != 0x2000);
    uVar29 = (ulong)(ushort)local_58._14_2_;
    if (uVar29 == 0) break;
    ___bzero(param_5,0x800);
    auVar50 = _DAT_0032b310;
    auVar51 = _DAT_0032b300;
    auVar44 = _DAT_0032b2f0;
    auVar39 = _DAT_0032b0a0;
    auVar49 = _DAT_0032b090;
    uVar30 = 0x400;
    uVar36 = 0x8000;
    do {
      uVar5 = *(ushort *)(param_5 + 0xffe + uVar29 * 2);
      uVar31 = (-1 << (~(byte)uVar5 & 0xf)) + uVar36;
      if ((int)uVar31 < 0) goto LAB_001e2506;
      uVar19 = (int)uVar31 >> 5;
      bVar32 = (byte)(uVar5 & 0xf);
      if (bVar32 < 0xb) {
        if ((int)uVar19 < (int)uVar36 >> 5) {
          uVar36 = ((int)uVar36 >> 5) + ~uVar19;
          auVar40._4_4_ = 0;
          auVar40._0_4_ = uVar36;
          auVar40._8_4_ = uVar36;
          auVar40._12_4_ = 0;
          lVar22 = param_5 + 0xe + (ulong)uVar19 * 2;
          auVar40 = auVar40 ^ auVar50;
          uVar33 = 0;
          do {
            auVar45._8_4_ = (int)uVar33;
            auVar45._0_8_ = uVar33;
            auVar45._12_4_ = (int)(uVar33 >> 0x20);
            auVar52 = (auVar45 | auVar51) ^ auVar50;
            iVar63 = auVar40._0_4_;
            iVar77 = -(uint)(iVar63 < auVar52._0_4_);
            iVar42 = auVar40._4_4_;
            auVar54._4_4_ = -(uint)(iVar42 < auVar52._4_4_);
            iVar76 = auVar40._8_4_;
            iVar83 = -(uint)(iVar76 < auVar52._8_4_);
            iVar43 = auVar40._12_4_;
            auVar54._12_4_ = -(uint)(iVar43 < auVar52._12_4_);
            auVar64._4_4_ = iVar77;
            auVar64._0_4_ = iVar77;
            auVar64._8_4_ = iVar83;
            auVar64._12_4_ = iVar83;
            auVar84 = pshuflw(in_XMM5,auVar64,0xe8);
            auVar53._4_4_ = -(uint)(auVar52._4_4_ == iVar42);
            auVar53._12_4_ = -(uint)(auVar52._12_4_ == iVar43);
            auVar53._0_4_ = auVar53._4_4_;
            auVar53._8_4_ = auVar53._12_4_;
            auVar88 = pshuflw(in_XMM6,auVar53,0xe8);
            auVar54._0_4_ = auVar54._4_4_;
            auVar54._8_4_ = auVar54._12_4_;
            auVar52 = pshuflw(auVar84,auVar54,0xe8);
            auVar85._8_4_ = 0xffffffff;
            auVar85._0_8_ = 0xffffffffffffffff;
            auVar85._12_4_ = 0xffffffff;
            auVar85 = (auVar52 | auVar88 & auVar84) ^ auVar85;
            auVar52 = packssdw(auVar85,auVar85);
            if ((auVar52._0_4_ & 1) != 0) {
              *(ushort *)(lVar22 + -0xe + uVar33 * 2) = uVar5;
            }
            auVar54 = auVar53 & auVar64 | auVar54;
            auVar52 = packssdw(auVar54,auVar54);
            auVar8._8_4_ = 0xffffffff;
            auVar8._0_8_ = 0xffffffffffffffff;
            auVar8._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar8,auVar52 ^ auVar8);
            if ((auVar52._0_4_ >> 0x10 & 1) != 0) {
              *(ushort *)(lVar22 + -0xc + uVar33 * 2) = uVar5;
            }
            auVar52 = (auVar45 | auVar44) ^ auVar50;
            iVar77 = -(uint)(iVar63 < auVar52._0_4_);
            auVar78._4_4_ = -(uint)(iVar42 < auVar52._4_4_);
            iVar83 = -(uint)(iVar76 < auVar52._8_4_);
            auVar78._12_4_ = -(uint)(iVar43 < auVar52._12_4_);
            auVar55._4_4_ = iVar77;
            auVar55._0_4_ = iVar77;
            auVar55._8_4_ = iVar83;
            auVar55._12_4_ = iVar83;
            auVar65._4_4_ = -(uint)(auVar52._4_4_ == iVar42);
            auVar65._12_4_ = -(uint)(auVar52._12_4_ == iVar43);
            auVar65._0_4_ = auVar65._4_4_;
            auVar65._8_4_ = auVar65._12_4_;
            auVar78._0_4_ = auVar78._4_4_;
            auVar78._8_4_ = auVar78._12_4_;
            auVar52 = auVar65 & auVar55 | auVar78;
            auVar52 = packssdw(auVar52,auVar52);
            auVar9._8_4_ = 0xffffffff;
            auVar9._0_8_ = 0xffffffffffffffff;
            auVar9._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar9,auVar52 ^ auVar9);
            if ((auVar52._4_2_ & 1) != 0) {
              *(ushort *)(lVar22 + -10 + uVar33 * 2) = uVar5;
            }
            auVar56 = pshufhw(auVar55,auVar55,0x84);
            auVar66 = pshufhw(auVar65,auVar65,0x84);
            auVar57 = pshufhw(auVar56,auVar78,0x84);
            auVar58._8_4_ = 0xffffffff;
            auVar58._0_8_ = 0xffffffffffffffff;
            auVar58._12_4_ = 0xffffffff;
            auVar58 = (auVar57 | auVar66 & auVar56) ^ auVar58;
            auVar56 = packssdw(auVar58,auVar58);
            if ((auVar56._6_2_ & 1) != 0) {
              *(ushort *)(lVar22 + -8 + uVar33 * 2) = uVar5;
            }
            auVar56 = (auVar45 | auVar39) ^ auVar50;
            iVar77 = -(uint)(iVar63 < auVar56._0_4_);
            auVar60._4_4_ = -(uint)(iVar42 < auVar56._4_4_);
            iVar83 = -(uint)(iVar76 < auVar56._8_4_);
            auVar60._12_4_ = -(uint)(iVar43 < auVar56._12_4_);
            auVar67._4_4_ = iVar77;
            auVar67._0_4_ = iVar77;
            auVar67._8_4_ = iVar83;
            auVar67._12_4_ = iVar83;
            auVar52 = pshuflw(auVar52,auVar67,0xe8);
            auVar59._4_4_ = -(uint)(auVar56._4_4_ == iVar42);
            auVar59._12_4_ = -(uint)(auVar56._12_4_ == iVar43);
            auVar59._0_4_ = auVar59._4_4_;
            auVar59._8_4_ = auVar59._12_4_;
            in_XMM6 = pshuflw(auVar88 & auVar84,auVar59,0xe8);
            in_XMM6 = in_XMM6 & auVar52;
            auVar60._0_4_ = auVar60._4_4_;
            auVar60._8_4_ = auVar60._12_4_;
            auVar52 = pshuflw(auVar52,auVar60,0xe8);
            auVar86._8_4_ = 0xffffffff;
            auVar86._0_8_ = 0xffffffffffffffff;
            auVar86._12_4_ = 0xffffffff;
            auVar86 = (auVar52 | in_XMM6) ^ auVar86;
            in_XMM5 = packssdw(auVar86,auVar86);
            if ((in_XMM5._8_2_ & 1) != 0) {
              *(ushort *)(lVar22 + -6 + uVar33 * 2) = uVar5;
            }
            auVar60 = auVar59 & auVar67 | auVar60;
            auVar52 = packssdw(auVar60,auVar60);
            auVar10._8_4_ = 0xffffffff;
            auVar10._0_8_ = 0xffffffffffffffff;
            auVar10._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar10,auVar52 ^ auVar10);
            if ((auVar52._10_2_ & 1) != 0) {
              *(ushort *)(lVar22 + -4 + uVar33 * 2) = uVar5;
            }
            auVar52 = (auVar45 | auVar49) ^ auVar50;
            iVar63 = -(uint)(iVar63 < auVar52._0_4_);
            auVar68._4_4_ = -(uint)(iVar42 < auVar52._4_4_);
            iVar76 = -(uint)(iVar76 < auVar52._8_4_);
            auVar68._12_4_ = -(uint)(iVar43 < auVar52._12_4_);
            auVar61._4_4_ = iVar63;
            auVar61._0_4_ = iVar63;
            auVar61._8_4_ = iVar76;
            auVar61._12_4_ = iVar76;
            auVar46._4_4_ = -(uint)(auVar52._4_4_ == iVar42);
            auVar46._12_4_ = -(uint)(auVar52._12_4_ == iVar43);
            auVar46._0_4_ = auVar46._4_4_;
            auVar46._8_4_ = auVar46._12_4_;
            auVar68._0_4_ = auVar68._4_4_;
            auVar68._8_4_ = auVar68._12_4_;
            auVar52 = auVar46 & auVar61 | auVar68;
            auVar52 = packssdw(auVar52,auVar52);
            auVar11._8_4_ = 0xffffffff;
            auVar11._0_8_ = 0xffffffffffffffff;
            auVar11._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar11,auVar52 ^ auVar11);
            if ((auVar52._12_2_ & 1) != 0) {
              *(ushort *)(lVar22 + -2 + uVar33 * 2) = uVar5;
            }
            auVar84 = pshufhw(auVar61,auVar61,0x84);
            auVar52 = pshufhw(auVar46,auVar46,0x84);
            auVar88 = pshufhw(auVar84,auVar68,0x84);
            auVar12._8_4_ = 0xffffffff;
            auVar12._0_8_ = 0xffffffffffffffff;
            auVar12._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 & auVar84,(auVar88 | auVar52 & auVar84) ^ auVar12);
            if ((auVar52._14_2_ & 1) != 0) {
              *(ushort *)(lVar22 + uVar33 * 2) = uVar5;
            }
            uVar33 = uVar33 + 8;
          } while (((ulong)uVar36 + 8 & 0xfffffffffffffff8) != uVar33);
        }
      }
      else {
        uVar6 = *(ushort *)(param_5 + (ulong)uVar19 * 2);
        uVar33 = (ulong)uVar6;
        if (uVar6 == 0) {
          uVar36 = (int)uVar30 << 4 | uVar5 & 0xf;
          uVar33 = (ulong)uVar36;
          *(short *)(param_5 + (ulong)uVar19 * 2) = (short)uVar36;
          uVar30 = uVar30 + (uint)(1 << (bVar32 - 10 & 0x1f));
          if (0x800 < uVar30) goto LAB_001e2506;
        }
        bVar27 = (byte)uVar33 & 0xf;
        uVar36 = ~(-1 << (bVar27 - 10 & 0x1f)) & uVar31 >> (bVar27 ^ 0xf);
        uVar33 = (uVar33 & 0xffff) >> 4;
        uVar34 = (ulong)((1 << (bVar27 - bVar32 & 0x1f)) + (int)uVar33 + uVar36);
        uVar24 = uVar33 + uVar36 + 1;
        if (uVar24 < uVar34) {
          uVar24 = uVar34;
        }
        lVar1 = uVar33 + uVar36;
        lVar25 = uVar24 - lVar1;
        lVar22 = lVar25 + -1;
        auVar41._8_4_ = (int)lVar22;
        auVar41._0_8_ = lVar22;
        auVar41._12_4_ = (int)((ulong)lVar22 >> 0x20);
        lVar22 = param_5 + 0xe + lVar1 * 2;
        uVar33 = 0;
        do {
          auVar47._8_4_ = (int)uVar33;
          auVar47._0_8_ = uVar33;
          auVar47._12_4_ = (int)(uVar33 >> 0x20);
          auVar52 = auVar41 ^ auVar50;
          auVar84 = (auVar47 | auVar51) ^ auVar50;
          iVar63 = auVar52._0_4_;
          iVar77 = -(uint)(iVar63 < auVar84._0_4_);
          iVar42 = auVar52._4_4_;
          auVar70._4_4_ = -(uint)(iVar42 < auVar84._4_4_);
          iVar76 = auVar52._8_4_;
          iVar83 = -(uint)(iVar76 < auVar84._8_4_);
          iVar43 = auVar52._12_4_;
          auVar70._12_4_ = -(uint)(iVar43 < auVar84._12_4_);
          auVar79._4_4_ = iVar77;
          auVar79._0_4_ = iVar77;
          auVar79._8_4_ = iVar83;
          auVar79._12_4_ = iVar83;
          auVar52 = pshuflw(in_XMM6,auVar79,0xe8);
          auVar69._4_4_ = -(uint)(auVar84._4_4_ == iVar42);
          auVar69._12_4_ = -(uint)(auVar84._12_4_ == iVar43);
          auVar69._0_4_ = auVar69._4_4_;
          auVar69._8_4_ = auVar69._12_4_;
          auVar88 = pshuflw(in_XMM7,auVar69,0xe8);
          auVar70._0_4_ = auVar70._4_4_;
          auVar70._8_4_ = auVar70._12_4_;
          auVar84 = pshuflw(auVar52,auVar70,0xe8);
          auVar89._8_4_ = 0xffffffff;
          auVar89._0_8_ = 0xffffffffffffffff;
          auVar89._12_4_ = 0xffffffff;
          auVar89 = (auVar84 | auVar88 & auVar52) ^ auVar89;
          auVar84 = packssdw(auVar89,auVar89);
          if ((auVar84._0_4_ & 1) != 0) {
            *(ushort *)(lVar22 + -0xe + uVar33 * 2) = uVar5;
          }
          auVar70 = auVar69 & auVar79 | auVar70;
          auVar84 = packssdw(auVar70,auVar70);
          auVar13._8_4_ = 0xffffffff;
          auVar13._0_8_ = 0xffffffffffffffff;
          auVar13._12_4_ = 0xffffffff;
          auVar84 = packssdw(auVar84 ^ auVar13,auVar84 ^ auVar13);
          if ((auVar84._0_4_ >> 0x10 & 1) != 0) {
            *(ushort *)(lVar22 + -0xc + uVar33 * 2) = uVar5;
          }
          auVar84 = (auVar47 | auVar44) ^ auVar50;
          iVar77 = -(uint)(iVar63 < auVar84._0_4_);
          auVar87._4_4_ = -(uint)(iVar42 < auVar84._4_4_);
          iVar83 = -(uint)(iVar76 < auVar84._8_4_);
          auVar87._12_4_ = -(uint)(iVar43 < auVar84._12_4_);
          auVar71._4_4_ = iVar77;
          auVar71._0_4_ = iVar77;
          auVar71._8_4_ = iVar83;
          auVar71._12_4_ = iVar83;
          auVar80._4_4_ = -(uint)(auVar84._4_4_ == iVar42);
          auVar80._12_4_ = -(uint)(auVar84._12_4_ == iVar43);
          auVar80._0_4_ = auVar80._4_4_;
          auVar80._8_4_ = auVar80._12_4_;
          auVar87._0_4_ = auVar87._4_4_;
          auVar87._8_4_ = auVar87._12_4_;
          auVar84 = auVar80 & auVar71 | auVar87;
          auVar84 = packssdw(auVar84,auVar84);
          auVar14._8_4_ = 0xffffffff;
          auVar14._0_8_ = 0xffffffffffffffff;
          auVar14._12_4_ = 0xffffffff;
          auVar84 = packssdw(auVar84 ^ auVar14,auVar84 ^ auVar14);
          if ((auVar84._4_2_ & 1) != 0) {
            *(ushort *)(lVar22 + -10 + uVar33 * 2) = uVar5;
          }
          auVar56 = pshufhw(auVar71,auVar71,0x84);
          auVar66 = pshufhw(auVar80,auVar80,0x84);
          auVar57 = pshufhw(auVar56,auVar87,0x84);
          auVar72._8_4_ = 0xffffffff;
          auVar72._0_8_ = 0xffffffffffffffff;
          auVar72._12_4_ = 0xffffffff;
          auVar72 = (auVar57 | auVar66 & auVar56) ^ auVar72;
          auVar56 = packssdw(auVar72,auVar72);
          if ((auVar56._6_2_ & 1) != 0) {
            *(ushort *)(lVar22 + -8 + uVar33 * 2) = uVar5;
          }
          auVar56 = (auVar47 | auVar39) ^ auVar50;
          iVar77 = -(uint)(iVar63 < auVar56._0_4_);
          auVar74._4_4_ = -(uint)(iVar42 < auVar56._4_4_);
          iVar83 = -(uint)(iVar76 < auVar56._8_4_);
          auVar74._12_4_ = -(uint)(iVar43 < auVar56._12_4_);
          auVar81._4_4_ = iVar77;
          auVar81._0_4_ = iVar77;
          auVar81._8_4_ = iVar83;
          auVar81._12_4_ = iVar83;
          auVar84 = pshuflw(auVar84,auVar81,0xe8);
          auVar73._4_4_ = -(uint)(auVar56._4_4_ == iVar42);
          auVar73._12_4_ = -(uint)(auVar56._12_4_ == iVar43);
          auVar73._0_4_ = auVar73._4_4_;
          auVar73._8_4_ = auVar73._12_4_;
          in_XMM7 = pshuflw(auVar88 & auVar52,auVar73,0xe8);
          in_XMM7 = in_XMM7 & auVar84;
          auVar74._0_4_ = auVar74._4_4_;
          auVar74._8_4_ = auVar74._12_4_;
          auVar52 = pshuflw(auVar84,auVar74,0xe8);
          auVar90._8_4_ = 0xffffffff;
          auVar90._0_8_ = 0xffffffffffffffff;
          auVar90._12_4_ = 0xffffffff;
          auVar90 = (auVar52 | in_XMM7) ^ auVar90;
          in_XMM6 = packssdw(auVar90,auVar90);
          if ((in_XMM6._8_2_ & 1) != 0) {
            *(ushort *)(lVar22 + -6 + uVar33 * 2) = uVar5;
          }
          auVar74 = auVar73 & auVar81 | auVar74;
          auVar52 = packssdw(auVar74,auVar74);
          auVar15._8_4_ = 0xffffffff;
          auVar15._0_8_ = 0xffffffffffffffff;
          auVar15._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar15,auVar52 ^ auVar15);
          if ((auVar52._10_2_ & 1) != 0) {
            *(ushort *)(lVar22 + -4 + uVar33 * 2) = uVar5;
          }
          auVar52 = (auVar47 | auVar49) ^ auVar50;
          auVar82._0_4_ = -(uint)(iVar63 < auVar52._0_4_);
          auVar82._4_4_ = -(uint)(iVar42 < auVar52._4_4_);
          auVar82._8_4_ = -(uint)(iVar76 < auVar52._8_4_);
          auVar82._12_4_ = -(uint)(iVar43 < auVar52._12_4_);
          auVar75._4_4_ = auVar82._0_4_;
          auVar75._0_4_ = auVar82._0_4_;
          auVar75._8_4_ = auVar82._8_4_;
          auVar75._12_4_ = auVar82._8_4_;
          auVar48._4_4_ = -(uint)(auVar52._4_4_ == iVar42);
          auVar48._12_4_ = -(uint)(auVar52._12_4_ == iVar43);
          auVar48._0_4_ = auVar48._4_4_;
          auVar48._8_4_ = auVar48._12_4_;
          auVar62._4_4_ = auVar82._4_4_;
          auVar62._0_4_ = auVar82._4_4_;
          auVar62._8_4_ = auVar82._12_4_;
          auVar62._12_4_ = auVar82._12_4_;
          in_XMM5 = auVar48 & auVar75 | auVar62;
          auVar52 = packssdw(auVar82,in_XMM5);
          auVar16._8_4_ = 0xffffffff;
          auVar16._0_8_ = 0xffffffffffffffff;
          auVar16._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar16,auVar52 ^ auVar16);
          if ((auVar52._12_2_ & 1) != 0) {
            *(ushort *)(lVar22 + -2 + uVar33 * 2) = uVar5;
          }
          auVar88 = pshufhw(auVar75,auVar75,0x84);
          auVar52 = pshufhw(auVar48,auVar48,0x84);
          auVar84 = pshufhw(auVar62,auVar62,0x84);
          auVar17._8_4_ = 0xffffffff;
          auVar17._0_8_ = 0xffffffffffffffff;
          auVar17._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 & auVar88,(auVar84 | auVar52 & auVar88) ^ auVar17);
          if ((auVar52._14_2_ & 1) != 0) {
            *(ushort *)(lVar22 + uVar33 * 2) = uVar5;
          }
          uVar33 = uVar33 + 8;
        } while ((lVar25 + 7U & 0xfffffffffffffff8) != uVar33);
      }
      auVar52 = _DAT_0032b000;
      bVar7 = 1 < (long)uVar29;
      uVar29 = uVar29 - 1;
      uVar36 = uVar31;
    } while (bVar7);
    if (((uVar31 != 0) || (uVar29 = uVar38 + 0x102, param_4 < uVar29)) ||
       (uVar38 = uVar38 + 0x104, param_4 < uVar38)) break;
    uVar36 = CONCAT22(*(undefined2 *)(param_3 + uVar37),*(undefined2 *)(param_3 + uVar29));
    uVar29 = uVar35 + 0x10000;
    if (param_2 <= uVar35 + 0x10000) {
      uVar29 = param_2;
    }
    iVar63 = 0x10;
    while (uVar37 = uVar35, uVar35 < uVar29) {
      uVar5 = *(ushort *)(param_5 + (ulong)(uVar36 >> 0x16) * 2);
      if (0x3fff < uVar5) {
        uVar5 = *(ushort *)
                 (param_5 +
                 (ulong)((uint)(uVar5 >> 4) +
                        ((uVar36 << 10) >> (0x2a - ((byte)uVar5 & 0xf) & 0x1f))) * 2);
      }
      uVar31 = uVar5 & 0xf;
      uVar36 = uVar36 << (sbyte)uVar31;
      iVar63 = iVar63 - uVar31;
      if (iVar63 < 0) {
        if (param_4 < uVar38 + 2) goto LAB_001e2506;
        uVar36 = uVar36 | (uint)*(ushort *)(param_3 + uVar38) << (-(char)iVar63 & 0x1fU);
        iVar63 = iVar63 + 0x10;
        uVar38 = uVar38 + 2;
      }
      uVar6 = uVar5 >> 4;
      if (uVar5 < 0x1000) {
        *(char *)(param_1 + uVar35) = (char)uVar6;
        uVar35 = uVar35 + 1;
      }
      else {
        if ((uVar6 == 0x100) && (uVar38 == param_4)) goto LAB_001e2509;
        uVar31 = uVar6 & 0xf;
        uVar30 = (ulong)uVar31;
        uVar37 = uVar38;
        if ((short)uVar31 == 0xf) {
          if (param_4 <= uVar38) goto LAB_001e2506;
          uVar37 = uVar38 + 1;
          uVar30 = (ulong)*(byte *)(param_3 + uVar38);
          if (uVar30 == 0xff) {
            uVar33 = uVar38 + 3;
            if (param_4 < uVar33) goto LAB_001e2506;
            uVar30 = (ulong)*(ushort *)(param_3 + uVar37);
            if (uVar30 == 0) {
              if (param_4 < uVar38 + 7) goto LAB_001e2506;
              uVar30 = (ulong)*(uint *)(param_3 + uVar33);
              uVar33 = uVar38 + 7;
            }
            if ((uint)uVar30 < 0xf) goto LAB_001e2506;
            uVar30 = uVar30 - 0xf;
            uVar37 = uVar33;
          }
          uVar30 = uVar30 + 0xf;
        }
        uVar19 = uVar5 >> 8 & 0xf;
        uVar31 = uVar36 >> 0x10;
        uVar36 = uVar36 << (sbyte)uVar19;
        iVar63 = iVar63 - uVar19;
        uVar38 = uVar37;
        if (iVar63 < 0) {
          uVar38 = uVar37 + 2;
          if (param_4 < uVar38) goto LAB_001e2506;
          uVar36 = uVar36 | (uint)*(ushort *)(param_3 + uVar37) << (-(char)iVar63 & 0x1fU);
          iVar63 = iVar63 + 0x10;
        }
        uVar31 = uVar31 >> (0x10U - (sbyte)uVar19 & 0x1f) | 1 << uVar19;
        if (uVar35 < uVar31) goto LAB_001e2506;
        uVar30 = uVar30 + 3;
        uVar37 = 0;
        if (param_2 - uVar35 < uVar30) goto LAB_001e2509;
        puVar26 = (undefined8 *)(param_1 + uVar35);
        puVar2 = (undefined8 *)((long)puVar26 + uVar30);
        lVar22 = -(ulong)uVar31;
        if ((uVar31 < 0x10) || ((undefined8 *)(param_1 + -0xf + uVar20) < puVar2)) {
          do {
            *(undefined1 *)puVar26 = *(undefined1 *)((long)puVar26 + lVar22);
            puVar26 = (undefined8 *)((long)puVar26 + 1);
          } while (puVar26 < puVar2);
        }
        else {
          do {
            puVar3 = (undefined8 *)((long)puVar26 + lVar22);
            uVar18 = puVar3[1];
            *puVar26 = *puVar3;
            puVar26[1] = uVar18;
            puVar26 = puVar26 + 2;
          } while (puVar26 < puVar2);
        }
        uVar35 = uVar35 + uVar30;
      }
    }
    uVar5 = *(ushort *)(param_5 + (ulong)(uVar36 >> 0x16) * 2);
    if (0x3fff < uVar5) {
      uVar5 = *(ushort *)
               (param_5 +
               (ulong)((uint)(uVar5 >> 4) + ((uVar36 << 10) >> (0x2a - ((byte)uVar5 & 0xf) & 0x1f)))
               * 2);
    }
    if ((((uVar5 & 0xfffffff0) == 0x1000) && (iVar63 < (int)(uVar5 & 0xf))) &&
       (uVar38 = uVar38 + 2, param_4 < uVar38)) break;
    if (uVar38 == param_4) {
LAB_001e2509:
      if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return uVar37;
    }
  }
LAB_001e2506:
  uVar37 = 0;
  goto LAB_001e2509;
}

