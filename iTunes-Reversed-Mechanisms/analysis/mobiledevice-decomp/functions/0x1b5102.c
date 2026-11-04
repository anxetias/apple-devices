// rea decompile_all
// name: _AMAuthInstallUpdaterCopyResponse
// address: 0x1b5102
// body: available
// range: 0x1b5102-0x1b5399 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdaterCopyResponse(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = param_4;
  if (param_1 == 0) {
    _AMAuthInstallUpdaterCopyResponse_cold_3(param_4);
    return 0;
  }
  if (param_2 == 0) {
    _AMAuthInstallUpdaterCopyResponse_cold_2(param_4);
  }
  else if (param_3 == 0) {
    _AMAuthInstallUpdaterCopyResponse_cold_1(param_4);
  }
  else {
    lVar2 = _AMAuthInstallUpdater(param_1,param_2,param_3,param_4);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x28) == 0) {
        pcVar9 = &cf__s_updaternotpersonalizedyet;
        uVar3 = 8;
      }
      else {
        uVar3 = _CFGetAllocator(param_1);
        lVar4 = _CFDictionaryCreateMutable
                          (uVar3,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar4 != 0) {
          lVar5 = _CFArrayGetCount(*(undefined8 *)(lVar2 + 0x28));
          if (lVar5 < 1) goto LAB_001b5317;
          lVar10 = 0;
          do {
            uVar3 = _CFArrayGetValueAtIndex(*(undefined8 *)(lVar2 + 0x28),lVar10);
            lVar6 = _CFGetTypeID(uVar3);
            lVar7 = _CFStringGetTypeID();
            if (lVar6 != lVar7) {
              _AMSupportCreateErrorInternal
                        (local_38,&cf_AuthInstallErrorDomain,1,0,&cf__s_invalid__responsetag__,
                         "AMAuthInstallUpdaterCopyResponse",param_2,uVar3);
              goto LAB_001b5317;
            }
            lVar6 = __AMAuthInstallUpdaterCopyResponseURL
                              (param_3,param_2,uVar3,*(undefined8 *)(lVar2 + 0x30),local_38);
            if (lVar6 == 0) goto LAB_001b5317;
            uVar8 = _CFGetAllocator(param_1);
            iVar1 = _AMSupportCreateDataFromFileURL(uVar8,&local_40,lVar6);
            if (iVar1 == 0) {
              _CFDictionarySetValue(lVar4,uVar3,local_40);
              _AMSupportLogInternal
                        (6,"AMAuthInstallUpdaterCopyResponse","Found cached ticket at %@");
            }
            _CFRelease(lVar6);
            if (local_40 != 0) {
              _CFRelease();
              local_40 = 0;
            }
            lVar10 = lVar10 + 1;
          } while (lVar5 != lVar10);
          lVar2 = _CFDictionaryGetCount(lVar4);
          if (lVar2 != 0) goto LAB_001b5317;
          _AMSupportCreateErrorInternal
                    (local_38,&cf_AuthInstallErrorDomain,8,0,&cf__s_responseitemsnotfound,
                     "AMAuthInstallUpdaterCopyResponse");
          _CFRelease(lVar4);
          goto LAB_001b52c3;
        }
        pcVar9 = &cf__s_failedtoallocateresponse;
        uVar3 = 2;
      }
      lVar4 = 0;
      _AMSupportCreateErrorInternal
                (local_38,&cf_AuthInstallErrorDomain,uVar3,0,pcVar9,
                 "AMAuthInstallUpdaterCopyResponse");
      goto LAB_001b5317;
    }
  }
LAB_001b52c3:
  lVar4 = 0;
LAB_001b5317:
  if (local_40 != 0) {
    _CFRelease();
  }
  return lVar4;
}

