// rea decompile_all
// name: _AMDeviceSecureStartService
// address: 0x131822
// body: available
// range: 0x131822-0x132e04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x132d59 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceSecureStartService(long param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  char *pcVar13;
  long *plVar14;
  pthread_mutex_t *ppVar15;
  cfstringStruct *pcVar16;
  undefined4 uVar17;
  undefined *local_190;
  undefined8 local_188;
  code *local_180;
  undefined *local_178;
  long *local_170;
  long local_168;
  undefined8 local_160;
  pthread_mutex_t *local_158;
  long local_150;
  undefined8 local_148;
  ulong local_140;
  uint local_138;
  int local_134;
  ulong local_130;
  long *local_128;
  long local_120;
  char local_111;
  ulong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_168 = 0;
  if ((param_2 == 0 || param_1 == 0) || param_4 == (long *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid argument(s).");
    iVar3 = -0x17fffff9;
    goto LAB_00132957;
  }
  _CFStringGetCString(param_2,&local_108,200,0x8000100);
  if (*(char *)(param_1 + 0x94) != '\x01') {
    iVar3 = -0x17ffff7c;
    goto LAB_00132957;
  }
  cVar2 = _AMDeviceIsWiFiPairableRef(param_1,&local_108);
  if (cVar2 == '\0') {
    if ((*(long *)(param_1 + 0xb0) == 0) || (0 < *(int *)(param_1 + 200))) {
      local_158 = (pthread_mutex_t *)(param_1 + 0x48);
      _pthread_mutex_lock(local_158);
      *param_4 = 0;
      if (param_3 == 0) {
        local_111 = '\x01';
        local_148 = local_148 & 0xffffffff00000000;
LAB_00131b34:
        cVar2 = __AMDeviceIsBackedByRSD(param_1);
        if (cVar2 == '\0') {
          if (*(long *)(param_1 + 0xf8) != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            ppVar15 = local_158;
            __os_log_internal(0,_md_log_log,0x10,"No remote device available to start service.");
            iVar3 = -0x17fffeee;
            goto LAB_0013294f;
          }
          local_130 = local_168;
          local_138 = 0;
          local_134 = -1;
          local_150 = 0;
          local_128 = (long *)0x0;
          iVar3 = -0x17fffff5;
          if (*(long *)(param_1 + 0x38) == 0) {
LAB_00132657:
            local_130 = CONCAT44(local_130._4_4_,0xffffffff);
            if ((local_134 == -1) || (iVar4 = _close(local_134), iVar4 != -1)) {
              local_120 = 0;
            }
            else {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar7 = _md_log_log;
              local_110 = CONCAT44(local_110._4_4_,local_134);
              piVar12 = ___error();
              local_120 = 0;
              __os_log_internal(0,uVar7,0x10,"close(2) on socket %d failed: %d",
                                local_110 & 0xffffffff,*piVar12);
            }
          }
          else {
            cVar2 = _CFEqual(param_2,&cf_com_apple_mobile_insecure_notification_proxy);
            if (((cVar2 == '\0') &&
                (cVar2 = _CFEqual(param_2,&cf_com_apple_preboardservice_v2), cVar2 == '\0')) &&
               ((cVar2 = _CFEqual(param_2,&cf_com_apple_preboardservice), cVar2 == '\0' &&
                (*(long *)(param_1 + 0x40) == 0)))) {
              iVar3 = -0x17fffff9;
              goto LAB_00132657;
            }
            local_190 = (undefined *)0x0;
            if (*(long *)(param_1 + 0x38) == 0) {
              local_190 = (undefined *)0xe800000b;
              goto LAB_00132657;
            }
            lVar6 = __CreateMessageDict(&cf_StartService);
            if (lVar6 == 0) {
              iVar3 = -0x17fffffd;
              local_110 = 0;
              local_120 = 0;
            }
            else {
              local_128 = param_4;
              _CFDictionarySetValue(lVar6,&cf_Service,param_2);
              if (local_130 != 0) {
                _CFDictionarySetValue(lVar6,&cf_EscrowBag);
              }
              lVar9 = *(long *)(param_1 + 0x40);
              local_120 = lVar6;
              iVar3 = _lockconn_send_message(param_1,lVar6);
              if (iVar3 == 0) {
                local_110 = lVar9;
                iVar3 = _lockconn_receive_message(param_1,&local_190);
                param_4 = local_128;
                if (iVar3 == 0) {
                  lVar6 = _CFDictionaryGetValue(local_190,&cf_Error);
                  param_4 = local_128;
                  puVar1 = local_190;
                  if (lVar6 == 0) {
                    local_110 = _CFNumberGetTypeID();
                    uVar10 = _CFDictionaryGetValue(puVar1,&cf_Port);
                    iVar3 = -0x17ffffed;
                    if ((uVar10 != 0) &&
                       (local_140 = uVar10, lVar6 = _CFGetTypeID(uVar10), lVar6 == local_110)) {
                      local_110 = _CFGetTypeID(local_140);
                      lVar6 = _CFNumberGetTypeID();
                      if ((local_110 == lVar6) &&
                         (cVar2 = _CFNumberGetValue(local_140,9,&local_138), puVar1 = local_190,
                         cVar2 != '\0')) {
                        local_110 = _CFBooleanGetTypeID();
                        lVar6 = _CFDictionaryGetValue(puVar1,&cf_EnableServiceSSL);
                        if (((lVar6 == 0) || (lVar9 = _CFGetTypeID(lVar6), lVar9 != local_110)) ||
                           (uVar7 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanTrue_00441110),
                           (char)uVar7 == '\0')) {
                          local_110 = 0;
                          iVar3 = 0;
                        }
                        else {
                          iVar3 = 0;
                          local_110 = CONCAT71((int7)((ulong)uVar7 >> 8),1);
                        }
                        goto LAB_00132384;
                      }
                    }
                  }
                  else {
                    local_110 = _CFGetTypeID(lVar6);
                    lVar9 = _CFStringGetTypeID();
                    if (local_110 == lVar9) {
                      iVar3 = __ConvertLockdowndError(lVar6);
                      goto LAB_001321cf;
                    }
                    iVar3 = -0x17ffffed;
                  }
LAB_00132379:
                  local_110 = 0;
                }
                else if (iVar3 == -0x17fffff4) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,1,
                                    "Timed out receiving message from device %u, resetting connection."
                                    ,*(undefined4 *)(param_1 + 0x10));
                  _AMDeviceDisconnect(param_1);
                  iVar3 = _AMDeviceConnect(param_1);
                  if (iVar3 == 0) {
                    iVar3 = -0x17fffff4;
                    if ((local_110 == 0) || (iVar4 = _AMDeviceStartSession(param_1), iVar4 == 0))
                    goto LAB_00132379;
                    if (_md_log_onceToken != -1) {
                      local_110 = CONCAT44(local_110._4_4_,iVar4);
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      iVar4 = (int)local_110;
                    }
                    local_160 = _md_log_log;
                    local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(param_1 + 0x10));
                    uVar7 = _AMDErrorString(iVar4);
                    local_110 = 0;
                    __os_log_internal(0,local_160,1,"Failed to restart session with device %u: %s",
                                      local_140 & 0xffffffff,uVar7);
                  }
                  else {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    local_160 = _md_log_log;
                    local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(param_1 + 0x10));
                    uVar7 = _AMDErrorString(iVar3);
                    local_110 = 0;
                    __os_log_internal(0,local_160,1,"Failed to re-connect to device %u: %s",
                                      local_140 & 0xffffffff,uVar7);
                    iVar3 = -0x17fffff4;
                  }
                }
                else {
LAB_001321cf:
                  if (iVar3 != 0) goto LAB_00132379;
                  local_110 = 0;
                  iVar3 = -0x17ffffff;
                }
              }
              else {
                local_110 = 0;
                param_4 = local_128;
              }
            }
LAB_00132384:
            if (local_190 != (undefined *)0x0) {
              _CFRelease();
            }
            if (local_120 != 0) {
              _CFRelease();
            }
            local_190 = (undefined *)CONCAT44(local_190._4_4_,iVar3);
            if (iVar3 != 0) {
              local_128 = (long *)0x0;
              if ((local_130 != 0) && (iVar3 == -0x17ffffe6)) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar16 = &cf_devicewithnoname;
                if (*(cfstringStruct **)(param_1 + 0x20) != (cfstringStruct *)0x0) {
                  pcVar16 = *(cfstringStruct **)(param_1 + 0x20);
                }
                local_128 = (long *)0x0;
                __os_log_internal(0,_md_log_log,0x10,"Escrow bag mismatch for device %@!",pcVar16);
                __DestroyEscrowBag(param_1);
LAB_00132430:
                iVar3 = (int)local_190;
              }
              goto LAB_00132657;
            }
            if (*(long *)(param_1 + 0xb0) == 0) {
              plVar14 = (long *)(ulong)local_138;
              lVar6 = param_1;
            }
            else {
              iVar3 = _AMDeviceConnect();
              if (iVar3 != 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                local_128 = (long *)0x0;
                __os_log_internal(0,_md_log_log,0x10,
                                  "Failed to connect to companion for watch: %@ : 0x%x",
                                  *(undefined8 *)(param_1 + 0x20),iVar3);
                goto LAB_00132657;
              }
              local_128 = (long *)_CPXStartForwardingToPairedDevicePort
                                            (*(undefined8 *)(param_1 + 0xb0),local_138,param_2,
                                             param_3,&local_190);
              if ((int)local_190 != 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,
                                  "Could not start forwarding to gizmo port (%d) for %@ on device %@: 0x%x."
                                  ,local_138,param_2,*(undefined8 *)(param_1 + 0x20),
                                  (ulong)local_190 & 0xffffffff);
                goto LAB_00132430;
              }
              lVar6 = *(long *)(param_1 + 0xb0);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              plVar14 = local_128;
              __os_log_internal(0,_md_log_log,2,
                                "Forwarding companion port %d to gizmo port %d for %@!",
                                (ulong)local_128 & 0xffffffff,local_138,param_2);
            }
            local_128 = plVar14;
            iVar3 = __connect_to_port(lVar6,(ushort)plVar14 << 8 | (ushort)plVar14 >> 8,&local_134);
            if (iVar3 != 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              if (lVar6 == 0) {
                uVar17 = 0;
                pcVar16 = &cf_NULLdevice;
              }
              else {
                uVar17 = *(undefined4 *)(lVar6 + 0x10);
                pcVar16 = &cf_devicewithnoname;
                if (*(cfstringStruct **)(lVar6 + 0x20) != (cfstringStruct *)0x0) {
                  pcVar16 = *(cfstringStruct **)(lVar6 + 0x20);
                }
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Could not connect to \"%@\" service on port %d, device %d - %@.",
                                param_2,local_128,uVar17,pcVar16);
              goto LAB_00132657;
            }
            iVar3 = 0;
            if ((char)local_110 == '\0') {
              local_120 = 0;
            }
            else {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar16 = &cf_devicewithnoname;
              if (*(cfstringStruct **)(param_1 + 0x20) != (cfstringStruct *)0x0) {
                pcVar16 = *(cfstringStruct **)(param_1 + 0x20);
              }
              __os_log_internal(0,_md_log_log,2,"SSL requested for service %@ with device %@",
                                param_2,pcVar16);
              iVar4 = __TurnOnSSLOverSocket(param_1,local_134,&local_150);
              local_190 = (undefined *)CONCAT44(local_190._4_4_,iVar4);
              if (iVar4 != 0) {
                iVar3 = iVar4;
                if (local_150 != 0) {
                  _SSL_free();
                }
                goto LAB_00132657;
              }
              local_120 = local_150;
            }
            local_150 = 0;
            local_130 = CONCAT44(local_130._4_4_,local_134);
            local_134 = -1;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar7 = _md_log_log;
          local_110 = _AMDErrorString(iVar3);
          pcVar13 = "PROXIED ";
          if (*(long *)(param_1 + 0xb0) == 0) {
            pcVar13 = "";
          }
          __os_log_internal(0,uVar7,2,
                            "returned 0x%08x (%s) starting %sservice %@ on device %@ at port %d",
                            iVar3,local_110,pcVar13,param_2,*(undefined8 *)(param_1 + 0x20),
                            local_128);
          if (iVar3 == 0) {
            plVar14 = (long *)0x0;
LAB_0013274f:
            if (((char)local_148 != '\0') &&
               (iVar3 = __apply_socket_timeouts(local_130 & 0xffffffff), iVar3 != 0)) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              lVar9 = local_120;
              uVar7 = _md_log_log;
              iVar4 = (int)local_130;
              uVar10 = _AMDErrorString(iVar3);
              pcVar13 = "Failed to apply socket timeouts: 0x%08x (%s)";
              goto LAB_001327b3;
            }
            lVar6 = 0;
            local_128 = plVar14;
            uVar10 = _CFDictionaryCreateMutable
                               (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            local_148 = uVar10;
            if (uVar10 == 0) {
              iVar3 = -0x17fffffd;
              lVar9 = local_120;
              iVar4 = (int)local_130;
            }
            else {
              puVar11 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
              if (local_111 != '\0') {
                puVar11 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
              }
              _CFDictionarySetValue(uVar10,&cf_CloseOnInvalidate,*puVar11);
              iVar4 = (int)local_130;
              lVar6 = _AMDServiceConnectionCreate(local_130 & 0xffffffff,local_120,uVar10);
              if (lVar6 == 0) {
                iVar3 = -0x17fffffd;
                lVar6 = 0;
                lVar9 = local_120;
              }
              else {
                if (*(int *)(lVar6 + 0x24) == 0) {
                  *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(param_1 + 0x10);
                }
                if (*(char *)(lVar6 + 0x28) == '\0') {
                  _CFStringGetCString(param_2,lVar6 + 0x28,0x80,0x8000100);
                }
                if (((char)local_128 == '\0') ||
                   (cVar2 = _lockdown_rsd_checkin(lVar6,local_168), cVar2 != '\0')) {
                  if (*(long *)(param_1 + 0x100) != 0) {
                    _AMDServiceConnectionRetainTunnelUsageAssertion(lVar6);
                  }
                  *param_4 = lVar6;
                  iVar4 = -1;
                  iVar3 = 0;
                  lVar6 = 0;
                  lVar9 = 0;
                }
                else {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,"RSD checkin failed.");
                  iVar3 = -0x17ffffdd;
                  iVar4 = -1;
                  lVar9 = 0;
                }
              }
              _CFRelease(local_148);
            }
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar13 = "Failed to start service via AppleUSBDeviceMux: 0x%08x (%s)";
            uVar7 = _md_log_log;
            uVar10 = local_110;
            lVar9 = local_120;
            iVar4 = (int)local_130;
LAB_001327b3:
            lVar6 = 0;
            __os_log_internal(0,uVar7,0x10,pcVar13,iVar3,uVar10);
          }
          if (lVar9 != 0) {
            _SSL_free(lVar9);
          }
        }
        else {
          local_150 = CONCAT44(local_150._4_4_,0xffffffff);
          iVar3 = _AMDeviceIsValid(param_1);
          if (iVar3 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,
                              "Device \'%@\' is no longer valid; cannot start remote service \'%@\'."
                              ,*(undefined8 *)(param_1 + 0x20),param_2);
            iVar4 = -1;
            iVar3 = -0x17fffff5;
          }
          else {
            local_120 = _CFRetain(param_2);
            if (param_3 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = _CFDictionaryGetValue(param_3,&cf_SkipAppendServiceName);
            }
            lVar6 = _isCFBoolean(uVar7);
            if (lVar6 == 0) {
              uVar7 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
            }
            cVar2 = _CFBooleanGetValue(uVar7);
            if (cVar2 == '\0') {
              cVar2 = _CFStringHasSuffix(param_2,&cf__shim_remote);
              if (cVar2 != '\0') {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0,
                                  "Appending %s to a service name that already has this suffix.",
                                  ".shim.remote");
              }
              lVar6 = _CFStringCreateWithFormat
                                (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                 &cf____shim_remote,param_2);
              if (lVar6 != 0) {
                _CFRelease(local_120);
                local_120 = lVar6;
                goto LAB_00131ded;
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Failed to allocate string.");
              iVar3 = -0x17fffffd;
LAB_00132050:
              plVar14 = (long *)0x0;
              local_130 = CONCAT44(local_130._4_4_,0xffffffff);
              local_128 = (long *)0x0;
            }
            else {
LAB_00131ded:
              local_128 = (long *)_MDRemoteServiceDeviceProviderCopyRemoteDevice
                                            (*(undefined8 *)(param_1 + 0xf0));
              if (local_128 == (long *)0x0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Failed to get remote device for AMDeviceRef.")
                ;
                iVar3 = -0x17fffeee;
                goto LAB_00132050;
              }
              if (local_128[3] == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar13 = "Invalid argument(s).";
LAB_0013207f:
                lVar6 = 0;
                __os_log_internal(0,_md_log_log,0x10,pcVar13);
LAB_0013209f:
                (*(code *)PTR__objc_release_004410a0)(lVar6);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Failed to start the service via RSD.");
                iVar3 = -0x17ffffff;
                local_130 = CONCAT44(local_130._4_4_,0xffffffff);
                if ((int)local_150 != -1) {
                  _close((int)local_150);
                }
                plVar14 = (long *)0x0;
              }
              else {
                lVar6 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
                if (lVar6 == 0) {
                  pcVar13 = "Failed to create UUID.";
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  goto LAB_0013207f;
                }
                lVar9 = (*(code *)PTR__objc_msgSend_00441098)
                                  (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:",
                                   &___block_literal_global_75);
                if (lVar9 == 0) goto LAB_0013209f;
                local_190 = PTR___NSConcreteStackBlock_004412a8;
                local_188 = 0xc0000000;
                local_180 = ___MDRemoteServiceStartService_block_invoke_2;
                local_178 = &___block_descriptor_40_e22_v16__0__NSFileHandle_8l;
                local_170 = &local_150;
                (*(code *)PTR__objc_msgSend_00441098)
                          (lVar9,"startService:forUUID:type:withReply:",local_120,lVar6,
                           (int)local_128[4]);
                (*(code *)PTR__objc_release_004410a0)(lVar6);
                local_130 = CONCAT44(local_130._4_4_,(int)local_150);
                local_150 = CONCAT44(local_150._4_4_,0xffffffff);
                iVar3 = 0;
                plVar14 = (long *)CONCAT71((int7)((ulong)&local_150 >> 8),1);
              }
            }
            if (local_120 != 0) {
              _CFRelease();
            }
            if (local_128 != (long *)0x0) {
              _CFRelease();
            }
            if ((char)plVar14 != '\0') {
              local_120 = 0;
              goto LAB_0013274f;
            }
            iVar4 = (int)local_130;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar7 = _md_log_log;
          uVar8 = _AMDErrorString(iVar3);
          lVar6 = 0;
          __os_log_internal(0,uVar7,0x10,
                            "Failed to start service via RemoteServiceDiscovery: 0x%08x (%s)",iVar3,
                            uVar8);
        }
        if ((iVar4 != -1) && (iVar5 = _close(iVar4), iVar5 == -1)) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar7 = _md_log_log;
          piVar12 = ___error();
          iVar5 = *piVar12;
          piVar12 = ___error();
          pcVar13 = _strerror(*piVar12);
          __os_log_internal(0,uVar7,0x10,"close(2) on socket %d failed: %d (%s)",iVar4,iVar5,pcVar13
                           );
        }
        ppVar15 = local_158;
        if (lVar6 != 0) {
          _CFRelease(lVar6);
          ppVar15 = local_158;
        }
      }
      else {
        lVar6 = _CFDictionaryGetValue(param_3,&cf_CloseOnInvalidate);
        local_111 = '\x01';
        if ((lVar6 != 0) &&
           (cVar2 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanTrue_00441110), cVar2 == '\0')) {
          cVar2 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
          local_111 = cVar2 == '\0';
        }
        lVar6 = _CFDictionaryGetValue(param_3,&cf_TimeoutConnection);
        if (lVar6 == 0) {
          local_148 = (ulong)local_148._4_4_ << 0x20;
        }
        else {
          uVar7 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
          local_148 = CONCAT44(local_148._4_4_,
                               (int)CONCAT71((int7)((ulong)uVar7 >> 8),(char)uVar7 != '\0'));
        }
        lVar6 = _CFDictionaryGetValue(param_3,&cf_UnlockEscrowBag);
        if ((((lVar6 == 0) ||
             (cVar2 = _CFEqual(lVar6,*(undefined8 *)PTR__kCFBooleanTrue_00441110), cVar2 == '\0'))
            || (cVar2 = _device_class_is_watch(param_1), cVar2 != '\0')) ||
           (iVar3 = __CopyEscrowBag(param_1,&local_168), iVar3 == 0)) goto LAB_00131b34;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar7 = _md_log_log;
        pcVar16 = &cf_devicewithnoname;
        if (*(cfstringStruct **)(param_1 + 0x20) != (cfstringStruct *)0x0) {
          pcVar16 = *(cfstringStruct **)(param_1 + 0x20);
        }
        uVar8 = _AMDErrorString(iVar3);
        __os_log_internal(0,uVar7,0x10,"Could not get escrow keybag for device %@: 0x%08x (%s)",
                          pcVar16,iVar3,uVar8);
        ppVar15 = local_158;
      }
LAB_0013294f:
      _pthread_mutex_unlock(ppVar15);
      goto LAB_00132957;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar13 = "Starting services on paired watches not supported";
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar13 = "Starting services on wifi pairable refs is not supported.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar13);
  iVar3 = -0x17fffff1;
LAB_00132957:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

