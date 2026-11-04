// rea decompile_all
// name: _AMAuthInstallBasebandICE3CopyNextComponentName
// address: 0x27ffc1
// body: available
// range: 0x27ffc1-0x280046 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandICE3CopyNextComponentName(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  
  uVar2 = 1;
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x30), lVar1 != 0)) {
    if (*(int *)(lVar1 + 4) == 0x50) {
      if (*(long *)(lVar1 + 0x10) == 0) {
        _AMAuthInstallLog(3,"AMAuthInstallBasebandICE3CopyNextComponentName","missing snum");
      }
      else {
        pcVar3 = &cf_stack_bbfw;
        if (*(long *)(lVar1 + 0x18) == 0) {
          pcVar3 = &cf_boot_bbfw;
        }
        uVar2 = _CFRetain(pcVar3);
        *param_2 = uVar2;
        uVar2 = 0;
      }
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallBasebandICE3CopyNextComponentName",
                        "unsupported chipID: 0x%08x");
    }
  }
  return uVar2;
}

