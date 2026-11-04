// rea decompile_all
// name: __AMDeviceCopyInstalledAppInfo
// address: 0x14b494
// body: available
// range: 0x14b494-0x14bbbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMDeviceCopyInstalledAppInfo(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long local_48;
  long local_40;
  long local_38;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar5 = _CFDictionaryCreateMutable
                    (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  uVar6 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_004411a8);
  _CFArrayAppendValue(uVar6,*(undefined8 *)PTR__kCFBundleIdentifierKey_00441120);
  _CFArrayAppendValue(uVar6,&cf_SequenceNumber);
  _CFDictionarySetValue(lVar5,&cf_ReturnAttributes,uVar6);
  uVar2 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
  _CFDictionarySetValue(lVar5,&cf_com_apple_mobile_installation_metadata,uVar2);
  _CFDictionarySetValue(lVar5,&cf_BundleIDs,param_2);
  _CFDictionarySetValue(lVar5,&cf_ShowLaunchProhibitedApps,uVar2);
  _CFDictionarySetValue(lVar5,&cf_ShowAppClips,uVar2);
  _CFDictionarySetValue(lVar5,&cf_ShowSwiftPlaygroundsApps,uVar2);
  _CFRelease(uVar6);
  lVar7 = _AMDeviceCreateCopy(param_1);
  if (lVar7 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar10 = 0;
    __os_log_internal(0,_md_log_log,0x10,"AMDeviceCreateCopy failed\n");
    lVar8 = 0;
    goto LAB_0014b801;
  }
  uVar4 = _AMDeviceConnect(lVar7);
  if (uVar4 == 0) {
    uVar4 = _AMDeviceStartSession(lVar7);
    if (uVar4 == 0) {
      local_40 = 0;
      local_48 = 0;
      if (lVar5 == 0) {
        lVar8 = 0;
LAB_0014b5ee:
        _AMDeviceSlowLookupBreak("_AMDeviceLookupApplication",lVar8);
      }
      else {
        cVar3 = _CFDictionaryContainsKey(lVar5,&cf_ReturnAttributes);
        lVar8 = lVar5;
        if (cVar3 == '\0') goto LAB_0014b5ee;
      }
      uVar4 = _AMDeviceSecureStartService(lVar7,&cf_com_apple_mobile_installation_proxy,0,&local_48)
      ;
      local_38 = lVar7;
      if (uVar4 == 0) {
        uVar4 = _perform_command(local_48,&cf_Lookup,&local_40,_lookup_callback,0,&cf_ClientOptions,
                                 lVar5,0);
        if (uVar4 != 0) {
          _pretty_error("_AMDeviceLookupApplication","Could not lookup application info from device"
                        ,uVar4);
        }
        lVar7 = local_40;
        local_40 = 0;
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar7 = 0;
        __os_log_internal(0,_md_log_log,0x10,
                          "Was unable to start the install service on the device: 0x%x",uVar4);
      }
      if (local_48 != 0) {
        _CFRelease();
      }
      if (uVar4 == 0) {
        if (lVar7 != 0) {
          lVar8 = _CFDictionaryGetValue(lVar7,&cf_com_apple_mobile_installation_metadata);
          if (lVar8 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "no metadata";
            lVar7 = local_38;
          }
          else {
            lVar9 = _CFDictionaryGetValue(lVar8,&cf_CacheGUID);
            if (lVar9 == 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar11 = "no CacheGUID";
              lVar7 = local_38;
            }
            else {
              lVar8 = _CFDictionaryGetValue(lVar7,param_2);
              if (lVar8 == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar11 = "no app info";
                lVar7 = local_38;
              }
              else {
                lVar8 = _CFDictionaryGetValue(lVar8,&cf_SequenceNumber);
                if (lVar8 == 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar11 = "no SequenceNumber";
                  lVar7 = local_38;
                }
                else {
                  cVar3 = _CFNumberGetValue(lVar8,0xb,&local_40);
                  if (cVar3 == '\0') {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    __os_log_internal(0,_md_log_log,0x10,"CFNumberGetValue failed for %@",lVar8);
                  }
                  lVar8 = _CFStringCreateWithFormat(0,0,&cf__lld,local_40);
                  if (lVar8 != 0) {
                    lVar10 = _CFDictionaryCreateMutable
                                       (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                    if (lVar10 == 0) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      lVar7 = local_38;
                      lVar10 = 0;
                      __os_log_internal(0,_md_log_log,0x10,"unable to create dict");
                    }
                    else {
                      _CFDictionarySetValue(lVar10,&cf_CacheGUID,lVar9);
                      _CFDictionarySetValue(lVar10,&cf_SequenceNumber,lVar8);
                      _CFRelease(lVar7);
                      lVar7 = local_38;
                    }
                    goto LAB_0014b7e9;
                  }
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  lVar7 = local_38;
                  __os_log_internal(0,_md_log_log,0x10,
                                    "CFStringCreateWithFormat failed to convert %lld",local_40);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar11 = "copyCFNumberToCFString failed";
                }
              }
            }
          }
          __os_log_internal(0,_md_log_log,0x10,pcVar11);
          goto LAB_0014ba5c;
        }
        lVar8 = 0;
        lVar10 = 0;
        lVar7 = local_38;
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar7 = local_38;
        __os_log_internal(0,_md_log_log,0x10,"AMDeviceLookupApplications error: 0x%08x (%d)\n",uVar4
                          ,uVar4 & 0xff);
LAB_0014ba5c:
        lVar8 = 0;
        lVar10 = 0;
      }
LAB_0014b7e9:
      _AMDeviceStopSession(lVar7);
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar10 = 0;
      __os_log_internal(0,_md_log_log,0x10,"AMDeviceStartSession error: 0x%08x (%d)\n",uVar4,
                        uVar4 & 0xff);
      lVar8 = 0;
    }
    _AMDeviceDisconnect(lVar7);
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar8 = 0;
    __os_log_internal(0,_md_log_log,0x10,"AMDeviceConnect error: 0x%08x (%d)\n",uVar4,uVar4 & 0xff);
    lVar10 = 0;
  }
  _CFRelease(lVar7);
LAB_0014b801:
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  return lVar10;
}

