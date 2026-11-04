// rea decompile_all
// name: MDRemotePairingBrowser::deviceDiscovered:
// address: 0x1401fa
// body: available
// range: 0x1401fa-0x140668 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

bool MDRemotePairingBrowser::deviceDiscovered_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  dispatch_queue_attr_t attr;
  dispatch_object_t object;
  dispatch_group_t group;
  char *pcVar4;
  bool bVar5;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  ID local_38;
  
  local_60 = &local_68;
  local_68 = 0;
  local_58 = 0x2020000000;
  local_50 = 0;
  local_88 = 0;
  local_78 = 0x2020000000;
  local_70 = 0;
  local_a8 = 0;
  local_98 = 0x2020000000;
  local_90 = 1;
  local_a0 = &local_a8;
  local_80 = &local_88;
  if (param_3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Invalid argument.";
LAB_00140538:
    __os_log_internal(0,_md_log_log,0x10,pcVar4);
    object._os_obj = (_os_object_s *)0x0;
  }
  else {
    local_38 = param_1;
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"rpDevice");
    cVar1 = (*(code *)PTR__objc_msgSend_00441098)
                      (&objc::class_t::MDRemotePairingBrowser,"deviceLacksLockdown:",uVar2);
    if (cVar1 != '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar4 = "Ignoring device that does not support lockdown.";
      goto LAB_00140538;
    }
    cVar1 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"supportsMobileDeviceIntegration");
    if (cVar1 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar4 = "Ignoring device that doesn\'t support MobileDevice-over-RemoteXPC";
      goto LAB_00140538;
    }
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"rpDevice");
    (*(code *)PTR__objc_msgSend_00441098)(uVar2,"udid");
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSString,"stringWithFormat:",
                       &cf_com_apple_mobiledevice_remotepairing___);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar4 = "Failed to allocate queue name.";
      goto LAB_00140538;
    }
    pcVar4 = (char *)(*(code *)PTR__objc_msgSend_00441098)(lVar3,"UTF8String");
    attr = (dispatch_queue_attr_t)_dispatch_queue_attr_make_with_autorelease_frequency(0,1);
    object._os_obj = (_os_object_s *)_dispatch_queue_create(pcVar4,attr);
    if (object._os_obj == (_os_object_s *)0x0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar4 = "Failed to allocate queue.";
      goto LAB_00140538;
    }
    uVar2 = _objc_alloc(&objc::class_t::MDRemotePairingAMDeviceSet);
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"initWithMDRPDevice:",param_3);
    if (lVar3 != 0) {
      uVar2 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"discoveredDeviceSets");
      (*(code *)PTR__objc_msgSend_00441098)(uVar2,"addObject:",lVar3);
      local_60[3] = 0;
      local_80[3] = 0;
      group = (dispatch_group_t)
              (*(code *)PTR__objc_msgSend_00441098)(local_38,"browseCurrentCompleteGroup");
      _dispatch_group_enter(group);
      _objc_initWeak(local_48,lVar3);
      _objc_initWeak(local_40,local_38);
      local_38 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"rpDevice");
      local_f0 = PTR___NSConcreteStackBlock_004412a8;
      local_e8 = 0xc2000000;
      local_e0 = ___43__MDRemotePairingBrowser_deviceDiscovered___block_invoke;
      local_d8 = &___block_descriptor_72_e8_32r40r48r56w64w_e22_v16__0__NSDictionary_8l;
      _objc_copyWeak(local_b8,local_40);
      _objc_copyWeak(local_b0,local_48);
      local_d0 = &local_68;
      local_c8 = &local_a8;
      local_c0 = &local_88;
      (*(code *)PTR__objc_msgSend_00441098)
                (local_38,"registerForStateChangesOnQueue:withHandler:",object._os_obj,&local_f0);
      _objc_destroyWeak(local_b0);
      _objc_destroyWeak(local_b8);
      _objc_destroyWeak(local_40);
      _objc_destroyWeak(local_48);
      bVar5 = (bool)CONCAT71((int7)((ulong)local_b0 >> 8),1);
      goto LAB_0014054c;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to allocate device set.");
  }
  bVar5 = 0;
  lVar3 = 0;
LAB_0014054c:
  (*(code *)PTR__objc_release_004410a0)(lVar3);
  if (object._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object);
  }
  __Block_object_dispose(&local_a8,8);
  __Block_object_dispose(&local_88,8);
  __Block_object_dispose(&local_68,8);
  return bVar5;
}

