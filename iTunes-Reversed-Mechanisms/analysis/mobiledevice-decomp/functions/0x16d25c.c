// rea decompile_all
// name: __AMDRemotePairingSupportedOnDevice
// address: 0x16d25c
// body: available
// range: 0x16d25c-0x16d930 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __AMDRemotePairingSupportedOnDevice(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  int local_34;
  
  local_34 = -0x17ffffff;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid argument.";
LAB_0016d33d:
    uVar2 = 0;
    __os_log_internal(0,_md_log_log,0x10,pcVar11);
  }
  else {
    lVar4 = _AMDeviceCreateCopy();
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar11 = "Failed to allocate device handle.";
      goto LAB_0016d33d;
    }
    if (*(int *)(lVar4 + 0x30) == 0) {
      uVar6 = _objc_alloc(&_OBJC_CLASS___NSRegularExpression);
      lVar8 = (*(code *)PTR__objc_msgSend_00441098)
                        (uVar6,"initWithPattern:options:error:",&cf_supportsRP____d___,0,0);
      if (lVar8 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to create regex pattern.");
        goto LAB_0016d516;
      }
      uVar6 = _objc_alloc(&_OBJC_CLASS___NSNumberFormatter);
      local_48 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"init");
      if (local_48 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to create number formatter.");
        local_48 = 0;
        goto LAB_0016d52b;
      }
      if (*(long *)(lVar4 + 0x88) == 0) {
        local_34 = -0x17fffff1;
        uVar12 = 0xe800000f;
LAB_0016d6aa:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar6 = _md_log_log;
        uVar5 = _AMDErrorString(uVar12);
        __os_log_internal(0,uVar6,0x10,"Failed to read bonjour service name: 0x%08x (%s)",uVar12,
                          uVar5);
        goto LAB_0016d52b;
      }
      local_58 = _CFRetain();
      puVar1 = PTR__objc_msgSend_00441098;
      local_34 = 0;
      if (local_58 == 0) {
        uVar12 = 0;
        goto LAB_0016d6aa;
      }
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_58,"length");
      uVar6 = (*(code *)puVar1)(lVar8,"firstMatchInString:options:range:",local_58,0,0,uVar6);
      local_50 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
      if (local_50 == 0) {
        local_50 = 0;
LAB_0016d716:
        local_40 = 0;
        goto LAB_0016d533;
      }
      uVar7 = (*(code *)PTR__objc_msgSend_00441098)(local_50,"numberOfRanges");
      if ((uVar7 < 2) ||
         (lVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_50,"rangeAtIndex:",1),
         lVar9 == 0x7fffffffffffffff)) goto LAB_0016d716;
      auVar13 = (*(code *)puVar1)(local_50,"rangeAtIndex:",1);
      uVar6 = (*(code *)puVar1)(local_58,"substringWithRange:",auVar13._0_8_,auVar13._8_8_);
      local_40 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
      if (local_40 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to extract protocol version string.");
        goto LAB_0016d716;
      }
      (*(code *)puVar1)(local_48,"setNumberStyle:",1);
      uVar6 = (*(code *)puVar1)(local_48,"numberFromString:",local_40);
      lVar9 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
      if (lVar9 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to parse protocol version number.");
        goto LAB_0016d533;
      }
      uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithInt:",0x12);
      lVar10 = (*(code *)puVar1)(lVar9,"compare:",uVar6);
      uVar2 = lVar10 != -1;
LAB_0016d535:
      _CFRelease(lVar4);
      goto LAB_0016d54d;
    }
    iVar3 = _AMDeviceConnect(lVar4);
    local_34 = iVar3;
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar6 = _md_log_log;
      uVar5 = _AMDErrorString(iVar3);
      pcVar11 = "Failed to connect to device: 0x%x (%s)";
LAB_0016d2e6:
      __os_log_internal(0,uVar6,0x10,pcVar11,iVar3,uVar5);
LAB_0016d516:
      local_48 = 0;
      lVar8 = 0;
LAB_0016d52b:
      local_50 = 0;
      local_40 = 0;
      local_58 = 0;
LAB_0016d533:
      lVar9 = 0;
      uVar2 = false;
      goto LAB_0016d535;
    }
    lVar8 = _AMDeviceCopyValueWithError(lVar4,0,&cf_ProductVersion,&local_34);
    if (lVar8 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      iVar3 = local_34;
      uVar6 = _md_log_log;
      uVar5 = _AMDErrorString(local_34);
      pcVar11 = "Failed to read product version: 0x%08x (%s)";
      goto LAB_0016d2e6;
    }
    lVar9 = _AMDeviceCopyValueWithError(lVar4,0,&cf_ProductName,&local_34);
    if (lVar9 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      iVar3 = local_34;
      uVar6 = _md_log_log;
      uVar5 = _AMDErrorString(local_34);
      uVar2 = 0;
      __os_log_internal(0,uVar6,0x10,"Failed to read product name: 0x%08x (%s)",iVar3,uVar5);
    }
    else {
      uVar2 = __AMDRemotePairingSupportedOnPlatform(lVar8,lVar9);
    }
    _CFRelease(lVar4);
    _CFRelease(lVar8);
    if (lVar9 != 0) {
      _CFRelease(lVar9);
    }
  }
  local_58 = 0;
  lVar8 = 0;
  local_48 = 0;
  lVar9 = 0;
  local_40 = 0;
  local_50 = 0;
LAB_0016d54d:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_58);
  (*(code *)puVar1)(lVar8);
  (*(code *)puVar1)(local_50);
  (*(code *)puVar1)(local_40);
  (*(code *)puVar1)(lVar9);
  (*(code *)puVar1)(local_48);
  return uVar2;
}

