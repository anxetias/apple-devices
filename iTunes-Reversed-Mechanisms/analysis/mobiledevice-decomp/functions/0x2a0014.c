// rea decompile_all
// name: _AMAuthInstallUpdaterWriteManifest
// address: 0x2a0014
// body: available
// range: 0x2a0014-0x2a02aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallUpdaterWriteManifest
          (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

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
  
  if (param_1 == 0) {
    pcVar9 = &cf__s_updaterisNULL;
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    pcVar9 = &cf__s_updater_>responseTagsisNULL;
  }
  else if (param_2 == 0) {
    pcVar9 = &cf__s_updaterNameisNULL;
  }
  else if (param_3 == 0) {
    pcVar9 = &cf__s_dstBundleURLisNULL;
  }
  else {
    if (param_4 != 0) {
      lVar2 = _CFArrayGetCount();
      if (lVar2 < 1) {
        return 1;
      }
      uVar8 = 99;
      lVar10 = 0;
      while( true ) {
        uVar3 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_1 + 0x28),lVar10);
        lVar4 = _CFDictionaryGetValue(param_4,uVar3);
        if (lVar4 != 0) break;
        _AMSupportLogInternal
                  (4,"AMAuthInstallUpdaterWriteManifest",
                   "did not find %@ for %@ updater in the response",uVar3,param_2);
LAB_002a0174:
        lVar10 = lVar10 + 1;
        if (lVar2 == lVar10) {
          return 1;
        }
      }
      lVar5 = __AMAuthInstallUpdaterCopyResponseURL
                        (param_3,param_2,uVar3,*(undefined8 *)(param_1 + 0x30),param_5);
      if (lVar5 == 0) {
        return 0;
      }
      lVar6 = _CFGetTypeID(lVar4);
      lVar7 = _CFDataGetTypeID();
      if (lVar6 == lVar7) {
        uVar8 = _CFGetAllocator(param_1);
        iVar1 = _AMSupportWriteDataToFileURL(uVar8,lVar4,lVar5,1);
        if (iVar1 == 0) {
LAB_002a016a:
          _CFRelease(lVar5);
          uVar8 = 0;
          goto LAB_002a0174;
        }
        pcVar9 = &cf__s_failedtowrite__manifest;
      }
      else {
        lVar6 = _CFGetTypeID(lVar4);
        lVar7 = _CFDictionaryGetTypeID();
        if (lVar6 != lVar7) {
          _AMSupportCreateErrorInternal
                    (param_5,&cf_AuthInstallErrorDomain,uVar8,0,
                     &cf__s_wrongresponsetagtypefor__for__updater,
                     "AMAuthInstallUpdaterWriteManifest");
          goto LAB_002a0214;
        }
        uVar8 = _CFGetAllocator(param_1);
        iVar1 = _AMSupportWriteDictionarytoFileURL(uVar8,lVar4,lVar5);
        if (iVar1 == 0) goto LAB_002a016a;
        pcVar9 = &cf__s_failedtowrite__responsetag__;
      }
      _AMSupportCreateErrorInternal
                (param_5,&cf_AuthInstallErrorDomain,iVar1,0,pcVar9,
                 "AMAuthInstallUpdaterWriteManifest");
LAB_002a0214:
      _CFRelease(lVar5);
      return 0;
    }
    pcVar9 = &cf__s_responseDictisNULL;
  }
  _AMSupportCreateErrorInternal
            (param_5,&cf_AuthInstallErrorDomain,1,0,pcVar9,"AMAuthInstallUpdaterWriteManifest");
  return 0;
}

