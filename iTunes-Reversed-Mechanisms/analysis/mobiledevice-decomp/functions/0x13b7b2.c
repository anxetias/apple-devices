// rea decompile_all
// name: __AMDeviceCreateWithRemoteDeviceWithError
// address: 0x13b7b2
// body: available
// range: 0x13b7b2-0x13c107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13c103 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMDeviceCreateWithRemoteDeviceWithError(long param_1,int *param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  dispatch_object_t object;
  dispatch_object_t dVar8;
  dispatch_time_t dVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined4 local_c8;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  long *local_78;
  int *local_70;
  long local_68;
  ulong local_60;
  dispatch_object_t local_58;
  long local_50;
  uchar local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_78 = param_3;
  local_70 = param_2;
  if (param_1 == 0) {
    lVar10 = 0;
    lVar13 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceWithError",0x192,0xe8000112,1,0,
                                &cf_Invalidargument_);
    iVar4 = -0x17fffff9;
    goto LAB_0013bb75;
  }
  pcVar7 = (char *)0x0;
  iVar4 = ___isPlatformVersionAtLeast(1,10,0xd,0);
  if (iVar4 == 0) {
    local_60 = CONCAT44(local_60._4_4_,5);
  }
  else {
    pcVar7 = (char *)_remote_device_copy_product_type(param_1);
    if (pcVar7 != (char *)0x0) {
      iVar4 = _strcmp(pcVar7,"iFPGA");
      if (iVar4 == 0) {
        local_60 = CONCAT44(local_60._4_4_,0x78);
        goto LAB_0013b88f;
      }
    }
    iVar4 = _remote_device_get_type(param_1);
    local_60 = CONCAT44(local_60._4_4_,(uint)(iVar4 == 10) * 5 + 5);
  }
LAB_0013b88f:
  _free(pcVar7);
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x2020000000;
  local_80 = 0;
  local_50 = _remote_device_get_name();
  object._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
  if (object._os_obj == (_os_object_s *)0x0) {
    __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to create semaphore");
  }
  else {
    dVar8._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
    if (dVar8._os_obj == (_os_object_s *)0x0) {
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to create semaphore");
    }
    else {
      if (_connectDeviceQueue_onceToken != -1) {
        _dispatch_once(&_connectDeviceQueue_onceToken,&___block_literal_global_1739);
      }
      _remote_device_set_connected_callback(param_1,_connectDeviceQueue_queue);
      uVar2 = local_60;
      lVar13 = (local_60 & 0xffffffff) * 1000000000;
      local_58._os_obj = dVar8._os_obj;
      dVar9 = _dispatch_time(0,lVar13);
      lVar10 = _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,dVar9);
      if (lVar10 == 0) {
        if (_connectDeviceQueue_onceToken != -1) {
          _dispatch_once(&_connectDeviceQueue_onceToken,&___block_literal_global_1739);
        }
        dVar8 = local_58;
        _remote_device_heartbeat(param_1,_connectDeviceQueue_queue);
        dVar9 = _dispatch_time(0,lVar13);
        lVar10 = _dispatch_semaphore_wait((dispatch_semaphore_t)dVar8._os_obj,dVar9);
        if (lVar10 == 0) {
          if (*(char *)(local_90 + 3) != '\0') {
            _dispatch_release(object);
            _dispatch_release(dVar8);
            __Block_object_dispose(&local_98,8);
            _remote_device_copy_uuid(param_1,local_48);
            iVar4 = _uuid_is_null(local_48);
            if (iVar4 == 0) {
              iVar4 = ___isPlatformVersionAtLeast(1,10,0xd,0);
              if (iVar4 != 0) {
                iVar4 = _remote_device_get_type(param_1);
                iVar5 = ___isPlatformVersionAtLeast(1,10,0xf,0);
                if (iVar5 == 0) {
                  iVar4 = -0x17fffeed;
                  uVar11 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceUUIDAndTypeWithError",
                                              0x242,0xe8000113,1,0,
                                              &
                                              cf_HostOSistoooldtosupportcommunicationoverRemoteServiceDiscovery_
                                             );
LAB_0013bcb1:
                  local_50 = 0;
LAB_0013bcbc:
                  lVar13 = (*(code *)PTR__objc_retain_004410a8)(uVar11);
                  lVar10 = 0;
                  lVar12 = 0;
                  local_60 = 0;
                  local_58._os_obj = (_os_object_s *)0x0;
                }
                else {
                  if (_initializeSupportInterface_onceToken != -1) {
                    _dispatch_once(&_initializeSupportInterface_onceToken,
                                   &___block_literal_global_141);
                  }
                  iVar5 = __InitializeMobileDevice();
                  if (iVar5 != 0) {
                    iVar4 = -0x17ffff0f;
                    uVar11 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceUUIDAndTypeWithError"
                                                ,0x1d6,0xe80000f1,1,0,
                                                &cf_FailedtoinitializeMobileDevice_);
                    goto LAB_0013bcb1;
                  }
                  lVar10 = __CreateEmptyDeviceRef();
                  if (lVar10 == 0) {
                    iVar4 = -0x17fffffd;
                    uVar11 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceUUIDAndTypeWithError"
                                                ,0x1dd,0xe8000003,1,0,&cf_Failedtoallocatedevice_);
                    goto LAB_0013bcb1;
                  }
                  local_50 = lVar10;
                  local_68 = _MDRemoteServiceDeviceFromRemoteDeviceUUIDAndType(local_48,iVar4);
                  if (local_68 == 0) {
                    iVar4 = -0x17fffffd;
                    uVar11 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceUUIDAndTypeWithError"
                                                ,0x1e4,0xe8000003,1,0,&cf_FailedtoallocateRSDdevice_
                                               );
                    goto LAB_0013bcbc;
                  }
                  local_60 = _MDRemoteServiceDeviceCopyProperties();
                  if (local_60 == 0) {
                    iVar4 = -0x17ffff0b;
                    uVar11 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceUUIDAndTypeWithError"
                                                ,0x1eb,0xe80000f5,1,0,
                                                &cf_FailedtoreaddevicepropertiesfromRSD_);
                    local_58._os_obj = (_os_object_s *)0x0;
                    local_60 = 0;
LAB_0013c034:
                    lVar13 = (*(code *)PTR__objc_retain_004410a8)(uVar11);
                    lVar10 = 0;
                    lVar12 = 0;
                  }
                  else {
                    lVar10 = (*(code *)PTR__objc_msgSend_00441098)
                                       (local_60,"objectForKeyedSubscript:",&cf_UniqueDeviceID);
                    if (lVar10 == 0) {
LAB_0013bfba:
                      iVar4 = -0x17ffffec;
                      uVar11 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceUUIDAndTypeWithError"
                                                  ,0x1f2,0xe8000014,1,0,
                                                  &cf_FailedtoreadUDIDfromdeviceproperties_);
LAB_0013bfe7:
                      local_58._os_obj = (_os_object_s *)0x0;
                      goto LAB_0013c034;
                    }
                    uVar11 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSString,"class");
                    cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"isKindOfClass:",uVar11);
                    if (cVar3 == '\0') goto LAB_0013bfba;
                    uVar11 = (*(code *)PTR__objc_retain_004410a8)(lVar10);
                    *(undefined8 *)(local_50 + 0x20) = uVar11;
                    local_58._os_obj =
                         (_os_object_s *)(*(code *)PTR__objc_msgSend_00441098)(lVar10,"mutableCopy")
                    ;
                    if (local_58._os_obj == (_os_object_s *)0x0) {
                      iVar4 = -0x17fffffd;
                      uVar11 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceUUIDAndTypeWithError"
                                                  ,0x1fb,0xe8000003,1,0,&cf_Failedtoallocatestring_)
                      ;
                      goto LAB_0013bfe7;
                    }
                    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_58._os_obj,"length");
                    local_c8 = 0;
                    (*(code *)PTR__objc_msgSend_00441098)
                              (local_58._os_obj,
                               "replaceOccurrencesOfString:withString:options:range:",&cf__,&cf___,0
                              );
                    uVar11 = (*(code *)PTR__objc_retain_004410a8)(local_58._os_obj);
                    *(undefined8 *)(local_50 + 0x28) = uVar11;
                    uVar1 = *(undefined4 *)(local_68 + 0x30);
                    uVar11 = _objc_alloc(&objc::class_t::MDRemoteServiceDeviceProvider);
                    lVar12 = (*(code *)PTR__objc_msgSend_00441098)
                                       (uVar11,"initWithMDRemoteServiceDevice:",local_68);
                    if (lVar12 == 0) {
                      iVar4 = -0x17fffffd;
                      uVar11 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceUUIDAndTypeWithError"
                                                  ,0x209,0xe8000003,1,0,
                                                  &cf_Failedtoallocateremoteservicedeviceprovider_,
                                                  local_c8,uVar6);
                      goto LAB_0013c034;
                    }
                    uVar6 = 3;
                    if (iVar4 - 7U < 4) {
                      uVar6 = *(undefined4 *)(&DAT_0032cd40 + (ulong)(iVar4 - 7U) * 4);
                    }
                    *(undefined4 *)(local_50 + 0x14) = uVar1;
                    uVar11 = (*(code *)PTR__objc_retain_004410a8)(lVar12);
                    lVar10 = local_50;
                    *(undefined8 *)(local_50 + 0xf0) = uVar11;
                    __mutex_init(local_50 + 0x48);
                    *(undefined4 *)(lVar10 + 0x10) = 0xffffffff;
                    *(undefined2 *)(lVar10 + 0x18) = 0xffff;
                    *(undefined4 *)(lVar10 + 0x30) = uVar6;
                    *(undefined4 *)(lVar10 + 0x90) = 0xffffffff;
                    *(undefined8 *)(lVar10 + 0xa8) = 0;
                    iVar4 = 0;
                    uVar11 = _CFDictionaryCreateMutable
                                       (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                        PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                    lVar10 = local_50;
                    *(undefined8 *)(local_50 + 0xc0) = uVar11;
                    *(undefined1 *)(local_50 + 0x94) = 1;
                    *(undefined4 *)(local_50 + 0x98) = 0;
                    *(undefined8 *)(local_50 + 0xa0) = 0;
                    *(undefined8 *)(local_50 + 0xb0) = 0;
                    *(undefined8 *)(local_50 + 0xb8) = 0;
                    *(undefined4 *)(local_50 + 200) = 0xffffffff;
                    *(undefined8 *)(local_50 + 0xd0) = 0;
                    *(undefined8 *)(local_50 + 0xe0) = 0;
                    lVar13 = 0;
                    local_50 = 0;
                    uVar11 = 0;
                  }
                  _CFRelease(local_68);
                }
                if (local_50 != 0) {
                  _CFRelease();
                }
                (*(code *)PTR__objc_release_004410a0)(lVar12);
                (*(code *)PTR__objc_release_004410a0)(local_60);
                (*(code *)PTR__objc_release_004410a0)(local_58._os_obj);
                (*(code *)PTR__objc_release_004410a0)(uVar11);
                goto LAB_0013bb75;
              }
              lVar13 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceWithError",0x1a7,
                                          0xe8000112,1,0,&cf_UnsupportedbeforemacOS10_13_);
              iVar4 = -0x17fffff1;
            }
            else {
              iVar4 = -0x17fffeee;
              lVar13 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceWithError",0x19f,
                                          0xe8000112,1,0,&cf_FailedtoreaddeviceUUID_);
            }
            lVar10 = 0;
            goto LAB_0013bb75;
          }
          __os_log_internal(0,PTR___os_log_default_004412f0,0,
                            "Remote device \'%s\' heartbeat failed.",local_50);
        }
        else {
          __os_log_internal(0,PTR___os_log_default_004412f0,0,
                            "Timed out waiting for remote device \'%s\' heartbeat for %d seconds.",
                            local_50,local_60 & 0xffffffff);
        }
      }
      else {
        __os_log_internal(0,PTR___os_log_default_004412f0,0,
                          "Timed out waiting for remote device \'%s\' to become connected for %d seconds."
                          ,local_50,uVar2 & 0xffffffff);
        dVar8 = local_58;
      }
      _dispatch_release(object);
      object = dVar8;
    }
    _dispatch_release(object);
  }
  __Block_object_dispose(&local_98,8);
  lVar10 = 0;
  iVar4 = -0x17fffeee;
  lVar13 = _createAndLogError("_AMDeviceCreateWithRemoteDeviceWithError",0x198,0xe8000112,1,0,
                              &cf_Timeoutwhileconnectingtoremotedevice_);
LAB_0013bb75:
  if (iVar4 != 0 && local_70 != (int *)0x0) {
    *local_70 = iVar4;
  }
  if ((local_78 != (long *)0x0) && (lVar13 != 0)) {
    *local_78 = lVar13;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

