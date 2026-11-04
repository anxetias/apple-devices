// rea decompile_all
// name: _IXRemoteRevertStashAsync
// address: 0x39c98
// body: available
// range: 0x39c98-0x3a0a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXRemoteRevertStashAsync
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  dispatch_queue_attr_t attr;
  dispatch_queue_t pdVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_48 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  local_38 = (*(code *)puVar1)(param_4);
  uVar3 = (*(code *)puVar1)(param_5);
  local_50 = 0;
  iVar2 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  local_40 = uVar3;
  if (iVar2 == 0) {
    uVar8 = __CreateError("IXRemoteRevertStashAsync",0x344,&cf_IXRemoteErrorDomain,1,0,0,
                          &cf_Notsupportedonhostsrunning<10_15);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar8);
LAB_00039ff6:
    uVar9 = local_38;
    uVar8 = local_48;
    puVar1 = PTR__objc_retain_004410a8;
    if (lVar7 == 0) goto LAB_0003a07c;
    local_100 = PTR___NSConcreteStackBlock_004412a8;
    local_f8 = 0xc2000000;
    local_f0 = ___IXRemoteRevertStashAsync_block_invoke;
    local_e8 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
    local_d8 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
    local_e0 = lVar7;
    lVar7 = (*(code *)puVar1)(lVar7);
    _dispatch_async(uVar9,&local_100);
    (*(code *)PTR__objc_release_004410a0)(local_e0);
    lVar5 = local_d8;
  }
  else {
    uVar3 = _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
    attr = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar3);
    pdVar4 = _dispatch_queue_create("com.apple.RemoteRevertStashXPCQueue",attr);
    (*(code *)PTR__objc_release_004410a0)(attr);
    local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
    lVar5 = _AMDeviceCopyRemoteDeviceWithError(param_1,&local_b0,&local_50);
    uVar3 = local_50;
    if (lVar5 == 0) {
      uVar8 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar9 = _AMDErrorString((ulong)local_b0 & 0xffffffff);
      __os_log_internal(0,uVar8,0x10,
                        "%s: Failed to get remote_device_t from AMDeviceRef using AMDeviceCopyRemoteDeviceWithError() : %s"
                        ,"IXRemoteRevertStashAsync",uVar9);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar8);
      uVar8 = _AMDErrorString((ulong)local_b0 & 0xffffffff);
      uVar8 = __CreateError("IXRemoteRevertStashAsync",0x339,&cf_IXRemoteErrorDomain,5,uVar3,0,
                            &
                            cf_Failedtogetremote_device_tfromAMDeviceRefusingAMDeviceCopyRemoteDeviceWithError____s
                            ,uVar8);
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar1)(uVar3);
LAB_00039fdf:
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(lVar5);
      (*(code *)puVar1)(pdVar4);
      uVar3 = local_40;
      goto LAB_00039ff6;
    }
    local_70 = 0;
    uVar3 = __RemoteInstallCoordinationServiceForDevice(lVar5,&local_70);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar3);
    lVar7 = (*(code *)PTR__objc_retain_004410a8)(local_70);
    if (lVar6 == 0) goto LAB_00039fdf;
    local_60 = lVar6;
    uVar3 = _xpc_remote_connection_create_with_remote_service(lVar6,pdVar4,0);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar5);
    (*(code *)puVar1)(pdVar4);
    puVar1 = PTR__objc_retain_004410a8;
    uVar3 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
    uVar8 = (*(code *)puVar1)(local_38);
    local_68 = (*(code *)puVar1)(local_40);
    local_c8 = &local_d0;
    local_d0 = 0;
    local_c0 = 0x2020000000;
    local_b8 = 0;
    local_b0 = PTR___NSConcreteStackBlock_004412a8;
    local_a8 = 0xc2000000;
    local_a0 = ____IXHandleConnectionForRevertStashMessage_block_invoke;
    local_98 = &___block_descriptor_64_e8_32s40s48bs56r_e33_v16__0__NSObject<OS_xpc_object>_8l;
    local_78 = local_c8;
    local_90 = (*(code *)puVar1)(uVar8);
    local_58 = local_90;
    uVar8 = (*(code *)puVar1)(local_68);
    local_80 = uVar8;
    uVar3 = (*(code *)puVar1)(uVar3);
    local_88 = uVar3;
    _xpc_remote_connection_set_event_handler(uVar3,&local_b0);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(local_88);
    (*(code *)puVar1)(local_80);
    (*(code *)puVar1)(local_90);
    __Block_object_dispose(&local_d0,8);
    (*(code *)puVar1)(uVar8);
    (*(code *)puVar1)(local_58);
    (*(code *)puVar1)(uVar3);
    _xpc_remote_connection_activate(uVar3);
    uVar8 = local_48;
    uVar9 = _IXCreateRemoteRevertStashRequest(local_48);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    _xpc_remote_connection_send_message(uVar3,uVar9);
    (*(code *)puVar1)(uVar9);
    (*(code *)puVar1)(uVar3);
    lVar5 = local_60;
    uVar9 = local_38;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  (*(code *)puVar1)(lVar7);
  uVar3 = local_40;
LAB_0003a07c:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(uVar9);
  (*(code *)puVar1)(uVar8);
  return;
}

