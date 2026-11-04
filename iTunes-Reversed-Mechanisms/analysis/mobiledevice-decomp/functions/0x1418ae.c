// rea decompile_all
// name: MDRemotePairingBrowser::_handleDeviceBecamePaired:
// address: 0x1418ae
// body: available
// range: 0x1418ae-0x141dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int MDRemotePairingBrowser::_handleDeviceBecamePaired_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 local_40;
  int local_34;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_34 = 0xe8000001;
  local_40 = 0;
  if (param_3 == 0) {
    local_34 = 0xe8000007;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Invalid input.";
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"mdrpDevice");
    lVar5 = (*(code *)puVar1)(uVar4,"rpDevice");
    if (lVar5 != 0) {
      lVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"usb");
      if (lVar6 == 0) {
LAB_00141a1d:
        lVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
        if ((((*(int *)(lVar6 + 0x10) == 2) ||
             (lVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note"),
             *(int *)(lVar6 + 0x10) == 0)) &&
            (uVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"connectionFlags"),
            (uVar3 >> 8 & 1) != 0)) &&
           (lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network"),
           puVar1 = PTR__objc_msgSend_00441098, lVar5 == 0)) {
          uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"mdrpDevice");
          uVar4 = (*(code *)puVar1)(uVar4,"rpDevice");
          uVar4 = __AMDeviceCreateWithRPDevice(uVar4,0,&local_40,&local_34);
          (*(code *)puVar1)(param_3,"setNetwork:",uVar4);
          lVar5 = (*(code *)puVar1)(param_3,"network");
          if (lVar5 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar4 = _md_log_log;
            uVar7 = _AMDErrorString(local_34);
            __os_log_internal(0,uVar4,0x10,"Failed to create paired network device: %s %@",uVar7,
                              local_40);
          }
          uVar4 = (*(code *)puVar1)(param_3,"network");
          local_34 = (*(code *)puVar1)(param_1,"notifyClientAboutDevice:action:",uVar4,1);
          if (local_34 != 0) {
            lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
            if (lVar5 != 0) {
              uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
              _CFRelease(uVar4);
            }
            (*(code *)puVar1)(param_3,"setNetwork:",0);
            (*(code *)puVar1)(param_3,"setNetwork:",0);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            iVar2 = local_34;
            uVar4 = _md_log_log;
            uVar7 = _AMDErrorString(local_34);
            pcVar8 = "Failed to attach device: 0x%08x (%s)";
            goto LAB_00141c6a;
          }
          lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
          if (*(char *)(lVar5 + 0x7a) == '\x01') {
            uVar4 = (*(code *)puVar1)(param_3,"network");
            uVar7 = (*(code *)puVar1)(param_1,"note");
            local_34 = __AMDRemotePairingAsyncListenForPairedDevices(uVar4,uVar7);
            if (local_34 != 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              iVar2 = local_34;
              uVar4 = _md_log_log;
              uVar7 = _AMDErrorString(local_34);
              pcVar8 = "Failed to listen for bluetooth watches on RemotePairing device: 0x%08x (%s)"
              ;
              goto LAB_00141c6a;
            }
          }
        }
        local_34 = 0;
      }
      else {
        uVar4 = (*(code *)puVar1)(param_3,"usb");
        iVar2 = (*(code *)puVar1)(param_1,"notifyClientAboutDevice:action:",uVar4,4);
        local_34 = iVar2;
        if (iVar2 != 0) {
          lVar5 = _AMDCopyErrorText(iVar2);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Failed to send \'paired\' notification: 0x%08x (%@)"
                            ,iVar2,lVar5);
          (*(code *)PTR__objc_release_004410a0)(0);
          if (lVar5 == 0) {
            return iVar2;
          }
          _CFRelease(lVar5);
          return iVar2;
        }
        lVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
        if ((*(char *)(lVar6 + 0x7a) == '\0') &&
           (lVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note"),
           *(char *)(lVar6 + 0x7b) != '\x01')) goto LAB_00141a1d;
        puVar1 = PTR__objc_msgSend_00441098;
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"usb");
        uVar7 = (*(code *)puVar1)(param_1,"note");
        iVar2 = __AMDRemotePairingAsyncListenForPairedDevices(uVar4,uVar7);
        local_34 = iVar2;
        if (iVar2 == 0) goto LAB_00141a1d;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar4 = _md_log_log;
        uVar7 = _AMDErrorString(iVar2);
        pcVar8 = "Failed to listen for bluetooth watches on RemotePairing device: 0x%08x (%s)";
LAB_00141c6a:
        __os_log_internal(0,uVar4,0x10,pcVar8,iVar2,uVar7);
      }
      goto LAB_00141c74;
    }
    local_34 = 0xe80000f1;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Invalid device.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar8);
LAB_00141c74:
  (*(code *)PTR__objc_release_004410a0)(local_40);
  return local_34;
}

