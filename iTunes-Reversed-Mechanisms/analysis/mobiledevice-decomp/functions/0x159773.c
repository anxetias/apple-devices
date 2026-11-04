// rea decompile_all
// name: __AMRestorableDeviceGetDeviceMapEntryForIdentifiers
// address: 0x159773
// body: available
// range: 0x159773-0x159857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRestorableDeviceGetDeviceMapEntryForIdentifiers
          (undefined4 param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(_gRestorableData + 0xb8);
  if ((lVar1 != 0) && (lVar3 = _CFArrayGetCount(lVar1), 0 < lVar3)) {
    lVar6 = 0;
    do {
      uVar4 = _CFArrayGetValueAtIndex(lVar1,lVar6);
      cVar2 = _AMAuthInstallSupportCompareStringToInt32(uVar4,&cf_BoardID,param_1);
      if ((cVar2 != '\0') &&
         (cVar2 = _AMAuthInstallSupportCompareStringToInt32(uVar4,&cf_ChipID,param_2), cVar2 != '\0'
         )) {
        if (param_3 == -1) {
          return uVar4;
        }
        lVar5 = _CFDictionaryGetValue(uVar4,&cf_SecurityDomain);
        if (lVar5 == 0) {
          return uVar4;
        }
        cVar2 = _AMAuthInstallSupportCompareStringToInt32(uVar4,&cf_SecurityDomain,param_3);
        if (cVar2 != '\0') {
          return uVar4;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
  }
  return 0;
}

