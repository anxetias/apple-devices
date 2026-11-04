// rea decompile_all
// name: __AMDevicePreflightWorker
// address: 0x103540
// body: available
// range: 0x103540-0x103a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMDevicePreflightWorker(long param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 local_38;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Context is corrupt.");
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == 0x6c667270) {
    if (((*(int *)(*(long *)(param_1 + 0x58) + 0x30) == 0) &&
        (cVar2 = _AMDeviceIsWiFiPairableRef(), cVar2 != '\0')) ||
       ((cVar2 = __AMDRemotePairingDiscoveryEnabled(), cVar2 != '\0' &&
        (((cVar2 = __AMDRemotePairingSupportedOnHost(), cVar2 != '\0' &&
          (cVar2 = __AMDRemotePairingSupportedOnDevice(*(undefined8 *)(param_1 + 0x58)),
          cVar2 != '\0')) &&
         (cVar2 = __AMDeviceIsBonjourDeviceOnLocalhost(*(undefined8 *)(param_1 + 0x58)),
         cVar2 == '\0')))))) {
      iVar3 = 0;
    }
    else {
      iVar3 = _AMDeviceConnect(*(undefined8 *)(param_1 + 0x58));
      if (iVar3 == 0) {
        iVar3 = _AMDeviceStartSession(*(undefined8 *)(param_1 + 0x58));
        if (iVar3 == 0) {
LAB_0010380b:
          lVar5 = _CFPreferencesCopyAppValue(&cf_USBHeartbeat,&cf_com_apple_usbmuxd);
          iVar3 = 0;
          if (lVar5 == 0) {
            bVar9 = false;
          }
          else {
            cVar2 = _CFEqual(lVar5,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
            bVar9 = cVar2 != '\0';
          }
          bVar1 = true;
          if ((!bVar9) && (*(int *)(*(long *)(param_1 + 0x58) + 0x30) != 0)) goto LAB_00103745;
          iVar3 = _AMDeviceSecureStartService
                            (*(long *)(param_1 + 0x58),&cf_com_apple_mobile_heartbeat,0,
                             param_1 + 0x68);
          if (iVar3 == 0) {
            iVar3 = 0;
            goto LAB_00103745;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_38 = _md_log_log;
          if (*(long *)(param_1 + 0x58) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x10);
          }
          uVar6 = _AMDErrorString(iVar3);
          pcVar7 = "Failed to start heartbeat (device %d): 0x%x (%s)";
        }
        else {
          cVar2 = _device_os_is_at_least
                            (*(undefined8 *)(param_1 + 0x58),&cf_7_0,&cf_2_0,&cf_9_0,&cf_1_0);
          if (cVar2 == '\0') {
LAB_0010378f:
            iVar3 = _AMDevicePairWithCallback(*(undefined8 *)(param_1 + 0x58),0,0,0);
            if (iVar3 == 0) {
              iVar3 = _AMDeviceStartSession(*(undefined8 *)(param_1 + 0x58));
              if (iVar3 == 0) goto LAB_0010380b;
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar6 = _md_log_log;
              if (*(long *)(param_1 + 0x58) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x10);
              }
              uVar4 = _AMDErrorString(iVar3);
              pcVar7 = "Failed to start session (device %d): 0x%x (%s)";
            }
            else {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar6 = _md_log_log;
              if (*(long *)(param_1 + 0x58) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x10);
              }
              uVar4 = _AMDErrorString(iVar3);
              pcVar7 = "Failed to pair (device %d): 0x%x (%s)";
            }
            lVar5 = 0;
            __os_log_internal(0,uVar6,0x10,pcVar7,uVar8,iVar3,uVar4);
            bVar1 = true;
            goto LAB_00103745;
          }
          __SendBUIDToDevice(*(undefined8 *)(param_1 + 0x58));
          lVar5 = *(long *)(param_1 + 0x58);
          bVar1 = true;
          if (*(int *)(lVar5 + 0x30) == 0) {
            lVar5 = 0;
            goto LAB_00103745;
          }
          iVar3 = __RegisterForInsecureNotifications(lVar5,&DAT_00447670,lVar5);
          if (iVar3 == 0) goto LAB_0010378f;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_38 = _md_log_log;
          if (*(long *)(param_1 + 0x58) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x10);
          }
          uVar6 = _AMDErrorString(iVar3);
          pcVar7 = "Failed to register for insecure notifications (device %d): 0x%x (%s)";
          lVar5 = 0;
        }
        bVar1 = true;
        __os_log_internal(0,local_38,0x10,pcVar7,uVar8,iVar3,uVar6);
        goto LAB_00103745;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar6 = _md_log_log;
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x10);
      }
      uVar4 = _AMDErrorString(iVar3);
      __os_log_internal(0,uVar6,0x10,"Failed to connect to lockdownd (device %d): 0x%x (%s).",uVar8,
                        iVar3,uVar4);
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Context is corrupt.");
    iVar3 = -0x17fffff9;
  }
  lVar5 = 0;
  bVar1 = false;
LAB_00103745:
  *(int *)(param_1 + 0x60) = iVar3;
  _CFRunLoopSourceSignal(*(undefined8 *)(param_1 + 0x70));
  _CFRunLoopWakeUp(*(undefined8 *)(param_1 + 0x78));
  if (bVar1) {
    _AMDeviceDisconnect(*(undefined8 *)(param_1 + 0x58));
  }
  _CFRelease(param_1);
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return 0;
}

