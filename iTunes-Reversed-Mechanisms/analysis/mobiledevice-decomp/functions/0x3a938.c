// rea decompile_all
// name: __IXQueryInstalledInfoForDevice
// address: 0x3a938
// body: available
// range: 0x3a938-0x3ac83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __IXQueryInstalledInfoForDevice
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  dispatch_queue_attr_t attr;
  dispatch_queue_t pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_130;
  undefined8 local_128;
  code *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  dispatch_queue_t local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = param_5;
  uVar3 = (*(code *)PTR__objc_retain_004410a8)();
  local_40 = (*(code *)puVar1)(param_2);
  local_58 = (*(code *)puVar1)(param_3);
  local_50 = (*(code *)puVar1)(param_4);
  local_48 = (*(code *)puVar1)(local_38);
  local_c0 = 0;
  local_b0 = 0x2020000000;
  local_a8 = 0;
  local_f0 = 0;
  local_e0 = 0x3032000000;
  local_d8 = ___Block_byref_object_copy_;
  local_d0 = ___Block_byref_object_dispose_;
  local_c8 = 0;
  local_a0 = 0;
  local_90 = 0x3032000000;
  local_88 = ___Block_byref_object_copy_;
  local_80 = ___Block_byref_object_dispose_;
  local_78 = 0;
  local_70 = 0;
  local_e8 = &local_f0;
  local_b8 = &local_c0;
  local_98 = &local_a0;
  local_68 = uVar3;
  uVar3 = __RemoteInstallCoordinationServiceForDevice(uVar3);
  local_38 = _objc_retainAutoreleasedReturnValue(uVar3);
  _objc_storeStrong(&local_78,local_70);
  if (local_38 != 0) {
    iVar2 = ___isPlatformVersionAtLeast(1,10,0xf,0);
    if (iVar2 != 0) {
      uVar3 = _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
      attr = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar3);
      pdVar4 = _dispatch_queue_create("com.apple.RemoteInstallQuery",attr);
      (*(code *)PTR__objc_release_004410a0)(attr);
      local_60 = pdVar4;
      uVar3 = _xpc_remote_connection_create_with_remote_service(local_38,pdVar4,0);
      local_130 = PTR___NSConcreteStackBlock_004412a8;
      local_128 = 0xc2000000;
      local_120 = ____IXQueryInstalledInfoForDevice_block_invoke;
      local_118 = &___block_descriptor_64_e8_32bs40r48r56r_e33_v16__0__NSObject<OS_xpc_object>_8l;
      local_108 = &local_c0;
      local_100 = &local_a0;
      local_f8 = &local_f0;
      local_110 = (*(code *)PTR__objc_retain_004410a8)(local_48);
      _xpc_remote_connection_set_event_handler(uVar3,&local_130);
      _xpc_remote_connection_activate(uVar3);
      uVar5 = _IXCreateRemoteQueryRequest(local_40,local_58,local_50);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      __os_log_internal(0,uVar6,2,"%s: Sending query request application with bundleID %@",
                        "_IXQueryInstalledInfoForDevice",local_40);
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      _xpc_remote_connection_send_message(uVar3,uVar5);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(local_110);
      (*(code *)puVar1)(uVar5);
      (*(code *)puVar1)(local_60);
      (*(code *)puVar1)(uVar3);
      goto LAB_0003abfa;
    }
    uVar3 = __CreateError("_IXQueryInstalledInfoForDevice",0x143,&cf_IXRemoteErrorDomain,1,0,0,
                          &cf_Notsupportedonhostsrunning<10_15);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = local_98[5];
    local_98[5] = uVar5;
    (*(code *)PTR__objc_release_004410a0)(uVar3);
  }
  (**(code **)(local_48 + 0x10))(local_48,0,local_98[5]);
LAB_0003abfa:
  __Block_object_dispose(&local_a0,8);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_78);
  __Block_object_dispose(&local_f0,8);
  (*(code *)puVar1)(local_c8);
  __Block_object_dispose(&local_c0,8);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(local_48);
  (*(code *)puVar1)(local_50);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(local_40);
  (*(code *)puVar1)(local_68);
  return;
}

