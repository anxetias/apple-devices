// rea decompile_all
// name: _ZipStreamFILEReadCallback
// address: 0xa200d
// body: available
// range: 0xa200d-0xa20e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t _ZipStreamFILEReadCallback(FILE *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  byte bVar3;
  
  sVar2 = _fread(param_2,1,param_3,param_1);
  if (sVar2 == param_3) {
    if (-1 < (long)param_3) {
      return param_3;
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
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "fread returned result > INTPTR_MAX and so is not representable as a ssize_t"
                         );
      }
    }
    if ((bVar3 != 0) && (2 < _gSZDefaultLogLevel)) {
      __SZLog(3,"ZipStreamFILEReadCallback",0x53b,
              &cf_freadreturnedresult>INTPTR_MAXandsoisnotrepresentableasassize_t);
    }
  }
  return 0xffffffffffffffff;
}

