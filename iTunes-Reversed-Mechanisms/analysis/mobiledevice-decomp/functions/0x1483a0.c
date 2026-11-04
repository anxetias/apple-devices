// rea decompile_all
// name: MDRemoteServiceDeviceProviderRemotePairing::refreshMDRemoteServiceDevice
// address: 0x1483a0
// body: available
// range: 0x1483a0-0x148910 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void MDRemoteServiceDeviceProviderRemotePairing::refreshMDRemoteServiceDevice
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  
  lVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
  if (lVar6 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid device handle.";
LAB_0014847b:
    uVar7 = 0x10;
LAB_00148483:
    __os_log_internal(0,_md_log_log,uVar7,pcVar11);
    bVar2 = false;
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
    cVar4 = _AMDeviceIsWiFiPairableRef(uVar7);
    if (cVar4 != '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Wifi pairable, no remote device.";
      uVar7 = 2;
      goto LAB_00148483;
    }
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
    iVar5 = _AMDeviceDisconnect(uVar7);
    if (iVar5 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to disconnect from device.";
      goto LAB_0014847b;
    }
    lVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
    lVar6 = *(long *)(lVar6 + 0xf8);
    if (lVar6 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Invalid RemotePairing device.";
LAB_00148772:
      uVar7 = 0x10;
    }
    else {
      uVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"connectionFlags");
      if (((uVar8 & 2) != 0) ||
         (uVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"connectionFlags"), (uVar8 & 4) != 0))
      {
        cVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"requireTrusted");
        puVar3 = PTR__objc_msgSend_00441098;
        if (cVar4 == '\0') {
          lVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
          puVar3 = PTR__objc_msgSend_00441098;
          if ((lVar9 == 0) || (*(int *)(lVar9 + 0x30) != 1)) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "No untrusted remote device for indirect AMDeviceRef.";
            goto LAB_001487a2;
          }
          pcVar11 = "untrustedRSDDeviceInfo";
          uVar7 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"untrustedRSDDeviceInfo");
          lVar9 = (*(code *)puVar3)(uVar7,"uuid");
          uVar7 = 8;
        }
        else {
          pcVar11 = "trustedRSDDeviceInfo";
          uVar7 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"trustedRSDDeviceInfo");
          lVar9 = (*(code *)puVar3)(uVar7,"uuid");
          uVar7 = 10;
        }
        puVar3 = PTR__objc_msgSend_00441098;
        if (lVar9 != 0) {
          uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
          uVar10 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,pcVar11);
          uVar10 = (*(code *)puVar3)(uVar10,"uuid");
          uVar10 = (*(code *)puVar3)(uVar10,"UUIDString");
          lVar6 = _CFUUIDCreateFromString(uVar1,uVar10);
          if (lVar6 != 0) {
            lVar6 = _MDRemoteServiceDeviceCreate(uVar1,lVar6,uVar7);
            if (lVar6 != 0) {
              lVar9 = _MDRemoteServiceDeviceLoadBaseProperties(lVar6);
              if (lVar9 == 0) {
                bVar2 = true;
                lVar9 = 0;
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,
                                  "Initializing remote device failed with error: %@",lVar9);
                bVar2 = true;
              }
              goto LAB_00148497;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "Failed to create remote service device.";
            goto LAB_00148772;
          }
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar11 = "Failed to create UUID.";
        goto LAB_00148772;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "No remote device available.";
LAB_001487a2:
      uVar7 = 2;
    }
    __os_log_internal(0,_md_log_log,uVar7,pcVar11);
    bVar2 = true;
  }
  lVar6 = 0;
  lVar9 = 0;
LAB_00148497:
  puVar3 = PTR__objc_msgSend_00441098;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"remoteServiceDeviceMutex");
  (*(code *)puVar3)(uVar7,"whileLockedPerformBlock:");
  if (bVar2) {
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
    iVar5 = _AMDeviceConnect(uVar7);
    if (iVar5 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to reconnect to device.");
    }
  }
  (*(code *)PTR__objc_release_004410a0)(lVar9);
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  return;
}

