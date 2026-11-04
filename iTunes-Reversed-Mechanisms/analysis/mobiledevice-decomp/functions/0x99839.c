// rea decompile_all
// name: __CopyRawLocalFileHeaderAtOffset
// address: 0x99839
// body: available
// range: 0x99839-0x99df6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __CopyRawLocalFileHeaderAtOffset(undefined8 *param_1,off_t param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  size_t sVar9;
  off_t oVar10;
  cfstringStruct *pcVar11;
  undefined8 uVar12;
  byte bVar13;
  size_t sVar14;
  undefined4 uVar15;
  
  iVar7 = _fseeko((FILE *)*param_1,param_2,0);
  if (iVar7 == 0) {
    piVar8 = _malloc(0x1e);
    if (piVar8 != (int *)0x0) {
      sVar9 = _fread(piVar8,1,0x1e,(FILE *)*param_1);
      if (sVar9 == 0x1e) {
        if (*piVar8 == 0x4034b50) {
          uVar4 = *(ushort *)((long)piVar8 + 0x1a);
          uVar5 = *(ushort *)(piVar8 + 7);
          piVar8 = _reallocf(piVar8,(ulong)uVar5 + (ulong)uVar4 + 0x1e);
          if (piVar8 == (int *)0x0) {
            bVar13 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar7 == 0) {
                bVar13 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                  "Failed to allocate full local file record");
              }
            }
            uVar15 = 3;
            piVar8 = (int *)0x0;
            if ((bVar13 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_00099cea;
            pcVar11 = &cf_Failedtoallocatefulllocalfilerecord;
            uVar12 = 0x181;
            uVar15 = 3;
            goto LAB_00099a5d;
          }
          sVar14 = (ulong)uVar5 + (ulong)uVar4;
          sVar9 = _fread((undefined1 *)((long)piVar8 + 0x1e),1,sVar14,(FILE *)*param_1);
          uVar15 = 0;
          if (sVar14 == sVar9) goto LAB_00099cea;
          bVar13 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar7 == 0) {
              bVar13 = 1;
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
          if ((bVar13 != 0) && (2 < _gSZDefaultLogLevel)) {
            pcVar11 = &cf_Failedtoreadinvariable_lengthportionofcentraldirectoryrecord;
            uVar12 = 0x187;
            goto LAB_00099bf6;
          }
        }
        else {
          bVar13 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar7 == 0) {
              bVar13 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar6 = _SZGetLoggingHandle_logHandle;
              iVar7 = *piVar8;
              uVar1 = *(undefined1 *)((long)piVar8 + 1);
              uVar2 = *(undefined1 *)((long)piVar8 + 2);
              uVar3 = *(undefined1 *)((long)piVar8 + 3);
              oVar10 = _ftello((FILE *)*param_1);
              __os_log_internal(0,puVar6,0x10,
                                "Found invalid local file record with signature 0x%02hhx%02hhx%02hhx%02hhx at offset %lld"
                                ,(char)iVar7,uVar1,uVar2,uVar3,oVar10 + -0x1e);
            }
          }
          if ((bVar13 != 0) && (2 < _gSZDefaultLogLevel)) {
            iVar7 = *piVar8;
            uVar1 = *(undefined1 *)((long)piVar8 + 1);
            uVar2 = *(undefined1 *)((long)piVar8 + 2);
            uVar3 = *(undefined1 *)((long)piVar8 + 3);
            oVar10 = _ftello((FILE *)*param_1);
            __SZLog(3,"_CopyRawLocalFileHeaderAtOffset",0x178,
                    &
                    cf_Foundinvalidlocalfilerecordwithsignature0x_02hhx_02hhx_02hhx_02hhxatoffset_lld
                    ,(char)iVar7,uVar1,uVar2,uVar3,oVar10 + -0x1e);
          }
        }
      }
      else {
        bVar13 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar7 == 0) {
            bVar13 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Failed to read local file record");
          }
        }
        if ((bVar13 != 0) && (2 < _gSZDefaultLogLevel)) {
          pcVar11 = &cf_Failedtoreadlocalfilerecord;
          uVar12 = 0x172;
LAB_00099bf6:
          __SZLog(3,"_CopyRawLocalFileHeaderAtOffset",uVar12,pcVar11);
        }
      }
      _free(piVar8);
      uVar15 = 4;
      piVar8 = (int *)0x0;
      goto LAB_00099cea;
    }
    bVar13 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar7 == 0) {
        bVar13 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to malloc LocalFileRecord");
      }
    }
    uVar15 = 3;
    piVar8 = (int *)0x0;
    if ((bVar13 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_00099cea;
    pcVar11 = &cf_FailedtomallocLocalFileRecord;
    uVar12 = 0x16c;
  }
  else {
    bVar13 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar7 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar7 == 0) {
        bVar13 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to seek to local file record"
                         );
      }
    }
    uVar15 = 4;
    piVar8 = (int *)0x0;
    if ((bVar13 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_00099cea;
    pcVar11 = &cf_Failedtoseektolocalfilerecord;
    uVar12 = 0x166;
    uVar15 = 4;
  }
LAB_00099a5d:
  piVar8 = (int *)0x0;
  __SZLog(3,"_CopyRawLocalFileHeaderAtOffset",uVar12,pcVar11);
LAB_00099cea:
  *param_3 = uVar15;
  return piVar8;
}

