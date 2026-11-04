// rea decompile_all
// name: _ZipStreamConcoctStreamData
// address: 0x9f9ac
// body: available
// range: 0x9f9ac-0x9fd32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9fd16 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ZipStreamConcoctStreamData
                (undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4,
                long param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  time_t tVar2;
  time_t tVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  Bytef *buf;
  void *pvVar9;
  size_t sVar10;
  uLong uVar11;
  undefined8 uVar12;
  uInt len;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  long local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined2 local_34;
  undefined2 local_32;
  
  uVar12 = _kZipMetadataFilePath;
  local_68 = param_1;
  local_60 = param_2;
  local_50 = param_5;
  local_48 = param_6;
  local_34 = param_3;
  local_32 = param_4;
  tVar2 = _time((time_t *)0x0);
  tVar3 = _time((time_t *)0x0);
  pvVar4 = (void *)_CreateCDRecord(uVar12,0x81a4,tVar2,tVar3);
  uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar5 = _CFDictionaryCreateMutable
                    (uVar12,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  uVar6 = _CFNumberCreate(uVar12,4,&local_68);
  _CFDictionaryAddValue(uVar5,&cf_RecordCount,uVar6);
  _CFRelease(uVar6);
  uVar6 = _CFNumberCreate(uVar12,4,&local_60);
  _CFDictionaryAddValue(uVar5,&cf_TotalUncompressedBytes,uVar6);
  _CFRelease(uVar6);
  local_54 = 2;
  uVar6 = _CFNumberCreate(uVar12,9);
  _CFDictionaryAddValue(uVar5,&cf_Version,uVar6);
  _CFRelease(uVar6);
  uVar6 = _CFNumberCreate(uVar12,2,&local_34);
  _CFDictionarySetValue(uVar5,&cf_StandardFilePerms,uVar6);
  _CFRelease(uVar6);
  uVar6 = _CFNumberCreate(uVar12,2,&local_32);
  local_40 = uVar5;
  _CFDictionarySetValue(uVar5,&cf_StandardDirectoryPerms,uVar6);
  lVar7 = local_50;
  _CFRelease(uVar6);
  if (*(long *)(lVar7 + 0x10) != 0) {
    _CFDictionarySetValue(local_40,&cf_CreatorToolCommandLine);
  }
  if (*(long *)(lVar7 + 0x18) != 0) {
    _CFDictionarySetValue(local_40,&cf_CreatorToolUUID);
  }
  lVar7 = _CFPropertyListCreateData(uVar12,local_40,200,0,0);
  if (lVar7 == 0) {
    pvVar9 = (void *)((ulong)_gSZLogToSyslog ^ 1);
    if (_gSZLogToSyslog == 1) {
      iVar1 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar1 == 0) {
        pvVar9 = (void *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to serialize stream data");
      }
    }
    if (((char)pvVar9 != '\0') && (2 < _gSZDefaultLogLevel)) {
      __SZLog(3,"ZipStreamConcoctStreamData",800,&cf_Failedtoserializestreamdata);
    }
    _free(pvVar4);
  }
  else {
    uVar8 = _CFDataGetLength(lVar7);
    if (0xfffffffe < uVar8) {
                    /* WARNING: Subroutine does not return */
      ___assert_rtn("ZipStreamConcoctStreamData","ZipStream.c",0x327,"dataLength < UINT32_MAX");
    }
    buf = _malloc(uVar8);
    pvVar9 = (void *)_CFDataGetBytePtr(lVar7);
    sVar10 = _CFDataGetLength(lVar7);
    _memcpy(buf,pvVar9,sVar10);
    _CFRelease();
    *(undefined2 *)((long)pvVar4 + 10) = 0;
    len = (uInt)uVar8;
    *(uInt *)((long)pvVar4 + 0x14) = len;
    *(uInt *)((long)pvVar4 + 0x18) = len;
    uVar11 = _crc32(0,(Bytef *)0x0,0);
    uVar11 = _crc32(uVar11,buf,len);
    *(int *)((long)pvVar4 + 0x10) = (int)uVar11;
    uVar12 = _CreateMutableCDRecord(pvVar4);
    *local_48 = uVar12;
    pvVar9 = (void *)_CreateLocalFileRecord(pvVar4,0x1f5,0x1f5);
    uVar12 = _CreateMutableLocalFileRecord(pvVar9);
    *param_7 = uVar12;
    _free(pvVar4);
    _free(pvVar9);
    *param_8 = buf;
    pvVar9 = pvVar4;
  }
  _CFRelease(local_40);
  return CONCAT71((int7)((ulong)pvVar9 >> 8),lVar7 != 0) & 0xffffffff;
}

