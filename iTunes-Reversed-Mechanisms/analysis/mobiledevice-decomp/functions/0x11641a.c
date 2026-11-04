// rea decompile_all
// name: _AMDeviceImageMounted
// address: 0x11641a
// body: available
// range: 0x11641a-0x116d15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDeviceImageMounted
                (long param_1,long param_2,cfstringStruct *param_3,long param_4,int *param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  char *pcVar12;
  int *piVar13;
  ulong uVar14;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  long local_50;
  long local_48;
  int local_3c;
  int *local_38;
  
  local_3c = -0x17ffff0f;
  local_68 = 0;
  local_50 = 0;
  local_38 = param_5;
  if ((param_3 == (cfstringStruct *)0x0 || param_1 == 0) ||
     ((param_4 == 0 && (cVar2 = _CFEqual(param_3,&cf_PersonalizedImageType), cVar2 != '\0')))) {
    local_3c = -0x17fffff9;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar12 = "Invalid input(s).";
LAB_00116593:
    piVar13 = local_38;
    __os_log_internal(0,_md_log_log,0x10,pcVar12);
    lVar3 = 0;
LAB_001165a5:
    uVar14 = 0;
    lVar4 = 0;
  }
  else {
    lVar3 = _AMDeviceCreateCopy(param_1);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar12 = "Failed to copy device.";
      goto LAB_00116593;
    }
    cVar2 = _device_os_is_at_least(lVar3,&cf_10_0,&cf_3_0,&cf_10_0,&cf_1_0);
    if (cVar2 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      piVar13 = local_38;
      __os_log_internal(0,_md_log_log,0x10,"SPI not supported on this OS.");
      goto LAB_001165a5;
    }
    cVar2 = _device_os_is_at_least(lVar3,&cf_14_0,&cf_7_0,&cf_14_0,&cf_1_0);
    if (cVar2 == '\0') {
      local_3c = _AMDeviceSecureStartSessionedService(lVar3,&local_68);
      if (local_3c == 0) {
        local_3c = _copy_image_digests(local_68,0,param_3,&local_50,0);
        if (local_3c == 0) {
          if ((local_50 != 0) && (lVar4 = _CFArrayGetCount(), 0 < lVar4)) {
            local_60 = param_2;
            for (lVar5 = 0; lVar4 = _CFArrayGetCount(local_50), lVar5 < lVar4; lVar5 = lVar5 + 1) {
              lVar4 = _CFArrayGetValueAtIndex(local_50,lVar5);
              if (lVar4 == 0) {
LAB_00116ac8:
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Invalid type for disk image digest.");
              }
              else {
                lVar7 = _CFGetTypeID(lVar4);
                lVar8 = _CFDataGetTypeID();
                if (lVar7 != lVar8) goto LAB_00116ac8;
                if ((local_60 != 0) && (cVar2 = _CFEqual(local_60,lVar4), cVar2 != '\0')) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar12 = "The image is already mounted (%@ / %@).";
                  lVar4 = 0;
                  lVar7 = local_60;
                  goto LAB_00116b58;
                }
              }
            }
          }
          goto LAB_00116b10;
        }
        lVar5 = _AMDCopyErrorText(local_3c);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        iVar1 = local_3c;
        local_48 = _md_log_log;
        uVar6 = _AMDErrorString(local_3c);
        pcVar12 = "Failed to copy mounted disk image digests for type %@: 0x%08x (%s: %@)";
        lVar4 = local_48;
      }
      else {
        lVar5 = _AMDCopyErrorText(local_3c);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        iVar1 = local_3c;
        lVar4 = _md_log_log;
        uVar6 = _AMDErrorString(local_3c);
        pcVar12 = "Failed to start %@: 0x%08x (%s: %@)";
        param_3 = &cf_com_apple_mobile_mobile_image_mounter;
      }
      __os_log_internal(0,lVar4,0x10,pcVar12,param_3,iVar1,uVar6,lVar5);
      lVar4 = 0;
LAB_00116a48:
      uVar14 = 0;
      piVar13 = local_38;
      goto LAB_001165aa;
    }
    local_60 = param_2;
    lVar4 = _AMDeviceCopyMountedDevicesList(lVar3,&local_3c);
    if (local_3c != 0) {
      lVar5 = _AMDCopyErrorText();
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      iVar1 = local_3c;
      local_48 = _md_log_log;
      uVar6 = _AMDErrorString(local_3c);
      __os_log_internal(0,local_48,0x10,"Failed to copy mounted disk images list: 0x%08x (%s: %@)",
                        iVar1,uVar6,lVar5);
      goto LAB_00116a48;
    }
    if (lVar4 == 0) {
LAB_00116b10:
      lVar4 = 0;
LAB_00116b13:
      uVar14 = 0;
      piVar13 = local_38;
    }
    else {
      lVar5 = _CFArrayGetCount(lVar4);
      if (lVar5 < 1) goto LAB_00116b13;
      lVar5 = 0;
LAB_00116724:
      lVar7 = _CFArrayGetCount(lVar4);
      if (lVar7 <= lVar5) goto LAB_00116b13;
      lVar7 = _CFArrayGetValueAtIndex(lVar4,lVar5);
      if (lVar7 == 0) {
LAB_00116802:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Invalid type for disk image list.");
LAB_0011689a:
        lVar5 = lVar5 + 1;
        goto LAB_00116724;
      }
      lVar8 = _CFGetTypeID(lVar7);
      local_48 = lVar5;
      lVar9 = _CFDictionaryGetTypeID();
      lVar5 = local_48;
      if (lVar8 != lVar9) goto LAB_00116802;
      lVar8 = _CFDictionaryGetValue(lVar7,&cf_ImageSignature);
      if (lVar8 == 0) {
LAB_00116833:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar11 = &cf_ImageSignature;
LAB_00116893:
        __os_log_internal(0,_md_log_log,0x10,"Invalid type for %@.",pcVar11);
        goto LAB_0011689a;
      }
      lVar9 = _CFGetTypeID(lVar8);
      lVar10 = _CFDataGetTypeID();
      lVar5 = local_48;
      if (lVar9 != lVar10) goto LAB_00116833;
      pcVar11 = (cfstringStruct *)_CFDictionaryGetValue(lVar7,&cf_DiskImageType);
      if (pcVar11 == (cfstringStruct *)0x0) {
LAB_00116864:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar11 = &cf_DiskImageType;
        goto LAB_00116893;
      }
      local_58 = pcVar11;
      lVar9 = _CFGetTypeID(pcVar11);
      lVar10 = _CFStringGetTypeID();
      lVar5 = local_48;
      if (lVar9 != lVar10) goto LAB_00116864;
      if (local_60 != 0) {
        cVar2 = _CFEqual(local_60,lVar8);
        if (cVar2 != '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          piVar13 = local_38;
          __os_log_internal(0,_md_log_log,0x10,"The image is already mounted (%@/%@ / %@).",local_58
                            ,0,local_60);
          uVar14 = CONCAT71((int7)((ulong)lVar5 >> 8),1);
          goto LAB_00116b1a;
        }
        goto LAB_0011689a;
      }
      cVar2 = _CFEqual(param_3,&cf_Personalized);
      if ((cVar2 != '\0') && (cVar2 = _CFEqual(local_58,param_3), cVar2 != '\0')) {
        lVar7 = _CFDictionaryGetValue(lVar7,&cf_PersonalizedImageType);
        if (lVar7 != 0) {
          lVar8 = _CFGetTypeID(lVar7);
          lVar9 = _CFStringGetTypeID();
          lVar5 = local_48;
          if (lVar8 == lVar9) {
            cVar2 = _CFEqual(param_4,lVar7);
            if (cVar2 == '\0') goto LAB_0011689a;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar12 = "The image is already mounted (%@/%@ / %@).";
            param_3 = local_58;
            goto LAB_00116b58;
          }
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar11 = &cf_PersonalizedImageType;
        goto LAB_00116893;
      }
      cVar2 = _CFEqual(param_3,&cf_Developer);
      if ((cVar2 == '\0') || (cVar2 = _CFEqual(param_3,local_58), cVar2 == '\0')) goto LAB_0011689a;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar12 = "The image is already mounted (%@/%@ / %@).";
      param_3 = local_58;
      lVar7 = 0;
LAB_00116b58:
      __os_log_internal(0,_md_log_log,0x10,pcVar12,param_3,lVar7);
      uVar14 = CONCAT71((int7)((ulong)lVar5 >> 8),1);
      piVar13 = local_38;
    }
LAB_00116b1a:
    local_3c = 0;
  }
  lVar5 = 0;
LAB_001165aa:
  if (piVar13 != (int *)0x0) {
    *piVar13 = local_3c;
  }
  if (local_68 != 0) {
    _hangup_with_image_mounter_service(local_68,0,0);
    if (local_68 != 0) {
      _CFRelease();
    }
    local_68 = 0;
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  local_50 = 0;
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return uVar14 & 0xffffffff;
}

