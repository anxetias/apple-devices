// rea decompile_all
// name: _AMSCopyCrashReportsFromTarget
// address: 0xc1f66
// body: available
// range: 0xc1f66-0xc20eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSCopyCrashReportsFromTarget(long param_1,code *param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  
  local_40 = 0;
  if (param_1 == 0) {
    uVar3 = 3;
  }
  else if (_sCrashReportPath == '\0') {
    uVar3 = 2;
  }
  else {
    local_48 = param_4;
    local_38 = param_3;
    uVar2 = __getRetainedCrashReportProcessLinkForTarget();
    uVar3 = __createDictionaryWithRequestAndArgKeysAndValues
                      (&cf_AMSCopyCrashReportsRequest,1,&cf_AMSTargetIdentifierKey,param_1);
    _AMSProcessLinkSendMessageAsync(uVar2,uVar3);
    _CFRelease(uVar3);
    lVar4 = _AMSProcessLinkReadMessageFromChild(uVar2);
    while (lVar4 != 0) {
      uVar3 = 0;
      cVar1 = _CFDictionaryGetValueIfPresent(lVar4,&cf_AMSCrashReportCopyRequestComplete,0);
      if (cVar1 != '\0') {
LAB_000c20ca:
        _CFRelease(lVar4);
        goto LAB_000c20d2;
      }
      cVar1 = _CFDictionaryGetValueIfPresent(lVar4,&cf_errorCode,&local_40);
      if (cVar1 != '\0') {
        local_4c = 0xffffffff;
        _CFNumberGetValue(local_40,9,&local_4c);
        if (local_38 != (undefined4 *)0x0) {
          *local_38 = local_4c;
        }
        __AMSDebugLog("Crash report copy task returned error code %d while copying crash logs");
        uVar3 = 3;
        goto LAB_000c20ca;
      }
      if (param_2 != (code *)0x0) {
        (*param_2)(param_1,lVar4,local_48);
      }
      _CFRelease(lVar4);
      lVar4 = _AMSProcessLinkReadMessageFromChild(uVar2);
    }
    uVar2 = 0;
    __AMSDebugLog("Crash report copy task disappeared while copying crash logs");
    __removeCrashReportProcessLinkForTarget(param_1);
    uVar3 = 3;
    if (local_38 != (undefined4 *)0x0) {
      *local_38 = 0xffffffff;
      uVar2 = 0;
    }
LAB_000c20d2:
    __crashReportProcessLinkReleaseWithLock(uVar2);
  }
  return uVar3;
}

