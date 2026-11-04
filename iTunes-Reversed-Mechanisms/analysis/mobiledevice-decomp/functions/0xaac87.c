// rea decompile_all
// name: __IsExcludedFileName
// address: 0xaac87
// body: available
// range: 0xaac87-0xaad9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __IsExcludedFileName(char *param_1)

{
  int iVar1;
  undefined8 unaff_R14;
  ulong uVar2;
  byte bVar3;
  
  iVar1 = _strcmp(_kZipMetadataDirectory,param_1);
  if (iVar1 != 0) {
    iVar1 = _strcmp(_kZipMetadataFilePath,param_1);
    if (iVar1 != 0) {
      iVar1 = _strcmp(_kZipFixedMetadataFilePath,param_1);
      if (iVar1 != 0) {
        iVar1 = _strcmp("mimetype",param_1);
        if (iVar1 != 0) {
          uVar2 = 0;
          goto LAB_000aad79;
        }
      }
    }
  }
  bVar3 = _gSZLogToSyslog ^ 1;
  if (_gSZLogToSyslog == 1) {
    iVar1 = ___isPlatformVersionAtLeast(1,10,0xc,0);
    if (iVar1 == 0) {
      bVar3 = 1;
    }
    else {
      if (_SZGetLoggingHandle_onceToken != -1) {
        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
      }
      __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Path %s is excluded",param_1);
    }
  }
  uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if ((bVar3 != 0) && (6 < _gSZDefaultLogLevel)) {
    __SZLog(7,"_IsExcludedFileName",0x35,&cf_Path_sisexcluded,param_1);
  }
LAB_000aad79:
  return uVar2 & 0xffffffff;
}

