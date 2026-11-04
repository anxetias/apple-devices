// rea decompile_all
// name: _copy_encoded_object
// address: 0xfd371
// body: available
// range: 0xfd371-0xfd730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfd3aa to 0xfce20 _copy_encoded_dictionary (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfd5fd to 0xfd731 _copy_encoded_data (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfd61d to 0xfd7db _copy_encoded_date (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfd690 to 0xfcbc6 _copy_encoded_error (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfd6f4 to 0xfd885 _copy_encoded_boolean (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfd714 to 0xfd92f _copy_encoded_url (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_encoded_object(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  char *pcVar10;
  long lVar11;
  
  if (param_1 == 0) {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar10 = "Can\'t encode NULL object";
    goto LAB_000fd5d7;
  }
  lVar3 = _CFGetTypeID();
  lVar4 = _CFDictionaryGetTypeID();
  if (lVar3 == lVar4) {
    lVar3 = _copy_encoded_dictionary(param_1);
    return lVar3;
  }
  lVar4 = _CFArrayGetTypeID();
  if (lVar3 == lVar4) {
    lVar3 = _CFGetTypeID(param_1);
    lVar4 = _CFArrayGetTypeID();
    if (lVar3 != lVar4) {
LAB_000fd5a7:
      if (_logger == (code *)0x0) {
        return 0;
      }
      pcVar10 = "can\'t encode unexpected type";
      goto LAB_000fd5d7;
    }
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFDictionaryCreateMutable
                      (uVar7,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 != 0) {
      uVar5 = _CFArrayGetCount(param_1);
      lVar4 = _CFArrayCreateMutable(uVar7,uVar5,PTR__kCFTypeArrayCallBacks_004411a8);
      if (lVar4 == 0) {
        if (_logger != (code *)0x0) {
          (*_logger)("failed to allocate encoding array");
        }
      }
      else {
        lVar6 = _CFArrayGetCount(param_1);
        if (lVar6 < 1) {
LAB_000fd63f:
          _CFDictionarySetValue(lVar3,&cf_EncodedObjectType,&cf_CFArrayRef);
          _CFDictionarySetValue(lVar3,&cf_Content,lVar4);
          _CFRelease(lVar4);
          return lVar3;
        }
        uVar7 = _CFArrayGetValueAtIndex(param_1,0);
        lVar8 = _copy_encoded_object(uVar7);
        if (lVar8 == 0) {
          bVar1 = true;
        }
        else {
          lVar2 = 1;
          do {
            lVar11 = lVar2;
            _CFArrayAppendValue(lVar4,lVar8);
            _CFRelease(lVar8);
            if (lVar6 == lVar11) goto LAB_000fd63f;
            uVar7 = _CFArrayGetValueAtIndex(param_1,lVar11);
            lVar8 = _copy_encoded_object(uVar7);
            lVar2 = lVar11 + 1;
          } while (lVar8 != 0);
          bVar1 = lVar11 < lVar6;
        }
        if (_logger != (code *)0x0) {
          (*_logger)("failed to encode object array entry");
        }
        _CFRelease(lVar4);
        if (!bVar1) {
          return lVar3;
        }
      }
      _CFRelease(lVar3);
      return 0;
    }
  }
  else {
    lVar4 = _CFStringGetTypeID();
    if (lVar3 == lVar4) {
      lVar3 = _CFGetTypeID(param_1);
      lVar4 = _CFStringGetTypeID();
      if (lVar3 != lVar4) goto LAB_000fd5a7;
      lVar3 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar3 != 0) {
        pcVar9 = &cf_CFStringRef;
LAB_000fd588:
        _CFDictionarySetValue(lVar3,&cf_EncodedObjectType,pcVar9);
        _CFDictionarySetValue(lVar3,&cf_Content,param_1);
        return lVar3;
      }
    }
    else {
      lVar4 = _CFNumberGetTypeID();
      if (lVar3 != lVar4) {
        lVar4 = _CFDataGetTypeID();
        if (lVar3 == lVar4) {
          lVar3 = _copy_encoded_data(param_1);
          return lVar3;
        }
        lVar4 = _CFDateGetTypeID();
        if (lVar3 == lVar4) {
          lVar3 = _copy_encoded_date(param_1);
          return lVar3;
        }
        lVar4 = _CFErrorGetTypeID();
        if (lVar3 == lVar4) {
          lVar3 = _copy_encoded_error(param_1);
          return lVar3;
        }
        lVar4 = _CFBooleanGetTypeID();
        if (lVar3 == lVar4) {
          lVar3 = _copy_encoded_boolean(param_1);
          return lVar3;
        }
        lVar4 = _CFURLGetTypeID();
        if (lVar3 == lVar4) {
          lVar3 = _copy_encoded_url(param_1);
          return lVar3;
        }
        if (_logger == (code *)0x0) {
          return 0;
        }
        pcVar10 = "can\'t encode unsupported CFType";
        goto LAB_000fd5d7;
      }
      lVar3 = _CFGetTypeID(param_1);
      lVar4 = _CFNumberGetTypeID();
      if (lVar3 != lVar4) goto LAB_000fd5a7;
      lVar3 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar3 != 0) {
        pcVar9 = &cf_CFNumberRef;
        goto LAB_000fd588;
      }
    }
  }
  if (_logger == (code *)0x0) {
    return 0;
  }
  pcVar10 = "failed to allocate encoding storage";
LAB_000fd5d7:
  (*_logger)(pcVar10);
  return 0;
}

