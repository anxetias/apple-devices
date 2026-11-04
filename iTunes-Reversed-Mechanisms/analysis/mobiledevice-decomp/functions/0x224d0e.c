// rea decompile_all
// name: _AppleTCONDP835RestoreInfoGetTags
// address: 0x224d0e
// body: available
// range: 0x224d0e-0x225097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AppleTCONDP835RestoreInfoGetTags(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  
  if (param_1 == 0) {
    pcVar7 = "AppleTCONDP835RestoreInfoGetTags: options is NULL";
    uVar6 = 2;
LAB_00224f73:
    lVar2 = _AppleTCONLoggingCreateCFErrorWithDomain(pcVar7,uVar6,0,&cf_AppleTCONUpdaterErrorDomain)
    ;
LAB_00224f7d:
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    lVar2 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    if (lVar2 == 0) {
LAB_00224ff8:
      lVar2 = _AppleTCONLoggingCreateCFErrorWithDomain
                        ("AppleTCONDP835RestoreInfoGetTags: DeviceInfo is NULL?",0x11,param_1,
                         &cf_AppleTCONUpdaterErrorDomain);
      goto LAB_00224f7d;
    }
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 != lVar4) goto LAB_00224ff8;
    pcVar8 = &cf_Baobab_BoardID;
    cVar1 = _CFDictionaryContainsKey(lVar2,&cf_Baobab_BoardID);
    if (cVar1 == '\0') {
      pcVar8 = &cf_Baobab2_BoardID;
      cVar1 = _CFDictionaryContainsKey(lVar2,&cf_Baobab2_BoardID);
      if (cVar1 != '\0') goto LAB_00224d92;
LAB_00224f5a:
      pcVar7 = "AppleTCONDP835RestoreInfoGetTags: BoardID tag missing";
LAB_00224f6b:
      uVar6 = 10;
      goto LAB_00224f73;
    }
LAB_00224d92:
    if (pcVar8 == (cfstringStruct *)0x0) goto LAB_00224f5a;
    lVar2 = _CFDictionaryGetValue(lVar2,pcVar8);
    if (lVar2 == 0) {
LAB_00224fe2:
      pcVar7 = "AppleTCONDP835RestoreInfoGetTags: BoardID tag invalid";
      goto LAB_00224f6b;
    }
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFNumberGetTypeID();
    if (lVar3 != lVar4) goto LAB_00224fe2;
    cVar1 = _CFNumberGetValue(lVar2,9,&restoreInfoBoardID);
    if (cVar1 == '\0') goto LAB_00224fe2;
    lVar3 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 == 0) {
      pcVar7 = "AppleTCONDP835RestoreInfoGetTags: Cannot allocate memory for outputDict";
      uVar6 = 3;
      goto LAB_00224f73;
    }
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar4 = _CFArrayCreateMutable(uVar6,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar4 == 0) {
      pcVar7 = "AppleTCONDP835RestoreInfoGetTags: Cannot allocate memory for tagsInBI";
      lVar4 = 0;
    }
    else {
      _CFArrayAppendValue(lVar4,&cf_Baobab_ChipID);
      uVar5 = _AppleTCONDP835DeviceRestoreTagForBoardID(3,restoreInfoBoardID);
      _CFArrayAppendValue(lVar4,uVar5);
      _CFArrayAppendValue(lVar4,&cf_Baobab_ManifestEpoch);
      uVar5 = _AppleTCONDP835DeviceRestoreTagForBoardID(0xb,restoreInfoBoardID);
      _CFArrayAppendValue(lVar4,uVar5);
      uVar5 = _AppleTCONDP835DeviceRestoreTagForBoardID(0xc,restoreInfoBoardID);
      _CFArrayAppendValue(lVar4,uVar5);
      uVar5 = _AppleTCONDP835DeviceRestoreTagForBoardID(0xd,restoreInfoBoardID);
      _CFArrayAppendValue(lVar4,uVar5);
      uVar5 = _AppleTCONDP835DeviceRestoreTagForBoardID(0xe,restoreInfoBoardID);
      _CFArrayAppendValue(lVar4,uVar5);
      lVar2 = _CFArrayCreateMutable(uVar6,0,PTR__kCFTypeArrayCallBacks_004411a8);
      if (lVar2 != 0) {
        uVar6 = _AppleTCONDP835DeviceRestoreTagForBoardID(1,restoreInfoBoardID);
        _CFArrayAppendValue(lVar2,uVar6);
        _CFDictionaryAddValue(lVar3,&cf_BuildIdentityTags,lVar4);
        _CFDictionaryAddValue(lVar3,&cf_ResponseTags,lVar2);
        goto LAB_00224f38;
      }
      pcVar7 = "AppleTCONDP835RestoreInfoGetTags: Cannot allocate memory for tagsInTssResponse";
    }
    lVar2 = _AppleTCONLoggingCreateCFErrorWithDomain(pcVar7,3,0,&cf_AppleTCONUpdaterErrorDomain);
  }
  if (lVar2 != 0) {
    uVar6 = _CFErrorCopyDescription(lVar2);
    uVar5 = _CFStringGetCStringPtr(uVar6,0);
    _AppleTCONLoggingLogMsg("%s [error]: %s\n","AppleTCONDP835RestoreInfoGetTags",uVar5);
    _CFRelease(uVar6);
    _AMSupportSafeRelease(lVar3);
    if (param_2 != (undefined8 *)0x0) {
      uVar6 = _AMSupportSafeRetain(lVar2);
      *param_2 = uVar6;
    }
    _AMSupportSafeRelease(lVar2);
  }
  lVar2 = 0;
LAB_00224f38:
  _AMSupportSafeRelease(lVar2);
  _AMSupportSafeRelease(lVar4);
  return lVar3;
}

