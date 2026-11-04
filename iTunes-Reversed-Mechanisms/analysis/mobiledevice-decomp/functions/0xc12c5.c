// rea decompile_all
// name: _AMSCopyApplicationListFromBackup
// address: 0xc12c5
// body: available
// range: 0xc12c5-0xc13b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSCopyApplicationListFromBackup(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    pcVar5 = "AMSCopyApplicationListFromBackup: No target identifier passed in\n";
  }
  else if (param_2 == (long *)0x0) {
    pcVar5 = "AMSCopyApplicationListFromBackup: NULL appInfo dictionary passed\n";
  }
  else {
    lVar1 = __copyBackupDirPath();
    if (lVar1 != 0) {
      uVar2 = __createDictionaryWithRequestAndArgKeysAndValues
                        (&cf_AMSGetBackupApplications,2,&cf_BackupPath,lVar1,
                         &cf_AMSTargetIdentifierKey,param_1);
      lVar3 = _AMSProcessLinkSendMessageLock(_sMainProcessLink,uVar2);
      _CFRelease(uVar2);
      if (lVar3 == 0) {
        uVar2 = 3;
      }
      else {
        lVar4 = _CFDictionaryGetValue(lVar3,&cf_AMSBackupApplicationsKey);
        *param_2 = lVar4;
        if (lVar4 == 0) {
          uVar2 = 3;
        }
        else {
          _CFRetain(lVar4);
          uVar2 = 0;
        }
        _CFRelease(lVar3);
      }
      _CFRelease(lVar1);
      return uVar2;
    }
    pcVar5 = "AMSGetSourcesForRestore: Can\'t get backup directory\n";
  }
  __AMSDebugLog(pcVar5);
  return 3;
}

