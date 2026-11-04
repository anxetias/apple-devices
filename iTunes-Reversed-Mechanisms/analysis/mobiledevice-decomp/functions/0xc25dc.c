// rea decompile_all
// name: _AMSGetNumberOfCrashReportsToSubmit
// address: 0xc25dc
// body: available
// range: 0xc25dc-0xc2763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSGetNumberOfCrashReportsToSubmit(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0;
  uVar4 = 3;
  if (param_2 != (undefined4 *)0x0 && param_1 != 0) {
    if (_sCrashReportPath == '\0') {
      uVar4 = 2;
    }
    else {
      *param_2 = 0xffffffff;
      uVar4 = __getRetainedCrashReportProcessLinkForTarget();
      uVar2 = __createDictionaryWithRequestAndArgKeysAndValues
                        (&cf_AMSGetNumberOfCrashReportsToSubmit,1,&cf_AMSTargetIdentifierKey,param_1
                        );
      _AMSProcessLinkSendMessageAsync(uVar4,uVar2);
      _CFRelease(uVar2);
      local_48 = uVar4;
      lVar3 = _AMSProcessLinkReadMessageFromChild(uVar4);
      if (lVar3 == 0) {
        uVar2 = 0;
        __AMSDebugLog(
                     "Crash report copy task disappeared while getting the number of crash logs to submit"
                     );
        __removeCrashReportProcessLinkForTarget(param_1);
        uVar4 = 3;
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0xffffffff;
          uVar2 = 0;
        }
      }
      else {
        cVar1 = _CFDictionaryGetValueIfPresent(lVar3,&cf_TotalCrashLogsToSubmit,&local_40);
        if (cVar1 == '\0') {
          cVar1 = _CFDictionaryGetValueIfPresent(lVar3,&cf_errorCode,&local_38);
          if (cVar1 == '\0') {
            uVar4 = 0;
          }
          else {
            local_4c = 0xffffffff;
            _CFNumberGetValue(local_38,9,&local_4c);
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = local_4c;
            }
            __AMSDebugLog(
                         "Crash report copy task returned error code %d while getting the number of crash logs to submit"
                         );
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 0;
          if (local_40 != 0) {
            _CFNumberGetValue(local_40,9,param_2);
          }
        }
        _CFRelease(lVar3);
        uVar2 = local_48;
      }
      __crashReportProcessLinkReleaseWithLock(uVar2);
    }
  }
  return uVar4;
}

