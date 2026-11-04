// rea decompile_all
// name: _handleFirmwareUpdaterRequest
// address: 0xd79f2
// body: available
// range: 0xd79f2-0xd8084 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleFirmwareUpdaterRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, __CFString
   const**) */

int _handleFirmwareUpdaterRequest
              (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFString **param_3)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  __CFString *p_Var9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar12 = *(long *)(param_1 + 0x10);
  lVar7 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  if (param_3 == (__CFString **)0x0) {
    iVar5 = 1;
    lVar8 = 0;
    goto LAB_000d7ea3;
  }
  lVar8 = 0;
  local_38 = *(long *)(lVar12 + 0x10);
  lVar6 = _CFDictionaryCreateMutable
                    (0,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  local_40 = lVar6;
  if (lVar6 == 0) {
    local_38 = 0;
    lVar12 = local_38;
    goto LAB_000d8047;
  }
  lVar7 = _CFDictionaryGetValue(param_2,&cf_MessageArgType);
  if (lVar7 == 0) {
LAB_000d8006:
    lVar8 = 0;
LAB_000d8009:
    local_38 = 0;
    lVar7 = 0;
    iVar5 = 1;
    lVar6 = local_40;
  }
  else {
    lVar8 = _CFGetTypeID(lVar7);
    lVar6 = _CFStringGetTypeID();
    if (lVar8 != lVar6) goto LAB_000d8006;
    p_Var9 = (__CFString *)_CFDictionaryGetValue(param_2,&cf_MessageArgUpdaterName);
    *param_3 = p_Var9;
    if (p_Var9 == (__CFString *)0x0) goto LAB_000d8006;
    lVar8 = _CFGetTypeID(p_Var9);
    lVar6 = _CFStringGetTypeID();
    if (lVar8 != lVar6) goto LAB_000d8006;
    lVar8 = _CFDictionaryCreateMutable
                      (0,2,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar8 == 0) {
      local_38 = 0;
      lVar8 = 0;
      lVar6 = local_40;
      lVar12 = local_38;
      goto LAB_000d8047;
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_MessageArgUpdaterLoopCount);
    if (lVar6 != 0) {
      _CFDictionarySetValue(lVar8,&cf_LoopCount,lVar6);
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_MessageForceRepersonalization);
    if (lVar6 != 0) {
      _CFDictionarySetValue(lVar8,&cf_MessageForceRepersonalization,lVar6);
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_DataChunkSize);
    lVar10 = _CFStringCompare(lVar7,&cf_FirmwareResponseData,0);
    if (lVar10 != 0) {
      local_38 = 0;
      _AMSupportLogInternal(3,"_handleFirmwareUpdaterRequest","unexpected message type %@",lVar7);
      iVar5 = 0x16;
      lVar7 = 0;
      lVar6 = local_40;
      goto LAB_000d7e65;
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_MessageArgInfo);
    if (lVar7 == 0) goto LAB_000d8009;
    lVar10 = _CFGetTypeID(lVar7);
    lVar11 = _CFDictionaryGetTypeID();
    if (lVar10 != lVar11) goto LAB_000d8009;
    local_48 = lVar8;
    lVar8 = _CFDictionaryGetValue(param_2,&cf_DeviceGeneratedTags);
    lVar10 = _CFDictionaryGetValue(param_2,&cf_DeviceGeneratedRequest);
    ppVar1 = (pthread_mutex_t *)(local_38 + 0x158);
    _pthread_mutex_lock(ppVar1);
    if (lVar10 == 0 || lVar8 == 0) {
LAB_000d7c6c:
      lVar8 = local_38;
      iVar5 = _AMRestoreUpdaterPersonalize
                        (*(undefined8 *)(local_38 + 0x150),*param_3,lVar7,
                         *(undefined8 *)(lVar12 + 0x18),local_48,&local_50,&local_60);
      _AMAuthInstallUpdaterRestoreInfoSet(*(undefined8 *)(lVar8 + 0x150),0,0);
      if ((iVar5 != 0) || (local_50 == 0)) {
        if (local_60 != 0) {
          _AMSupportLogInternal
                    (3,"_handleFirmwareUpdaterRequest",
                     "failed to personalize %@ updater %@, status=%d",*param_3,local_60,iVar5);
        }
        goto LAB_000d7e06;
      }
      _pthread_mutex_unlock(ppVar1);
      if (((lVar6 == 0) || (cVar3 = _CFNumberGetValue(lVar6,0xe,&local_58), cVar3 == '\0')) ||
         (lVar12 = _CFDictionaryGetValue(local_50,&cf_FirmwareData), lVar12 == 0)) {
LAB_000d7e22:
        _CFDictionarySetValue(local_40,&cf_FirmwareResponseData,local_50);
        lVar12 = 0;
        lVar6 = local_40;
LAB_000d7e41:
        iVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar6);
        lVar8 = local_48;
        lVar7 = 0;
        local_38 = lVar12;
        if (iVar5 == 0) {
          if (lVar12 == 0) {
            local_38 = 0;
            iVar5 = 0;
          }
          else {
            lVar11 = _CFDataGetLength();
            lVar7 = _CFDataCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_58);
            lVar10 = local_40;
            lVar6 = local_40;
            lVar12 = local_38;
            if (lVar7 == 0) goto LAB_000d8047;
            if (lVar11 < 1) {
              iVar5 = 0;
            }
            else {
              uVar2 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
              lVar12 = 0;
              do {
                lVar8 = lVar11 - lVar12;
                if (local_58 < lVar11 - lVar12) {
                  lVar8 = local_58;
                }
                _CFDictionaryRemoveAllValues(lVar10);
                _CFDataSetLength(lVar7,lVar8);
                uVar13 = _CFDataGetMutableBytePtr(lVar7);
                _CFDataGetBytes(local_38,lVar12,lVar8,uVar13);
                _CFDictionaryAddValue(lVar10,&cf_FirmwareResponseData,lVar7);
                if (lVar11 <= lVar8 + lVar12) {
                  _CFDictionaryAddValue(lVar10,&cf_DataDone,uVar2);
                }
                iVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar10);
                lVar8 = local_48;
                lVar6 = local_40;
                if (iVar5 != 0) {
                  iVar5 = 9;
                  break;
                }
                lVar12 = lVar12 + local_58;
                iVar5 = 0;
              } while (lVar12 < lVar11);
            }
          }
        }
        else {
          iVar5 = 9;
        }
      }
      else {
        lVar7 = _CFGetTypeID(lVar12);
        lVar8 = _CFDataGetTypeID();
        if ((lVar7 != lVar8) || (lVar7 = _CFDataGetLength(lVar12), lVar7 <= local_58))
        goto LAB_000d7e22;
        _CFRetain(lVar12);
        uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar7 = _CFDictionaryCreateMutableCopy(uVar2,0,local_50);
        lVar6 = local_40;
        lVar8 = local_48;
        if (lVar7 != 0) {
          _CFDictionaryRemoveValue(lVar7,&cf_FirmwareData);
          _CFDictionarySetValue(lVar6,&cf_FirmwareResponseData,lVar7);
          _CFRelease(lVar7);
          _CFDataGetLength(lVar12);
          lVar7 = _CFNumberCreate(uVar2,0xe);
          lVar8 = local_48;
          if (lVar7 == 0) goto LAB_000d8047;
          _CFDictionaryAddValue(lVar6,&cf_DataSize,lVar7);
          _CFRelease(lVar7);
          goto LAB_000d7e41;
        }
LAB_000d8047:
        local_38 = lVar12;
        lVar7 = 0;
        iVar5 = 0x12;
      }
    }
    else {
      _AMSupportLogInternal
                (6,"_handleFirmwareUpdaterRequest","%@ updater has device-generated RestoreInfo",
                 *param_3);
      iVar4 = _AMAuthInstallUpdaterRestoreInfoSet(*(undefined8 *)(local_38 + 0x150),lVar8,lVar10);
      if (iVar4 == 0) goto LAB_000d7c6c;
      iVar5 = -1;
      _AMSupportLogInternal
                (3,"_handleFirmwareUpdaterRequest","AMAuthInstallUpdaterRestoreInfoSet returned %d",
                 iVar4);
LAB_000d7e06:
      _pthread_mutex_unlock(ppVar1);
      local_38 = 0;
      lVar7 = 0;
      lVar6 = local_40;
      lVar8 = local_48;
    }
  }
LAB_000d7e65:
  if (local_60 != 0) {
    _AMRLog(3,&cf__s_failedwitherror___,"_handleFirmwareUpdaterRequest");
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
LAB_000d7ea3:
  if (local_50 != 0) {
    _CFRelease();
    local_50 = 0;
  }
  if (local_60 != 0) {
    _CFRelease();
    local_60 = 0;
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  return iVar5;
}

