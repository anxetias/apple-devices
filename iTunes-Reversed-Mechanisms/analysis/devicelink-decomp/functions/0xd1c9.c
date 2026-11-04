// rea decompile_all
// name: _DLConnectionInfoCreateForEndpoint
// address: 0xd1c9
// body: available
// range: 0xd1c9-0xd268 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLConnectionInfoCreateForEndpoint(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  
  if (param_1 == (int *)0x0) {
LAB_0000d1f8:
    uVar1 = 0;
  }
  else {
    if (*param_1 == 1) {
      pcVar3 = &cf_DLInfoMuxDeviceIdKey;
      pcVar4 = &cf_DLUSBMuxDeviceIdKey;
    }
    else {
      if (*param_1 != 2) goto LAB_0000d1f8;
      pcVar3 = &cf_DLInfoHostnameKey;
      pcVar4 = &cf_DLNetworkIPKey;
    }
    uVar1 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                       PTR__kCFTypeDictionaryValueCallBacks_00015058);
    _CFDictionarySetValue(uVar1,&cf_DLInfoStreamTypeKey,&cf_DLInfoStreamTypeTCP);
    uVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 2),pcVar4);
    _CFDictionarySetValue(uVar1,pcVar3,uVar2);
  }
  return uVar1;
}

