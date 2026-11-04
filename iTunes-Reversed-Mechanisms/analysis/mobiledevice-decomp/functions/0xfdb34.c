// rea decompile_all
// name: _copy_decoded_object
// address: 0xfdb34
// body: available
// range: 0xfdb34-0xfdec4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfdbb0 to 0xfd1b4 _copy_decoded_dictionary (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfdd2e to 0xfdec5 _copy_decoded_string (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfdd57 to 0xfdf66 _copy_decoded_number (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfddb5 to 0xfe007 _copy_decoded_data (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfddf6 to 0xfe0a8 _copy_decoded_date (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfde52 to 0xfcf44 _copy_decoded_error (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfde7b to 0xfe149 _copy_decoded_boolean (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfdea4 to 0xfe1ea _copy_decoded_url (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_decoded_object(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  
  if (param_1 == 0) {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar7 = "can\'t decode NULL dictionary";
    goto LAB_000fdcff;
  }
  lVar2 = _CFGetTypeID();
  lVar3 = _CFDictionaryGetTypeID();
  if (lVar2 == lVar3) {
    lVar2 = _CFDictionaryGetValue(param_1,&cf_EncodedObjectType);
    if (lVar2 == 0) {
      if (_logger == (code *)0x0) {
        return 0;
      }
      pcVar7 = "malformed encoding missing type key";
      goto LAB_000fdcff;
    }
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFStringGetTypeID();
    if (lVar3 != lVar4) {
      if (_logger == (code *)0x0) {
        return 0;
      }
      pcVar7 = "can\'t decode object since type key is invalid type";
      goto LAB_000fdcff;
    }
    cVar1 = _CFEqual(lVar2,&cf_CFDictionaryRef);
    if (cVar1 != '\0') {
      lVar2 = _copy_decoded_dictionary(param_1);
      return lVar2;
    }
    cVar1 = _CFEqual(lVar2,&cf_CFArrayRef);
    if (cVar1 == '\0') {
      cVar1 = _CFEqual(lVar2,&cf_CFStringRef);
      if (cVar1 != '\0') {
        lVar2 = _copy_decoded_string(param_1);
        return lVar2;
      }
      cVar1 = _CFEqual(lVar2,&cf_CFNumberRef);
      if (cVar1 != '\0') {
        lVar2 = _copy_decoded_number(param_1);
        return lVar2;
      }
      cVar1 = _CFEqual(lVar2,&cf_CFDataRef);
      if (cVar1 != '\0') {
        lVar2 = _copy_decoded_data(param_1);
        return lVar2;
      }
      cVar1 = _CFEqual(lVar2,&cf_CFDateRef);
      if (cVar1 != '\0') {
        lVar2 = _copy_decoded_date(param_1);
        return lVar2;
      }
      cVar1 = _CFEqual(lVar2,&cf_CFErrorRef);
      if (cVar1 != '\0') {
        lVar2 = _copy_decoded_error(param_1);
        return lVar2;
      }
      cVar1 = _CFEqual(lVar2,&cf_CFBooleanRef);
      if (cVar1 != '\0') {
        lVar2 = _copy_decoded_boolean(param_1);
        return lVar2;
      }
      cVar1 = _CFEqual(lVar2,&cf_CFURLRef);
      if (cVar1 != '\0') {
        lVar2 = _copy_decoded_url(param_1);
        return lVar2;
      }
      if (_logger == (code *)0x0) {
        return 0;
      }
      pcVar7 = "can\'t decode unsupported encoding";
      goto LAB_000fdcff;
    }
    lVar2 = _CFGetTypeID(param_1);
    lVar3 = _CFDictionaryGetTypeID();
    if (lVar2 == lVar3) {
      lVar2 = _CFDictionaryGetValue(param_1,&cf_Content);
      if (lVar2 == 0) {
        if (_logger == (code *)0x0) {
          return 0;
        }
        pcVar7 = "malformed array encoding";
      }
      else {
        lVar3 = _CFGetTypeID(lVar2);
        lVar4 = _CFArrayGetTypeID();
        if (lVar3 == lVar4) {
          lVar3 = _CFArrayGetCount(lVar2);
          lVar4 = _CFArrayCreateMutable
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar3,
                             PTR__kCFTypeArrayCallBacks_004411a8);
          if (lVar4 != 0) {
            if (lVar3 < 1) {
              return lVar4;
            }
            lVar8 = 0;
            do {
              uVar5 = _CFArrayGetValueAtIndex(lVar2,lVar8);
              lVar6 = _copy_decoded_object(uVar5);
              if (lVar6 == 0) {
                if (_logger != (code *)0x0) {
                  (*_logger)("failed to decode object array entry");
                }
                _CFRelease(lVar4);
                return 0;
              }
              _CFArrayAppendValue(lVar4,lVar6);
              _CFRelease(lVar6);
              lVar8 = lVar8 + 1;
            } while (lVar3 != lVar8);
            return lVar4;
          }
          if (_logger == (code *)0x0) {
            return 0;
          }
          pcVar7 = "failed to allocate decoding array";
        }
        else {
          if (_logger == (code *)0x0) {
            return 0;
          }
          pcVar7 = "can\'t decode unexpected content type";
        }
      }
      goto LAB_000fdcff;
    }
  }
  if (_logger == (code *)0x0) {
    return 0;
  }
  pcVar7 = "can\'t decode unexpected type";
LAB_000fdcff:
  (*_logger)(pcVar7);
  return 0;
}

