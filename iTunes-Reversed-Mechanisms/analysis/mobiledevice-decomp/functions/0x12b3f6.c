// rea decompile_all
// name: _AMDeviceCreateCopy
// address: 0x12b3f6
// body: available
// range: 0x12b3f6-0x12b711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCreateCopy(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "Invalid argument.";
LAB_0012b5df:
    __os_log_internal(0,_md_log_log,0x10,pcVar6);
    return 0;
  }
  lVar3 = __CreateEmptyDeviceRef();
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "Failed to allocate device.";
    goto LAB_0012b5df;
  }
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined2 *)(lVar3 + 0x18) = *(undefined2 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) == 0) {
    pcVar6 = "Original device has no serial number.";
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar4 = _CFStringCreateCopy(uVar1);
    *(long *)(lVar3 + 0x20) = lVar4;
    pcVar6 = "Failed to allocate string.";
    if (lVar4 != 0) {
      *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      __mutex_init(lVar3 + 0x48);
      if (*(long *)(param_1 + 0x88) != 0) {
        lVar4 = _CFStringCreateCopy(uVar1);
        *(long *)(lVar3 + 0x88) = lVar4;
        if (lVar4 == 0) goto LAB_0012b5f6;
      }
      *(undefined4 *)(lVar3 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      *(undefined1 *)(lVar3 + 0x94) = 1;
      *(undefined4 *)(lVar3 + 0x98) = 0;
      *(undefined8 *)(lVar3 + 0xa0) = 0;
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar5 = _CFRetain();
        *(undefined8 *)(lVar3 + 0xb0) = uVar5;
      }
      if (*(long *)(param_1 + 0xb8) != 0) {
        uVar5 = _CFRetain();
        *(undefined8 *)(lVar3 + 0xb8) = uVar5;
      }
      if (*(long *)(param_1 + 0xc0) != 0) {
        uVar5 = _CFRetain();
        *(undefined8 *)(lVar3 + 0xc0) = uVar5;
      }
      *(undefined4 *)(lVar3 + 200) = *(undefined4 *)(param_1 + 200);
      *(undefined8 *)(lVar3 + 0xd0) = 0;
      if (*(long *)(param_1 + 0xd8) != 0) {
        uVar5 = _CFRetain();
        *(undefined8 *)(lVar3 + 0xd8) = uVar5;
      }
      lVar4 = *(long *)(param_1 + 0xf0);
      if (lVar4 != 0) {
        cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"respondsToSelector:","copyWithDevice:")
        ;
        if (cVar2 == '\0') {
          uVar5 = (*(code *)PTR__objc_retain_004410a8)(lVar4);
        }
        else {
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"copyWithDevice:",lVar3);
        }
        *(undefined8 *)(lVar3 + 0xf0) = uVar5;
      }
      if (*(long *)(param_1 + 0xf8) != 0) {
        uVar5 = _CFRetain();
        *(undefined8 *)(lVar3 + 0xf8) = uVar5;
      }
      if (*(long *)(param_1 + 0x100) != 0) {
        uVar5 = _CFRetain();
        *(undefined8 *)(lVar3 + 0x100) = uVar5;
      }
      if (*(long *)(param_1 + 0x108) != 0) {
        uVar5 = _CFRetain();
        *(undefined8 *)(lVar3 + 0x108) = uVar5;
      }
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_0012b62b;
      lVar4 = _CFDataCreateCopy(uVar1);
      *(long *)(lVar3 + 0xa8) = lVar4;
      if (lVar4 != 0) goto LAB_0012b62b;
      pcVar6 = "Failed to allocate data.";
    }
  }
LAB_0012b5f6:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar6);
  _CFRelease(lVar3);
  lVar3 = 0;
LAB_0012b62b:
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  return lVar3;
}

