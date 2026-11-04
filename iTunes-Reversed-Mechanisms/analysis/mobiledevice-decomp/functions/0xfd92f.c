// rea decompile_all
// name: _copy_encoded_url
// address: 0xfd92f
// body: available
// range: 0xfd92f-0xfdaa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_encoded_url(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  
  lVar2 = _CFGetTypeID();
  lVar3 = _CFURLGetTypeID();
  if (lVar2 == lVar3) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar2 = _CFDictionaryCreateMutable
                      (uVar1,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar2 != 0) {
      uVar4 = _CFURLGetString(param_1);
      _CFDictionarySetValue(lVar2,&cf_URL,uVar4);
      lVar3 = _CFURLGetBaseURL(param_1);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = _copy_encoded_url(lVar3);
        if (lVar3 == 0) {
          if (_logger == (code *)0x0) {
            return 0;
          }
          pcVar6 = "failed to encode base URL";
          goto LAB_000fda8b;
        }
        _CFDictionarySetValue(lVar2,&cf_BaseURL,lVar3);
      }
      lVar5 = _CFDictionaryCreateMutable
                        (uVar1,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar5 == 0) {
        if (_logger != (code *)0x0) {
          (*_logger)("failed to allocate encoding storage");
        }
      }
      else {
        _CFDictionarySetValue(lVar5,&cf_EncodedObjectType,&cf_CFURLRef);
        _CFDictionarySetValue(lVar5,&cf_Content,lVar2);
      }
      if (lVar3 != 0) {
        _CFRelease(lVar3);
        return lVar5;
      }
      return lVar5;
    }
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar6 = "failed to create content dictionary for URL";
  }
  else {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar6 = "can\'t encode unexpected type";
  }
LAB_000fda8b:
  (*_logger)(pcVar6);
  return 0;
}

