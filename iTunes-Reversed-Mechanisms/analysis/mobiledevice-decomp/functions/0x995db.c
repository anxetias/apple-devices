// rea decompile_all
// name: _CloseLocalFile
// address: 0x995db
// body: available
// range: 0x995db-0x99811 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _CloseLocalFile(void *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(ushort *)((long)param_1 + 0x70);
  uVar6 = 0;
  if (uVar1 < 0xe) {
    if (uVar1 != 0) {
      uVar7 = uVar6;
      if (uVar1 != 8) goto LAB_000996e7;
      goto LAB_00099618;
    }
  }
  else {
    if ((uVar1 != 99) && (uVar7 = 0, uVar1 != 0xe)) goto LAB_000996e7;
LAB_00099618:
    if ((uVar1 != 0) && (uVar7 = uVar6, *(char *)((long)param_1 + 0x72) != '\0')) goto LAB_000996e7;
  }
  uVar7 = uVar6;
  if (*(long *)((long)param_1 + 0x60) != *(long *)((long)param_1 + 0x68)) {
    bVar5 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar3 == 0) {
        bVar5 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "CRC mismatch for %s; expected 0x%lx, actual 0x%lx",
                          *(undefined8 *)((long)param_1 + 0x58),
                          *(undefined8 *)((long)param_1 + 0x68),
                          *(undefined8 *)((long)param_1 + 0x60));
      }
    }
    uVar7 = 6;
    if ((bVar5 != 0) && (2 < _gSZDefaultLogLevel)) {
      __SZLog(3,"CloseLocalFile",0x145,&cf_CRCmismatchfor_s_expected0x_lx_actual0x_lx,
              *(undefined8 *)((long)param_1 + 0x58),*(undefined8 *)((long)param_1 + 0x68),
              *(undefined8 *)((long)param_1 + 0x60));
    }
  }
LAB_000996e7:
  if (((*(char *)((long)param_1 + 0x72) == '\0') &&
      (((sVar2 = *(short *)((long)param_1 + 0x70), sVar2 == 8 || (sVar2 == 99)) || (sVar2 == 0xe))))
     && (iVar3 = _compression_stream_destroy(param_1), iVar3 != 0)) {
    bVar5 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar4 == 0) {
        bVar5 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "compression_stream_destroy returned %d",iVar3);
      }
    }
    uVar7 = 3;
    if ((bVar5 != 0) && (2 < _gSZDefaultLogLevel)) {
      __SZLog(3,"CloseLocalFile",0x14d,&cf_compression_stream_destroyreturned_d,iVar3);
    }
  }
  if (*(void **)((long)param_1 + 0x50) != (void *)0x0) {
    _free(*(void **)((long)param_1 + 0x50));
  }
  _free(*(void **)((long)param_1 + 0x58));
  _free(param_1);
  return uVar7;
}

