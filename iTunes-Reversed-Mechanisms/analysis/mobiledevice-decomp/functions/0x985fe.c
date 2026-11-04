// rea decompile_all
// name: __OpenLocalFile
// address: 0x985fe
// body: available
// range: 0x985fe-0x98994 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __OpenLocalFile(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined2 param_6,char *param_7,undefined1 param_8,
                      undefined4 *param_9)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uLong uVar5;
  char *pcVar6;
  void *pvVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  byte bVar11;
  
  pvVar4 = _calloc(1,0x78);
  *param_9 = 0;
  *(undefined8 *)((long)pvVar4 + 0x48) = param_1;
  *(undefined2 *)((long)pvVar4 + 0x70) = param_6;
  *(undefined1 *)((long)pvVar4 + 0x72) = param_8;
  *(undefined8 *)((long)pvVar4 + 0x28) = param_2;
  *(undefined8 *)((long)pvVar4 + 0x30) = param_3;
  *(undefined8 *)((long)pvVar4 + 0x38) = param_4;
  *(undefined8 *)((long)pvVar4 + 0x40) = 0;
  *(undefined8 *)((long)pvVar4 + 0x50) = 0;
  uVar5 = _crc32(0,(Bytef *)0x0,0);
  *(uLong *)((long)pvVar4 + 0x60) = uVar5;
  *(undefined8 *)((long)pvVar4 + 0x68) = param_5;
  pcVar6 = _strdup(param_7);
  *(char **)((long)pvVar4 + 0x58) = pcVar6;
  if (*(char *)((long)pvVar4 + 0x72) != '\0') {
    return pvVar4;
  }
  uVar1 = *(ushort *)((long)pvVar4 + 0x70);
  if (((0xe < uVar1) || ((0x4101U >> (uVar1 & 0x1f) & 1) == 0)) && (uVar1 != 99)) {
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
                          "Unknown compression scheme (%d) found for file %s; must use raw mode.",
                          param_6,*(undefined8 *)((long)pvVar4 + 0x58));
      }
    }
    uVar10 = 5;
    if ((bVar11 != 0) && (2 < _gSZDefaultLogLevel)) {
      __SZLog(3,"_OpenLocalFile",0x39,&cf_Unknowncompressionscheme__d_foundforfile_s_mustuserawmode_
              ,param_6,*(undefined8 *)((long)pvVar4 + 0x58));
    }
    goto LAB_00098918;
  }
  if (((uVar1 != 8) && (uVar1 != 99)) && (uVar1 != 0xe)) {
    return pvVar4;
  }
  pvVar7 = _malloc(0x10000);
  *(void **)((long)pvVar4 + 0x50) = pvVar7;
  if (uVar1 == 8) {
    uVar9 = 0x205;
LAB_0009877c:
    uVar2 = _compression_stream_init(pvVar4,1,uVar9);
    if (uVar2 == 0) {
      return pvVar4;
    }
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
                          "Failed to initialize compression: %d",uVar2);
      }
    }
    uVar10 = 3;
    if ((bVar11 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_00098918;
    pcVar8 = &cf_Failedtoinitializecompression__d;
    uVar9 = 0x4b;
  }
  else {
    if (uVar1 == 0xe) {
      uVar9 = 0x306;
      goto LAB_0009877c;
    }
    if (uVar1 == 99) {
      uVar9 = 0x801;
      goto LAB_0009877c;
    }
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
                          "Failed to get compression algorithm id for method %d",
                          *(undefined2 *)((long)pvVar4 + 0x70));
      }
    }
    uVar10 = 3;
    if ((bVar11 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_00098918;
    uVar2 = (uint)*(ushort *)((long)pvVar4 + 0x70);
    pcVar8 = &cf_Failedtogetcompressionalgorithmidformethod_d;
    uVar9 = 0x44;
  }
  uVar10 = 3;
  __SZLog(3,"_OpenLocalFile",uVar9,pcVar8,uVar2);
LAB_00098918:
  *param_9 = uVar10;
  _free(*(void **)((long)pvVar4 + 0x58));
  _free(*(void **)((long)pvVar4 + 0x50));
  _free(pvVar4);
  return (void *)0x0;
}

