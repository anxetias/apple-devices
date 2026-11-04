// rea decompile_all
// name: _AMSGetCrashReportCopyPreferencesForTarget
// address: 0xc1c1f
// body: available
// range: 0xc1c1f-0xc1dec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSGetCrashReportCopyPreferencesForTarget
          (long param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    uVar4 = 3;
  }
  else if (_sCrashReportPath == '\0') {
    uVar4 = 2;
  }
  else {
    local_40 = param_3;
    uVar4 = __getRetainedCrashReportProcessLinkForTarget();
    uVar5 = __createDictionaryWithRequestAndArgKeysAndValues
                      (&cf_AMSGetCrashReportCopyPreferencesRequest,1,&cf_AMSTargetIdentifierKey,
                       param_1);
    _AMSProcessLinkSendMessageAsync(uVar4,uVar5);
    _CFRelease(uVar5);
    local_48 = uVar4;
    lVar6 = _AMSProcessLinkReadMessageFromChild(uVar4);
    if (lVar6 == 0) {
      uVar5 = 0;
      __AMSDebugLog("Crash report copy task disappeared while getting preferences");
      __removeCrashReportProcessLinkForTarget(param_1);
      uVar4 = 3;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0xffffffff;
        uVar5 = 0;
      }
    }
    else {
      uVar4 = 0;
      cVar2 = _CFDictionaryGetValueIfPresent(lVar6,&cf_AMSCrashReportCopyRequestComplete,0);
      puVar1 = local_40;
      if (cVar2 == '\0') {
        cVar2 = _CFDictionaryGetValueIfPresent(lVar6,&cf_errorCode,&local_38);
        if (cVar2 != '\0') {
          local_4c = 0xffffffff;
          _CFNumberGetValue(local_38,9,&local_4c);
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = local_4c;
          }
          __AMSDebugLog("Crash report copy task returned error code %d while getting preferences");
          uVar4 = 3;
        }
      }
      else {
        if (param_2 != (undefined1 *)0x0) {
          lVar7 = _CFDictionaryGetValue(lVar6,&cf_AMSCrashReportCopyShouldPromptKey);
          if (lVar7 == 0) {
            uVar3 = 1;
          }
          else {
            uVar3 = _CFBooleanGetValue(lVar7);
          }
          *param_2 = uVar3;
        }
        if (puVar1 == (undefined1 *)0x0) {
          uVar4 = 0;
        }
        else {
          lVar7 = _CFDictionaryGetValue(lVar6,&cf_AMSCrashReportCopyShouldSubmitKey);
          uVar4 = 0;
          if (lVar7 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = _CFBooleanGetValue(lVar7);
          }
          *puVar1 = uVar3;
        }
      }
      _CFRelease(lVar6);
      uVar5 = local_48;
    }
    __crashReportProcessLinkReleaseWithLock(uVar5);
  }
  return uVar4;
}

