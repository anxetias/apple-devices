// rea decompile_all
// name: _handleFDRInitRequest
// address: 0xd8837
// body: available
// range: 0xd8837-0xd8b51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleFDRInitRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*) */

int _handleFDRInitRequest(AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  __CFDictionary *p_Var6;
  cfstringStruct *pcVar7;
  AMRestoreMuxedDeviceMessage *pAVar8;
  undefined8 uVar9;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  char local_31;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar5 + 0x10);
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_31 = '\0';
  if ((lVar1 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
    _handleFDRInitRequest(param_1,param_2);
    iVar2 = 1;
    goto LAB_000d8ae0;
  }
  _pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x158));
  lVar3 = *(long *)(lVar1 + 0x150);
  iVar2 = -1;
  if (lVar3 == 0) {
    iVar2 = 1;
    _AMRLog(4,&cf__s_unexpectedrequestforFDRtrustobjectwithNULLamai,"_handleFDRInitRequest");
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x158));
  if (lVar3 == 0) goto LAB_000d8ae0;
  uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar3 = _CFDictionaryCreateMutable
                    (uVar9,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar3 == 0) {
    iVar2 = 0x12;
    goto LAB_000d8ae0;
  }
  pAVar8 = *(AMRestoreMuxedDeviceMessage **)(lVar5 + 0x18);
  p_Var6 = (__CFDictionary *)&local_50;
  iVar2 = _AMRAuthInstallCopyTrustObjectOverride();
  if (iVar2 == 0) {
    if (local_50 != 0) {
      uVar4 = _CFGetAllocator(lVar1);
      iVar2 = _AMAuthInstallSupportCreateDataFromFileURL(uVar4,&local_40,local_50);
      if (iVar2 == 0) {
        if (local_40 != 0) {
          _CFDictionarySetValue(lVar3,&cf_FDRTrustData);
          goto LAB_000d8966;
        }
LAB_000d8b28:
        iVar2 = 0xbc6;
      }
      else {
LAB_000d8b1c:
        iVar2 = _AMAuthInstallToRestoreError(iVar2);
      }
      goto LAB_000d8b4a;
    }
LAB_000d8966:
    pAVar8 = *(AMRestoreMuxedDeviceMessage **)(lVar5 + 0x18);
    p_Var6 = (__CFDictionary *)&local_48;
    iVar2 = _AMRAuthInstallCopyBootedOSTrustObjectOverride();
    if (iVar2 != 0) {
      _handleFDRInitRequest(pAVar8,p_Var6);
      goto LAB_000d8b4a;
    }
    if (local_48 != 0) {
      if (local_40 != 0) {
        _CFRelease();
        local_40 = 0;
      }
      uVar4 = _CFGetAllocator(lVar1);
      iVar2 = _AMAuthInstallSupportCreateDataFromFileURL(uVar4,&local_40,local_48);
      if (iVar2 != 0) goto LAB_000d8b1c;
      if (local_40 == 0) goto LAB_000d8b28;
      _CFDictionarySetValue(lVar3,&cf_BootedOSFDRTrustData);
    }
    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar5 + 0x18),&cf_FDRMemoryStorePath);
    if (lVar5 == 0) {
      lVar5 = 0;
LAB_000d8aa5:
      iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar3);
      iVar2 = (uint)(iVar2 != 0) * 9;
    }
    else {
      lVar5 = _AMSupportCreateURLFromString(uVar9,lVar5);
      if (lVar5 != 0) {
        iVar2 = _AMSupportFileURLExists(lVar5,&local_31);
        if ((iVar2 == 0) && (local_31 == '\x01')) {
          iVar2 = _AMSupportCreateDictionaryFromFileURL(uVar9,&local_58,lVar5);
          if ((iVar2 == 0) && (local_58 != 0)) {
            _AMRLog(6,&cf_SuccessfullyloadedmemoryStoreFDRdata_passingbacktodevice_);
            _CFDictionarySetValue(lVar3,&cf_FDRMemoryStoreData,local_58);
            goto LAB_000d8aa5;
          }
          pcVar7 = &cf_UnabletoloadmemoryStoredata_notpassingdatabacktodevice_;
          uVar9 = 4;
        }
        else {
          pcVar7 = &cf_NomemoryStoredatafound_assumingfreshdevice_;
          uVar9 = 6;
        }
        _AMRLog(uVar9,pcVar7);
        goto LAB_000d8aa5;
      }
      lVar5 = 0;
      _AMRLog(3,&cf_UnableconvertmemoryStorepathtoURL_);
      iVar2 = 1;
    }
  }
  else {
    _handleFDRInitRequest(pAVar8,p_Var6);
LAB_000d8b4a:
    lVar5 = 0;
  }
  _CFRelease(lVar3);
  if (local_58 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
LAB_000d8ae0:
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  return iVar2;
}

