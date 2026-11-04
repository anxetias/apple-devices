// rea decompile_all
// name: __CreateMessageDict.5150
// address: 0x175d88
// body: available
// range: 0x175d88-0x175e40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __CreateMessageDict_5150(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    lVar4 = 0;
    if (lVar1 != 0) {
      _CFDictionarySetValue(lVar1,&cf_Request,param_1);
      _CFDictionarySetValue(lVar1,&cf_ProtocolVersion,&cf_2);
      pcVar2 = _getprogname();
      lVar4 = lVar1;
      if ((pcVar2 != (char *)0x0) &&
         (lVar3 = _CFStringCreateWithCString
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,pcVar2,0x8000100),
         lVar3 != 0)) {
        _CFDictionarySetValue(lVar1,&cf_Label,lVar3);
        _CFRelease(lVar3);
      }
    }
  }
  return lVar4;
}

