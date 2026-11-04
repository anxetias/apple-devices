// rea decompile_all
// name: _AMDServiceConnectionCreate
// address: 0x10ddfe
// body: available
// range: 0x10ddfe-0x10e03e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDServiceConnectionCreate(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_34 [4];
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  if (__AMDServiceConnectionTypeID == 0) {
    __AMDServiceConnectionTypeID =
         __CFRuntimeRegisterClass(&_AMDServiceConnectionGetTypeID__AMDServiceConnectionClass);
  }
  lVar5 = __CFRuntimeCreateInstance(uVar1,__AMDServiceConnectionTypeID,0xa0,0);
  if (lVar5 != 0) {
    uVar3 = _fcntl(param_1,3,0);
    if ((int)uVar3 < 0) {
      pcVar9 = "Failed to get socket flags: %d (%s)";
    }
    else {
      iVar4 = _fcntl(param_1,4,(ulong)(uVar3 & 0x7ffffffb));
      if (-1 < iVar4) {
        _setsockopt(param_1,0xffff,0x1022,local_34,4);
        *(undefined8 *)(lVar5 + 0x14) = 0;
        *(undefined8 *)(lVar5 + 0x1c) = 0;
        *(undefined8 *)(lVar5 + 0x24) = 0;
        *(undefined8 *)(lVar5 + 0x2c) = 0;
        *(undefined8 *)(lVar5 + 0x34) = 0;
        *(undefined8 *)(lVar5 + 0x3c) = 0;
        *(undefined8 *)(lVar5 + 0x44) = 0;
        *(undefined8 *)(lVar5 + 0x4c) = 0;
        *(undefined8 *)(lVar5 + 0x54) = 0;
        *(undefined8 *)(lVar5 + 0x5c) = 0;
        *(undefined8 *)(lVar5 + 100) = 0;
        *(undefined8 *)(lVar5 + 0x6c) = 0;
        *(undefined8 *)(lVar5 + 0x74) = 0;
        *(undefined8 *)(lVar5 + 0x7c) = 0;
        *(undefined8 *)(lVar5 + 0x84) = 0;
        *(undefined8 *)(lVar5 + 0x8c) = 0;
        *(undefined8 *)(lVar5 + 0x94) = 0;
        *(undefined8 *)(lVar5 + 0x9c) = 0;
        *(undefined4 *)(lVar5 + 0xa4) = 0;
        *(int *)(lVar5 + 0x10) = param_1;
        *(undefined8 *)(lVar5 + 0x18) = param_2;
        *(undefined2 *)(lVar5 + 0x20) = 0x101;
        *(undefined8 *)(lVar5 + 0xa8) = 0;
        if (param_3 == 0) {
          return lVar5;
        }
        lVar6 = _CFDictionaryGetValue(param_3,&cf_CloseOnInvalidate);
        if (lVar6 == 0) {
          return lVar5;
        }
        cVar2 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        if (cVar2 != '\0') {
          *(undefined1 *)(lVar5 + 0x20) = 1;
          return lVar5;
        }
        cVar2 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
        if (cVar2 == '\0') {
          return lVar5;
        }
        *(undefined1 *)(lVar5 + 0x20) = 0;
        return lVar5;
      }
      pcVar9 = "Failed to set socket flags: %d (%s)";
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar1 = _md_log_log;
    piVar7 = ___error();
    iVar4 = *piVar7;
    piVar7 = ___error();
    pcVar8 = _strerror(*piVar7);
    __os_log_internal(0,uVar1,0x10,pcVar9,iVar4,pcVar8);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to set service socket to blocking.");
    _CFRelease(lVar5);
  }
  return 0;
}

