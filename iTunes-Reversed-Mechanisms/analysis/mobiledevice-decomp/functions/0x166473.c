// rea decompile_all
// name: ___thr_AMRestorableDeviceRegisterForAPIAvailabilityNotifications
// address: 0x166473
// body: available
// range: 0x166473-0x1668ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x166770 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceRegisterForAPIAvailabilityNotifications(long *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 local_40;
  cfstringStruct *local_38;
  
  if (param_1 == (long *)0x0) {
    local_40 = 4000;
    local_38 = &cf_Can_tregisterwithNULLargs;
  }
  else if (*param_1 == 0) {
    local_40 = 0xfa1;
    local_38 = &cf_Youcan_tregisterfordevicenotificationswithNULLrestorabledevice;
  }
  else if (*(long *)(*param_1 + 0x120) == 0) {
    local_40 = 0xfa1;
    local_38 = &cf_DeviceregisteredclientsisNULL_thisisbad;
  }
  else if ((int)param_1[1] == -1) {
    local_40 = 0xfa1;
    local_38 = &cf_Youcan_tregisterfordevicenotificationswithinvliadclientID;
  }
  else if (param_1[2] == 0) {
    local_40 = 0xfa1;
    local_38 = &cf_Youcan_tregisterfordevicenotificationswithNULLcallback;
  }
  else if (_gRestorableData == 0) {
    local_40 = 0xfa3;
    local_38 = &cf_Failedtoinitilizeglobaldata;
  }
  else {
    if (*(long *)(_gRestorableData + 0x30) != 0) {
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
      bVar2 = false;
      _AMRSafeLog(6,&cf_RegisteringclientID_dforAPIchangesondevice__p,(int)param_1[1],*param_1);
      uVar3 = _CFArrayGetCount(*(undefined8 *)(_gRestorableData + 0x30));
      local_38 = &cf_Can_tregisterfordevicenotificationswithaclientthatisnotcurrentlyregistered;
      local_40 = 0xfa1;
      if ((int)uVar3 < 1) {
        pvVar5 = (void *)0x0;
        pvVar6 = (void *)0x0;
        lVar4 = 0;
      }
      else {
        uVar10 = 0;
        do {
          lVar4 = _CFArrayGetValueAtIndex(*(undefined8 *)(_gRestorableData + 0x30),uVar10);
          if (*(int *)(lVar4 + 0x10) == (int)param_1[1]) {
            uVar3 = _CFDictionaryGetCount(*(undefined8 *)(_gRestorableData + 0x38));
            pvVar5 = _calloc(1,(long)(int)uVar3 << 3);
            pvVar6 = _calloc(1,(long)(int)uVar3 << 3);
            if (pvVar5 == (void *)0x0) {
              local_38 = &cf_Failedtoallocateroomfordevicekeys;
              pvVar5 = (void *)0x0;
              lVar4 = 0;
              bVar2 = false;
              local_40 = 0xfa2;
              goto LAB_001666e8;
            }
            if (pvVar6 == (void *)0x0) {
              local_38 = &cf_Failedtoallocateroomfordevicerefs;
              pvVar6 = (void *)0x0;
              goto LAB_00166852;
            }
            _CFDictionaryGetKeysAndValues(*(undefined8 *)(_gRestorableData + 0x38),pvVar5,pvVar6);
            local_38 = &cf_Can_tregisterfordevicenotificationswithadevicethatisnotcurrentlyavailable
            ;
            if ((int)uVar3 < 1) goto LAB_0016662f;
            uVar10 = 0;
            goto LAB_00166604;
          }
          uVar10 = uVar10 + 1;
        } while ((uVar3 & 0x7fffffff) != uVar10);
        pvVar5 = (void *)0x0;
        pvVar6 = (void *)0x0;
        lVar4 = 0;
        bVar2 = false;
      }
      goto LAB_001666e8;
    }
    local_40 = 0xfa3;
    local_38 = &cf_ClientsarrayisNULL;
  }
  bVar2 = false;
  lVar4 = 0;
  pvVar6 = (void *)0x0;
  pvVar5 = (void *)0x0;
  goto LAB_001666f8;
LAB_00166604:
  do {
    lVar4 = *(long *)((long)pvVar6 + uVar10 * 8);
    if (lVar4 != 0) {
      if (lVar4 != *param_1) goto LAB_00166627;
      uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar4 = _CFNumberCreate(uVar9,4,param_1 + 1);
      if (lVar4 == 0) {
        local_38 = &cf_Failedtoallocateclientkey;
LAB_00166852:
        lVar4 = 0;
        bVar2 = false;
        local_40 = 0xfa2;
        goto LAB_001666e8;
      }
      lVar7 = _CFDictionaryGetValue(*(undefined8 *)(*param_1 + 0x120),lVar4);
      if (lVar7 != 0) {
        local_38 = &cf_Can_tregisterfordevicenotificationswithaclientthatisalreadyregistered;
        goto LAB_00166632;
      }
      pcVar8 = (cfstringStruct *)
               __CFRuntimeCreateInstance(uVar9,__AMRestorableAPIChangesClientTypeID,0x10,0);
      bVar2 = pcVar8 != (cfstringStruct *)0x0;
      if (pcVar8 == (cfstringStruct *)0x0) {
        pcVar8 = &cf_FailedtoallocateAPIchangesclient;
        _AMRSafeLog(3,&cf___,&cf_FailedtoallocateAPIchangesclient);
        local_38 = &cf_Failedtoallocateclientextensionobject;
        local_40 = 0xfa2;
      }
      else {
        pcVar8->field2_0x10 = (undefined *)0x0;
        pcVar8->field3_0x18 = 0;
        auVar1 = *(undefined1 (*) [16])(param_1 + 2);
        auVar11._0_8_ = auVar1._8_8_;
        auVar11._8_4_ = auVar1._0_4_;
        auVar11._12_4_ = auVar1._4_4_;
        pcVar8->field2_0x10 = (undefined *)auVar11._0_8_;
        pcVar8->field3_0x18 = auVar11._8_8_;
        _CFDictionaryAddValue(*(undefined8 *)(*param_1 + 0x120),lVar4,pcVar8);
        local_40 = 0;
        local_38 = (cfstringStruct *)0x0;
      }
      _CFRelease(pcVar8);
      goto LAB_001666e8;
    }
    _AMRLog(3,&cf_NULLdevicefoundinrestorabledictionary_thisisbad);
LAB_00166627:
    uVar10 = uVar10 + 1;
  } while ((uVar3 & 0x7fffffff) != uVar10);
LAB_0016662f:
  lVar4 = 0;
LAB_00166632:
  bVar2 = false;
LAB_001666e8:
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
LAB_001666f8:
  if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
    if (bVar2) {
      *(undefined8 *)param_1[4] = 0;
    }
    else {
      uVar9 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                             &cf_com_apple_MobileDevice_MobileRestore,local_40,0);
      *(undefined8 *)param_1[4] = uVar9;
    }
  }
  _AMRSafeLogAndRelease(3,local_38);
  if (pvVar5 != (void *)0x0) {
    _free(pvVar5);
  }
  if (pvVar6 != (void *)0x0) {
    _free(pvVar6);
  }
  if (lVar4 == 0) {
    return;
  }
  _CFRelease(lVar4);
  return;
}

