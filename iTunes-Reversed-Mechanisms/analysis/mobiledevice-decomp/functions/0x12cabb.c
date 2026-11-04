// rea decompile_all
// name: _AMDeviceNotificationSubscribeWithOptions
// address: 0x12cabb
// body: available
// range: 0x12cabb-0x12d24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceNotificationSubscribeWithOptions
              (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,long *param_5,
              long param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  
  if (param_1 == 0 || param_5 == (long *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar12 = "Invalid input(s).";
LAB_0012cb2f:
    __os_log_internal(0,_md_log_log,0x10,pcVar12);
    return -0x17fffff9;
  }
  if (2 < param_3) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar12 = "Invalid connection type requested.";
    goto LAB_0012cb2f;
  }
  iVar2 = __InitializeMobileDevice();
  if (iVar2 != 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar13 = _md_log_log;
    uVar3 = _AMDErrorString(iVar2);
    __os_log_internal(0,uVar13,0x10,"Failed to initailize MobileDevice: 0x%08x (%s)",iVar2,uVar3);
    return iVar2;
  }
  lVar4 = _AMDeviceNotificationCreate(param_1,param_3,param_4);
  if (lVar4 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to allocate AMDeviceNotification.");
    return 0;
  }
  *(undefined1 *)(lVar4 + 0x79) = 0;
  if (param_6 != 0) {
    lVar5 = _CFDictionaryGetValue(param_6,&cf_NotificationOptionSearchForPairedDevices);
    lVar6 = _CFDictionaryGetValue
                      (param_6,&cf_NotificationOptionSearchForPairedDevicesViaDirectConnectionsOnly)
    ;
    lVar7 = _CFDictionaryGetValue(param_6,&cf_NotificationOptionSearchForWiFiPairableDevices);
    lVar8 = _CFDictionaryGetValue(param_6,&cf_NotificationOptionEnableRemoteXPC);
    lVar9 = _CFDictionaryGetValue(param_6,&cf_NotificationOptionEnableUSBMux);
    if (lVar5 != 0) {
      lVar10 = _CFGetTypeID(lVar5);
      lVar11 = _CFBooleanGetTypeID();
      if (lVar10 == lVar11) {
        cVar1 = _CFBooleanGetValue(lVar5);
        *(bool *)(lVar4 + 0x7a) = cVar1 != '\0';
      }
    }
    if (lVar6 != 0) {
      lVar5 = _CFGetTypeID(lVar6);
      lVar10 = _CFBooleanGetTypeID();
      if (lVar5 == lVar10) {
        cVar1 = _CFBooleanGetValue(lVar6);
        *(bool *)(lVar4 + 0x7b) = cVar1 != '\0';
      }
    }
    if (lVar7 != 0) {
      lVar5 = _CFGetTypeID(lVar7);
      lVar6 = _CFBooleanGetTypeID();
      if (lVar5 == lVar6) {
        cVar1 = _CFBooleanGetValue(lVar7);
        *(bool *)(lVar4 + 0x7c) = cVar1 != '\0';
      }
    }
    if (lVar8 != 0) {
      lVar5 = _CFGetTypeID(lVar8);
      lVar6 = _CFBooleanGetTypeID();
      if (lVar5 == lVar6) {
        cVar1 = _CFBooleanGetValue(lVar8);
        *(bool *)(lVar4 + 0x7d) = cVar1 != '\0';
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar12 = "disabled";
        if (*(char *)(lVar4 + 0x7d) != '\0') {
          pcVar12 = "enabled";
        }
        __os_log_internal(0,_md_log_log,2,"RemoteXPC interface explicitly %s by client.",pcVar12);
      }
    }
    if (lVar9 != 0) {
      lVar5 = _CFGetTypeID(lVar9);
      lVar6 = _CFBooleanGetTypeID();
      if (lVar5 == lVar6) {
        cVar1 = _CFBooleanGetValue(lVar9);
        *(bool *)(lVar4 + 0x7e) = cVar1 != '\0';
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar12 = "disabled";
        if (*(char *)(lVar4 + 0x7e) != '\0') {
          pcVar12 = "enabled";
        }
        __os_log_internal(0,_md_log_log,2,"usbmuxd interface explicitly %s by client.",pcVar12);
      }
    }
  }
  if ((*(char *)(lVar4 + 0x7d) == '\0') && (*(char *)(lVar4 + 0x7e) == '\0')) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,
                      "Client tried to subscribe for device notifications, but disabled both RemoteXPC and usbmuxd."
                     );
    iVar2 = -0x17fffff9;
    goto LAB_0012d02f;
  }
  lVar5 = _CFBundleGetMainBundle();
  if (lVar5 != 0) {
    lVar5 = _CFBundleGetIdentifier(lVar5);
    uVar13 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar12 = _getprogname();
    lVar6 = _CFStringCreateWithCString(uVar13,pcVar12,0x8000100);
    if (lVar6 != 0) {
      lVar7 = _CFPreferencesCopyAppValue(&cf_Denylist,&cf_com_apple_MobileDevice);
      if ((lVar7 != 0) ||
         (lVar7 = _CFPreferencesCopyAppValue(&cf_Blacklist,&cf_com_apple_MobileDevice), lVar7 != 0))
      {
        lVar8 = _CFGetTypeID(lVar7);
        lVar9 = _CFArrayGetTypeID();
        if (lVar8 == lVar9) {
          for (lVar8 = 0; lVar9 = _CFArrayGetCount(lVar7), lVar8 < lVar9; lVar8 = lVar8 + 1) {
            lVar9 = _CFArrayGetValueAtIndex(lVar7,lVar8);
            if (lVar9 != 0) {
              lVar10 = _CFGetTypeID(lVar9);
              lVar11 = _CFStringGetTypeID();
              if (lVar10 == lVar11) {
                cVar1 = _CFEqual(lVar9,lVar6);
                if (cVar1 == '\0') {
                  if ((lVar5 == 0) || (cVar1 = _CFEqual(lVar9,lVar5), cVar1 == '\0'))
                  goto LAB_0012ceb2;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar12 = "Denied based on bundle ID, \'%@\'.";
                }
                else {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar12 = "Denied based on process name, \'%@\'.";
                  lVar5 = lVar6;
                }
                __os_log_internal(0,_md_log_log,0,pcVar12,lVar5);
                _CFRelease(lVar7);
                _CFRelease(lVar6);
                goto LAB_0012d0e0;
              }
            }
LAB_0012ceb2:
          }
        }
        _CFRelease(lVar7);
      }
      _CFRelease(lVar6);
    }
  }
  if (*(char *)(lVar4 + 0x7d) == '\x01') {
    cVar1 = __AMDRemotePairingSupportedOnHost();
    if (cVar1 == '\0') {
      cVar1 = __AMDRemotePairingUSBMuxDisabled();
      if ((cVar1 != '\0') || (*(char *)(lVar4 + 0x7e) == '\0')) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,
                          "RemoteXPC unsupported on host and usbmuxd is disabled. Can\'t subscribe for device notifications."
                         );
        iVar2 = -0x17fffff1;
        goto LAB_0012d02f;
      }
      goto LAB_0012cfc6;
    }
    iVar2 = __AMDRemotePairingNotificationSubscribe(lVar4);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar13 = _md_log_log;
    if (iVar2 == 0) {
      __os_log_internal(0,_md_log_log,1,"Subscribed for device notifications from RemotePairing.");
      goto LAB_0012cfc6;
    }
    uVar3 = _AMDErrorString(iVar2);
    pcVar12 = "Failed to subscribe for RemoteXPC notifications: 0x%08x (%s)";
  }
  else {
LAB_0012cfc6:
    cVar1 = __AMDRemotePairingUSBMuxDisabled();
    if ((cVar1 != '\0') || (*(char *)(lVar4 + 0x7e) != '\x01')) {
LAB_0012d0e0:
      *(undefined1 *)(lVar4 + 0x79) = 1;
      *param_5 = lVar4;
      return 0;
    }
    iVar2 = __SubscribeForMuxNotifications(lVar4);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar13 = _md_log_log;
    if (iVar2 == 0) {
      __os_log_internal(0,_md_log_log,0x10,"Subscribed for device notifications from usbmuxd.");
      goto LAB_0012d0e0;
    }
    uVar3 = _AMDErrorString(iVar2);
    pcVar12 = "Failed to subscribe for mux notifications: 0x%08x (%s)";
  }
  __os_log_internal(0,uVar13,0x10,pcVar12,iVar2,uVar3);
LAB_0012d02f:
  __AMDRemotePairingNotificationUnsubscribe(lVar4);
  __UnsubscribeForMuxNotifications(lVar4);
  _CFRelease(lVar4);
  return iVar2;
}

