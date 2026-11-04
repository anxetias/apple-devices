// rea decompile_all
// name: _SEUpdaterGetTags
// address: 0x255f8d
// body: available
// range: 0x255f8d-0x256553 inclusive
// range: 0x256556-0x2565ac inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25654f to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00256339) */

long _SEUpdaterGetTags(__CFError **param_1,undefined8 *param_2)

{
  bool bVar1;
  SERestoreInfoBase *pSVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 uVar12;
  runtime_error *this;
  undefined8 *puVar13;
  char *pcVar14;
  void *pvVar15;
  ulong uVar16;
  byte local_f8 [16];
  void *local_e8;
  byte local_e0 [16];
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  char local_b0 [24];
  byte local_98 [16];
  void *local_88;
  undefined8 *local_68;
  SERestoreInfoBase *local_60;
  __CFError **local_58;
  long local_50;
  undefined8 local_48;
  void *pvStack_40;
  void *local_38;
  
  local_68 = param_2;
  iVar4 = SERestoreInfo::SERestoreInfoLog::get();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_48,"Helsinki_Restore_Host-56.5.2");
  pvVar15 = local_38;
  if (((ulong)local_48 & 1) == 0) {
    pvVar15 = (void *)((long)&local_48 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar4,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterGetTags","Project version%s: %s"
             ,"",pvVar15);
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  lVar6 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
  iVar4 = SERestoreInfo::SERestoreInfoLog::get();
  getCFTypeDescription(&local_48);
  pvVar15 = local_38;
  if (((ulong)local_48 & 1) == 0) {
    pvVar15 = (void *)((long)&local_48 + 1);
  }
  SERestoreInfo::SERestoreInfoLog::printLog
            (iVar4,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterGetTags","[in] %s %s",
             "kSEOptionDeviceInfo",pvVar15);
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if (lVar6 != 0) {
    lVar7 = _CFGetTypeID(lVar6);
    lVar8 = _CFDataGetTypeID();
    if (lVar7 == lVar8) {
      local_58 = param_1;
      lVar7 = _CFDataGetBytePtr(lVar6);
      uVar9 = _CFDataGetLength(lVar6);
      lVar6 = _CFStringCreateMutable(0,uVar9 * 2);
      if (0 < (long)uVar9) {
        uVar10 = 0;
        uVar16 = 1;
        do {
          _CFStringAppendFormat(lVar6,0,&cf__02x,*(undefined1 *)(lVar7 + uVar10));
          bVar1 = uVar16 < uVar9;
          uVar10 = uVar16;
          uVar16 = (ulong)((int)uVar16 + 1);
        } while (bVar1);
      }
      pcVar11 = (char *)_CFStringGetCStringPtr(lVar6,0x8000100);
      pcVar14 = "null value";
      if (pcVar11 != (char *)0x0) {
        pcVar14 = pcVar11;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_48,pcVar14);
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      iVar4 = SERestoreInfo::SERestoreInfoLog::get();
      param_1 = local_58;
      pvVar15 = local_38;
      if (((ulong)local_48 & 1) == 0) {
        pvVar15 = (void *)((long)&local_48 + 1);
      }
      SERestoreInfo::SERestoreInfoLog::printLog
                (iVar4,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterGetTags","[in] %s 0x%s",
                 "SEManifest",pvVar15);
      if (((ulong)local_48 & 1) != 0) {
        operator_delete(local_38);
      }
    }
  }
  local_50 = 0;
  lVar6 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar6 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_f8,"Cannot allocate memory for outputDict");
    local_50 = SERestoreInfo::CreateCFError(local_f8,3,0,&cf_SEUpdaterErrorDomain);
joined_r0x00256429:
    if ((local_f8[0] & 1) != 0) {
      operator_delete(local_e8);
    }
    lVar7 = 0;
  }
  else {
    uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar7 = _CFArrayCreateMutable(uVar12,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar7 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_e0,"Cannot allocate memory for tagsInBI");
      local_50 = SERestoreInfo::CreateCFError(local_e0,3,0,&cf_SEUpdaterErrorDomain);
      local_e8 = local_d0;
      local_f8[0] = local_e0[0];
      goto joined_r0x00256429;
    }
    if (param_1 != (__CFError **)0x0) {
      SERestoreInfo::makeSERestoreInfo((__CFDictionary *)&local_60,param_1);
      if (local_50 == 0) {
        if (local_60 == (SERestoreInfoBase *)0x0) {
          this = (runtime_error *)___cxa_allocate_exception(0x10);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_b0,"Assertion: ");
          puVar13 = (undefined8 *)std::string::append(local_b0);
          local_38 = (void *)puVar13[2];
          local_48 = (void *)*puVar13;
          pvStack_40 = (void *)puVar13[1];
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          std::runtime_error::runtime_error(this,(string *)&local_48);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(this,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
        }
        (**(code **)(*(long *)local_60 + 0x10))(&local_48);
        if (pvStack_40 != local_48) {
          uVar9 = 0;
          do {
            _CFArrayAppendValue(lVar7,*(undefined8 *)((long)local_48 + uVar9 * 8));
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulong)((long)pvStack_40 - (long)local_48 >> 3));
        }
        _CFDictionaryAddValue(lVar6,&cf_BuildIdentityTags,lVar7);
        lVar8 = _CFArrayCreateMutable(uVar12,0,PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar8 == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (local_98,"Cannot allocate memory for tagsInTssResponse");
          local_50 = SERestoreInfo::CreateCFError(local_98,3,0,&cf_SEUpdaterErrorDomain);
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
        }
        else {
          uVar5 = SERestoreInfo::SERestoreInfoBase::getChipID(local_60);
          uVar12 = SERestoreInfo::SERestoreInfoBase::getTSSResponseTicketTag(uVar5);
          _CFArrayAppendValue(lVar8,uVar12);
          _CFDictionaryAddValue(lVar6,&cf_ResponseTags,lVar8);
        }
        if (local_48 != (void *)0x0) {
          pvStack_40 = local_48;
          operator_delete(local_48);
        }
      }
      else {
        lVar8 = 0;
      }
      pSVar2 = local_60;
      local_60 = (SERestoreInfoBase *)0x0;
      if (pSVar2 != (SERestoreInfoBase *)0x0) {
        (**(code **)(*(long *)pSVar2 + 8))();
      }
      goto LAB_002562c6;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_c8,"options is nullptr");
    local_50 = SERestoreInfo::CreateCFError(local_c8,2,0,&cf_SEUpdaterErrorDomain);
    if ((local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
  }
  lVar8 = 0;
LAB_002562c6:
  puVar13 = local_68;
  if (local_68 != (undefined8 *)0x0 && local_50 != 0) {
    uVar12 = _CFRetain(local_50);
    *puVar13 = uVar12;
  }
  if (local_50 != 0 && lVar6 != 0) {
    _CFRelease(lVar6);
    lVar6 = 0;
  }
  lVar3 = local_50;
  iVar4 = SERestoreInfo::SERestoreInfoLog::get();
  if (lVar3 == 0) {
    getCFTypeDescription(&local_48);
    pvVar15 = local_38;
    if (((ulong)local_48 & 1) == 0) {
      pvVar15 = (void *)((long)&local_48 + 1);
    }
    SERestoreInfo::SERestoreInfoLog::printLog
              (iVar4,(char *)((long)&MACH_HEADER.magic + 2),"SEUpdaterGetTags","[out] %s",pvVar15);
  }
  else {
    getCFTypeDescription(&local_48);
    pvVar15 = local_38;
    if (((ulong)local_48 & 1) == 0) {
      pvVar15 = (void *)((long)&local_48 + 1);
    }
    SERestoreInfo::SERestoreInfoLog::printLog(iVar4,(char *)0x0,"SEUpdaterGetTags","%s",pvVar15);
  }
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if (local_50 != 0) {
    _CFRelease();
    local_50 = 0;
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  return lVar6;
}

