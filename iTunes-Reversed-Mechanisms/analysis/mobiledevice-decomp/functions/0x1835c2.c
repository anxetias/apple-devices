// rea decompile_all
// name: _fAssetReady
// address: 0x1835c2
// body: available
// range: 0x1835c2-0x183977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x183614 to 0x17af4c _CoreUARPRestoreLogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18395c to 0x183997 _fAssetMetaDataComplete (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _fAssetReady(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  short *psVar6;
  short sVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  int iVar12;
  undefined1 auVar11 [16];
  int iVar13;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  long lVar18;
  undefined1 in_XMM7 [16];
  undefined1 auVar19 [16];
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar34;
  int iVar37;
  undefined1 auVar35 [16];
  int iVar38;
  undefined1 auVar36 [16];
  undefined1 in_XMM11 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM12 [16];
  undefined1 auVar41 [16];
  
  iVar5 = _uarpPlatformEndpointAssetQueryNumberOfPayloads(param_1 + 0x298,*param_2,param_2 + 0x24);
  if (iVar5 == 0) {
    psVar6 = (short *)_uarpZalloc((ulong)*(ushort *)(param_2 + 0x24) * 0x160);
    auVar19._8_8_ = extraout_XMM1_Qb;
    auVar19._0_8_ = extraout_XMM1_Qa;
    param_2[0x25] = psVar6;
    auVar4 = _DAT_0032b310;
    uVar1 = *(ushort *)(param_2 + 0x24);
    if ((ulong)uVar1 != 0) {
      lVar9 = (ulong)uVar1 - 1;
      auVar11._8_4_ = (int)lVar9;
      auVar11._0_8_ = lVar9;
      auVar11._12_4_ = (int)((ulong)lVar9 >> 0x20);
      auVar14 = pmovsxbq(auVar19,0x706);
      auVar15 = pmovsxbq(in_XMM2,0x504);
      auVar16 = pmovsxbq(in_XMM3,0x302);
      auVar17 = pmovsxbq(in_XMM4,0x100);
      uVar10 = 0;
      auVar11 = auVar11 ^ _DAT_0032b310;
      auVar19 = pmovsxbq(in_XMM7,0x808);
      do {
        auVar21 = auVar17 ^ auVar4;
        iVar5 = auVar11._0_4_;
        iVar34 = -(uint)(iVar5 < auVar21._0_4_);
        iVar12 = auVar11._4_4_;
        auVar22._4_4_ = -(uint)(iVar12 < auVar21._4_4_);
        iVar38 = auVar11._8_4_;
        iVar37 = -(uint)(iVar38 < auVar21._8_4_);
        iVar13 = auVar11._12_4_;
        auVar22._12_4_ = -(uint)(iVar13 < auVar21._12_4_);
        auVar31._4_4_ = iVar34;
        auVar31._0_4_ = iVar34;
        auVar31._8_4_ = iVar37;
        auVar31._12_4_ = iVar37;
        auVar39 = pshuflw(in_XMM11,auVar31,0xe8);
        auVar24._4_4_ = -(uint)(auVar21._4_4_ == iVar12);
        auVar24._12_4_ = -(uint)(auVar21._12_4_ == iVar13);
        auVar24._0_4_ = auVar24._4_4_;
        auVar24._8_4_ = auVar24._12_4_;
        auVar41 = pshuflw(in_XMM12,auVar24,0xe8);
        auVar22._0_4_ = auVar22._4_4_;
        auVar22._8_4_ = auVar22._12_4_;
        auVar40 = pshuflw(auVar39,auVar22,0xe8);
        auVar21._8_4_ = 0xffffffff;
        auVar21._0_8_ = 0xffffffffffffffff;
        auVar21._12_4_ = 0xffffffff;
        auVar21 = (auVar40 | auVar41 & auVar39) ^ auVar21;
        auVar21 = packssdw(auVar21,auVar21);
        sVar7 = (short)uVar10;
        if ((auVar21._0_4_ & 1) != 0) {
          *psVar6 = sVar7;
        }
        auVar22 = auVar24 & auVar31 | auVar22;
        auVar21 = packssdw(auVar22,auVar22);
        auVar40._8_4_ = 0xffffffff;
        auVar40._0_8_ = 0xffffffffffffffff;
        auVar40._12_4_ = 0xffffffff;
        auVar21 = packssdw(auVar21 ^ auVar40,auVar21 ^ auVar40);
        if ((auVar21[2] & 1) != 0) {
          psVar6[0xb0] = sVar7 + 1;
        }
        auVar21 = auVar16 ^ auVar4;
        iVar34 = -(uint)(iVar5 < auVar21._0_4_);
        auVar35._4_4_ = -(uint)(iVar12 < auVar21._4_4_);
        iVar37 = -(uint)(iVar38 < auVar21._8_4_);
        auVar35._12_4_ = -(uint)(iVar13 < auVar21._12_4_);
        auVar23._4_4_ = iVar34;
        auVar23._0_4_ = iVar34;
        auVar23._8_4_ = iVar37;
        auVar23._12_4_ = iVar37;
        auVar30._4_4_ = -(uint)(auVar21._4_4_ == iVar12);
        auVar30._12_4_ = -(uint)(auVar21._12_4_ == iVar13);
        auVar30._0_4_ = auVar30._4_4_;
        auVar30._8_4_ = auVar30._12_4_;
        auVar35._0_4_ = auVar35._4_4_;
        auVar35._8_4_ = auVar35._12_4_;
        auVar21 = auVar30 & auVar23 | auVar35;
        auVar21 = packssdw(auVar21,auVar21);
        auVar2._8_4_ = 0xffffffff;
        auVar2._0_8_ = 0xffffffffffffffff;
        auVar2._12_4_ = 0xffffffff;
        auVar21 = packssdw(auVar21 ^ auVar2,auVar21 ^ auVar2);
        if ((auVar21[4] & 1) != 0) {
          psVar6[0x160] = sVar7 + 2;
        }
        auVar24 = pshufhw(auVar23,auVar23,0x84);
        auVar31 = pshufhw(auVar30,auVar30,0x84);
        auVar22 = pshufhw(auVar24,auVar35,0x84);
        auVar25._8_4_ = 0xffffffff;
        auVar25._0_8_ = 0xffffffffffffffff;
        auVar25._12_4_ = 0xffffffff;
        auVar25 = (auVar22 | auVar31 & auVar24) ^ auVar25;
        auVar24 = packssdw(auVar25,auVar25);
        if ((auVar24[6] & 1) != 0) {
          psVar6[0x210] = sVar7 + 3;
        }
        auVar24 = auVar15 ^ auVar4;
        iVar34 = -(uint)(iVar5 < auVar24._0_4_);
        auVar27._4_4_ = -(uint)(iVar12 < auVar24._4_4_);
        iVar37 = -(uint)(iVar38 < auVar24._8_4_);
        auVar27._12_4_ = -(uint)(iVar13 < auVar24._12_4_);
        auVar32._4_4_ = iVar34;
        auVar32._0_4_ = iVar34;
        auVar32._8_4_ = iVar37;
        auVar32._12_4_ = iVar37;
        auVar21 = pshuflw(auVar21,auVar32,0xe8);
        auVar26._4_4_ = -(uint)(auVar24._4_4_ == iVar12);
        auVar26._12_4_ = -(uint)(auVar24._12_4_ == iVar13);
        auVar26._0_4_ = auVar26._4_4_;
        auVar26._8_4_ = auVar26._12_4_;
        in_XMM12 = pshuflw(auVar41 & auVar39,auVar26,0xe8);
        in_XMM12 = in_XMM12 & auVar21;
        auVar27._0_4_ = auVar27._4_4_;
        auVar27._8_4_ = auVar27._12_4_;
        auVar21 = pshuflw(auVar21,auVar27,0xe8);
        auVar39._8_4_ = 0xffffffff;
        auVar39._0_8_ = 0xffffffffffffffff;
        auVar39._12_4_ = 0xffffffff;
        auVar39 = (auVar21 | in_XMM12) ^ auVar39;
        auVar21 = packssdw(auVar39,auVar39);
        if ((auVar21[8] & 1) != 0) {
          psVar6[0x2c0] = sVar7 + 4;
        }
        auVar27 = auVar26 & auVar32 | auVar27;
        auVar21 = packssdw(auVar27,auVar27);
        auVar41._8_4_ = 0xffffffff;
        auVar41._0_8_ = 0xffffffffffffffff;
        auVar41._12_4_ = 0xffffffff;
        auVar21 = packssdw(auVar21 ^ auVar41,auVar21 ^ auVar41);
        if ((auVar21[10] & 1) != 0) {
          psVar6[0x370] = sVar7 + 5;
        }
        auVar21 = auVar14 ^ auVar4;
        iVar5 = -(uint)(iVar5 < auVar21._0_4_);
        auVar36._4_4_ = -(uint)(iVar12 < auVar21._4_4_);
        iVar38 = -(uint)(iVar38 < auVar21._8_4_);
        auVar36._12_4_ = -(uint)(iVar13 < auVar21._12_4_);
        auVar28._4_4_ = iVar5;
        auVar28._0_4_ = iVar5;
        auVar28._8_4_ = iVar38;
        auVar28._12_4_ = iVar38;
        auVar33._4_4_ = -(uint)(auVar21._4_4_ == iVar12);
        auVar33._12_4_ = -(uint)(auVar21._12_4_ == iVar13);
        auVar33._0_4_ = auVar33._4_4_;
        auVar33._8_4_ = auVar33._12_4_;
        auVar36._0_4_ = auVar36._4_4_;
        auVar36._8_4_ = auVar36._12_4_;
        auVar21 = auVar33 & auVar28 | auVar36;
        auVar21 = packssdw(auVar21,auVar21);
        auVar3._8_4_ = 0xffffffff;
        auVar3._0_8_ = 0xffffffffffffffff;
        auVar3._12_4_ = 0xffffffff;
        in_XMM11 = packssdw(auVar21 ^ auVar3,auVar21 ^ auVar3);
        if ((in_XMM11[0xc] & 1) != 0) {
          psVar6[0x420] = sVar7 + 6;
        }
        auVar21 = pshufhw(auVar28,auVar28,0x84);
        auVar22 = pshufhw(auVar33,auVar33,0x84);
        auVar24 = pshufhw(auVar21,auVar36,0x84);
        auVar29._8_4_ = 0xffffffff;
        auVar29._0_8_ = 0xffffffffffffffff;
        auVar29._12_4_ = 0xffffffff;
        auVar29 = (auVar24 | auVar22 & auVar21) ^ auVar29;
        auVar21 = packssdw(auVar29,auVar29);
        if ((auVar21[0xe] & 1) != 0) {
          psVar6[0x4d0] = sVar7 + 7;
        }
        uVar10 = uVar10 + 8;
        lVar9 = auVar17._8_8_;
        lVar18 = auVar19._0_8_;
        auVar17._0_8_ = auVar17._0_8_ + lVar18;
        lVar20 = auVar19._8_8_;
        auVar17._8_8_ = lVar9 + lVar20;
        lVar9 = auVar16._8_8_;
        auVar16._0_8_ = auVar16._0_8_ + lVar18;
        auVar16._8_8_ = lVar9 + lVar20;
        lVar9 = auVar15._8_8_;
        auVar15._0_8_ = auVar15._0_8_ + lVar18;
        auVar15._8_8_ = lVar9 + lVar20;
        lVar9 = auVar14._8_8_;
        auVar14._0_8_ = auVar14._0_8_ + lVar18;
        auVar14._8_8_ = lVar9 + lVar20;
        psVar6 = psVar6 + 0x580;
      } while ((uVar1 + 7 & 0xfffffff8) != uVar10);
    }
    iVar5 = _uarpPlatformEndpointAssetRequestMetaData(param_1 + 0x298,*param_2);
    if (iVar5 == 0) {
      return;
    }
    if (iVar5 == 0x28) {
      _CoreUARPRestoreLogDebug
                (param_1,1,"UARP Restore (Asset Solicitation): %s: No Asset Metadata","fAssetReady")
      ;
      _fAssetMetaDataComplete(param_1,param_2);
      return;
    }
    pcVar8 = 
    "UARP Restore (Asset Solicitation): %s: uarpPlatformEndpointAssetRequestMetaData failed with status: %u"
    ;
  }
  else {
    pcVar8 = 
    "UARP Restore (Asset Solicitation): %s: uarpPlatformEndpointAssetQueryNumberOfPayloads failed with status: %u"
    ;
  }
  _CoreUARPRestoreLogError(param_1,1,pcVar8,"fAssetReady",iVar5);
  return;
}

