// rea decompile_all
// name: __AMDeviceTransferAndInstall
// address: 0x14cc7c
// body: available
// range: 0x14cc7c-0x14d2ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __AMDeviceTransferAndInstall
               (long param_1,undefined8 param_2,char param_3,long param_4,undefined8 param_5,
               char param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar7 = _CFDictionaryCreateMutableCopy(uVar1,0,param_5);
  if (param_4 != 0) {
    _CFDictionarySetValue(lVar7,*(undefined8 *)PTR__kCFBundleIdentifierKey_00441120,param_4);
  }
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"device is NULL.");
    uVar6 = 0xe8000001;
  }
  else if (param_3 == '\0') {
    uVar6 = _AMDeviceSecureTransferPath(0,param_1,param_2,lVar7,param_7,param_8);
    if (uVar6 == 0) {
      lVar8 = _AMDeviceCreateCopy(param_1);
      if (lVar8 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not unserialize a copy of the device");
        uVar4 = 0xe8000001;
      }
      else {
        uVar4 = _AMDeviceConnect(lVar8);
        if (uVar4 == 0) {
          uVar4 = _AMDeviceStartSession(lVar8);
          if (uVar4 == 0) {
            if (param_6 == '\0') {
              uVar6 = _AMDeviceSecureInstallApplication(0,lVar8,param_2,lVar7,param_7,param_8);
              uVar4 = 0;
              if (uVar6 != 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"AMDeviceSecureInstallApplication failed: ");
                uVar4 = uVar6;
              }
            }
            else {
              uVar6 = _AMDeviceSecureUpgradeApplication(0,lVar8,param_2,lVar7,param_7,param_8);
              uVar4 = 0;
              if (uVar6 != 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,
                                  "AMDeviceSecureUpgradeApplication failed: 0x%08x (%d)\n",uVar6,
                                  (char)uVar6);
                uVar4 = uVar6;
              }
            }
            iVar5 = _AMDeviceStopSession(lVar8);
            if (iVar5 != 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"AMDeviceStopSession failed: 0x%08x",iVar5);
            }
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"AMDeviceStartSession failed: 0x%08x (%d)\n",uVar4,
                              uVar4 & 0xff);
          }
          iVar5 = _AMDeviceDisconnect(lVar8);
          if (iVar5 != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"AMDeviceDisconnect failed: 0x%08x",iVar5);
          }
          _CFRelease(lVar8);
          uVar6 = 0;
          if (uVar4 == 0) goto LAB_0014cfba;
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"AMDeviceConnect failed: 0x%08x (%d)\n",uVar4,
                            uVar4 & 0xff);
          _CFRelease(lVar8);
        }
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "_AMDeviceSecureInstallTheBundleAlready failed: 0x%08x\nfalling back to file delta"
                        ,uVar4);
      uVar6 = uVar4;
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "AMDeviceTransferPath failed: 0x%08x\nfalling back to file delta",uVar6);
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar9 = 0;
    __os_log_internal(0,_md_log_log,2,"Using SZConduit to transfer and install");
    lVar8 = _CFDictionaryGetValue(param_5,&cf_PreferWifi);
    if (lVar8 != 0) {
      uVar2 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      cVar3 = _CFEqual(lVar8,uVar2);
      if (cVar3 == '\0') {
        lVar9 = 0;
      }
      else {
        lVar9 = _CFDictionaryCreateMutable
                          (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar9 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Failed to create options dictionary.");
          uVar6 = 0xe8000003;
          goto LAB_0014cfba;
        }
        _CFDictionarySetValue(lVar9,&cf_PreferWifi,uVar2);
      }
    }
    uVar6 = __AMDeviceTransferAndInstallUsingSZConduit
                      (param_1,param_2,&cf_PublicStaging,lVar9,lVar7,1,param_7,param_8);
    if (uVar6 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"SZConduitSendPathWithPreflight failed: 0x%08x",uVar6);
    }
    if (lVar9 != 0) {
      _CFRelease(lVar9);
    }
  }
LAB_0014cfba:
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  return uVar6;
}

