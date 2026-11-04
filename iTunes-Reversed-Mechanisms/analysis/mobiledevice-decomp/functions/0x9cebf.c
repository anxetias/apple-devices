// rea decompile_all
// name: _ZipStreamAddStatisticsForCDRecord
// address: 0x9cebf
// body: available
// range: 0x9cebf-0x9d0e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ZipStreamAddStatisticsForCDRecord(long param_1,char param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if ((ulong)param_3[0x11] < uVar1) {
    param_3[0x11] = uVar1;
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  if ((ulong)param_3[0x12] < uVar4) {
    param_3[0x12] = uVar4;
  }
  param_3[2] = param_3[2] + uVar4;
  param_3[1] = param_3[1] + uVar1;
  uVar4 = 0x400;
  if (*(char *)(param_1 + 0x1a) == '\0') {
    uVar4 = uVar1 + 0xfff & 0xfffffffffffff000 | 0x800;
  }
  bVar5 = _gSZLogToSyslog ^ 1;
  if (_gSZLogToSyslog == 1) {
    iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
    if (iVar2 == 0) {
      bVar5 = 1;
    }
    else {
      if (_SZGetLoggingHandle_onceToken != -1) {
        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
      }
      __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Counting size %llu for %s",uVar4,
                        *(undefined8 *)(param_1 + 0x48));
    }
  }
  if ((bVar5 != 0) && (6 < _gSZDefaultLogLevel)) {
    __SZLog(7,"ZipStreamAddStatisticsForCDRecord",0xda,&cf_Countingsize_llufor_s,uVar4,
            *(undefined8 *)(param_1 + 0x48));
  }
  *param_3 = *param_3 + uVar4;
  param_3[4] = param_3[4] + 1;
  lVar3 = 0x98;
  if (*(char *)(param_1 + 0x1a) == '\0') {
    param_3[(ulong)((*(ushort *)(param_1 + 0x18) & 0xf000) == 0xa000) + 0x14] =
         param_3[(ulong)((*(ushort *)(param_1 + 0x18) & 0xf000) == 0xa000) + 0x14] + 1;
    if (*(long *)(param_1 + 0x28) != 0) goto LAB_0009d000;
    lVar3 = 0xb0;
  }
  *(long *)((long)param_3 + lVar3) = *(long *)((long)param_3 + lVar3) + 1;
LAB_0009d000:
  if (param_2 != '\0') {
    bVar5 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar2 == 0) {
        bVar5 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"File %s has non-standard mode %o",
                          *(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x18));
      }
    }
    if ((bVar5 != 0) && (6 < _gSZDefaultLogLevel)) {
      __SZLog(7,"ZipStreamAddStatisticsForCDRecord",0xed,&cf_File_shasnon_standardmode_o,
              *(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x18));
    }
    param_3[0xe] = param_3[0xe] + 1;
  }
  return;
}

