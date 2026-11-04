// rea decompile_all
// name: _AMAuthInstallMonetCopyNextComponentName
// address: 0x293235
// body: available
// range: 0x293235-0x2932a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallMonetCopyNextComponentName(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char local_19;
  
  local_19 = '\0';
  uVar1 = 1;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar1 = _AMAuthInstallBasebandIsFused(param_1,&local_19);
    if ((int)uVar1 == 0) {
      pcVar2 = &cf_boot_bbfw;
      if (local_19 == '\0') {
        pcVar2 = &cf_preflash_bbfw;
      }
      pcVar3 = &cf_stack_bbfw;
      if (*(long *)(*(long *)(param_1 + 0x30) + 0x18) == 0) {
        pcVar3 = pcVar2;
      }
      uVar1 = _CFRetain(pcVar3);
      *param_2 = uVar1;
      uVar1 = 0;
    }
  }
  return uVar1;
}

