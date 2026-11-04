// rea decompile_all
// name: _AMAuthInstallUpdaterCreateResponse
// address: 0x29fe17
// body: available
// range: 0x29fe17-0x2a0013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdaterCreateResponse(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  char cVar6;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  if (param_1 == 0) {
    pcVar5 = &cf__s_amaiisNULL;
  }
  else {
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      local_38 = param_4;
      lVar3 = _CFDictionaryGetValue(param_2,&cf_UpdaterName);
      lVar4 = _CFDictionaryGetValue(param_2,&cf_LocalSign);
      if (lVar4 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = _CFBooleanGetValue(lVar4);
      }
      if (lVar3 == 0) {
        lVar3 = 0;
        param_4 = local_38;
      }
      else {
        lVar3 = _AMAuthInstallUpdater(param_1,lVar3,0,local_38);
        if (lVar3 == 0) {
          return local_40;
        }
        cVar6 = cVar1;
        if (*(long *)(lVar3 + 0x10) != 0) {
          lVar4 = _CFDictionaryGetCount();
          cVar6 = '\x01';
          if (lVar4 != 0) {
            cVar6 = cVar1;
          }
        }
        pcVar5 = &cf_true;
        if (*(char *)(lVar3 + 0x40) == '\0') {
          pcVar5 = &cf_false;
        }
        _AMAuthInstallLog(5,"AMAuthInstallUpdaterCreateResponse","Updater local signing support: %@"
                          ,pcVar5);
        param_4 = local_38;
        if (cVar6 != '\0' || *(char *)(lVar3 + 0x40) != '\0') {
          local_40 = _AMAuthInstallUpdaterCreateLocalResponse(param_1,lVar3,param_3,local_38);
          if (local_40 == 0) {
            return 0;
          }
          goto LAB_0029ffb0;
        }
      }
    }
    if (param_3 == 0) {
      pcVar5 = &cf__s_requestcannotbeNULLwithserversigning;
    }
    else {
      lVar4 = _CFDictionaryGetCount(param_3);
      if (lVar4 != 0) {
        _AMAuthInstallSetDebugFlags(param_1,2);
        lVar4 = _CFDictionaryGetValue(param_2,&cf_PersonalizedBundle);
        if (lVar4 != 0) {
          __AMAuthInstallBundleCreateDebugDirectory(param_1,lVar4);
        }
        iVar2 = _AMAuthInstallRequestSendSyncWithHeader
                          (param_1,param_3,*(undefined8 *)(lVar3 + 0x18),&local_40);
        if (iVar2 == 0) {
LAB_0029ffb0:
          if (*(long *)(lVar3 + 0x10) == 0) {
            return local_40;
          }
          _CFRelease();
          *(undefined8 *)(lVar3 + 0x10) = 0;
          return local_40;
        }
        pcVar5 = &cf__s_serverrequestfailed;
        goto LAB_0029ffe2;
      }
      pcVar5 = &cf__s_requestcannotbeemptywithserversigning;
    }
  }
  iVar2 = 1;
LAB_0029ffe2:
  _AMSupportCreateErrorInternal
            (param_4,&cf_AuthInstallErrorDomain,iVar2,0,pcVar5,"AMAuthInstallUpdaterCreateResponse")
  ;
  return local_40;
}

