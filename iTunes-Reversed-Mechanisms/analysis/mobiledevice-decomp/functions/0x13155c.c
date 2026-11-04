// rea decompile_all
// name: _AMDeviceIsValid
// address: 0x13155c
// body: available
// range: 0x13155c-0x131821 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _AMDeviceIsValid(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  
  if (param_1 == 0) {
    return '\0';
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    return '\0';
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    return '\x01';
  }
  lVar5 = *(long *)(param_1 + 0xf8);
  if (lVar5 == 0) {
    cVar1 = __AMDeviceIsBackedByRSD(param_1);
    if (cVar1 == '\0') {
      cVar1 = _isDeviceAttached(*(undefined4 *)(param_1 + 0x10));
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x94) = 0;
        return '\0';
      }
      return '\x01';
    }
    lVar5 = _MDRemoteServiceDeviceProviderCopyRemoteDevice(*(undefined8 *)(param_1 + 0xf0));
    if (lVar5 == 0) {
      return '\0';
    }
    cVar1 = _MDRemoteServiceDeviceIsConnected(lVar5);
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"connectionFlags");
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar6 = "RemotePairing-based device is unavailable, so it is no longer valid.";
      goto LAB_0013164c;
    }
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 1) {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"connectionFlags");
      if ((uVar4 & 4) == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar6 = 
        "RemotePairing-based USB device is not physically attached, so it is no longer valid.";
        goto LAB_0013164c;
      }
      iVar2 = *(int *)(param_1 + 0x30);
    }
    if (iVar2 == 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"connectionFlags");
      if ((uVar4 & 8) == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar6 = 
        "RemotePairing-based network device is not available wirelessly, so it is no longer valid.";
        goto LAB_0013164c;
      }
      if ((*(int *)(param_1 + 0x30) == 0) &&
         (uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"connectionFlags"),
         (uVar4 & 0x10) == 0)) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar6 = "Network RemotePairing-based device went to sleep, so it is no longer valid.";
        goto LAB_0013164c;
      }
    }
    cVar1 = __AMDeviceIsBackedByRSD(param_1);
    if (cVar1 == '\0') {
      return '\x01';
    }
    lVar5 = _MDRemoteServiceDeviceProviderCopyRemoteDevice(*(undefined8 *)(param_1 + 0xf0));
    if (lVar5 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar6 = "RSD-backed device has no RSD device, so it is no longer valid.";
LAB_0013164c:
      __os_log_internal(0,_md_log_log,0x10,pcVar6);
      return '\0';
    }
    cVar1 = _MDRemoteServiceDeviceIsConnected(lVar5);
    if (cVar1 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "RSD-backed device is not connected over RSD, so it is no longer valid.");
    }
  }
  _CFRelease(lVar5);
  return cVar1;
}

