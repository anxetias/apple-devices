// rea decompile_all
// name: _ZipStreamConfigureOutput
// address: 0xa1d1f
// body: available
// range: 0xa1d1f-0xa1f34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ZipStreamConfigureOutput(long param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  undefined8 unaff_R14;
  undefined7 uVar6;
  ulong uVar5;
  
  pcVar2 = *(char **)(param_1 + 8);
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    uVar6 = (undefined7)((ulong)unaff_R14 >> 8);
    if (*(long *)(pcVar2 + 0x28) == 0) {
      if (((*(long *)(pcVar2 + 0x30) == 0) ||
          ((((*(long *)(pcVar2 + 0x38) == 0 || (*(long *)(pcVar2 + 0x40) == 0)) ||
            (*(long *)(pcVar2 + 0x60) == 0)) && (*(char *)(param_1 + 0x2f) == '\0')))) ||
         (uVar5 = CONCAT71(uVar6,1), *(long *)(pcVar2 + 0x48) == 0)) {
        bVar4 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar3 == 0) {
            bVar4 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Must specify either outFILE or appropriate output contexts in configuration struct. HINT: you must specify write and tell callbacks for non-seakable output; you must specify all for seekable output."
                             );
          }
        }
        uVar5 = 0;
        if ((bVar4 != 0) && (2 < _gSZDefaultLogLevel)) {
          uVar5 = 0;
          __SZLog(3,"ZipStreamConfigureOutput",0x579,
                  &
                  cf_MustspecifyeitheroutFILEorappropriateoutputcontextsinconfigurationstruct_HINT_youmustspecifywriteandtellcallbacksfornon_seakableoutput_youmustspecifyallforseekableoutput_
                 );
        }
      }
    }
    else {
      *(long *)(pcVar2 + 0x50) = *(long *)(pcVar2 + 0x28);
      *(code **)(pcVar2 + 0x30) = _ZipStreamFILEWriteCallback;
      *(code **)(pcVar2 + 0x38) = _ZipStreamFILEReadCallback;
      *(code **)(pcVar2 + 0x40) = _ZipStreamFILESeekCallback;
      *(code **)(pcVar2 + 0x48) = _ZipStreamFILETellCallback;
      *(code **)(pcVar2 + 0x58) = _ZipStreamFILEFlushCallback;
      *(code **)(pcVar2 + 0x60) = _ZipStreamFILETruncateCallback;
      uVar5 = CONCAT71(uVar6,1);
    }
  }
  else {
    bVar4 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar3 == 0) {
        bVar4 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "Only version 1 of callbacks struct is supported; you specified %hhu",
                          cVar1);
      }
    }
    uVar5 = 0;
    if ((bVar4 != 0) && (2 < _gSZDefaultLogLevel)) {
      uVar5 = 0;
      __SZLog(3,"ZipStreamConfigureOutput",0x569,
              &cf_Onlyversion1ofcallbacksstructissupported_youspecified_hhu,cVar1);
    }
  }
  return uVar5 & 0xffffffff;
}

