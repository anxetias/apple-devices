// rea decompile_all
// name: MDRemotePairingBrowser::_handleDeviceAppearedOnUSB:
// address: 0x1408f7
// body: available
// range: 0x1408f7-0x140bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int MDRemotePairingBrowser::_handleDeviceAppearedOnUSB_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  int local_34;
  
  local_34 = 0xe8000001;
  local_40 = 0;
  if (param_3 == 0) {
    local_34 = 0xe8000007;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    return local_34;
  }
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
  if (((*(int *)(lVar3 + 0x10) == 1) ||
      (lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note"), *(int *)(lVar3 + 0x10) == 0))
     && (lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"usb"),
        puVar1 = PTR__objc_msgSend_00441098, lVar3 == 0)) {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"mdrpDevice");
    uVar4 = (*(code *)puVar1)(uVar4,"rpDevice");
    uVar4 = __AMDeviceCreateWithRPDevice(uVar4,1,&local_40,&local_34);
    (*(code *)puVar1)(param_3,"setUsb:",uVar4);
    lVar3 = (*(code *)puVar1)(param_3,"usb");
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar4 = _md_log_log;
      uVar5 = _AMDErrorString(local_34);
      __os_log_internal(0,uVar4,0x10,"Failed to create USB device: %s %@",uVar5,local_40);
    }
    uVar4 = (*(code *)puVar1)(param_3,"usb");
    local_34 = (*(code *)puVar1)(param_1,"notifyClientAboutDevice:action:",uVar4,1);
    if (local_34 != 0) {
      lVar3 = _AMDCopyErrorText(local_34);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to attach device: 0x%08x (%@)",local_34,lVar3);
      if (lVar3 == 0) {
        return local_34;
      }
      _CFRelease(lVar3);
      return local_34;
    }
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
    if ((*(char *)(lVar3 + 0x7a) != '\0') ||
       (lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note"),
       *(char *)(lVar3 + 0x7b) == '\x01')) {
      uVar4 = (*(code *)puVar1)(param_3,"usb");
      uVar5 = (*(code *)puVar1)(param_1,"note");
      local_34 = __AMDRemotePairingAsyncListenForPairedDevices(uVar4,uVar5);
      if (local_34 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        iVar2 = local_34;
        uVar4 = _md_log_log;
        uVar5 = _AMDErrorString(local_34);
        __os_log_internal(0,uVar4,0x10,
                          "Failed to listen for bluetooth watches on RemotePairing device: 0x%08x (%s)"
                          ,iVar2,uVar5);
        return local_34;
      }
    }
  }
  return 0;
}

