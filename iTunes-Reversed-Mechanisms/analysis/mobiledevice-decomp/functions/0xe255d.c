// rea decompile_all
// name: _AMRestoreGetBuildIdentityInfo
// address: 0xe255d
// body: available
// range: 0xe255d-0xe260c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRestoreGetBuildIdentityInfo(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2[2] != 0) {
    return;
  }
  lVar1 = _CFDictionaryGetValue(param_1,&cf_Info);
  if ((((lVar1 != 0) && (lVar2 = _CFDictionaryGetValue(param_1,&cf_Manifest), lVar2 != 0)) &&
      (lVar3 = _CFDictionaryGetValue(lVar1,&cf_DeviceClass), lVar3 != 0)) &&
     (lVar3 = _CFStringCompare(lVar3,*param_2,1), lVar3 == 0)) {
    if (((param_2[1] != 0) && (lVar3 = _CFDictionaryGetValue(lVar1,&cf_Variant), lVar3 != 0)) &&
       (lVar3 = _CFStringCompare(lVar3,param_2[1],1), lVar3 != 0)) {
      return;
    }
    param_2[2] = lVar1;
    param_2[3] = lVar2;
  }
  return;
}

