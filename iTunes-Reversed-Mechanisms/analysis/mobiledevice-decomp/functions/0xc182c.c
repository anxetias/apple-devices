// rea decompile_all
// name: _AMSConnectToCrashReportCopyTarget
// address: 0xc182c
// body: available
// range: 0xc182c-0xc1960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSConnectToCrashReportCopyTarget(long param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    uVar5 = 3;
  }
  else if (_sCrashReportPath == '\0') {
    uVar5 = 2;
  }
  else {
    uVar2 = __getRetainedCrashReportProcessLinkForTarget();
    uVar5 = 0;
    uVar3 = __createDictionaryWithRequestAndArgKeysAndValues
                      (&cf_AMSConnectToCrashReportCopyTargetRequest,1,&cf_AMSTargetIdentifierKey,
                       param_1);
    _AMSProcessLinkSendMessageAsync(uVar2,uVar3);
    _CFRelease(uVar3);
    lVar4 = _AMSProcessLinkReadMessageFromChild(uVar2);
    if (lVar4 == 0) {
      uVar2 = 0;
      __AMSDebugLog("Error talking to CrashReportCopy child process\n");
      __removeCrashReportProcessLinkForTarget(param_1);
      uVar5 = 3;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0xffffffff;
        uVar2 = 0;
      }
    }
    else {
      cVar1 = _CFDictionaryGetValueIfPresent(lVar4,&cf_errorCode,&local_38);
      if (cVar1 != '\0') {
        local_3c = 0xffffffff;
        _CFNumberGetValue(local_38,9,&local_3c);
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = local_3c;
        }
        __AMSDebugLog("Crash report copy task returned error code %d");
        uVar5 = 3;
      }
      _CFRelease(lVar4);
    }
    __crashReportProcessLinkReleaseWithLock(uVar2);
  }
  return uVar5;
}

