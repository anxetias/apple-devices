// rea decompile_all
// name: _AMDeviceRemoteValidatePairingRecord
// address: 0x12a1d7
// body: available
// range: 0x12a1d7-0x12abcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AMDeviceRemoteValidatePairingRecord(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  X509 *pXVar7;
  char *pcVar8;
  undefined8 uVar9;
  dispatch_queue_attr_t pdVar10;
  dispatch_object_t dVar11;
  dispatch_object_t object;
  undefined8 uVar12;
  cfstringStruct *pcVar13;
  uint uVar14;
  bool bVar15;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  code *local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  code *local_a0;
  code *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 *local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  int local_4c;
  X509 *local_48;
  dispatch_object_t local_40;
  dispatch_object_t local_38;
  
  local_4c = -0x17ffffff;
  bVar15 = false;
  local_68 = 0;
  local_58 = 0;
  local_70 = 0;
  local_80 = param_3;
  if (param_2 != 0) {
    cVar2 = _CFDictionaryGetValueIfPresent(param_2,&cf_AutomationRecordsOnly,&local_70);
    if ((cVar2 == '\0') || (lVar4 = _isCFBoolean(local_70), lVar4 == 0)) {
      bVar15 = false;
    }
    else {
      cVar2 = _CFBooleanGetValue(local_70);
      bVar15 = cVar2 != '\0';
    }
  }
  if (param_1 == 0) {
    pcVar13 = &cf_InvaliddeviceUDID_;
    uVar9 = 0x128;
    iVar3 = -0x17fffff9;
LAB_0012a397:
    lVar4 = 0;
    local_38._os_obj =
         (_os_object_s *)
         _createAndLogError("AMDeviceRemoteValidatePairingRecord",uVar9,iVar3,0,0,pcVar13);
    uVar14 = 4;
    lVar6 = 0;
    lVar5 = 0;
    pXVar7 = (X509 *)0x0;
    dVar11._os_obj = (_os_object_s *)0x0;
LAB_0012a3b7:
    if ((local_80 != (undefined8 *)0x0) && (local_38 != (dispatch_object_t)0x0)) {
      local_48 = (X509 *)CONCAT44(local_48._4_4_,uVar14);
      uVar9 = (*(code *)PTR__objc_retain_004410a8)(local_38);
      *local_80 = uVar9;
      uVar14 = (uint)local_48;
    }
    if (pXVar7 == (X509 *)0x0) goto LAB_0012a406;
  }
  else {
    iVar3 = __CreatePairingRecordFromRecordOnDiskForIdentifier(param_1,&local_58);
    lVar4 = local_58;
    local_4c = iVar3;
    if (iVar3 == -0x17ffffdb) {
      uVar14 = 3;
      lVar4 = 0;
      local_38 = (dispatch_object_t)0x0;
      lVar6 = 0;
      lVar5 = 0;
      dVar11._os_obj = (_os_object_s *)0x0;
      goto LAB_0012a406;
    }
    if (iVar3 != 0) {
      _AMDErrorString(iVar3);
      pcVar13 = &cf_Failedtoloadlegacypairingrecordfordevice__s;
      uVar9 = 0x131;
      goto LAB_0012a397;
    }
    lVar5 = _CFDataGetTypeID();
    lVar4 = _CFDictionaryGetValue(lVar4,&cf_RootCertificate);
    if ((lVar4 == 0) || (lVar6 = _CFGetTypeID(lVar4), lVar6 != lVar5)) {
      pcVar13 = &cf_Pairingrecordhasinvalidrootcertificatedata_;
      uVar9 = 0x13b;
LAB_0012a392:
      iVar3 = -0x17ffffa4;
      goto LAB_0012a397;
    }
    pXVar7 = (X509 *)__decode_certificate(lVar4);
    if (pXVar7 == (X509 *)0x0) {
      pcVar13 = &cf_Pairingrecordhasinvalidrootcertificate_;
      uVar9 = 0x142;
      goto LAB_0012a392;
    }
    local_48 = pXVar7;
    pcVar8 = _strstr(pXVar7->name,"Test Automation Lockdown Root CA");
    if ((bool)(bVar15 & pcVar8 == (char *)0x0)) {
      local_38._os_obj =
           (_os_object_s *)
           _createAndLogError("AMDeviceRemoteValidatePairingRecord",0x14b,0xe800005c,0,0,
                              &cf_Pairingrecordisnotautomationrecord_);
      uVar14 = 3;
      lVar4 = 0;
LAB_0012a7b3:
      lVar6 = 0;
      pXVar7 = local_48;
      dVar11._os_obj = (_os_object_s *)0x0;
      lVar5 = 0;
      goto LAB_0012a3b7;
    }
    local_e0 = &local_e8;
    local_e8 = 0;
    local_d8 = 0x3052000000;
    local_d0 = ___Block_byref_object_copy__1045;
    local_c8 = ___Block_byref_object_dispose__1046;
    local_c0 = 0;
    local_b0 = &local_b8;
    local_b8 = 0;
    local_a8 = 0x3052000000;
    local_a0 = ___Block_byref_object_copy__1045;
    local_98 = ___Block_byref_object_dispose__1046;
    local_90 = 0;
    local_88 = pcVar8;
    pdVar10 = (dispatch_queue_attr_t)_dispatch_queue_attr_make_with_autorelease_frequency(0,1);
    local_38._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.mobiledevice.automation_upgrade.discovery",pdVar10);
    if (local_38._os_obj == (_os_object_s *)0x0) {
      lVar4 = _createAndLogError("findRemoteDeviceWithUDID",0xa0,0xe8000003,0,0,
                                 &cf_Failedtocreatequeue_);
LAB_0012a6ca:
      local_b0[5] = lVar4;
      local_40._os_obj = (_os_object_s *)0x0;
      object._os_obj = (_os_object_s *)0x0;
      dVar11._os_obj = (_os_object_s *)0x0;
LAB_0012a6e3:
      lVar5 = 0;
    }
    else {
      pdVar10 = (dispatch_queue_attr_t)
                _dispatch_queue_attr_make_with_autorelease_frequency
                          (PTR___dispatch_queue_attr_concurrent_004412d8,1);
      dVar11._os_obj =
           (_os_object_s *)
           _dispatch_queue_create("com.apple.mobiledevice.automation_upgrade.connect",pdVar10);
      if (dVar11._os_obj == (_os_object_s *)0x0) {
        lVar4 = _createAndLogError("findRemoteDeviceWithUDID",0xa6,0xe8000003,0,0,
                                   &cf_Failedtocreatequeue_);
        goto LAB_0012a6ca;
      }
      object._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
      if (object._os_obj == (_os_object_s *)0x0) {
        lVar4 = _createAndLogError("findRemoteDeviceWithUDID",0xac,0xe8000003,0,0,
                                   &cf_Failedtocreatesemaphore_);
        local_b0[5] = lVar4;
        local_40._os_obj = (_os_object_s *)0x0;
        object._os_obj = (_os_object_s *)0x0;
        goto LAB_0012a6e3;
      }
      local_40._os_obj = (_os_object_s *)_dispatch_group_create();
      if (local_40._os_obj == (_os_object_s *)0x0) {
        lVar4 = _createAndLogError("findRemoteDeviceWithUDID",0xb2,0xe8000003,0,0,
                                   &cf_Failedtocreategroup_);
        local_b0[5] = lVar4;
        local_40._os_obj = (_os_object_s *)0x0;
        goto LAB_0012a6e3;
      }
      iVar3 = ___isPlatformVersionAtLeast(1,10,0xd,0);
      if (iVar3 == 0) {
        lVar4 = _createAndLogError("findRemoteDeviceWithUDID",0xef,0xe800000f,0,0,
                                   &cf_RemoteServiceDiscoveryunsupportedonthisOS_);
        local_b0[5] = lVar4;
        goto LAB_0012a6e3;
      }
      _CFRetain(param_1);
      _remote_device_browse_present(8,local_38._os_obj);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Waiting for browsing to complete.");
      _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,0xffffffffffffffff);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Browsing completed.");
      lVar5 = local_e0[5];
      local_e0[5] = 0;
      lVar4 = local_b0[5];
    }
    lVar6 = 0;
    if (lVar4 == 0) {
      lVar6 = lVar5;
    }
    local_60 = lVar5;
    if (local_e0[5] != 0) {
      (*(code *)PTR__objc_release_004410a0)();
    }
    local_e0[5] = 0;
    if (object._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(object);
    }
    if (dVar11._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(dVar11);
    }
    lVar4 = local_60;
    if (local_38._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(local_38);
    }
    if (local_40._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(local_40);
    }
    lVar5 = local_b0[5];
    __Block_object_dispose(&local_b8,8);
    __Block_object_dispose(&local_e8,8);
    if (lVar5 != 0) {
      local_38._os_obj =
           (_os_object_s *)
           _createAndLogError("AMDeviceRemoteValidatePairingRecord",0x155,0xe8000112,0,lVar5,
                              &cf_Errorencounteredwhilebrowsingforremotedevices_);
      uVar14 = 4;
      lVar4 = lVar6;
      goto LAB_0012a7b3;
    }
    if (lVar6 == 0) {
      lVar4 = 0;
      local_38._os_obj =
           (_os_object_s *)
           _createAndLogError("AMDeviceRemoteValidatePairingRecord",0x15b,0xe8000112,0,0,
                              &cf_NodevicefoundwithUDID____,param_1);
      uVar14 = 4;
      goto LAB_0012a7b3;
    }
    local_4c = -0x17ffffff;
    dVar11._os_obj =
         (_os_object_s *)__AMDeviceCreateWithRemoteDeviceWithError(lVar6,&local_4c,&local_68);
    iVar3 = local_4c;
    lVar5 = local_68;
    if (dVar11._os_obj == (_os_object_s *)0x0) {
      uVar9 = _AMDErrorString(local_4c);
      local_38._os_obj =
           (_os_object_s *)
           _createAndLogError("AMDeviceRemoteValidatePairingRecord",0x163,iVar3,0,lVar5,
                              &cf_Failedtocreatedevicewithremotedevice__s,uVar9);
      uVar14 = 4;
      goto LAB_0012a7b3;
    }
    local_40._os_obj = dVar11._os_obj;
    iVar3 = _AMDeviceConnect(dVar11._os_obj);
    local_4c = iVar3;
    if (iVar3 != 0) {
      uVar9 = _AMDErrorString(iVar3);
      lVar6 = 0;
      local_38._os_obj =
           (_os_object_s *)
           _createAndLogError("AMDeviceRemoteValidatePairingRecord",0x16a,iVar3,0,0,
                              &cf_Failedtoconnecttodevice__s,uVar9);
LAB_0012ab08:
      uVar14 = 4;
      pXVar7 = local_48;
      dVar11 = local_40;
      lVar5 = 0;
      goto LAB_0012a3b7;
    }
    lVar4 = _CFDictionaryGetValue(local_58,&cf_RootPrivateKey);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar4 == 0) {
LAB_0012aacd:
      pcVar13 = &cf_Failedtogetprivatekey_;
      uVar9 = 0x171;
LAB_0012aae2:
      lVar6 = 0;
      local_38._os_obj =
           (_os_object_s *)
           _createAndLogError("AMDeviceRemoteValidatePairingRecord",uVar9,0xe80000f1,0,0,pcVar13);
      lVar4 = local_60;
      goto LAB_0012ab08;
    }
    uVar9 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSData,"class");
    cVar2 = (*(code *)puVar1)(lVar4,"isKindOfClass:",uVar9);
    if (cVar2 == '\0') goto LAB_0012aacd;
    lVar6 = _copyPrivateKeyFromPKCS8(lVar4);
    if (lVar6 == 0) {
      pcVar13 = &cf_FailedtoextractprivatekeyfromPEMformat_;
      uVar9 = 0x178;
      goto LAB_0012aae2;
    }
    lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"dataUsingEncoding:",4);
    lVar4 = local_60;
    if (lVar5 == 0) {
LAB_0012ab11:
      pcVar13 = &cf_Failedtocreatedata_;
      uVar12 = 0x17f;
      uVar9 = 0xe8000003;
LAB_0012ab2c:
      local_38._os_obj =
           (_os_object_s *)
           _createAndLogError("AMDeviceRemoteValidatePairingRecord",uVar12,uVar9,0,0,pcVar13);
      goto LAB_0012ab08;
    }
    uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"class");
    cVar2 = (*(code *)puVar1)(lVar5,"isKindOfClass:",uVar9);
    if (cVar2 == '\0') goto LAB_0012ab11;
    lVar5 = _signWithPrivateKey(lVar6,lVar5,
                                *(undefined8 *)
                                 PTR__kSecKeyAlgorithmRSASignatureDigestPKCS1v15Raw_00441208);
    if (lVar5 == 0) {
      pcVar13 = &cf_FailedtosignUDID_;
      uVar12 = 0x186;
      uVar9 = 0xe80000f1;
      goto LAB_0012ab2c;
    }
    _CFDictionaryRemoveValue(local_58,&cf_RootPrivateKey);
    _CFDictionaryRemoveValue(local_58,&cf_HostPrivateKey);
    dVar11 = local_40;
    local_78 = lVar5;
    iVar3 = _send_upgrade_automation_pairing(local_40._os_obj,local_58,lVar5);
    local_4c = iVar3;
    if (iVar3 != 0) {
      uVar9 = _AMDErrorString(iVar3);
      local_38._os_obj =
           (_os_object_s *)
           _createAndLogError("AMDeviceRemoteValidatePairingRecord",0x191,iVar3,0,0,
                              &cf_Failedtosendmessagetolockdown__s,uVar9);
      uVar14 = 4;
      pXVar7 = local_48;
      lVar5 = local_78;
      goto LAB_0012a3b7;
    }
    uVar14 = (uint)(local_88 == (char *)0x0);
    local_38 = (dispatch_object_t)0x0;
    pXVar7 = local_48;
    lVar5 = local_78;
  }
  _X509_free(pXVar7);
LAB_0012a406:
  if (local_58 != 0) {
    _CFRelease();
  }
  local_58 = 0;
  if (dVar11._os_obj != (_os_object_s *)0x0) {
    _CFRelease(dVar11._os_obj);
  }
  if (local_68 != 0) {
    _CFRelease();
  }
  local_68 = 0;
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar4 != 0) {
    (*(code *)PTR__objc_release_004410a0)(lVar4);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_38);
  (*(code *)puVar1)(0);
  (*(code *)puVar1)(lVar5);
  return uVar14;
}

