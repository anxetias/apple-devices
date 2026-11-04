// rea decompile_all
// name: __AMRestoreBundleCopyTrustCacheLocation
// address: 0x160e67
// body: available
// range: 0x160e67-0x16104b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestoreBundleCopyTrustCacheLocation(long *param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  
  pcVar8 = &cf_ExclaveOSTrustCacheDictionary;
  if (param_2 == 0) {
    pcVar8 = &cf_StaticTrustCacheDictionary;
  }
  pcVar9 = &cf_ExclaveOSTrustCacheURL;
  if (param_2 == 0) {
    pcVar9 = &cf_StaticTrustCacheURL;
  }
  lVar4 = _CFDictionaryGetValue(param_1[1],&cf_RestoreBundlePath);
  if (lVar4 == 0) {
    pcVar5 = &cf_DidnotfindaRestorebundleinourrestoreoptions_;
    lVar4 = 0;
    _AMRSafeLog(3,&cf___,&cf_DidnotfindaRestorebundleinourrestoreoptions_);
    goto LAB_00160f97;
  }
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  pcVar5 = (cfstringStruct *)_CFURLCreateWithFileSystemPath(uVar1,lVar4,0,1);
  uVar6 = _CFDictionaryGetCount(*(undefined8 *)(*param_1 + 0x50));
  pcVar7 = (cfstringStruct *)
           _CFDictionaryCreateMutableCopy(uVar1,uVar6,*(undefined8 *)(*param_1 + 0x50));
  if (pcVar7 == (cfstringStruct *)0x0) {
    pcVar7 = &cf_Failedtoduplicatetherestoreargsdictionarytoresolvethesystemimagepath_;
    lVar4 = 0;
    _AMRSafeLog(3,&cf___,&cf_Failedtoduplicatetherestoreargsdictionarytoresolvethesystemimagepath_);
  }
  else {
    _CFDictionarySetValue(pcVar7,&cf_PersonalizedRestoreBundle,pcVar5);
    plVar2 = *(long **)(*param_1 + 0x20);
    if (plVar2 == (long *)0x0) {
      AMDeviceProxy::Log(0,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf___,
                         &cf_Can_tresolvetrustcachewithNULLproxy);
      _CFRelease(&cf_Can_tresolvetrustcachewithNULLproxy);
LAB_00160f47:
      lVar4 = _CFDictionaryGetValue(pcVar7,pcVar8);
      if (lVar4 == 0) {
        pcVar8 = &
                 cf_Failedtoreadthetrustcachedictionarykeyoutoftherestoreoptions_Itmaynothavebeenresolved_
        ;
        goto LAB_00161031;
      }
      lVar4 = _CFDictionaryGetValue(lVar4,pcVar9);
      if (lVar4 == 0) {
        pcVar8 = &cf_FailedtoreadthetrustcacheURLkeyoutoftheStaticTrustCacheDirctionarydictionary_;
        lVar4 = 0;
      }
      else {
        _CFRetain(lVar4);
        pcVar8 = (cfstringStruct *)0x0;
      }
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0xe0))(plVar2,pcVar7,param_2);
      if (cVar3 == '\0') goto LAB_00160f47;
      pcVar8 = &cf_Failedtoresolvethestatictrustcachegivenourproxyandrestoreoptions_;
LAB_00161031:
      lVar4 = 0;
    }
    _AMRSafeLogAndRelease(3,pcVar8);
  }
  _CFRelease(pcVar7);
  if (pcVar5 == (cfstringStruct *)0x0) {
    return lVar4;
  }
LAB_00160f97:
  _CFRelease(pcVar5);
  return lVar4;
}

