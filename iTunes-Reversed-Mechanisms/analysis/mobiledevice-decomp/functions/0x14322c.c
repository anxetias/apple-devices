// rea decompile_all
// name: ___43-[MDRemotePairingBrowser_deviceDiscovered:]_block_invoke
// address: 0x14322c
// body: available
// range: 0x14322c-0x144141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___43__MDRemotePairingBrowser_deviceDiscovered___block_invoke(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  dispatch_group_t group;
  char *pcVar14;
  undefined8 uVar15;
  
  lVar6 = _objc_loadWeak(param_1 + 0x38);
  if (lVar6 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar14 = "Browser unavailable.";
LAB_00143523:
    uVar9 = 2;
LAB_0014363e:
    __os_log_internal(0,_md_log_log,uVar9,pcVar14);
  }
  else {
    lVar7 = _objc_loadWeak(param_1 + 0x40);
    if (lVar7 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar14 = "Device set unavailable.";
      goto LAB_00143523;
    }
    lVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar7,"mdrpDevice");
    if (lVar8 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar14 = "Invalid MDRPConnectableDevice in state change handler.";
      goto LAB_00143636;
    }
    cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"supportsMobileDeviceIntegration");
    if (cVar3 != '\0') {
      lVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"rpDevice");
      if (lVar8 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar14 = "Invalid RPConnectableDevice in state change handler.";
      }
      else {
        if (param_2 != 0) {
          uVar9 = (*_getRPConnectableDeviceStateKeyConnectionState)();
          lVar10 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"objectForKeyedSubscript:",uVar9);
          if (lVar10 != 0) {
            uVar9 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"class");
            puVar2 = PTR__objc_msgSend_00441098;
            cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"isKindOfClass:",uVar9);
            if (cVar3 != '\0') {
              uVar9 = (*_getRPConnectableDeviceStateKeyConnectionState)();
              uVar9 = (*(code *)puVar2)(param_2,"objectForKeyedSubscript:",uVar9);
              uVar11 = (*(code *)puVar2)(uVar9,"unsignedLongValue");
              uVar9 = (*_getRPConnectableDeviceStateKeyAuthState)();
              lVar10 = (*(code *)PTR__objc_msgSend_00441098)
                                 (param_2,"objectForKeyedSubscript:",uVar9);
              if (lVar10 != 0) {
                uVar9 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"class");
                cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"isKindOfClass:",uVar9);
                if (cVar3 != '\0') {
                  uVar9 = (*_getRPConnectableDeviceStateKeyAuthState)();
                  puVar2 = PTR__objc_msgSend_00441098;
                  uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                                    (param_2,"objectForKeyedSubscript:",uVar9);
                  uVar12 = (*(code *)puVar2)(uVar9,"unsignedLongValue");
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar9 = _md_log_log;
                  uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                  __os_log_internal(0,uVar9,1,"\'%@\' conn state: 0x%08lx / auth state: 0x%08lx",
                                    uVar13,uVar11,uVar12);
                  uVar1 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
                  if ((uVar11 == 0) && (uVar1 != 0)) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar9 = _md_log_log;
                    uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                    __os_log_internal(0,uVar9,1,"Device \'%@\' became unavailable.",uVar13);
                    iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                      (lVar6,"_handleDeviceBecameUnavailable:",lVar7);
                    if (iVar4 == 0) goto LAB_00143c9e;
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar9 = _md_log_log;
                    uVar13 = _AMDErrorString(iVar4);
                    pcVar14 = "Failed to handle device becoming unavailable: 0x%08x (%s)";
                    uVar11 = 0;
                  }
                  else {
                    if (((uVar1 & 4) == 0) && ((uVar11 & 4) != 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' appeared on USB.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleDeviceAppearedOnUSB:",lVar7);
                      if (iVar4 != 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar9 = _md_log_log;
                        uVar13 = _AMDErrorString(iVar4);
                        pcVar14 = "Failed to handle device appearing on USB: 0x%08x (%s)";
                        goto LAB_00143bde;
                      }
                    }
                    else if (((uVar1 & 4) != 0) && ((uVar11 & 4) == 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' disappeared from USB.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleDeviceDisappearedFromUSB:",lVar7);
                      if (iVar4 != 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar9 = _md_log_log;
                        uVar13 = _AMDErrorString(iVar4);
                        pcVar14 = "Failed to handle device disappearing from USB: 0x%08x (%s)";
                        goto LAB_00143bde;
                      }
                    }
                    uVar5 = (uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
                    if (((uVar5 >> 8 & 1) == 0) && ((uVar11 & 0x100) != 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' appeared on the network.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleDeviceAppearedOnNetwork:",lVar7);
                      if (iVar4 != 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar9 = _md_log_log;
                        uVar13 = _AMDErrorString(iVar4);
                        pcVar14 = "Failed to handle device appearing on network: 0x%08x (%s)";
                        goto LAB_00143bde;
                      }
                    }
                    else if (((uVar5 >> 8 & 1) != 0) && ((uVar11 & 0x100) == 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' disappeared from the network.",
                                        uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleDeviceDisappearedFromNetwork:",lVar7);
                      if (iVar4 != 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar9 = _md_log_log;
                        uVar13 = _AMDErrorString(iVar4);
                        pcVar14 = "Failed to handle device disappearing from network: 0x%08x (%s)";
                        goto LAB_00143bde;
                      }
                    }
                    uVar1 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
                    if (((uVar1 & 0x10) == 0) && ((uVar11 & 0x10) != 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' awoke from sleep.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleDeviceWaking:",lVar7);
                      if (iVar4 != 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar9 = _md_log_log;
                        uVar13 = _AMDErrorString(iVar4);
                        pcVar14 = "Failed to handle device waking from sleep: 0x%08x (%s)";
                        goto LAB_00143bde;
                      }
                    }
                    else if (((uVar1 & 0x10) != 0) && ((uVar11 & 0x10) == 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' went to sleep.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleDeviceSleeping:",lVar7);
                      if (iVar4 != 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar9 = _md_log_log;
                        uVar13 = _AMDErrorString(iVar4);
                        pcVar14 = "Failed to handle device going to sleep: 0x%08x (%s)";
                        goto LAB_00143bde;
                      }
                    }
                    uVar1 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
                    if (((uVar1 & 2) == 0) && ((uVar11 & 2) != 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' tunnel came up.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleTunnelCameUp:",lVar7);
                      if (iVar4 != 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar9 = _md_log_log;
                        uVar13 = _AMDErrorString(iVar4);
                        pcVar14 = "Failed to handle device tunnel coming up: 0x%08x (%s)";
                        goto LAB_00143bde;
                      }
                    }
                    else if (((uVar1 & 2) != 0) && ((uVar11 & 2) == 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' tunnel went down.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleTunnelTornDown:",lVar7);
                      if (iVar4 != 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar9 = _md_log_log;
                        uVar13 = _AMDErrorString(iVar4);
                        pcVar14 = "Failed to handle device tunnel torn down: 0x%08x (%s)";
                        goto LAB_00143bde;
                      }
                    }
LAB_00143c9e:
                    if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) != '\0')
                    goto LAB_00143648;
                    uVar1 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
                    if (((uVar1 & 1) == 0) && ((uVar12 & 1) != 0)) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' became paired.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleDeviceBecamePaired:",lVar7);
                      if (iVar4 == 0) goto LAB_00143648;
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = _AMDErrorString(iVar4);
                      pcVar14 = "Failed to handle device becoming paired: 0x%08x (%s)";
                    }
                    else {
                      if (((uVar1 & 1) == 0) || ((uVar12 & 1) != 0)) goto LAB_00143648;
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"udid");
                      __os_log_internal(0,uVar9,1,"Device \'%@\' became unpaired.",uVar13);
                      iVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                        (lVar6,"_handleDeviceBecameUnpaired:",lVar7);
                      if (iVar4 == 0) goto LAB_00143648;
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar9 = _md_log_log;
                      uVar13 = _AMDErrorString(iVar4);
                      pcVar14 = "Failed to handle device becoming unpaired: 0x%08x (%s)";
                    }
                  }
LAB_00143bde:
                  __os_log_internal(0,uVar9,0x10,pcVar14,iVar4,uVar13);
                  goto LAB_00143648;
                }
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar9 = _md_log_log;
              uVar12 = 0;
              uVar13 = (*_getRPConnectableDeviceStateKeyAuthState)();
              __os_log_internal(0,uVar9,0x10,"Unexpected value for %@",uVar13);
              goto LAB_00143648;
            }
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = _md_log_log;
          uVar13 = (*_getRPConnectableDeviceStateKeyConnectionState)();
          pcVar14 = "Unexpected value for %@";
          uVar15 = 0x10;
          goto LAB_001435a7;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar14 = "State change handler received invalid argument.";
      }
LAB_00143636:
      uVar9 = 0x10;
      goto LAB_0014363e;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar9 = _md_log_log;
    puVar2 = PTR__objc_msgSend_00441098;
    uVar13 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"rpDevice");
    uVar13 = (*(code *)puVar2)(uVar13,"udid");
    pcVar14 = "Ignoring state change for unsupported device: %@";
    uVar15 = 1;
LAB_001435a7:
    __os_log_internal(0,uVar9,uVar15,pcVar14,uVar13);
  }
  uVar11 = 0;
  uVar12 = 0;
LAB_00143648:
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar11;
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar12;
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') &&
     (lVar7 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"browseCurrentCompleteGroup"), lVar7 != 0)
     ) {
    group = (dispatch_group_t)
            (*(code *)PTR__objc_msgSend_00441098)(lVar6,"browseCurrentCompleteGroup");
    _dispatch_group_leave(group);
  }
  (*(code *)PTR__objc_release_004410a0)(0);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}

