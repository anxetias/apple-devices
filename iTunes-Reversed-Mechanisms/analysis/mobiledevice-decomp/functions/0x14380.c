// rea decompile_all
// name: _gcm_gmult
// address: 0x14380
// body: available
// range: 0x14380-0x1440e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000143ef) */
/* WARNING: Removing unreachable block (ram,0x000143dc) */
/* WARNING: Removing unreachable block (ram,0x000143c5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _gcm_gmult(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
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
  
  auVar9 = *param_2;
  auVar7 = pshufb(*param_1,_DAT_00014800);
  auVar12._0_8_ = auVar7._8_8_;
  auVar12._8_4_ = auVar7._0_4_;
  auVar12._12_4_ = auVar7._4_4_;
  auVar14._0_8_ = auVar9._8_8_;
  auVar14._8_4_ = auVar9._0_4_;
  auVar14._12_4_ = auVar9._4_4_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auVar7._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = auVar9._0_8_;
  auVar8 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar8 = auVar8 ^ auVar13 << uVar1;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar12._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar14._0_8_;
  auVar2 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar2 = auVar2 ^ auVar5 << uVar1;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = SUB168(auVar12 ^ auVar7,0);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar14 ^ auVar9,0);
  auVar9 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar9 = auVar9 ^ auVar7 << uVar1;
    }
  }
  auVar13 = auVar9 ^ auVar2 ^ auVar8;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar13._0_8_;
  auVar8 = auVar8 ^ auVar9 << 0x40;
  auVar10._0_8_ = auVar8._8_8_;
  auVar10._8_4_ = auVar8._0_4_;
  auVar10._12_4_ = auVar8._4_4_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar8._0_8_;
  auVar9 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar6 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar9 = auVar9 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar9 = auVar9 ^ auVar10;
  auVar11._0_8_ = auVar9._8_8_;
  auVar11._8_4_ = auVar9._0_4_;
  auVar11._12_4_ = auVar9._4_4_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = auVar9._0_8_;
  auVar9 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar8 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar9 = auVar9 ^ ZEXT816(0xc200000000000000) << uVar1;
    }
  }
  auVar9 = pshufb(auVar9 ^ auVar13 >> 0x40 ^ auVar2 ^ auVar11,_DAT_00014800);
  *param_3 = auVar9;
  return;
}

