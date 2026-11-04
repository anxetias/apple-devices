// rea decompile_all
// name: __ReadOriginalCentralDirectory
// address: 0xa4354
// body: available
// range: 0xa4354-0xa480f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa47c3 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __ReadOriginalCentralDirectory
                (long param_1,undefined8 *param_2,ulong *param_3,long *param_4,ulong *param_5,
                ulong *param_6,undefined2 *param_7,undefined2 *param_8)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  byte bVar11;
  ulong uVar12;
  size_t sVar13;
  ulong uVar14;
  ulong local_68;
  undefined8 uStack_60;
  ulong *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  sVar13 = *(size_t *)(param_1 + 0x10);
  local_58 = param_6;
  pvVar4 = _calloc(sVar13,8);
  uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar14 = 0;
  local_48 = _CFDictionaryCreateMutable(uVar10,0,0,0);
  local_40 = _CFDictionaryCreateMutable(uVar10,0,0,0);
  *param_5 = 0xffffffffffffffff;
  *local_58 = 0xffffffffffffffff;
  local_50 = 0;
  do {
    if (sVar13 <= uVar14) {
      bVar11 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar3 == 0) {
          bVar11 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Too many CD records found in file; expected %llu",sVar13);
        }
      }
      if ((bVar11 != 0) && (2 < _gSZDefaultLogLevel)) {
        __SZLog(3,"_ReadOriginalCentralDirectory",0xbf,&cf_ToomanyCDrecordsfoundinfile_expected_llu,
                sVar13);
      }
      if (sVar13 != 0) {
LAB_000a4764:
        uVar14 = 0;
        do {
          if (*(long *)((long)pvVar4 + uVar14 * 8) != 0) {
            _DestroyMutableCDRecord();
          }
          uVar14 = uVar14 + 1;
        } while (sVar13 != uVar14);
      }
      _free(pvVar4);
      uVar14 = 0;
      goto LAB_000a4786;
    }
    local_68 = local_68 & 0xffffffff00000000;
    pvVar5 = (void *)_CopyNextCDRecord(param_1,&local_68);
    uVar12 = local_68;
    if ((int)local_68 == 0) {
      if (pvVar5 == (void *)0x0) {
        bVar11 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar3 == 0) {
            bVar11 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "CopyNextCDRecord returned NULL and status %d",0);
          }
        }
        if ((bVar11 != 0) && (2 < _gSZDefaultLogLevel)) {
          pcVar9 = &cf_CopyNextCDRecordreturnedNULLandstatus_d;
          uVar10 = 0xcc;
          uVar12 = 0;
          goto LAB_000a475d;
        }
        goto LAB_000a4764;
      }
      lVar6 = _CreateMutableCDRecord(pvVar5);
      local_34 = 0;
    }
    else {
      if ((int)local_68 != 1) {
        _free(pvVar5);
        bVar11 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar3 == 0) {
            bVar11 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "CopyNextCDRecord returned error %d",uVar12 & 0xffffffff);
          }
        }
        if ((bVar11 != 0) && (2 < _gSZDefaultLogLevel)) {
          pcVar9 = &cf_CopyNextCDRecordreturnederror_d;
          uVar10 = 0xc9;
          uVar12 = uVar12 & 0xffffffff;
LAB_000a475d:
          __SZLog(3,"_ReadOriginalCentralDirectory",uVar10,pcVar9,uVar12);
        }
        goto LAB_000a4764;
      }
      lVar6 = _CreateMutableCDRecord(pvVar5);
      local_34 = (undefined4)CONCAT71((int7)((ulong)lVar6 >> 8),1);
    }
    _free(pvVar5);
    pcVar2 = *(char **)(lVar6 + 0x48);
    iVar3 = _strcmp(_kZipMetadataDirectory,pcVar2);
    puVar8 = param_5;
    if ((iVar3 == 0) || (iVar3 = _strcmp("mimetype",pcVar2), puVar8 = local_58, iVar3 == 0)) {
      *puVar8 = uVar14;
LAB_000a44b5:
      *(long *)((long)pvVar4 + uVar14 * 8) = lVar6;
      uVar14 = uVar14 + 1;
      uVar1 = *(undefined2 *)(lVar6 + 0x18);
      uVar10 = local_48;
      if (*(char *)(lVar6 + 0x1a) != '\0') {
        uVar10 = local_40;
      }
      lVar7 = _CFDictionaryGetValue(uVar10,uVar1);
      _CFDictionarySetValue(uVar10,uVar1,lVar7 + 1);
      local_50 = local_50 + *(long *)(lVar6 + 0x28);
    }
    else {
      iVar3 = _strcmp(_kZipMetadataFilePath,pcVar2);
      if ((iVar3 != 0) && (iVar3 = _strcmp(_kZipFixedMetadataFilePath,pcVar2), iVar3 != 0))
      goto LAB_000a44b5;
      _DestroyMutableCDRecord(lVar6);
      sVar13 = sVar13 - 1;
    }
    if ((char)local_34 != '\0') {
      if (uVar14 != sVar13) {
                    /* WARNING: Subroutine does not return */
        ___assert_rtn("_ReadOriginalCentralDirectory","ConvertZipToStream.c",0xf5,
                      "cdIndex == origCDRecordCount");
      }
      local_68 = 0;
      uStack_60 = 0;
      _CFDictionaryApplyFunction(local_48,__FindHighestCount,&local_68);
      uVar1 = (undefined2)uStack_60;
      local_68 = 0;
      uStack_60 = 0;
      _CFDictionaryApplyFunction(local_40,__FindHighestCount,&local_68);
      *param_2 = pvVar4;
      *param_3 = uVar14;
      *param_4 = local_50;
      *param_7 = uVar1;
      *param_8 = (undefined2)uStack_60;
      uVar14 = CONCAT71((int7)((ulong)&local_68 >> 8),1);
LAB_000a4786:
      _CFRelease(local_48);
      _CFRelease(local_40);
      return uVar14 & 0xffffffff;
    }
  } while( true );
}

