// rea decompile_all
// name: _matchingDictionaryForVIDPID
// address: 0x31979
// body: available
// range: 0x31979-0x31a75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _matchingDictionaryForVIDPID(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = _IOServiceMatching("TADFUDevice");
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFDictionaryCreateMutable
                      (uVar1,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 != 0) {
      lVar4 = _CFNumberCreate(uVar1,0xb);
      if (lVar4 != 0) {
        _CFDictionarySetValue(lVar3,&cf_idVendor,lVar4);
        lVar5 = _CFNumberCreate(uVar1,0xb);
        if (lVar5 != 0) {
          _CFDictionarySetValue(lVar3,&cf_idProduct,lVar5);
          _CFDictionarySetValue(lVar2,&cf_IOPropertyMatch,lVar3);
          _CFRelease(lVar4);
          lVar4 = lVar5;
        }
        _CFRelease(lVar4);
      }
      _CFRelease(lVar3);
    }
  }
  return lVar2;
}

