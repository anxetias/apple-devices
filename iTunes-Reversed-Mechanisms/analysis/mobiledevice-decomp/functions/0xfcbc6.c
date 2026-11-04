// rea decompile_all
// name: _copy_encoded_error
// address: 0xfcbc6
// body: available
// range: 0xfcbc6-0xfce1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_encoded_error(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  if (param_1 == 0) {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar7 = "can\'t encode NULL CFError";
LAB_000fcd27:
    (*_logger)(pcVar7);
    return 0;
  }
  lVar2 = _CFGetTypeID();
  lVar3 = _CFErrorGetTypeID();
  if (lVar2 != lVar3) {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar7 = "can\'t encode unexpected type";
    goto LAB_000fcd27;
  }
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFDictionaryCreateMutable
                    (uVar1,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    if (_logger == (code *)0x0) {
      return 0;
    }
    pcVar7 = "failed to allocate container dict";
    goto LAB_000fcd27;
  }
  lVar3 = _CFDictionaryCreateMutable
                    (uVar1,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar3 == 0) {
    if (_logger != (code *)0x0) {
      (*_logger)("failed to allocate encoded content");
    }
    _CFRelease(lVar2);
    return 0;
  }
  _CFErrorGetCode(param_1);
  lVar4 = _CFNumberCreate(uVar1,10);
  if (lVar4 == 0) {
    if (_logger != (code *)0x0) {
      pcVar7 = "failed to encode CFError code to CFNumber";
      goto LAB_000fcd8a;
    }
LAB_000fcd93:
    lVar5 = 0;
  }
  else {
    _CFDictionarySetValue(lVar3,&cf_Code,lVar4);
    lVar5 = _CFErrorGetDomain(param_1);
    if (lVar5 != 0) {
      _CFDictionarySetValue(lVar3,&cf_Domain,lVar5);
      lVar5 = _CFErrorCopyUserInfo(param_1);
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = _copy_encoded_dictionary(lVar5);
        if (lVar6 == 0) {
          if (_logger == (code *)0x0) goto LAB_000fcd96;
          pcVar7 = "failed to encode user info dict";
          goto LAB_000fcd8d;
        }
        _CFDictionarySetValue(lVar3,&cf_UserInfo,lVar6);
      }
      _CFDictionarySetValue(lVar2,&cf_EncodedObjectType,&cf_CFErrorRef);
      _CFDictionarySetValue(lVar2,&cf_Content,lVar3);
      goto LAB_000fcdd0;
    }
    if (_logger == (code *)0x0) goto LAB_000fcd93;
    pcVar7 = "CFError is missing domain, can\'t encode now";
LAB_000fcd8a:
    lVar5 = 0;
LAB_000fcd8d:
    (*_logger)(pcVar7);
  }
LAB_000fcd96:
  _CFRelease(lVar2);
  lVar2 = 0;
  lVar6 = 0;
LAB_000fcdd0:
  _CFRelease(lVar3);
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
    return lVar2;
  }
  return lVar2;
}

