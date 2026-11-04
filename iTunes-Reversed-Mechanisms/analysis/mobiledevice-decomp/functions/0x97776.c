// rea decompile_all
// name: __PassThroughFile
// address: 0x97776
// body: available
// range: 0x97776-0x97cc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x97cc1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong __PassThroughFile(char *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  char *pcVar11;
  char *pcVar12;
  int *piVar13;
  cfstringStruct *pcVar14;
  undefined8 uVar15;
  byte bVar16;
  char *pcVar17;
  ulong uVar18;
  long local_78;
  long local_70;
  long local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pcVar5 = _strrchr(param_1,0x2f);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = param_1;
  }
  uVar15 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar6 = _CFNumberCreate(uVar15,9);
  puVar1 = (undefined8 *)(param_2 + 0x60);
  lVar7 = _CFNumberCreate(uVar15,4);
  lVar8 = _CFNumberCreate(uVar15,2,param_2 + 4);
  local_58 = &cf_PreflightResultTotalFileCount;
  local_50 = &cf_PreflightResultTotalFileSize;
  local_48 = &cf_PreflightTargetPathMode;
  local_78 = lVar6;
  local_70 = lVar7;
  local_68 = lVar8;
  lVar9 = _CFDictionaryCreate(uVar15,&local_58,&local_78,3,
                              PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  pvVar10 = _malloc(0x100000);
  iVar3 = _open(param_1,0,0);
  if (iVar3 < 0) {
    bVar16 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar4 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar2 = _SZGetLoggingHandle_logHandle;
        piVar13 = ___error();
        pcVar5 = _strerror(*piVar13);
        __os_log_internal(0,puVar2,0,"Failed to open %s : %s",param_1,pcVar5);
      }
    }
    uVar18 = 0;
    if ((bVar16 == 0) || (_gSZDefaultLogLevel < 5)) goto LAB_00097bf8;
    piVar13 = ___error();
    pcVar12 = _strerror(*piVar13);
    pcVar14 = &cf_Failedtoopen_s__s;
    uVar15 = 0xf8;
    pcVar11 = param_1;
  }
  else {
    (**(code **)(param_3 + 8))(lVar9,*(undefined8 *)(param_3 + 0x10));
    pcVar17 = (char *)0x0;
    (**(code **)(param_3 + 0x18))(0,pcVar5,0,*puVar1,*(undefined8 *)(param_3 + 0x20));
    while( true ) {
      pcVar11 = (char *)_read(iVar3,pvVar10,0x100000);
      if ((long)pcVar11 < 0) break;
      if (pcVar11 == (char *)0x0) {
        (**(code **)(param_3 + 0x18))(2,pcVar5,*puVar1,*puVar1,*(undefined8 *)(param_3 + 0x20));
        uVar18 = CONCAT71((int7)((ulong)param_3 >> 8),1);
        goto LAB_00097bf8;
      }
      pcVar12 = (char *)(**(code **)(param_3 + 0x30))
                                  (*(undefined8 *)(param_3 + 0x50),pvVar10,pcVar11);
      if (pcVar12 != pcVar11) {
        bVar16 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar4 == 0) {
            bVar16 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar2 = _SZGetLoggingHandle_logHandle;
            piVar13 = ___error();
            pcVar5 = _strerror(*piVar13);
            __os_log_internal(0,puVar2,0,"Failed to write %ld bytes (wrote %ld) to remote side: %s",
                              pcVar11,pcVar12,pcVar5);
          }
        }
        uVar18 = 0;
        if ((bVar16 == 0) || (_gSZDefaultLogLevel < 5)) goto LAB_00097bf8;
        piVar13 = ___error();
        _strerror(*piVar13);
        pcVar14 = &cf_Failedtowrite_ldbytes_wrote_ld_toremoteside__s;
        uVar15 = 0x10f;
        goto LAB_00097beb;
      }
      pcVar17 = pcVar17 + (long)pcVar11;
      (**(code **)(param_3 + 0x18))(1,pcVar5,pcVar17,*puVar1,*(undefined8 *)(param_3 + 0x20));
    }
    bVar16 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar4 == 0) {
        bVar16 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar2 = _SZGetLoggingHandle_logHandle;
        piVar13 = ___error();
        pcVar5 = _strerror(*piVar13);
        __os_log_internal(0,puVar2,0,"Failed to read %lu bytes from %s : %s",0x100000,param_1,pcVar5
                         );
      }
    }
    uVar18 = 0;
    if ((bVar16 == 0) || (_gSZDefaultLogLevel < 5)) goto LAB_00097bf8;
    piVar13 = ___error();
    _strerror(*piVar13);
    pcVar14 = &cf_Failedtoread_lubytesfrom_s__s;
    uVar15 = 0x104;
    pcVar11 = (char *)0x100000;
    pcVar12 = param_1;
  }
LAB_00097beb:
  uVar18 = 0;
  __SZLog(5,"_PassThroughFile",uVar15,pcVar14,pcVar11,pcVar12);
LAB_00097bf8:
  if (lVar9 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (-1 < iVar3) {
    _close(iVar3);
  }
  _free(pvVar10);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar18 & 0xffffffff;
}

