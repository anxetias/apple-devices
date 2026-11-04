// rea decompile_all
// name: FUN_0000edb0
// address: 0xedb0
// body: available
// range: 0xedb0-0xedda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000edca) */
/* WARNING: Removing unreachable block (ram,0x0000edc1) */
/* WARNING: Removing unreachable block (ram,0x0000edb8) */

void FUN_0000edb0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*in_RCX) [16];
  undefined1 in_XMM1 [16];
  undefined4 in_XMM2_Dd;
  
  auVar3._12_4_ = 0;
  auVar3._0_12_ = in_XMM1._0_12_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_XMM1._0_8_;
  auVar1._4_4_ = in_XMM2_Dd;
  auVar1._0_4_ = in_XMM2_Dd;
  auVar1._8_4_ = in_XMM2_Dd;
  auVar1._12_4_ = in_XMM2_Dd;
  *in_RCX = in_XMM1 ^ auVar3 << 0x20 ^ auVar2 << 0x40 ^ ZEXT416(in_XMM1._0_4_) << 0x60 ^ auVar1;
  return;
}

