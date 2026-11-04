// rea decompile_all
// name: _ZipStreamWriteDictionaryToFile
// address: 0x9cc8e
// body: available
// range: 0x9cc8e-0x9ce8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9ce05 to 0x9c0f4 __SZLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x9ce59 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ZipStreamWriteDictionaryToFile(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  byte bVar10;
  
  lVar4 = _CFPropertyListCreateData
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_1,100,0,0);
  if (lVar4 != 0) {
    lVar5 = _CFDataGetLength(lVar4);
    piVar6 = ___error();
    *piVar6 = 0;
    lVar8 = *(long *)(param_2 + 8);
    uVar7 = _CFDataGetBytePtr(lVar4);
    lVar8 = (**(code **)(lVar8 + 0x30))(*(undefined8 *)(lVar8 + 0x50),uVar7,lVar5);
    if (lVar5 != lVar8) {
      piVar6 = ___error();
      iVar3 = *piVar6;
      bVar10 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar2 == 0) {
          bVar10 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar1 = _SZGetLoggingHandle_logHandle;
          pcVar9 = _strerror(iVar3);
          __os_log_internal(0,puVar1,0x10,"Failed to write entire output dictionary: %s",pcVar9);
        }
      }
      if ((bVar10 != 0) && (2 < _gSZDefaultLogLevel)) {
        pcVar9 = _strerror(iVar3);
        __SZLog(3,"ZipStreamWriteDictionaryToFile",0xa1,&cf_Failedtowriteentireoutputdictionary__s,
                pcVar9);
      }
    }
    _CFRelease(lVar4);
    return;
  }
  bVar10 = _gSZLogToSyslog ^ 1;
  if (_gSZLogToSyslog == 1) {
    iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
    if (iVar3 == 0) {
      bVar10 = 1;
    }
    else {
      if (_SZGetLoggingHandle_onceToken != -1) {
        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
      }
      __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to create output dictionary");
    }
  }
  if ((bVar10 != 0) && (2 < _gSZDefaultLogLevel)) {
    __SZLog(3,"ZipStreamWriteDictionaryToFile",0x99,&cf_Failedtocreateoutputdictionary);
    return;
  }
  return;
}

