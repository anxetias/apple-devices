// rea decompile_all
// name: ___copy_helper_block_e8_32s40s48s56b64b72r
// address: 0x38f92
// body: available
// range: 0x38f92-0x39000 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x38ffc to 0x2a9eb8 __Block_object_assign (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___copy_helper_block_e8_32s40s48s56b64b72r(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__objc_retain_004410a8;
  (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_2 + 0x20));
  (*(code *)puVar1)(*(undefined8 *)(param_2 + 0x28));
  (*(code *)puVar1)(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),7);
  __Block_object_assign((void *)(param_1 + 0x40),*(void **)(param_2 + 0x40),7);
  __Block_object_assign((void *)(param_1 + 0x48),*(void **)(param_2 + 0x48),8);
  return;
}

