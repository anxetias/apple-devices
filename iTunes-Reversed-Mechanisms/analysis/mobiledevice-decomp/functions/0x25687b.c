// rea decompile_all
// name: _SEUpdaterCreateRequest
// address: 0x25687b
// body: available
// range: 0x25687b-0x256c72 inclusive
// range: 0x256c75-0x256cc5 inclusive
// range: 0x256e03-0x256e0a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x256c6e to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SEUpdaterCreateRequest(__CFError **param_1,undefined8 *param_2)

{
  SERestoreInfoBase *pSVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  runtime_error *this;
  undefined8 *puVar7;
  void *pvVar8;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  char local_88 [48];
  SERestoreInfoBase *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  
  iVar3 = SERestoreInfo::SERestoreInfoLog::get();
  _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
  getCFTypeDescription(&local_48);
  pvVar8 = local_38;
  if ((local_48 & 1) == 0) {
    pvVar8 = (void *)((long)&local_48 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCreateRequest","[in] %s %s",
             "kSEOptionDeviceInfo",pvVar8);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  iVar3 = SERestoreInfo::SERestoreInfoLog::get();
  _CFDictionaryGetValue(param_1,&cf_FirmwareData);
  getCFTypeDescription(&local_48);
  pvVar8 = local_38;
  if ((local_48 & 1) == 0) {
    pvVar8 = (void *)((long)&local_48 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCreateRequest","[in] %s %s",
             "kSEOptionFirmwareData",pvVar8);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  iVar3 = SERestoreInfo::SERestoreInfoLog::get();
  _CFDictionaryGetValue(param_1,&cf_BuildIdentity);
  getCFTypeDescription(&local_48);
  pvVar8 = local_38;
  if ((local_48 & 1) == 0) {
    pvVar8 = (void *)((long)&local_48 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCreateRequest","[in] %s %s",
             "kSEOptionBuildIdentity",pvVar8);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  lVar4 = _CFDictionaryGetValue(param_1,&cf_SharedInfo);
  if (lVar4 != 0) {
    _CFDictionaryGetValue(lVar4,&cf_Rose);
    iVar3 = SERestoreInfo::SERestoreInfoLog::get();
    getCFTypeDescription(&local_48);
    pvVar8 = local_38;
    if ((local_48 & 1) == 0) {
      pvVar8 = (void *)((long)&local_48 + 1);
    }
    SERestoreInfo::SERestoreInfoLog::printLog
              (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCreateRequest","[in] %s %s",
               "kSEOptionRoseInfo",pvVar8);
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
    }
  }
  local_50 = 0;
  if (param_1 == (__CFError **)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_b8,"options is nullptr");
    local_50 = SERestoreInfo::CreateCFError(local_b8,2,0,&cf_SEUpdaterErrorDomain);
  }
  else {
    cVar2 = _CFDictionaryContainsKey(param_1,&cf_FirmwareData);
    if ((cVar2 != '\0') ||
       (cVar2 = _CFDictionaryContainsKey(param_1,&cf_BuildIdentity), cVar2 != '\0')) {
      SERestoreInfo::makeSERestoreInfo((__CFDictionary *)&local_58,param_1);
      if (local_50 == 0) {
        if (local_58 == (SERestoreInfoBase *)0x0) {
          this = (runtime_error *)___cxa_allocate_exception(0x10);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_88,"Assertion: ");
          puVar7 = (undefined8 *)std::string::append(local_88);
          local_38 = (void *)puVar7[2];
          local_48 = *puVar7;
          uStack_40 = puVar7[1];
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          std::runtime_error::runtime_error(this,(string *)&local_48);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(this,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
        }
        lVar4 = SERestoreInfo::SERestoreInfoBase::getRequestDict(local_58);
        if (lVar4 == 0) goto LAB_00256ac2;
        uVar5 = _CFRetain(lVar4);
      }
      else {
LAB_00256ac2:
        uVar5 = 0;
      }
      pSVar1 = local_58;
      local_58 = (SERestoreInfoBase *)0x0;
      if (pSVar1 != (SERestoreInfoBase *)0x0) {
        (**(code **)(*(long *)pSVar1 + 8))();
      }
      goto LAB_00256adc;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_a0,"fwData and buildIdentity are nullptr");
    local_50 = SERestoreInfo::CreateCFError(local_a0,2,0,&cf_SEUpdaterErrorDomain);
    local_a8 = local_90;
    local_b8[0] = local_a0[0];
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  uVar5 = 0;
LAB_00256adc:
  if (param_2 != (undefined8 *)0x0 && local_50 != 0) {
    uVar6 = _CFRetain(local_50);
    *param_2 = uVar6;
  }
  lVar4 = local_50;
  iVar3 = SERestoreInfo::SERestoreInfoLog::get();
  if (lVar4 == 0) {
    getCFTypeDescription(&local_48);
    pvVar8 = local_38;
    if ((local_48 & 1) == 0) {
      pvVar8 = (void *)((long)&local_48 + 1);
    }
    SERestoreInfo::SERestoreInfoLog::printLog
              (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCreateRequest","[out] %s",
               pvVar8);
  }
  else {
    getCFTypeDescription(&local_48);
    pvVar8 = local_38;
    if ((local_48 & 1) == 0) {
      pvVar8 = (void *)((long)&local_48 + 1);
    }
    SERestoreInfo::SERestoreInfoLog::printLog
              (iVar3,(char *)0x0,"SEUpdaterCreateRequest","%s",pvVar8);
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  return uVar5;
}

