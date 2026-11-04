// rea decompile_all
// name: FUN_0000ebd0
// address: 0xebd0
// body: available
// range: 0xebd0-0xec05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000ebf0) */
/* WARNING: Removing unreachable block (ram,0x0000ebe4) */
/* WARNING: Removing unreachable block (ram,0x0000ebd8) */

void FUN_0000ebd0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  undefined4 in_XMM2_Dd;
  
  auVar4._12_4_ = 0;
  auVar4._0_12_ = in_XMM1._0_12_;
  auVar4 = in_XMM1 ^ auVar4 << 0x20;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = auVar4._0_12_;
  auVar4 = auVar4 ^ auVar2 << 0x20;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = auVar4._0_12_;
  auVar1._4_4_ = in_XMM2_Dd;
  auVar1._0_4_ = in_XMM2_Dd;
  auVar1._8_4_ = in_XMM2_Dd;
  auVar1._12_4_ = in_XMM2_Dd;
  *(undefined1 (*) [16])(param_3 + param_4 + 0x10) = auVar4 ^ auVar3 << 0x20 ^ auVar1;
  return;
}

