// rea decompile_all
// name: _CopyNextCDRecord
// address: 0x99e68
// body: available
// range: 0x99e68-0x9a472 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9a43e to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * _CopyNextCDRecord(undefined8 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  off_t oVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  size_t sVar10;
  undefined4 uVar11;
  
  lVar9 = param_1[6];
  if (lVar9 == -1) {
    lVar9 = param_1[4];
    param_1[6] = lVar9;
    param_1[3] = 0;
  }
  iVar2 = _fseeko((FILE *)*param_1,lVar9,0);
  if (iVar2 == 0) {
    piVar3 = _malloc(0x2e);
    if (piVar3 != (int *)0x0) {
      sVar4 = _fread(piVar3,1,0x2e,(FILE *)*param_1);
      if (sVar4 == 0x2e) {
        if (*piVar3 == 0x2014b50) {
          lVar9 = (ulong)*(ushort *)((long)piVar3 + 0x1e) + (ulong)*(ushort *)(piVar3 + 7);
          uVar1 = *(ushort *)(piVar3 + 8);
          piVar3 = _reallocf(piVar3,lVar9 + (ulong)uVar1 + 0x2e);
          if (piVar3 == (int *)0x0) {
            bVar8 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar2 == 0) {
                bVar8 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                  "Failed to allocate full central directory record");
              }
            }
            uVar11 = 3;
            if ((bVar8 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009a2a8;
            pcVar6 = &cf_Failedtoallocatefullcentraldirectoryrecord;
            uVar7 = 0x1d8;
            uVar11 = 3;
            goto LAB_0009a06d;
          }
          sVar10 = lVar9 + (ulong)uVar1;
          sVar4 = _fread((undefined1 *)((long)piVar3 + 0x2e),1,sVar10,(FILE *)*param_1);
          if (sVar10 == sVar4) {
            oVar5 = _ftello((FILE *)*param_1);
            param_1[6] = oVar5;
            uVar11 = 1;
            if ((param_1[5] + param_1[4] == oVar5) ||
               (uVar11 = 4, (long)(param_1[5] + param_1[4]) < oVar5)) {
              param_1[6] = 0xffffffffffffffff;
              param_1[3] = 0;
            }
            else {
              lVar9 = param_1[3];
              param_1[3] = lVar9 + 1U;
              uVar11 = 0;
              if ((ulong)param_1[2] < lVar9 + 1U) {
                    /* WARNING: Subroutine does not return */
                ___assert_rtn("CopyNextCDRecord","ParseZipFile.c",0x1f0,
                              "ctx->cd_records_processed <= ctx->total_cd_records");
              }
            }
            *param_2 = uVar11;
            return piVar3;
          }
          bVar8 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar2 == 0) {
              bVar8 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                "Failed to read in variable-length portion of central directory record"
                               );
            }
          }
          if ((bVar8 != 0) && (2 < _gSZDefaultLogLevel)) {
            pcVar6 = &cf_Failedtoreadinvariable_lengthportionofcentraldirectoryrecord;
            uVar7 = 0x1de;
            goto LAB_0009a1dc;
          }
        }
        else {
          bVar8 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar2 == 0) {
              bVar8 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                "Found invalid central directory record with signature 0x%02hhx%02hhx%02hhx%02hhx"
                                ,(char)*piVar3,*(undefined1 *)((long)piVar3 + 1),
                                *(undefined1 *)((long)piVar3 + 2),*(undefined1 *)((long)piVar3 + 3))
              ;
            }
          }
          if ((bVar8 != 0) && (2 < _gSZDefaultLogLevel)) {
            __SZLog(3,"CopyNextCDRecord",0x1cf,
                    &cf_Foundinvalidcentraldirectoryrecordwithsignature0x_02hhx_02hhx_02hhx_02hhx,
                    (char)*piVar3,*(undefined1 *)((long)piVar3 + 1),
                    *(undefined1 *)((long)piVar3 + 2),*(undefined1 *)((long)piVar3 + 3));
          }
        }
      }
      else {
        bVar8 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar2 == 0) {
            bVar8 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Failed to read central directory record");
          }
        }
        if ((bVar8 != 0) && (2 < _gSZDefaultLogLevel)) {
          pcVar6 = &cf_Failedtoreadcentraldirectoryrecord;
          uVar7 = 0x1c9;
LAB_0009a1dc:
          __SZLog(3,"CopyNextCDRecord",uVar7,pcVar6);
        }
      }
      _free(piVar3);
      uVar11 = 4;
      goto LAB_0009a2a8;
    }
    bVar8 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar2 == 0) {
        bVar8 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to allocate record");
      }
    }
    uVar11 = 3;
    if ((bVar8 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009a2a8;
    pcVar6 = &cf_Failedtoallocaterecord;
    uVar7 = 0x1c3;
  }
  else {
    bVar8 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar2 == 0) {
        bVar8 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "Failed to seek to central directory record");
      }
    }
    uVar11 = 4;
    if ((bVar8 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009a2a8;
    pcVar6 = &cf_Failedtoseektocentraldirectoryrecord;
    uVar7 = 0x1bd;
    uVar11 = 4;
  }
LAB_0009a06d:
  __SZLog(3,"CopyNextCDRecord",uVar7,pcVar6);
LAB_0009a2a8:
  *param_2 = uVar11;
  param_1[6] = 0xffffffffffffffff;
  param_1[3] = 0;
  return (int *)0x0;
}

