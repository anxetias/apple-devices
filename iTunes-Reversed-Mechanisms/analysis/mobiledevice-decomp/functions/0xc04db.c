// rea decompile_all
// name: __runBackupTool
// address: 0xc04db
// body: available
// range: 0xc04db-0xc07e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc07de to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__runBackupTool(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  int local_45c;
  undefined8 local_458;
  int local_44c;
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_458 = param_3;
  if (_sBackupPathString == 0) {
    uVar6 = 2;
    goto LAB_000c07b9;
  }
  cVar2 = _CFStringGetFileSystemRepresentation(_sBackupPathString,local_448,0x400);
  if (cVar2 == '\0') {
    __AMSDebugLog("AMSBackup: Can\'t get file system representation for backup tool path\n");
LAB_000c05ce:
    uVar6 = 3;
  }
  else {
    uVar3 = _ProcessLinkSetupParent(local_448,0);
    lVar4 = _CFStringCompare(param_1,&cf_AMSRestoreWithApplicationsRequest,0);
    if (lVar4 == 0) {
      uVar6 = __createDictionaryWithRequestAndArgKeysAndValues
                        (&cf_AMSRestoreWithApplicationsRequest,5,&cf_AMSDeviceIdentifierKey,param_2,
                         &cf_AMSTargetIdentifierKey,local_458,&cf_AMSSourceTargetIdentifierKey,
                         param_4,&cf_AMSBackupApplicationsKey,param_6,
                         &cf_AMSRestoreRestoreOptionsKey,param_7);
    }
    else {
      lVar4 = _CFStringCompare(param_1,&cf_AMSBackupRequest,0);
      if (lVar4 == 0) {
        uVar6 = __createDictionaryWithRequestAndArgKeysAndValues
                          (&cf_AMSBackupRequest,3,&cf_AMSDeviceIdentifierKey,param_2,
                           &cf_AMSTargetIdentifierKey,local_458,&cf_AMSBackupOptionsKey,param_7);
      }
      else {
        lVar4 = _CFStringCompare(param_1,&cf_AMSEraseDeviceRequest,0);
        if (lVar4 != 0) {
          __AMSDebugLog("AMSBackup: Unknown request type %@\n",param_1);
          goto LAB_000c05ce;
        }
        uVar6 = __createDictionaryWithRequestAndArgKeysAndValues
                          (&cf_AMSEraseDeviceRequest,1,&cf_AMSTargetIdentifierKey,local_458);
      }
    }
    _AMSProcessLinkSendMessageAsync(uVar3,uVar6);
    _CFRelease(uVar6);
    do {
      lVar4 = _AMSProcessLinkReadMessageFromChild(uVar3);
      if (lVar4 == 0) {
        __AMSDebugLog("Backup task disappeared while communicating with it");
        uVar6 = 3;
        if (param_5 != (code *)0x0) {
          (*param_5)(local_458,0xffffffed,param_8);
        }
        goto LAB_000c07b1;
      }
      if (param_5 == (code *)0x0) {
        bVar7 = true;
      }
      else {
        local_44c = 100;
        local_45c = 0;
        lVar5 = _CFDictionaryGetValue(lVar4,&cf_errorCode);
        if (lVar5 == 0) {
          lVar5 = _CFDictionaryGetValue(lVar4,&cf_AMSBackupPercentageKey);
          bVar7 = lVar5 != 0;
          if (bVar7) {
            _CFNumberGetValue(lVar5,9,&local_44c);
          }
        }
        else {
          _CFNumberGetValue(lVar5,9,&local_45c);
          local_44c = local_45c;
          bVar7 = true;
        }
        iVar1 = local_44c;
        (*param_5)(local_458,local_44c,param_8);
        if (iVar1 < 0) {
          _CFRelease(lVar4);
          uVar6 = 3;
          goto LAB_000c07b1;
        }
      }
      _CFRelease(lVar4);
    } while (bVar7);
    uVar6 = 0;
LAB_000c07b1:
    _AMSProcessLinkRelease(uVar3);
  }
LAB_000c07b9:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

