// rea decompile_all
// name: __AMDeviceCreateWithRPDevice
// address: 0x142d32
// body: available
// range: 0x142d32-0x14319e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMDeviceCreateWithRPDevice
               (long param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_4c;
  long local_48;
  undefined4 *local_40;
  long local_38;
  
  local_40 = param_4;
  if (param_1 == 0) {
    pcVar9 = &cf_Invalidargument_;
    uVar10 = 0xe8000007;
    uVar8 = 0xe0;
    uVar5 = 0xe8000007;
LAB_0014308b:
    local_48 = 0;
    uVar5 = _createAndLogError("_AMDeviceCreateWithRPDevice",uVar8,uVar5,1,0,pcVar9);
    lVar3 = 0;
  }
  else {
    lVar3 = (*_getRPDeviceKeyValueStoreClass)();
    if (lVar3 == 0) {
      pcVar9 = &cf_TheloadedversionofRemotePairingdoesnotsupportKVS_;
      uVar10 = 0xe800000f;
      uVar8 = 0xe6;
      uVar5 = 0xe800000f;
      goto LAB_0014308b;
    }
    local_4c = param_2;
    local_38 = __CreateEmptyDeviceRef();
    __mutex_init(local_38 + 0x48);
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"udid");
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar4 == 0) {
LAB_00143027:
      pcVar9 = &cf_FailedtoreadUDIDfromremotedeviceKVS_;
      uVar10 = 0xe8000014;
      uVar8 = 0xf1;
      uVar5 = 0xe8000014;
LAB_0014304d:
      local_48 = 0;
      uVar5 = _createAndLogError("_AMDeviceCreateWithRPDevice",uVar8,uVar5,1,0,pcVar9);
      lVar3 = local_38;
    }
    else {
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSString,"class");
      cVar2 = (*(code *)puVar1)(lVar4,"isKindOfClass:",uVar5);
      if (cVar2 == '\0') goto LAB_00143027;
      lVar6 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"mutableCopy");
      puVar1 = PTR__objc_msgSend_00441098;
      if (lVar6 == 0) {
        pcVar9 = &cf_Failedtoallocatestring_;
        uVar10 = 0xe8000003;
        uVar8 = 0xf9;
        uVar5 = 0xe8000003;
        goto LAB_0014304d;
      }
      local_60 = 0;
      uStack_58 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"length");
      uVar11 = (undefined4)local_60;
      uVar12 = (undefined4)uStack_58;
      (*(code *)puVar1)(lVar6,"replaceOccurrencesOfString:withString:options:range:",&cf__,&cf___,0)
      ;
      uVar5 = _objc_alloc(&objc::class_t::MDRemoteServiceDeviceProviderRemotePairing);
      lVar3 = local_38;
      puVar7 = (undefined4 *)(*(code *)PTR__objc_msgSend_00441098)(uVar5,"initWithDevice:",local_38)
      ;
      puVar1 = PTR__objc_retain_004410a8;
      local_48 = lVar6;
      if (puVar7 != (undefined4 *)0x0) {
        uVar5 = (*(code *)PTR__objc_retain_004410a8)(lVar4);
        *(undefined8 *)(lVar3 + 0x20) = uVar5;
        uVar5 = (*(code *)puVar1)(lVar6);
        *(undefined8 *)(lVar3 + 0x28) = uVar5;
        local_40 = puVar7;
        uVar5 = (*(code *)puVar1)(puVar7);
        *(undefined8 *)(lVar3 + 0xf0) = uVar5;
        *(undefined4 *)(lVar3 + 0x14) = 0;
        local_80 = 0;
        local_70 = 0x2020000000;
        local_68 = 0;
        local_78 = &local_80;
        if (__AMDRemotePairingGetNextDeviceID_onceToken != -1) {
          _dispatch_once(&__AMDRemotePairingGetNextDeviceID_onceToken,&___block_literal_global_426);
        }
        _dispatch_sync(__AMDRemotePairingGetNextDeviceID_queue);
        uVar10 = *(undefined4 *)(local_78 + 3);
        __Block_object_dispose(&local_80,8);
        lVar3 = local_38;
        *(undefined4 *)(local_38 + 0x10) = uVar10;
        *(undefined2 *)(local_38 + 0x18) = 0;
        *(undefined4 *)(local_38 + 0x30) = local_4c;
        *(undefined4 *)(local_38 + 0x90) = 0xffffffff;
        *(undefined8 *)(local_38 + 0xa8) = 0;
        uVar5 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        *(undefined8 *)(lVar3 + 0xc0) = uVar5;
        *(undefined1 *)(lVar3 + 0x94) = 1;
        *(undefined4 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined4 *)(lVar3 + 200) = 0xffffffff;
        *(undefined8 *)(lVar3 + 0xd0) = 0;
        *(undefined8 *)(lVar3 + 0xe0) = 0;
        uVar5 = (*(code *)PTR__objc_retain_004410a8)(param_1);
        puVar7 = local_40;
        *(undefined8 *)(lVar3 + 0xf8) = uVar5;
        *(undefined8 *)(lVar3 + 0x100) = 0;
        *(undefined8 *)(lVar3 + 0x108) = 0;
        puVar1 = PTR__objc_msgSend_00441098;
        (*(code *)PTR__objc_msgSend_00441098)(local_40,"refreshMDRemoteServiceDevice");
        lVar4 = (*(code *)puVar1)(puVar7,"copyMDRemoteServiceDevice");
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(lVar4 + 0x30);
        }
        uVar5 = 0;
        lVar3 = 0;
        puVar7 = local_40;
        goto LAB_001430cb;
      }
      uVar10 = 0xe8000003;
      uVar5 = _createAndLogError("_AMDeviceCreateWithRPDevice",0x103,0xe8000003,1,0,
                                 &cf_Failedtocreateremoteservicedeviceprovider_,uVar11,uVar12);
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar8 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
    *param_3 = uVar8;
  }
  if (local_40 != (undefined4 *)0x0) {
    *local_40 = uVar10;
  }
  puVar7 = (undefined4 *)0x0;
  local_38 = 0;
  lVar4 = 0;
LAB_001430cb:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_48);
  (*(code *)puVar1)(puVar7);
  (*(code *)puVar1)(uVar5);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return local_38;
}

