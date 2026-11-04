// rea decompile_all
// name: _AppleTCONDP855RestoreInfoGetTags
// address: 0x225fec
// body: available
// range: 0x225fec-0x22623e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AppleTCONDP855RestoreInfoGetTags(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_1 == 0) {
    pcVar6 = "AppleTCONDP855RestoreInfoGetTags: options is NULL";
    uVar4 = 2;
LAB_00226198:
    lVar1 = _AppleTCONLoggingCreateCFErrorWithDomain(pcVar6,uVar4,0,&cf_AppleTCONUpdaterErrorDomain)
    ;
LAB_002261a2:
    lVar3 = 0;
    lVar2 = 0;
  }
  else {
    lVar1 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    if (lVar1 == 0) {
LAB_0022613e:
      lVar1 = _AppleTCONLoggingCreateCFErrorWithDomain
                        ("AppleTCONDP855RestoreInfoGetTags: DeviceInfo is NULL?",0x11,param_1,
                         &cf_AppleTCONUpdaterErrorDomain);
      goto LAB_002261a2;
    }
    lVar1 = _CFGetTypeID(lVar1);
    lVar2 = _CFDictionaryGetTypeID();
    if (lVar1 != lVar2) goto LAB_0022613e;
    lVar2 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar2 == 0) {
      pcVar6 = "AppleTCONDP855RestoreInfoGetTags: Cannot allocate memory for outputDict";
      uVar4 = 3;
      goto LAB_00226198;
    }
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFArrayCreateMutable(uVar4,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar3 == 0) {
      pcVar6 = "AppleTCONDP855RestoreInfoGetTags: Cannot allocate memory for tagsInBI";
      lVar3 = 0;
    }
    else {
      _CFArrayAppendValue(lVar3,&cf_Baobab_ChipID);
      _CFArrayAppendValue(lVar3,&cf_Baobab_BoardID);
      _CFArrayAppendValue(lVar3,&cf_Baobab_ManifestEpoch);
      _CFArrayAppendValue(lVar3,&cf_Baobab_TCON);
      lVar1 = _CFArrayCreateMutable(uVar4,0,PTR__kCFTypeArrayCallBacks_004411a8);
      if (lVar1 != 0) {
        _CFArrayAppendValue(lVar1,&cf_Baobab_Ticket);
        _CFDictionaryAddValue(lVar2,&cf_BuildIdentityTags,lVar3);
        _CFDictionaryAddValue(lVar2,&cf_ResponseTags,lVar1);
        goto LAB_0022611c;
      }
      pcVar6 = "AppleTCONDP855RestoreInfoGetTags: Cannot allocate memory for tagsInTssResponse";
    }
    lVar1 = _AppleTCONLoggingCreateCFErrorWithDomain(pcVar6,3,0,&cf_AppleTCONUpdaterErrorDomain);
  }
  if (lVar1 != 0) {
    uVar4 = _CFErrorCopyDescription(lVar1);
    uVar5 = _CFStringGetCStringPtr(uVar4,0);
    _AppleTCONLoggingLogMsg("%s [error]: %s\n","AppleTCONDP855RestoreInfoGetTags",uVar5);
    _CFRelease(uVar4);
    _AMSupportSafeRelease(lVar2);
    if (param_2 != (undefined8 *)0x0) {
      uVar4 = _AMSupportSafeRetain(lVar1);
      *param_2 = uVar4;
    }
    _AMSupportSafeRelease(lVar1);
  }
  lVar1 = 0;
LAB_0022611c:
  _AMSupportSafeRelease(lVar1);
  _AMSupportSafeRelease(lVar3);
  return lVar2;
}

