// rea decompile_all
// name: __WriteOutput
// address: 0x9754c
// body: available
// range: 0x9754c-0x9771b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __WriteOutput(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    bVar6 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar1 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar1 == 0) {
        bVar6 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                          "Stopping writing because the remote side said so");
      }
    }
    lVar5 = -1;
    if ((bVar6 != 0) && (4 < _gSZDefaultLogLevel)) {
      __SZLog(5,"_WriteOutput",0xc1,&cf_Stoppingwritingbecausetheremotesidesaidso);
    }
  }
  else {
    piVar4 = ___error();
    *piVar4 = 0;
    uVar2 = _AMDServiceConnectionSend(*param_1,param_2,param_3);
    uVar7 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      piVar4 = ___error();
      iVar1 = *piVar4;
      bVar6 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar3 == 0) {
          bVar6 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                            "AMDServiceConnectionSend returned %d (error %d)",uVar7,iVar1);
        }
      }
      if ((bVar6 != 0) && (4 < _gSZDefaultLogLevel)) {
        __SZLog(5,"_WriteOutput",0xc9,&cf_AMDServiceConnectionSendreturned_d_error_d_,uVar7,iVar1);
      }
      *(undefined1 *)(param_1 + 2) = 1;
      piVar4 = ___error();
      *piVar4 = iVar1;
    }
    else {
      param_1[1] = param_1[1] + uVar7;
    }
    lVar5 = (long)(int)uVar2;
  }
  return lVar5;
}

