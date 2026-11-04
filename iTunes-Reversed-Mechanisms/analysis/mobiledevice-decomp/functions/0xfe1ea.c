// rea decompile_all
// name: _copy_decoded_url
// address: 0xfe1ea
// body: available
// range: 0xfe1ea-0xfe395 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfe345 to 0x2a99ea _CFURLCreateWithString (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _copy_decoded_url(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  
  lVar1 = _CFGetTypeID();
  lVar2 = _CFDictionaryGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _CFDictionaryGetValue(param_1,&cf_Content);
    lVar1 = _CFGetTypeID(uVar3);
    lVar2 = _CFDictionaryGetTypeID();
    if (lVar1 == lVar2) {
      lVar1 = _CFDictionaryGetValue(uVar3,&cf_URL);
      if (lVar1 == 0) {
        if (_logger == (code *)0x0) {
          return 0;
        }
        pcVar6 = "malformed CFURLRef encoding";
      }
      else {
        lVar2 = _CFGetTypeID(lVar1);
        lVar4 = _CFStringGetTypeID();
        if (lVar2 == lVar4) {
          lVar2 = _CFDictionaryGetValue(uVar3,&cf_BaseURL);
          if (lVar2 == 0) {
            uVar3 = _CFURLCreateWithString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar1,0)
            ;
            return uVar3;
          }
          lVar2 = _copy_decoded_url(lVar2);
          if (lVar2 != 0) {
            lVar4 = _CFGetTypeID(lVar2);
            lVar5 = _CFURLGetTypeID();
            if (lVar4 == lVar5) {
              uVar3 = _CFURLCreateWithString
                                (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar1,lVar2);
            }
            else if (_logger == (code *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 0;
              (*_logger)("can\'t decode unexpected content type for base URL");
            }
            _CFRelease(lVar2);
            return uVar3;
          }
          if (_logger == (code *)0x0) {
            return 0;
          }
          pcVar6 = "failed to decode base URL";
        }
        else {
          if (_logger == (code *)0x0) {
            return 0;
          }
          pcVar6 = "can\'t decode unexpected content type";
        }
      }
    }
    else {
      if (_logger == (code *)0x0) {
        return 0;
      }
      pcVar6 = "can\'t decode unexpected type for content";
    }
  }
  else {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar6 = "can\'t decode unexpected type";
  }
  (*_logger)(pcVar6);
  return 0;
}

