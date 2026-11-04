// rea decompile_all
// name: __AMDeviceCopyRemoteDeviceWithError
// address: 0x13cf0d
// body: available
// range: 0x13cf0d-0x13d2b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMDeviceCopyRemoteDeviceWithError(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  dispatch_object_t object;
  dispatch_queue_attr_t attr;
  dispatch_object_t object_00;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *local_a8;
  dispatch_object_t local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  long local_40;
  undefined8 *local_38;
  
  local_80 = 0;
  local_70 = 0x3052000000;
  local_68 = ___Block_byref_object_copy__1534;
  local_60 = ___Block_byref_object_dispose__1535;
  local_58 = 0;
  local_78 = &local_80;
  local_50 = param_2;
  local_38 = param_3;
  if (param_1 == 0) {
    pcVar5 = &cf_Invalidargument_;
    uVar4 = 0x270;
    goto LAB_0013d116;
  }
  iVar1 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar1 == 0) {
    uVar6 = 0xe8000113;
    uVar4 = _createAndLogError("_AMDeviceCopyRemoteDeviceWithError",0x2c3,0xe8000113,1,0,
                               &cf_HostOSistoooldtosupportcommunicationoverRemoteServiceDiscovery_);
LAB_0013d13a:
    object._os_obj = (_os_object_s *)0x0;
    object_00._os_obj = (_os_object_s *)0x0;
    lVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0xf0) == 0) {
      pcVar5 = &cf_ThisdeviceisnotbackedbyRSD_;
      uVar4 = 0x279;
LAB_0013d116:
      uVar6 = 0xe8000007;
      uVar4 = _createAndLogError("_AMDeviceCopyRemoteDeviceWithError",uVar4,0xe8000007,1,0,pcVar5);
      goto LAB_0013d13a;
    }
    lVar2 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(long *)(param_1 + 0xf0),"copyMDRemoteServiceDevice");
    if (lVar2 == 0) {
      pcVar5 = &cf_ThereisnoremotedeviceavailableforthisAMDeviceRef_;
      uVar4 = 0x280;
      goto LAB_0013d116;
    }
    lVar7 = *(long *)(lVar2 + 0x18);
    if (lVar7 == 0) {
      uVar6 = 0xe80000f1;
      uVar4 = _createAndLogError("_AMDeviceCopyRemoteDeviceWithError",0x287,0xe80000f1,1,0,
                                 &cf_FailedtoreadUUID_);
LAB_0013d23d:
      object._os_obj = (_os_object_s *)0x0;
      object_00._os_obj = (_os_object_s *)0x0;
    }
    else {
      auVar8 = _CFUUIDGetUUIDBytes();
      local_48 = auVar8._8_8_;
      object._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
      if (object._os_obj == (_os_object_s *)0x0) {
        uVar6 = 0xe8000003;
        uVar4 = _createAndLogError("_AMDeviceCopyRemoteDeviceWithError",0x290,0xe8000003,1,0,
                                   &cf_Failedtocreatesemaphore_);
        goto LAB_0013d23d;
      }
      local_40 = lVar7;
      attr = (dispatch_queue_attr_t)_dispatch_queue_attr_make_with_autorelease_frequency(0,1);
      object_00._os_obj =
           (_os_object_s *)
           _dispatch_queue_create("com.apple.mobiledevice.browse_remote_devices",attr);
      if (object_00._os_obj != (_os_object_s *)0x0) {
        local_c0 = PTR___NSConcreteStackBlock_004412a8;
        local_b8 = 0xc2000000;
        local_b0 = ____AMDeviceCopyRemoteDeviceWithError_block_invoke;
        local_a8 = &___block_descriptor_64_e8_32o40r_e29_v20__0__OS_remote_device_8B16l;
        local_88 = local_48;
        local_a0._os_obj = object._os_obj;
        local_98 = &local_80;
        local_90 = auVar8._0_8_;
        _remote_device_browse_present(10,object_00._os_obj);
        _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,0xffffffffffffffff);
        lVar7 = local_78[5];
        if (lVar7 == 0) {
          _remote_device_browse_present(0xffff,object_00._os_obj,&local_c0);
          _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,0xffffffffffffffff);
          lVar7 = local_78[5];
          if (lVar7 == 0) {
            uVar6 = 0xe8000112;
            uVar4 = _createAndLogError("_AMDeviceCopyRemoteDeviceWithError",0x2b9,0xe8000112,1,0,
                                       &cf_FailedtoconnecttoremotedevicewithUUID___,local_40);
            goto LAB_0013d143;
          }
        }
        local_78[5] = 0;
        uVar4 = 0;
        goto LAB_0013d169;
      }
      uVar6 = 0xe8000003;
      object_00._os_obj = (_os_object_s *)0x0;
      uVar4 = _createAndLogError("_AMDeviceCopyRemoteDeviceWithError",0x297,0xe8000003,1,0,
                                 &cf_Failedtocreatequeue_);
    }
  }
LAB_0013d143:
  if (local_38 != (undefined8 *)0x0) {
    uVar3 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
    *local_38 = uVar3;
  }
  if (local_50 != (undefined4 *)0x0) {
    *local_50 = uVar6;
  }
  lVar7 = 0;
LAB_0013d169:
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  if (local_78[5] != 0) {
    (*(code *)PTR__objc_release_004410a0)();
  }
  local_78[5] = 0;
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (object._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object);
  }
  if (object_00._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object_00);
  }
  __Block_object_dispose(&local_80,8);
  return lVar7;
}

