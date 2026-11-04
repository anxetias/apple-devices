// rea decompile_all
// name: _EncodeContextMap
// address: 0x20de81
// body: available
// range: 0x20de81-0x20e86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20e867 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _EncodeContextMap(long param_1,uint *param_2,ulong param_3,long param_4,undefined8 param_5,
                      ulong *param_6,long param_7)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  bool bVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  uint uVar34;
  int *piVar35;
  uint uVar36;
  char cVar37;
  int iVar48;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 in_XMM11 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar70;
  undefined1 auVar68 [16];
  int iVar71;
  undefined1 auVar69 [16];
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
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  int iVar85;
  int iVar89;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  ushort local_7a8 [272];
  byte local_588 [272];
  undefined4 local_478;
  char acStack_474 [1084];
  long local_38;
  long lVar51;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  _StoreVarLenUint8(param_4 + -1,param_6,param_7);
  if ((param_4 == 1) ||
     (lVar27 = _BrotliAllocate(param_1,param_3 * 4), *(int *)(param_1 + 0x18) != 0))
  goto LAB_0020e845;
  uVar36 = *param_2;
  if (1 < param_3) {
    uVar28 = 1;
    do {
      if (uVar36 < param_2[uVar28]) {
        uVar36 = param_2[uVar28];
      }
      uVar28 = uVar28 + 1;
    } while (param_3 != uVar28);
  }
  auVar38._4_4_ = 0;
  auVar38._0_4_ = uVar36;
  auVar38._8_4_ = uVar36;
  auVar38._12_4_ = 0;
  uVar28 = 0;
  auVar39 = auVar38;
  auVar50 = _DAT_0032b390;
  auVar52 = _DAT_0032b3a0;
  auVar53 = _DAT_0032b3b0;
  auVar54 = _DAT_0032b3c0;
  auVar55 = _DAT_0032b090;
  auVar56 = _DAT_0032b0a0;
  auVar57 = _DAT_0032b2f0;
  auVar58 = _DAT_0032b300;
  do {
    auVar68 = auVar38 ^ _DAT_0032b310;
    auVar72 = auVar58 ^ _DAT_0032b310;
    iVar48 = auVar68._0_4_;
    iVar85 = -(uint)(iVar48 < auVar72._0_4_);
    iVar49 = auVar68._4_4_;
    auVar74._4_4_ = -(uint)(iVar49 < auVar72._4_4_);
    iVar70 = auVar68._8_4_;
    iVar89 = -(uint)(iVar70 < auVar72._8_4_);
    iVar71 = auVar68._12_4_;
    auVar74._12_4_ = -(uint)(iVar71 < auVar72._12_4_);
    auVar68._4_4_ = iVar85;
    auVar68._0_4_ = iVar85;
    auVar68._8_4_ = iVar89;
    auVar68._12_4_ = iVar89;
    auVar68 = pshuflw(auVar39,auVar68,0xe8);
    auVar73._4_4_ = -(uint)(auVar72._4_4_ == iVar49);
    auVar73._12_4_ = -(uint)(auVar72._12_4_ == iVar71);
    auVar73._0_4_ = auVar73._4_4_;
    auVar73._8_4_ = auVar73._12_4_;
    auVar59 = pshuflw(in_XMM11,auVar73,0xe8);
    auVar74._0_4_ = auVar74._4_4_;
    auVar74._8_4_ = auVar74._12_4_;
    auVar72 = pshuflw(auVar68,auVar74,0xe8);
    auVar39._8_4_ = 0xffffffff;
    auVar39._0_8_ = 0xffffffffffffffff;
    auVar39._12_4_ = 0xffffffff;
    auVar39 = (auVar72 | auVar59 & auVar68) ^ auVar39;
    auVar39 = packssdw(auVar39,auVar39);
    cVar37 = (char)uVar28;
    if ((auVar39._0_4_ & 1) != 0) {
      *(char *)((long)&local_478 + uVar28) = cVar37;
    }
    auVar59._4_4_ = iVar85;
    auVar59._0_4_ = iVar85;
    auVar59._8_4_ = iVar89;
    auVar59._12_4_ = iVar89;
    auVar74 = auVar73 & auVar59 | auVar74;
    auVar39 = packssdw(auVar74,auVar74);
    auVar72._8_4_ = 0xffffffff;
    auVar72._0_8_ = 0xffffffffffffffff;
    auVar72._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39 ^ auVar72,auVar39 ^ auVar72);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._0_4_ >> 8 & 1) != 0) {
      *(char *)((long)&local_478 + uVar28 + 1) = cVar37 + '\x01';
    }
    auVar39 = auVar57 ^ _DAT_0032b310;
    auVar60._0_4_ = -(uint)(iVar48 < auVar39._0_4_);
    auVar60._4_4_ = -(uint)(iVar49 < auVar39._4_4_);
    auVar60._8_4_ = -(uint)(iVar70 < auVar39._8_4_);
    auVar60._12_4_ = -(uint)(iVar71 < auVar39._12_4_);
    auVar75._4_4_ = auVar60._0_4_;
    auVar75._0_4_ = auVar60._0_4_;
    auVar75._8_4_ = auVar60._8_4_;
    auVar75._12_4_ = auVar60._8_4_;
    iVar85 = -(uint)(auVar39._4_4_ == iVar49);
    iVar89 = -(uint)(auVar39._12_4_ == iVar71);
    auVar12._4_4_ = iVar85;
    auVar12._0_4_ = iVar85;
    auVar12._8_4_ = iVar89;
    auVar12._12_4_ = iVar89;
    auVar86._4_4_ = auVar60._4_4_;
    auVar86._0_4_ = auVar60._4_4_;
    auVar86._8_4_ = auVar60._12_4_;
    auVar86._12_4_ = auVar60._12_4_;
    auVar39 = auVar12 & auVar75 | auVar86;
    auVar39 = packssdw(auVar39,auVar39);
    auVar3._8_4_ = 0xffffffff;
    auVar3._0_8_ = 0xffffffffffffffff;
    auVar3._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39 ^ auVar3,auVar39 ^ auVar3);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._0_4_ >> 0x10 & 1) != 0) {
      *(char *)((long)&local_478 + uVar28 + 2) = cVar37 + '\x02';
    }
    auVar39 = pshufhw(auVar39,auVar75,0x84);
    auVar13._4_4_ = iVar85;
    auVar13._0_4_ = iVar85;
    auVar13._8_4_ = iVar89;
    auVar13._12_4_ = iVar89;
    auVar72 = pshufhw(auVar60,auVar13,0x84);
    auVar68 = pshufhw(auVar39,auVar86,0x84);
    auVar40._8_4_ = 0xffffffff;
    auVar40._0_8_ = 0xffffffffffffffff;
    auVar40._12_4_ = 0xffffffff;
    auVar40 = (auVar68 | auVar72 & auVar39) ^ auVar40;
    auVar39 = packssdw(auVar40,auVar40);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._0_4_ >> 0x18 & 1) != 0) {
      *(char *)((long)&local_478 + uVar28 + 3) = cVar37 + '\x03';
    }
    auVar39 = auVar56 ^ _DAT_0032b310;
    auVar61._0_4_ = -(uint)(iVar48 < auVar39._0_4_);
    auVar61._4_4_ = -(uint)(iVar49 < auVar39._4_4_);
    auVar61._8_4_ = -(uint)(iVar70 < auVar39._8_4_);
    auVar61._12_4_ = -(uint)(iVar71 < auVar39._12_4_);
    auVar14._4_4_ = auVar61._0_4_;
    auVar14._0_4_ = auVar61._0_4_;
    auVar14._8_4_ = auVar61._8_4_;
    auVar14._12_4_ = auVar61._8_4_;
    auVar72 = pshuflw(auVar86,auVar14,0xe8);
    auVar41._0_4_ = -(uint)(auVar39._0_4_ == iVar48);
    auVar41._4_4_ = -(uint)(auVar39._4_4_ == iVar49);
    auVar41._8_4_ = -(uint)(auVar39._8_4_ == iVar70);
    auVar41._12_4_ = -(uint)(auVar39._12_4_ == iVar71);
    auVar76._4_4_ = auVar41._4_4_;
    auVar76._0_4_ = auVar41._4_4_;
    auVar76._8_4_ = auVar41._12_4_;
    auVar76._12_4_ = auVar41._12_4_;
    auVar39 = pshuflw(auVar41,auVar76,0xe8);
    auVar77._4_4_ = auVar61._4_4_;
    auVar77._0_4_ = auVar61._4_4_;
    auVar77._8_4_ = auVar61._12_4_;
    auVar77._12_4_ = auVar61._12_4_;
    auVar68 = pshuflw(auVar61,auVar77,0xe8);
    auVar4._8_4_ = 0xffffffff;
    auVar4._0_8_ = 0xffffffffffffffff;
    auVar4._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39 & auVar72,(auVar68 | auVar39 & auVar72) ^ auVar4);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._4_2_ & 1) != 0) {
      acStack_474[uVar28] = cVar37 + '\x04';
    }
    auVar15._4_4_ = auVar61._0_4_;
    auVar15._0_4_ = auVar61._0_4_;
    auVar15._8_4_ = auVar61._8_4_;
    auVar15._12_4_ = auVar61._8_4_;
    auVar77 = auVar76 & auVar15 | auVar77;
    auVar68 = packssdw(auVar77,auVar77);
    auVar5._8_4_ = 0xffffffff;
    auVar5._0_8_ = 0xffffffffffffffff;
    auVar5._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39,auVar68 ^ auVar5);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._4_2_ >> 8 & 1) != 0) {
      acStack_474[uVar28 + 1] = cVar37 + '\x05';
    }
    auVar39 = auVar55 ^ _DAT_0032b310;
    auVar62._0_4_ = -(uint)(iVar48 < auVar39._0_4_);
    auVar62._4_4_ = -(uint)(iVar49 < auVar39._4_4_);
    auVar62._8_4_ = -(uint)(iVar70 < auVar39._8_4_);
    auVar62._12_4_ = -(uint)(iVar71 < auVar39._12_4_);
    auVar78._4_4_ = auVar62._0_4_;
    auVar78._0_4_ = auVar62._0_4_;
    auVar78._8_4_ = auVar62._8_4_;
    auVar78._12_4_ = auVar62._8_4_;
    iVar85 = -(uint)(auVar39._4_4_ == iVar49);
    iVar89 = -(uint)(auVar39._12_4_ == iVar71);
    auVar16._4_4_ = iVar85;
    auVar16._0_4_ = iVar85;
    auVar16._8_4_ = iVar89;
    auVar16._12_4_ = iVar89;
    auVar87._4_4_ = auVar62._4_4_;
    auVar87._0_4_ = auVar62._4_4_;
    auVar87._8_4_ = auVar62._12_4_;
    auVar87._12_4_ = auVar62._12_4_;
    auVar39 = auVar16 & auVar78 | auVar87;
    auVar39 = packssdw(auVar39,auVar39);
    auVar6._8_4_ = 0xffffffff;
    auVar6._0_8_ = 0xffffffffffffffff;
    auVar6._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39 ^ auVar6,auVar39 ^ auVar6);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._6_2_ & 1) != 0) {
      acStack_474[uVar28 + 2] = cVar37 + '\x06';
    }
    auVar39 = pshufhw(auVar39,auVar78,0x84);
    auVar17._4_4_ = iVar85;
    auVar17._0_4_ = iVar85;
    auVar17._8_4_ = iVar89;
    auVar17._12_4_ = iVar89;
    auVar72 = pshufhw(auVar62,auVar17,0x84);
    auVar68 = pshufhw(auVar39,auVar87,0x84);
    auVar42._8_4_ = 0xffffffff;
    auVar42._0_8_ = 0xffffffffffffffff;
    auVar42._12_4_ = 0xffffffff;
    auVar42 = (auVar68 | auVar72 & auVar39) ^ auVar42;
    auVar39 = packssdw(auVar42,auVar42);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._6_2_ >> 8 & 1) != 0) {
      acStack_474[uVar28 + 3] = cVar37 + '\a';
    }
    auVar39 = auVar54 ^ _DAT_0032b310;
    auVar63._0_4_ = -(uint)(iVar48 < auVar39._0_4_);
    auVar63._4_4_ = -(uint)(iVar49 < auVar39._4_4_);
    auVar63._8_4_ = -(uint)(iVar70 < auVar39._8_4_);
    auVar63._12_4_ = -(uint)(iVar71 < auVar39._12_4_);
    auVar18._4_4_ = auVar63._0_4_;
    auVar18._0_4_ = auVar63._0_4_;
    auVar18._8_4_ = auVar63._8_4_;
    auVar18._12_4_ = auVar63._8_4_;
    auVar72 = pshuflw(auVar87,auVar18,0xe8);
    auVar43._0_4_ = -(uint)(auVar39._0_4_ == iVar48);
    auVar43._4_4_ = -(uint)(auVar39._4_4_ == iVar49);
    auVar43._8_4_ = -(uint)(auVar39._8_4_ == iVar70);
    auVar43._12_4_ = -(uint)(auVar39._12_4_ == iVar71);
    auVar79._4_4_ = auVar43._4_4_;
    auVar79._0_4_ = auVar43._4_4_;
    auVar79._8_4_ = auVar43._12_4_;
    auVar79._12_4_ = auVar43._12_4_;
    auVar39 = pshuflw(auVar43,auVar79,0xe8);
    auVar80._4_4_ = auVar63._4_4_;
    auVar80._0_4_ = auVar63._4_4_;
    auVar80._8_4_ = auVar63._12_4_;
    auVar80._12_4_ = auVar63._12_4_;
    auVar68 = pshuflw(auVar63,auVar80,0xe8);
    auVar64._8_4_ = 0xffffffff;
    auVar64._0_8_ = 0xffffffffffffffff;
    auVar64._12_4_ = 0xffffffff;
    auVar64 = (auVar68 | auVar39 & auVar72) ^ auVar64;
    auVar68 = packssdw(auVar64,auVar64);
    auVar39 = packsswb(auVar39 & auVar72,auVar68);
    if ((auVar39._8_2_ & 1) != 0) {
      acStack_474[uVar28 + 4] = cVar37 + '\b';
    }
    auVar19._4_4_ = auVar63._0_4_;
    auVar19._0_4_ = auVar63._0_4_;
    auVar19._8_4_ = auVar63._8_4_;
    auVar19._12_4_ = auVar63._8_4_;
    auVar80 = auVar79 & auVar19 | auVar80;
    auVar68 = packssdw(auVar80,auVar80);
    auVar7._8_4_ = 0xffffffff;
    auVar7._0_8_ = 0xffffffffffffffff;
    auVar7._12_4_ = 0xffffffff;
    auVar68 = packssdw(auVar68 ^ auVar7,auVar68 ^ auVar7);
    auVar39 = packsswb(auVar39,auVar68);
    if ((auVar39._8_2_ >> 8 & 1) != 0) {
      acStack_474[uVar28 + 5] = cVar37 + '\t';
    }
    auVar39 = auVar53 ^ _DAT_0032b310;
    auVar65._0_4_ = -(uint)(iVar48 < auVar39._0_4_);
    auVar65._4_4_ = -(uint)(iVar49 < auVar39._4_4_);
    auVar65._8_4_ = -(uint)(iVar70 < auVar39._8_4_);
    auVar65._12_4_ = -(uint)(iVar71 < auVar39._12_4_);
    auVar81._4_4_ = auVar65._0_4_;
    auVar81._0_4_ = auVar65._0_4_;
    auVar81._8_4_ = auVar65._8_4_;
    auVar81._12_4_ = auVar65._8_4_;
    iVar85 = -(uint)(auVar39._4_4_ == iVar49);
    iVar89 = -(uint)(auVar39._12_4_ == iVar71);
    auVar20._4_4_ = iVar85;
    auVar20._0_4_ = iVar85;
    auVar20._8_4_ = iVar89;
    auVar20._12_4_ = iVar89;
    auVar88._4_4_ = auVar65._4_4_;
    auVar88._0_4_ = auVar65._4_4_;
    auVar88._8_4_ = auVar65._12_4_;
    auVar88._12_4_ = auVar65._12_4_;
    auVar39 = auVar20 & auVar81 | auVar88;
    auVar39 = packssdw(auVar39,auVar39);
    auVar8._8_4_ = 0xffffffff;
    auVar8._0_8_ = 0xffffffffffffffff;
    auVar8._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39 ^ auVar8,auVar39 ^ auVar8);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._10_2_ & 1) != 0) {
      acStack_474[uVar28 + 6] = cVar37 + '\n';
    }
    auVar39 = pshufhw(auVar39,auVar81,0x84);
    auVar21._4_4_ = iVar85;
    auVar21._0_4_ = iVar85;
    auVar21._8_4_ = iVar89;
    auVar21._12_4_ = iVar89;
    auVar72 = pshufhw(auVar65,auVar21,0x84);
    auVar68 = pshufhw(auVar39,auVar88,0x84);
    auVar44._8_4_ = 0xffffffff;
    auVar44._0_8_ = 0xffffffffffffffff;
    auVar44._12_4_ = 0xffffffff;
    auVar44 = (auVar68 | auVar72 & auVar39) ^ auVar44;
    auVar39 = packssdw(auVar44,auVar44);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._10_2_ >> 8 & 1) != 0) {
      acStack_474[uVar28 + 7] = cVar37 + '\v';
    }
    auVar39 = auVar52 ^ _DAT_0032b310;
    auVar66._0_4_ = -(uint)(iVar48 < auVar39._0_4_);
    auVar66._4_4_ = -(uint)(iVar49 < auVar39._4_4_);
    auVar66._8_4_ = -(uint)(iVar70 < auVar39._8_4_);
    auVar66._12_4_ = -(uint)(iVar71 < auVar39._12_4_);
    auVar22._4_4_ = auVar66._0_4_;
    auVar22._0_4_ = auVar66._0_4_;
    auVar22._8_4_ = auVar66._8_4_;
    auVar22._12_4_ = auVar66._8_4_;
    auVar72 = pshuflw(auVar88,auVar22,0xe8);
    auVar45._0_4_ = -(uint)(auVar39._0_4_ == iVar48);
    auVar45._4_4_ = -(uint)(auVar39._4_4_ == iVar49);
    auVar45._8_4_ = -(uint)(auVar39._8_4_ == iVar70);
    auVar45._12_4_ = -(uint)(auVar39._12_4_ == iVar71);
    auVar82._4_4_ = auVar45._4_4_;
    auVar82._0_4_ = auVar45._4_4_;
    auVar82._8_4_ = auVar45._12_4_;
    auVar82._12_4_ = auVar45._12_4_;
    auVar39 = pshuflw(auVar45,auVar82,0xe8);
    auVar83._4_4_ = auVar66._4_4_;
    auVar83._0_4_ = auVar66._4_4_;
    auVar83._8_4_ = auVar66._12_4_;
    auVar83._12_4_ = auVar66._12_4_;
    auVar68 = pshuflw(auVar66,auVar83,0xe8);
    auVar9._8_4_ = 0xffffffff;
    auVar9._0_8_ = 0xffffffffffffffff;
    auVar9._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39 & auVar72,(auVar68 | auVar39 & auVar72) ^ auVar9);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._12_2_ & 1) != 0) {
      acStack_474[uVar28 + 8] = cVar37 + '\f';
    }
    auVar23._4_4_ = auVar66._0_4_;
    auVar23._0_4_ = auVar66._0_4_;
    auVar23._8_4_ = auVar66._8_4_;
    auVar23._12_4_ = auVar66._8_4_;
    auVar83 = auVar82 & auVar23 | auVar83;
    auVar68 = packssdw(auVar83,auVar83);
    auVar10._8_4_ = 0xffffffff;
    auVar10._0_8_ = 0xffffffffffffffff;
    auVar10._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39,auVar68 ^ auVar10);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._12_2_ >> 8 & 1) != 0) {
      acStack_474[uVar28 + 9] = cVar37 + '\r';
    }
    auVar39 = auVar50 ^ _DAT_0032b310;
    auVar67._0_4_ = -(uint)(iVar48 < auVar39._0_4_);
    auVar67._4_4_ = -(uint)(iVar49 < auVar39._4_4_);
    auVar67._8_4_ = -(uint)(iVar70 < auVar39._8_4_);
    auVar67._12_4_ = -(uint)(iVar71 < auVar39._12_4_);
    auVar84._4_4_ = auVar67._0_4_;
    auVar84._0_4_ = auVar67._0_4_;
    auVar84._8_4_ = auVar67._8_4_;
    auVar84._12_4_ = auVar67._8_4_;
    iVar48 = -(uint)(auVar39._4_4_ == iVar49);
    iVar49 = -(uint)(auVar39._12_4_ == iVar71);
    auVar69._4_4_ = iVar48;
    auVar69._0_4_ = iVar48;
    auVar69._8_4_ = iVar49;
    auVar69._12_4_ = iVar49;
    auVar46._4_4_ = auVar67._4_4_;
    auVar46._0_4_ = auVar67._4_4_;
    auVar46._8_4_ = auVar67._12_4_;
    auVar46._12_4_ = auVar67._12_4_;
    auVar46 = auVar69 & auVar84 | auVar46;
    auVar39 = packssdw(auVar46,auVar46);
    auVar11._8_4_ = 0xffffffff;
    auVar11._0_8_ = 0xffffffffffffffff;
    auVar11._12_4_ = 0xffffffff;
    auVar39 = packssdw(auVar39 ^ auVar11,auVar39 ^ auVar11);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._14_2_ & 1) != 0) {
      acStack_474[uVar28 + 10] = cVar37 + '\x0e';
    }
    auVar39 = pshufhw(auVar39,auVar84,0x84);
    in_XMM11 = pshufhw(auVar67,auVar69,0x84);
    in_XMM11 = in_XMM11 & auVar39;
    auVar24._4_4_ = auVar67._4_4_;
    auVar24._0_4_ = auVar67._4_4_;
    auVar24._8_4_ = auVar67._12_4_;
    auVar24._12_4_ = auVar67._12_4_;
    auVar39 = pshufhw(auVar39,auVar24,0x84);
    auVar47._8_4_ = 0xffffffff;
    auVar47._0_8_ = 0xffffffffffffffff;
    auVar47._12_4_ = 0xffffffff;
    auVar47 = (auVar39 | in_XMM11) ^ auVar47;
    auVar39 = packssdw(auVar47,auVar47);
    auVar39 = packsswb(auVar39,auVar39);
    if ((auVar39._14_2_ >> 8 & 1) != 0) {
      acStack_474[uVar28 + 0xb] = cVar37 + '\x0f';
    }
    uVar28 = uVar28 + 0x10;
    lVar33 = (long)DAT_0032b3d0;
    lVar51 = auVar58._8_8_;
    auVar58._0_8_ = auVar58._0_8_ + lVar33;
    lVar29 = DAT_0032b3d0._8_8_;
    auVar58._8_8_ = lVar51 + lVar29;
    lVar51 = auVar57._8_8_;
    auVar57._0_8_ = auVar57._0_8_ + lVar33;
    auVar57._8_8_ = lVar51 + lVar29;
    lVar51 = auVar56._8_8_;
    auVar56._0_8_ = auVar56._0_8_ + lVar33;
    auVar56._8_8_ = lVar51 + lVar29;
    lVar51 = auVar55._8_8_;
    auVar55._0_8_ = auVar55._0_8_ + lVar33;
    auVar55._8_8_ = lVar51 + lVar29;
    lVar51 = auVar54._8_8_;
    auVar54._0_8_ = auVar54._0_8_ + lVar33;
    auVar54._8_8_ = lVar51 + lVar29;
    lVar51 = auVar53._8_8_;
    auVar53._0_8_ = auVar53._0_8_ + lVar33;
    auVar53._8_8_ = lVar51 + lVar29;
    lVar51 = auVar52._8_8_;
    auVar52._0_8_ = auVar52._0_8_ + lVar33;
    auVar52._8_8_ = lVar51 + lVar29;
    lVar51 = auVar50._8_8_;
    auVar50._0_8_ = auVar50._0_8_ + lVar33;
    auVar50._8_8_ = lVar51 + lVar29;
    auVar39 = _DAT_0032b3d0;
  } while (((ulong)uVar36 + 0x10 & 0xfffffffffffffff0) != uVar28);
  if (param_3 == 0) {
LAB_0020e5c4:
    uVar30 = 0;
  }
  else {
    uVar36 = uVar36 + 1;
    uVar31 = (ulong)uVar36;
    uVar28 = 0;
    do {
      if (uVar36 == 0) {
        *(undefined4 *)(lVar27 + uVar28 * 4) = 0;
        cVar37 = (char)local_478;
      }
      else {
        cVar37 = (char)param_2[uVar28];
        uVar32 = 0;
        do {
          if (*(char *)((long)&local_478 + uVar32) == cVar37) {
            *(int *)(lVar27 + uVar28 * 4) = (int)uVar32;
            if (uVar32 == 0) goto LAB_0020e53e;
            goto LAB_0020e524;
          }
          uVar32 = uVar32 + 1;
        } while (uVar31 != uVar32);
        *(uint *)(lVar27 + uVar28 * 4) = uVar36;
        cVar37 = *(char *)((long)&local_478 + uVar31);
        uVar32 = uVar31;
LAB_0020e524:
        _memmove((void *)((long)&local_478 + 1),&local_478,uVar32);
      }
LAB_0020e53e:
      local_478._0_1_ = cVar37;
      uVar28 = uVar28 + 1;
    } while (uVar28 != param_3);
    uVar36 = 0;
    uVar28 = 0;
    do {
      uVar31 = uVar28 + 1;
      if (uVar28 + 1 < param_3) {
        uVar31 = param_3;
      }
      piVar35 = (int *)(lVar27 + uVar28 * 4);
      while (*(int *)(lVar27 + uVar28 * 4) != 0) {
        uVar28 = uVar28 + 1;
        piVar35 = piVar35 + 1;
        if (uVar31 == uVar28) {
          uVar30 = 0;
          goto LAB_0020e5b5;
        }
      }
      uVar30 = 0;
      if (uVar28 < param_3) {
        lVar33 = 0;
        while (*piVar35 == 0) {
          lVar33 = lVar33 + -1;
          piVar35 = piVar35 + 1;
          if (uVar28 - param_3 == lVar33) {
            uVar30 = (int)param_3 - (int)uVar28;
LAB_0020e5b5:
            if (uVar36 < uVar30) {
              uVar36 = uVar30;
            }
            goto LAB_0020e5ba;
          }
        }
        uVar28 = uVar28 - lVar33;
        uVar30 = -(int)lVar33;
      }
      if (uVar36 < uVar30) {
        uVar36 = uVar30;
      }
    } while (uVar28 < param_3);
LAB_0020e5ba:
    if (uVar36 == 0) goto LAB_0020e5c4;
    uVar30 = 0x1f;
    if (uVar36 != 0) {
      for (; uVar36 >> uVar30 == 0; uVar30 = uVar30 - 1) {
      }
    }
  }
  uVar28 = 6;
  if (uVar30 < 6) {
    uVar28 = (ulong)uVar30;
  }
  uVar36 = (uint)uVar28;
  if (param_3 == 0) {
    ___bzero(&local_478,0x440);
LAB_0020e6ed:
    lVar33 = 0;
    bVar25 = true;
  }
  else {
    uVar26 = 2 << ((byte)uVar28 & 0x1f);
    lVar33 = 0;
    uVar31 = 0;
    do {
      iVar48 = *(int *)(lVar27 + uVar31 * 4);
      if (iVar48 == 0) {
        uVar34 = 1;
        uVar32 = uVar31 + 1;
        if (param_3 <= uVar31 + 1) {
LAB_0020e65c:
          uVar31 = uVar32;
          if (uVar26 <= uVar34) goto code_r0x0020e660;
          uVar2 = 0x1f;
          if (uVar34 != 0) {
            for (; uVar34 >> uVar2 == 0; uVar2 = uVar2 - 1) {
            }
          }
          *(uint *)(lVar27 + lVar33 * 4) = ((-1 << ((byte)uVar2 & 0x1f)) + uVar34) * 0x200 | uVar2;
          goto LAB_0020e60d;
        }
        uVar34 = (int)param_3 - (int)uVar31;
        lVar29 = 1;
        do {
          if (*(int *)(lVar27 + uVar31 * 4 + lVar29 * 4) != 0) {
            uVar34 = (uint)lVar29;
            break;
          }
          lVar29 = lVar29 + 1;
        } while (param_3 - uVar31 != lVar29);
        uVar31 = uVar31 + uVar34;
        uVar32 = uVar31;
        if (uVar34 != 0) goto LAB_0020e65c;
      }
      else {
        *(uint *)(lVar27 + lVar33 * 4) = iVar48 + uVar36;
        uVar31 = uVar31 + 1;
LAB_0020e60d:
        lVar33 = lVar33 + 1;
      }
LAB_0020e610:
    } while (uVar31 < param_3);
    ___bzero(&local_478,0x440);
    if (lVar33 == 0) goto LAB_0020e6ed;
    lVar29 = 0;
    do {
      (&local_478)[*(uint *)(lVar27 + lVar29 * 4) & 0x1ff] =
           (&local_478)[*(uint *)(lVar27 + lVar29 * 4) & 0x1ff] + 1;
      lVar29 = lVar29 + 1;
    } while (lVar33 != lVar29);
    bVar25 = false;
  }
  uVar32 = *param_6;
  uVar31 = uVar32 + 1;
  *(ulong *)(param_7 + (uVar32 >> 3)) =
       (ulong)(uVar30 != 0) << ((byte)uVar32 & 7) | (ulong)*(byte *)(param_7 + (uVar32 >> 3));
  *param_6 = uVar31;
  if (uVar30 != 0) {
    *(ulong *)(param_7 + (uVar31 >> 3)) =
         (ulong)(uVar36 - 1) << ((byte)uVar31 & 7) | (ulong)*(byte *)(param_7 + (uVar31 >> 3));
    *param_6 = uVar32 + 5;
  }
  _BuildAndStoreHuffmanTree
            (&local_478,uVar28 + param_4,uVar28 + param_4,param_5,local_588,local_7a8,param_6,
             param_7);
  uVar28 = *param_6;
  if (!bVar25) {
    lVar29 = 0;
    do {
      uVar30 = *(uint *)(lVar27 + lVar29 * 4);
      uVar26 = uVar30 & 0x1ff;
      uVar31 = (ulong)uVar26;
      bVar1 = local_588[uVar31];
      *(ulong *)(param_7 + (uVar28 >> 3)) =
           (ulong)local_7a8[uVar31] << ((byte)uVar28 & 7) |
           (ulong)*(byte *)(param_7 + (uVar28 >> 3));
      uVar28 = bVar1 + uVar28;
      *param_6 = uVar28;
      if (uVar26 - 1 < uVar36) {
        *(ulong *)(param_7 + (uVar28 >> 3)) =
             (ulong)(uVar30 >> 9) << ((byte)uVar28 & 7) | (ulong)*(byte *)(param_7 + (uVar28 >> 3));
        uVar28 = uVar28 + uVar31;
        *param_6 = uVar28;
      }
      lVar29 = lVar29 + 1;
    } while (lVar33 != lVar29);
  }
  *(ulong *)(param_7 + (uVar28 >> 3)) =
       (ulong)*(byte *)(param_7 + (uVar28 >> 3)) | 1L << ((byte)uVar28 & 7);
  *param_6 = uVar28 + 1;
  _BrotliFree(param_1,lVar27);
LAB_0020e845:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
code_r0x0020e660:
  *(uint *)(lVar27 + lVar33 * 4) = ~(-1 << ((byte)uVar28 & 0x1f)) << 9 | uVar36;
  lVar33 = lVar33 + 1;
  uVar34 = (uVar34 - uVar26) + 1;
  uVar32 = uVar31;
  if (uVar34 == 0) goto LAB_0020e610;
  goto LAB_0020e65c;
}

