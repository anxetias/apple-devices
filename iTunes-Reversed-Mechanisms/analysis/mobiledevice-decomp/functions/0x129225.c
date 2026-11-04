// rea decompile_all
// name: _AMDeviceUnmountImageOnHost
// address: 0x129225
// body: available
// range: 0x129225-0x129549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _AMDeviceUnmountImageOnHost(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_1 != 0) {
    lVar5 = _CFDictionaryGetValue(param_1,&cf_mount_point);
    lVar6 = _CFDictionaryGetValue(param_1,&cf_dev_entry);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar5 != 0) {
      uVar7 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSString,"class");
      cVar2 = (*(code *)puVar1)(lVar5,"isKindOfClass:",uVar7);
      if (lVar6 != 0 && cVar2 != '\0') {
        uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
        cVar2 = (*(code *)puVar1)(lVar6,"isKindOfClass:",uVar7);
        if (cVar2 != '\0') {
          pcVar8 = (char *)(*(code *)PTR__objc_msgSend_00441098)(lVar5,"fileSystemRepresentation");
          iVar3 = _unmount(pcVar8,0x80000);
          if (iVar3 != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar7 = _md_log_log;
            piVar9 = ___error();
            pcVar8 = _strerror(*piVar9);
            __os_log_internal(0,uVar7,0x10,"Failed to unmount %@: %s",lVar5,pcVar8);
          }
          uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileManager,"defaultManager");
          cVar2 = (*(code *)puVar1)(uVar7,"removeItemAtPath:error:",lVar5,&local_38);
          if (cVar2 == '\0') {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Failed to remove item at %@ %@.",lVar5,local_38);
          }
          pcVar8 = (char *)(*(code *)PTR__objc_msgSend_00441098)(lVar6);
          iVar3 = _open(pcVar8,0);
          if (iVar3 < 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar7 = _md_log_log;
            piVar9 = ___error();
            pcVar8 = _strerror(*piVar9);
            pcVar10 = (char *)0x0;
            __os_log_internal(0,uVar7,0x10,"Failed to open %@ : %s",lVar6,pcVar8);
            if (iVar3 == -1) {
              return (char *)0x0;
            }
          }
          else {
            iVar4 = _ioctl(iVar3,0x20006415);
            pcVar10 = "ssionConfiguration";
            if (iVar4 == -1) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar7 = _md_log_log;
              piVar9 = ___error();
              pcVar8 = _strerror(*piVar9);
              pcVar10 = (char *)0x0;
              __os_log_internal(0,uVar7,0x10,"Failed to eject %@ : %s",lVar6,pcVar8);
            }
          }
          _close(iVar3);
          return pcVar10;
        }
      }
    }
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,0x10,"Invalid input");
  return (char *)0x0;
}

