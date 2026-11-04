// rea decompile_all
// name: __IXRemotePerformUninstallationAsyncHelper
// address: 0x3a1cf
// body: available
// range: 0x3a1cf-0x3a67e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __IXRemotePerformUninstallationAsyncHelper
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_queue_t pdVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  dispatch_queue_attr_t attr;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  dispatch_queue_t local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  dispatch_queue_t local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_40 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  local_48 = (*(code *)puVar1)(param_3);
  local_70 = (*(code *)puVar1)(param_4);
  lVar6 = (*(code *)puVar1)(param_5);
  iVar5 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar5 == 0) {
    lVar8 = 0;
    uVar7 = __CreateError("_IXRemotePerformUninstallationAsyncHelper",0x3b3,&cf_IXRemoteErrorDomain,
                          1,0,0,&cf_Notsupportedonhostsrunning<10_15);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
    lVar11 = local_40;
LAB_0003a414:
    if (lVar9 == 0) goto LAB_0003a42c;
    (**(code **)(lVar6 + 0x10))(lVar6,lVar9);
  }
  else {
    local_58 = lVar6;
    uVar7 = _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
    attr = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar7);
    local_38 = _dispatch_queue_create("com.apple.RemoteUninstallXPCQueue",attr);
    (*(code *)PTR__objc_release_004410a0)(attr);
    local_90 = (ulong)local_90._4_4_ << 0x20;
    local_d8 = (undefined *)0x0;
    lVar8 = _AMDeviceCopyRemoteDeviceWithError(param_1,&local_90);
    lVar11 = local_40;
    puVar2 = local_d8;
    if (lVar8 == 0) {
      uVar7 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar10 = _AMDErrorString(local_90 & 0xffffffff);
      __os_log_internal(0,uVar7,0x10,
                        "%s: Failed to get remote_device_t from AMDeviceRef using AMDeviceCopyRemoteDeviceWithError() : %s"
                        ,"_IXRemotePerformUninstallationAsyncHelper",uVar10);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar7);
      uVar7 = _AMDErrorString(local_90 & 0xffffffff);
      uVar7 = __CreateError("_IXRemotePerformUninstallationAsyncHelper",0x396,
                            &cf_IXRemoteErrorDomain,5,puVar2,0,
                            &
                            cf_Failedtogetremote_device_tfromAMDeviceRefusingAMDeviceCopyRemoteDeviceWithError____s
                            ,uVar7);
      lVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(puVar2);
      lVar11 = local_40;
LAB_0003a406:
      (*(code *)PTR__objc_release_004410a0)(local_38);
      lVar6 = local_58;
      goto LAB_0003a414;
    }
    if (local_48 != 0 && local_40 != 0) {
      pcVar12 = &
                cf_UninstalloperationhadbothbundleIDandpathspecified_onlyoneshouldbespecifieddependingonthetargetdevicetype
      ;
      uVar7 = 0x39b;
LAB_0003a2e5:
      uVar7 = __CreateError("_IXRemotePerformUninstallationAsyncHelper",uVar7,
                            &cf_IXRemoteErrorDomain,2,0,0,pcVar12);
      lVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
      goto LAB_0003a406;
    }
    cVar4 = __IsEmbeddedRemoteDevice(lVar8);
    if (cVar4 == '\0') {
      if (local_48 == 0) {
        pcVar12 = &cf_MissinguninstallpathwhileperforminguninstallwhentargetingmacOS;
        uVar7 = 0x3a6;
        goto LAB_0003a2e5;
      }
    }
    else if (lVar11 == 0) {
      pcVar12 = &cf_MissingbundleIDwhileperforminguninstallwhentargetinganembeddedplatform;
      uVar7 = 0x3a1;
      goto LAB_0003a2e5;
    }
    local_98 = 0;
    local_60 = lVar8;
    uVar7 = __RemoteInstallCoordinationServiceForDevice(lVar8,&local_98);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar7);
    lVar9 = (*(code *)PTR__objc_retain_004410a8)(local_98);
    pdVar3 = local_38;
    lVar8 = local_60;
    local_68 = lVar6;
    if (lVar6 == 0) goto LAB_0003a406;
    uVar7 = _xpc_remote_connection_create_with_remote_service(lVar6,local_38,0);
    (*(code *)PTR__objc_release_004410a0)(pdVar3);
    uVar7 = (*(code *)puVar1)(uVar7);
    local_50 = (*(code *)puVar1)(local_70);
    local_38 = (dispatch_queue_t)(*(code *)puVar1)(local_58);
    local_90 = 0;
    local_80 = 0x2020000000;
    local_78 = 0;
    local_d8 = PTR___NSConcreteStackBlock_004412a8;
    local_d0 = 0xc2000000;
    local_c8 = ____IXHandleConnectionForUninstallMessagesFromRemoteService_block_invoke;
    local_c0 = &___block_descriptor_64_e8_32s40s48bs56r_e33_v16__0__NSObject<OS_xpc_object>_8l;
    local_a0 = &local_90;
    local_88 = &local_90;
    local_b8 = (*(code *)puVar1)(local_50);
    local_50 = local_b8;
    local_a8 = (dispatch_queue_t)(*(code *)puVar1)(local_38);
    local_38 = local_a8;
    uVar7 = (*(code *)puVar1)(uVar7);
    local_b0 = uVar7;
    _xpc_remote_connection_set_event_handler(uVar7,&local_d8);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(local_b0);
    (*(code *)puVar1)(local_a8);
    (*(code *)puVar1)(local_b8);
    __Block_object_dispose(&local_90,8);
    (*(code *)puVar1)(local_38);
    (*(code *)puVar1)(local_50);
    (*(code *)puVar1)(uVar7);
    _xpc_remote_connection_activate(uVar7);
    lVar11 = local_40;
    uVar10 = _IXCreateRemoteUninstallRequest(local_40,local_48);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    _xpc_remote_connection_send_message(uVar7,uVar10);
    (*(code *)puVar1)(uVar10);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar1)(local_68);
    lVar8 = local_60;
    lVar6 = local_58;
  }
  (*(code *)PTR__objc_release_004410a0)(lVar9);
LAB_0003a42c:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar8);
  (*(code *)puVar1)(lVar6);
  (*(code *)puVar1)(local_70);
  (*(code *)puVar1)(local_48);
  (*(code *)puVar1)(lVar11);
  return;
}

