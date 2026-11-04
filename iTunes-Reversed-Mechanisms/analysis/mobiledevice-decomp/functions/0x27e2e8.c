// rea decompile_all
// name: _AMAuthInstallBasebandGetVersion
// address: 0x27e2e8
// body: available
// range: 0x27e2e8-0x27e34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBasebandGetVersion
          (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long local_20;
  
  local_20 = 0;
  uVar2 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    iVar1 = _AMAuthInstallBasebandReadVersionFromBbfw(param_2,param_4,&local_20);
    uVar2 = 0xe;
    if ((iVar1 == 0) && (local_20 != 0)) {
      _CFDictionarySetValue(param_3,param_5);
      uVar2 = 0;
    }
  }
  return uVar2;
}

