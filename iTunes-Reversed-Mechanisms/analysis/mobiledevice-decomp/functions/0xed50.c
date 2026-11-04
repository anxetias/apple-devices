// rea decompile_all
// name: FUN_0000ed50
// address: 0xed50
// body: available
// range: 0xed50-0xedaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000ed9a) */
/* WARNING: Removing unreachable block (ram,0x0000ed91) */
/* WARNING: Removing unreachable block (ram,0x0000ed88) */
/* WARNING: Removing unreachable block (ram,0x0000ed6a) */
/* WARNING: Removing unreachable block (ram,0x0000ed61) */
/* WARNING: Removing unreachable block (ram,0x0000ed58) */

void FUN_0000ed50(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*in_RCX) [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined4 in_XMM2_Dd;
  undefined1 in_XMM3 [16];
  ulong uVar7;
  undefined4 uVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar7 = in_XMM1._0_8_;
  auVar8._0_8_ = uVar7 << 0x20;
  auVar8._8_8_ = in_XMM1._8_8_ << 0x20 | uVar7 >> 0x20;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (uVar7 >> 0x20) << 0x20 | uVar7 & 0xffffffff;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 << 0x20;
  auVar6._4_4_ = in_XMM2_Dd;
  auVar6._0_4_ = in_XMM2_Dd;
  auVar6._8_4_ = in_XMM2_Dd;
  auVar6._12_4_ = in_XMM2_Dd;
  auVar6 = in_XMM1 ^ auVar8 ^ auVar2 << 0x40 ^ auVar4 << 0x40 ^ auVar6;
  *in_RCX = auVar6;
  auVar6 = aeskeygenassist(auVar6,0);
  uVar10 = auVar6._8_4_;
  uVar7 = in_XMM3._0_8_;
  auVar9._0_8_ = uVar7 << 0x20;
  auVar9._8_8_ = in_XMM3._8_8_ << 0x20 | uVar7 >> 0x20;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (uVar7 >> 0x20) << 0x20 | uVar7 & 0xffffffff;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar7 << 0x20;
  auVar1._4_4_ = uVar10;
  auVar1._0_4_ = uVar10;
  auVar1._8_4_ = uVar10;
  auVar1._12_4_ = uVar10;
  in_RCX[1] = in_XMM3 ^ auVar9 ^ auVar3 << 0x40 ^ auVar5 << 0x40 ^ auVar1;
  return;
}

