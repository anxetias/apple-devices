// rea decompile_all
// name: _SEUpdaterCopyFirmware
// address: 0x256e71
// body: available
// range: 0x256e71-0x2573ba inclusive
// range: 0x2573bd-0x2575ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2573b6 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2575a7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x002571f4) */

void _SEUpdaterCopyFirmware(__CFError **param_1,undefined8 param_2)

{
  qword qVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  __CFError **pp_Var5;
  long lVar6;
  ulong uVar7;
  runtime_error *this;
  undefined8 *puVar8;
  cfstringStruct *pcVar9;
  byte local_170 [16];
  void *local_160;
  char local_158 [24];
  byte local_140 [16];
  undefined8 local_130;
  byte local_128 [16];
  undefined8 local_118;
  byte local_110 [16];
  undefined8 local_100;
  byte local_f8 [16];
  undefined8 local_e8;
  byte local_e0 [16];
  undefined8 local_d0;
  byte local_c8 [16];
  undefined8 local_b8;
  byte local_b0 [16];
  undefined8 local_a0 [4];
  undefined8 local_80;
  long local_78;
  long *local_70;
  long local_68;
  long local_60;
  undefined1 local_58 [8];
  cfstringStruct *pcStack_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_80 = param_2;
  iVar3 = SERestoreInfo::SERestoreInfoLog::get();
  _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
  getCFTypeDescription(local_58);
  pcVar9 = local_48;
  if (((ulong)local_58 & 1) == 0) {
    pcVar9 = (cfstringStruct *)(local_58 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCopyFirmware","[in] %s %s",
             "kSEOptionDeviceInfo",pcVar9);
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  iVar3 = SERestoreInfo::SERestoreInfoLog::get();
  _CFDictionaryGetValue(param_1,&cf_FirmwareData);
  getCFTypeDescription(local_58);
  pcVar9 = local_48;
  if (((ulong)local_58 & 1) == 0) {
    pcVar9 = (cfstringStruct *)(local_58 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCopyFirmware","[in] %s %s",
             "kSEOptionFirmwareData",pcVar9);
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  iVar3 = SERestoreInfo::SERestoreInfoLog::get();
  _CFDictionaryGetValue(param_1,&cf_BuildIdentity);
  getCFTypeDescription(local_58);
  pcVar9 = local_48;
  if (((ulong)local_58 & 1) == 0) {
    pcVar9 = (cfstringStruct *)(local_58 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCopyFirmware","[in] %s %s",
             "kSEOptionBuildIdentity",pcVar9);
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  iVar3 = SERestoreInfo::SERestoreInfoLog::get();
  _CFDictionaryGetValue(param_1,&cf_BundlePath);
  getCFTypeDescription(local_58);
  pcVar9 = local_48;
  if (((ulong)local_58 & 1) == 0) {
    pcVar9 = (cfstringStruct *)(local_58 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCopyFirmware","[in] %s %s",
             "kSEOptionSourceBundlePath",pcVar9);
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  if (param_1 == (__CFError **)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_170,"options is nullptr");
    local_60 = SERestoreInfo::CreateCFError(local_170,2,0,&cf_SEUpdaterErrorDomain);
    if ((local_170[0] & 1) != 0) {
      operator_delete(local_160);
    }
    goto LAB_002571a5;
  }
  lVar4 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = _CFRetain(lVar4);
    if (local_68 != 0) goto LAB_002571a5;
  }
  SERestoreInfo::makeSERestoreInfo((__CFDictionary *)&local_70,param_1);
  if (local_60 == 0) {
    if (local_70 == (long *)0x0) {
      this = (runtime_error *)___cxa_allocate_exception(0x10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_158,"Assertion: ");
      puVar8 = (undefined8 *)std::string::append(local_158);
      local_48 = (cfstringStruct *)puVar8[2];
      local_58 = (undefined1  [8])*puVar8;
      pcStack_50 = (cfstringStruct *)puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      std::runtime_error::runtime_error(this,(string *)local_58);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(this,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
    }
    (**(code **)(*local_70 + 0x18))(local_58);
    puVar8 = &local_118;
    qVar1 = *(qword *)local_58;
    pcStack_50 = (cfstringStruct *)local_58;
    operator_delete((void *)local_58);
    local_58 = (undefined1  [8])&cf_BuildIdentity;
    pcStack_50 = (cfstringStruct *)qVar1;
    local_48 = &cf_Info;
    lVar4 = 0;
    pp_Var5 = param_1;
    do {
      pp_Var5 = (__CFError **)_CFDictionaryGetValue(pp_Var5,*(undefined8 *)(local_58 + lVar4 * 8));
      if (pp_Var5 == (__CFError **)0x0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (local_140,"Missing dict along the path");
        local_60 = SERestoreInfo::CreateCFError(local_140,0x10,0,&cf_SEUpdaterErrorDomain);
        puVar8 = &local_130;
        goto joined_r0x002572d5;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    lVar4 = _CFDictionaryGetValue(pp_Var5,&cf_Path);
    if (lVar4 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_128,"Missing string for path key");
      local_60 = SERestoreInfo::CreateCFError(local_128,0x10,0,&cf_SEUpdaterErrorDomain);
      local_140[0] = local_128[0];
    }
    else {
      lVar6 = _CFDictionaryGetValue(param_1,&cf_BundlePath);
      if (lVar6 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (local_110,"Missing kSEOptionSourceBundlePath");
        local_60 = SERestoreInfo::CreateCFError(local_110,0x10,0,&cf_SEUpdaterErrorDomain);
        puVar8 = &local_100;
        local_140[0] = local_110[0];
      }
      else {
        iVar3 = _AMSupportPlatformCopyURLWithAppendedComponent(0,lVar6,lVar4,0,&local_78);
        if (iVar3 == 0) {
          if (local_78 == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (local_e0,"Fail to do AMSupportPlatformCopyURLWithAppendedComponent");
            local_60 = SERestoreInfo::CreateCFError(local_e0,3,0,&cf_SEUpdaterErrorDomain);
            puVar8 = &local_d0;
            local_140[0] = local_e0[0];
          }
          else {
            iVar3 = _AMSupportCreateDataFromFileURL(0,&local_68);
            if (iVar3 == 0) {
              if (local_68 != 0) goto LAB_00257188;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_b0,"fileData is nullptr");
              local_60 = SERestoreInfo::CreateCFError(local_b0,3,0,&cf_SEUpdaterErrorDomain);
              puVar8 = local_a0;
              local_140[0] = local_b0[0];
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_c8,"Fail to run AMSupportCreateDataFromFileURL");
              local_60 = SERestoreInfo::CreateCFError(local_c8,iVar3,0,&cf_libAmSupportErrorDomain);
              puVar8 = &local_b8;
              local_140[0] = local_c8[0];
            }
          }
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_f8,"Fail to run AMSupportPlatformCopyURLWithAppendedComponent");
          local_60 = SERestoreInfo::CreateCFError(local_f8,iVar3,0,&cf_libAmSupportErrorDomain);
          puVar8 = &local_e8;
          local_140[0] = local_f8[0];
        }
      }
    }
joined_r0x002572d5:
    if ((local_140[0] & 1) != 0) {
      operator_delete((void *)*puVar8);
    }
  }
LAB_00257188:
  plVar2 = local_70;
  local_70 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
LAB_002571a5:
  uVar7 = _SEUpdaterCopyFirmware_cold_1(local_80,&local_60,&local_68,local_58);
  iVar3 = local_58._0_4_;
  if ((uVar7 & 1) == 0) {
    getCFTypeDescription(local_58);
    pcVar9 = local_48;
    if (((ulong)local_58 & 1) == 0) {
      pcVar9 = (cfstringStruct *)(local_58 + 1);
    }
    SERestoreInfo::SERestoreInfoLog::printLog(iVar3,(char *)0x0,"SEUpdaterCopyFirmware","%s",pcVar9)
    ;
  }
  else {
    getCFTypeDescription(local_58);
    pcVar9 = local_48;
    if (((ulong)local_58 & 1) == 0) {
      pcVar9 = (cfstringStruct *)(local_58 + 1);
    }
    SERestoreInfo::SERestoreInfoLog::printLog
              (iVar3,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterCopyFirmware","[out] %s",
               pcVar9);
  }
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (local_78 != 0) {
    _CFRelease();
    local_78 = 0;
  }
  if (local_60 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

