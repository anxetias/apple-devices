// rea decompile_all
// name: _AMSEraseDevice
// address: 0xc0c9d
// body: available
// range: 0xc0c9d-0xc0d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMSEraseDevice(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (_sMainProcessLink == 0) {
    return 2;
  }
  if (param_1 == 0) {
    __AMSDebugLog("AMSBackup: No target identifier passed in\n");
  }
  else {
    iVar1 = __runBackupTool(&cf_AMSEraseDeviceRequest,0,param_1,0,param_2,0,0,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = __createDictionaryWithRequestAndArgKeysAndValues
                      (&cf_AMSSetRefreshForAllDataClassesForTargetRequest,1,
                       &cf_AMSTargetIdentifierKey,param_1);
    lVar3 = _AMSProcessLinkSendMessageLock(_sMainProcessLink,uVar2);
    _CFRelease(uVar2);
    if (lVar3 != 0) {
      _CFRelease(lVar3);
      return 0;
    }
  }
  return 3;
}

