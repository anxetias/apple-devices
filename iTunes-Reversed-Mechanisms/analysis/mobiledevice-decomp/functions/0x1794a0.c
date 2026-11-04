// rea decompile_all
// name: __findBuildIdentity
// address: 0x1794a0
// body: available
// range: 0x1794a0-0x179539 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __findBuildIdentity(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  
  if (((((param_2 != (undefined4 *)0x0) && (*(long *)(param_2 + 2) != 0)) &&
       (*(long *)(param_2 + 4) == 0)) &&
      ((cVar1 = _AMAuthInstallSupportCompareStringToInt32(param_1,&cf_ApBoardID,*param_2),
       cVar1 != '\0' &&
       (cVar1 = _AMAuthInstallSupportCompareStringToInt32(param_1,&cf_ApChipID,param_2[1]),
       cVar1 != '\0')))) && (lVar2 = _CFDictionaryGetValue(param_1,&cf_Info), lVar2 != 0)) {
    pcVar3 = &cf_Variant;
    if (*(char *)(param_2 + 6) != '\0') {
      pcVar3 = &cf_RestoreBehavior;
    }
    lVar2 = _CFDictionaryGetValue(lVar2,pcVar3);
    if ((lVar2 != 0) && (cVar1 = _CFEqual(lVar2,*(undefined8 *)(param_2 + 2)), cVar1 != '\0')) {
      *(undefined8 *)(param_2 + 4) = param_1;
    }
  }
  return;
}

