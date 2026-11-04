// rea decompile_all
// name: _AMSCopySourcesForRestoreCompatibleWith
// address: 0xc03f1
// body: available
// range: 0xc03f1-0xc04da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSCopySourcesForRestoreCompatibleWith(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (_sMainProcessLink == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 3;
    if (param_2 != (long *)0x0) {
      lVar1 = __copyBackupDirPath();
      if (lVar1 == 0) {
        __AMSDebugLog("AMSGetSourcesForRestore: Can\'t get backup directory\n");
      }
      else {
        uVar4 = __createDictionaryWithRequestAndArgKeysAndValues
                          (&cf_AMSGetCompatibleSourcesForRestoreRequest,2,&cf_BackupPath,lVar1,
                           &cf_AMSCompatibleSourcesQuery,param_1);
        lVar2 = _AMSProcessLinkSendMessageLock(_sMainProcessLink,uVar4);
        _CFRelease(uVar4);
        if (lVar2 == 0) {
          uVar4 = 3;
        }
        else {
          lVar3 = _CFDictionaryGetValue(lVar2,&cf_AMSSourcesForRestoreKey);
          *param_2 = lVar3;
          if (lVar3 == 0) {
            uVar4 = 3;
          }
          else {
            _CFRetain(lVar3);
            uVar4 = 0;
          }
          _CFRelease(lVar2);
        }
        _CFRelease(lVar1);
      }
    }
  }
  return uVar4;
}

