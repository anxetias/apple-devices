// rea decompile_all
// name: _AMSSubmitRestoreLogFromPath
// address: 0xc2272
// body: available
// range: 0xc2272-0xc2453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSSubmitRestoreLogFromPath
          (long param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined8 local_40;
  undefined4 *local_38;
  
  local_40 = 0;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    uVar5 = 2;
  }
  else {
    local_48 = param_3;
    local_38 = param_4;
    uVar4 = __getRetainedCrashReportProcessLinkForTarget(&cf_RestoreLogs);
    uVar5 = __createDictionaryWithRequestAndArgKeysAndValues
                      (&cf_AMSSubmitRestoreLogRequest,2,&cf_AMSRestoreLogPathKey,param_1,
                       &cf_AMSRestoreLogOptionsKey,param_2);
    _AMSProcessLinkSendMessageAsync(uVar4,uVar5);
    _CFRelease(uVar5);
    lVar6 = _AMSProcessLinkReadMessageFromChild(uVar4);
    if (lVar6 != 0) {
      do {
        cVar2 = _CFDictionaryGetValueIfPresent(lVar6,&cf_AMSCrashReportCopyRequestComplete,0);
        puVar1 = local_48;
        if (cVar2 != '\0') {
          uVar5 = 0;
          if (local_48 != (undefined1 *)0x0) {
            uVar8 = _CFDictionaryGetValue(lVar6,&cf_AMSCrashReportCopyStatus);
            uVar3 = _CFBooleanGetValue(uVar8);
            *puVar1 = uVar3;
          }
LAB_000c2432:
          _CFRelease(lVar6);
          goto LAB_000c243a;
        }
        cVar2 = _CFDictionaryGetValueIfPresent(lVar6,&cf_errorCode,&local_40);
        if (cVar2 != '\0') {
          local_4c = 0xffffffff;
          _CFNumberGetValue(local_40,9,&local_4c);
          if (local_38 != (undefined4 *)0x0) {
            *local_38 = local_4c;
          }
          __AMSDebugLog(
                       "Crash report copy task returned error code %d while submitting crash logs\n"
                       );
          uVar5 = 3;
          goto LAB_000c2432;
        }
        lVar7 = _CFDictionaryGetCount(lVar6);
        if (lVar7 == 0) {
          __AMSDebugLog(
                       "Crash report copy task returned an empty dictionary. It doesn\'t support the AMSSubmitRestoreLogFromPath call. Something is seriously wrong with your MobileDevice framework. Please reinstall iTunes."
                       );
          uVar5 = 1;
          goto LAB_000c2432;
        }
        _CFRelease(lVar6);
        lVar6 = _AMSProcessLinkReadMessageFromChild(uVar4);
      } while (lVar6 != 0);
    }
    uVar4 = 0;
    __AMSDebugLog("Crash report copy task disappeared while submitting a restore log\n");
    __removeCrashReportProcessLinkForTarget(&cf_RestoreLogs);
    uVar5 = 3;
    if (local_38 != (undefined4 *)0x0) {
      *local_38 = 0xffffffff;
      uVar4 = 0;
    }
LAB_000c243a:
    __crashReportProcessLinkReleaseWithLock(uVar4);
  }
  return uVar5;
}

