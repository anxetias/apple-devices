// rea decompile_all
// name: _AMRestorePerformRestoreModeRestore
// address: 0xcd81c
// body: available
// range: 0xcd81c-0xcd857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMRestorePerformRestoreModeRestore
          (__AMRestoreModeDevice *param_1,__CFDictionary *param_2,undefined8 param_3,
          undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  __CFError *local_18;
  
  uVar2 = 0;
  local_18 = (__CFError *)0x0;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  cVar1 = _AMRestorePerformRestoreModeRestoreWithError(param_1,param_2,&local_18);
  if (cVar1 == '\0') {
    uVar2 = _CFErrorGetCode(local_18);
  }
  return uVar2;
}

