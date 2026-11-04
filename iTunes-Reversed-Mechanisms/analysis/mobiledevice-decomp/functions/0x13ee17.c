// rea decompile_all
// name: MDRPConnectableDevice::supportsMobileDeviceIntegration
// address: 0x13ee17
// body: available
// range: 0x13ee17-0x13f323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

bool MDRPConnectableDevice::supportsMobileDeviceIntegration(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  
  if (__supportsMobileDeviceIntegration == 0) {
    lVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"rpDevice");
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar6 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar13 = "Invalid input.";
LAB_0013f0ee:
      __os_log_internal(0,_md_log_log,0x10,pcVar13);
      goto LAB_0013f0fc;
    }
    uVar12 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"rpDevice");
    uVar4 = (*(code *)puVar1)(uVar12,"connectionFlags");
    if ((uVar4 >> 9 & 1) != 0) {
      uVar12 = (*(code *)puVar1)(param_1,"rpDevice");
      uVar7 = (*(code *)puVar1)(uVar12,"connectionFlags");
      if ((uVar7 & 4) == 0) {
        uVar12 = (*(code *)puVar1)(param_1,"rpDevice");
        uVar4 = (*(code *)puVar1)(uVar12,"connectionFlags");
        if ((uVar4 >> 8 & 1) == 0) goto LAB_0013f0fc;
      }
    }
    uVar12 = (*(code *)puVar1)(param_1,"rpDevice");
    cVar2 = (*(code *)puVar1)(uVar12,"respondsToSelector:","wireProtocolVersion");
    if (cVar2 != '\0') {
      uVar12 = (*(code *)puVar1)(param_1,"rpDevice");
      lVar6 = (*(code *)puVar1)(uVar12,"wireProtocolVersion");
      if (lVar6 != 0) {
        uVar12 = (*(code *)puVar1)(param_1,"rpDevice");
        uVar12 = (*(code *)puVar1)(uVar12,"wireProtocolVersion");
        uVar4 = (*(code *)puVar1)(uVar12,"unsignedIntValue");
        uVar12 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithInt:",0x11 < uVar4);
        __supportsMobileDeviceIntegration = (*(code *)PTR__objc_retain_004410a8)(uVar12);
        cVar2 = (*(code *)puVar1)(__supportsMobileDeviceIntegration,"boolValue");
        if (cVar2 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar12 = _md_log_log;
          uVar8 = (*(code *)puVar1)(param_1,"rpDevice");
          uVar8 = (*(code *)puVar1)(uVar8,"wireProtocolVersion");
          __os_log_internal(0,uVar12,0x10,
                            "Device wire protocol version (%@) is below the minimum required (%d)",
                            uVar8,0x12);
        }
        goto LAB_0013f0fc;
      }
    }
    uVar12 = (*(code *)puVar1)(param_1,"rpDevice");
    uVar12 = (*(code *)puVar1)(uVar12,"deviceKVS");
    lVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar12);
    if (lVar6 == 0) {
      uVar12 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
      __supportsMobileDeviceIntegration = (*(code *)PTR__objc_retain_004410a8)(uVar12);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar13 = "Invalid device key-value store.";
      goto LAB_0013f0ee;
    }
    uVar12 = (*(code *)PTR__objc_msgSend_00441098)
                       (lVar6,"getValueWithDomain:key:",0,&cf_ProductVersion);
    lVar9 = (*(code *)PTR__objc_retain_004410a8)(uVar12);
    if (lVar9 != 0) {
      uVar12 = (*(code *)PTR__objc_msgSend_00441098)
                         (lVar6,"getValueWithDomain:key:",0,&cf_ProductName);
      lVar10 = (*(code *)PTR__objc_retain_004410a8)(uVar12);
      if (lVar10 == 0) {
        uVar12 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
        __supportsMobileDeviceIntegration = (*(code *)PTR__objc_retain_004410a8)(uVar12);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar13 = "Invalid product name.";
        lVar10 = 0;
      }
      else {
        uVar12 = (*(code *)puVar1)(param_1,"rpDevice");
        lVar11 = (*(code *)puVar1)(uVar12,"udid");
        if (lVar11 != 0) {
          uVar3 = __AMDRemotePairingSupportedOnPlatform(lVar9,lVar10);
          uVar12 = (*(code *)PTR__objc_msgSend_00441098)
                             (&_OBJC_CLASS___NSNumber,"numberWithBool:",uVar3);
          __supportsMobileDeviceIntegration = (*(code *)PTR__objc_retain_004410a8)(uVar12);
          goto LAB_0013f102;
        }
        uVar12 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
        __supportsMobileDeviceIntegration = (*(code *)PTR__objc_retain_004410a8)(uVar12);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar13 = "Invalid UDID.";
      }
      __os_log_internal(0,_md_log_log,0x10,pcVar13);
      goto LAB_0013f102;
    }
    uVar12 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    __supportsMobileDeviceIntegration = (*(code *)PTR__objc_retain_004410a8)(uVar12);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid product version.");
  }
  else {
LAB_0013f0fc:
    lVar6 = 0;
  }
  lVar9 = 0;
  lVar10 = 0;
LAB_0013f102:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar6);
  (*(code *)puVar1)(lVar9);
  (*(code *)puVar1)(lVar10);
  if (__supportsMobileDeviceIntegration == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar12 = __os_log_internal(0,_md_log_log,0x10,
                               "Can\'t assess support for MobileDevice integration. Assuming supported for now."
                              );
    bVar5 = (bool)CONCAT71((int7)((ulong)uVar12 >> 8),1);
  }
  else {
    uVar12 = (*(code *)PTR__objc_msgSend_00441098)(__supportsMobileDeviceIntegration,"boolValue");
    bVar5 = (bool)CONCAT71((int7)((ulong)uVar12 >> 8),(char)uVar12 != '\0');
  }
  return bVar5;
}

