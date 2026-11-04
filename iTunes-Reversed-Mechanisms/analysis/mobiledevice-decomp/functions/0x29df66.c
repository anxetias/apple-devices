// rea decompile_all
// name: _AMAuthInstallUpdaterCryptex1CreateRequest
// address: 0x29df66
// body: available
// range: 0x29df66-0x29e60c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallUpdaterCryptex1CreateRequest
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 extraout_RDX;
  cfstringStruct *pcVar12;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  int local_4c;
  long local_48;
  long local_40;
  long *local_38;
  
  local_4c = -1;
  local_68 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_40 = _CFDictionaryCreateMutable
                       (local_68,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  local_80 = param_3;
  local_78 = param_2;
  if (local_40 == 0) {
    pcVar12 = &cf__s_requestisNULL;
    uVar6 = 2;
LAB_0029e546:
    _AMSupportCreateErrorInternal
              (param_4,&cf_AuthInstallErrorDomain,uVar6,0,pcVar12,
               "AMAuthInstallUpdaterCryptex1CreateRequest");
    local_48 = 0;
    lVar4 = 0;
  }
  else {
    local_38 = param_4;
    lVar3 = _CFDictionaryGetValue(param_1,&cf_BuildIdentity);
    if (lVar3 == 0) {
      pcVar12 = &cf__s_buildIdentityisNULL;
LAB_0029e536:
      uVar6 = 0xe;
      param_4 = local_38;
      goto LAB_0029e546;
    }
    local_58 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    if (local_58 == 0) {
      pcVar12 = &cf__s_deviceInfoisNULL;
      goto LAB_0029e536;
    }
    lVar4 = __AMAuthInstallCryptex1CopyManifestProperties();
    param_4 = local_38;
    lVar5 = local_40;
    if (lVar4 == 0) {
      lVar3 = 0;
      _AMSupportCreateErrorInternal
                (local_38,&cf_AuthInstallErrorDomain,2,0,&cf__s_manifestPropertiesisNULL,
                 "AMAuthInstallUpdaterCryptex1CreateRequest");
      local_48 = 0;
      lVar4 = 0;
      goto LAB_0029e46e;
    }
    lVar5 = _CFArrayGetCount(lVar4);
    if (0 < lVar5) {
      lVar5 = 0;
      do {
        uVar6 = _CFArrayGetValueAtIndex(lVar4,lVar5);
        lVar7 = _CFDictionaryGetValue(lVar3,uVar6);
        if (lVar7 != 0) {
          _CFDictionarySetValue(local_40,uVar6,lVar7);
        }
        lVar5 = lVar5 + 1;
        lVar7 = _CFArrayGetCount(lVar4);
      } while (lVar5 < lVar7);
    }
    lVar5 = __AMAuthInstallCryptex1CopyObjectTags();
    param_4 = local_38;
    if (lVar5 != 0) {
      lVar7 = _CFArrayGetCount(lVar5);
      local_48 = lVar5;
      if (0 < lVar7) {
        local_70 = &cf_Digest;
        lVar7 = 0;
        do {
          local_60 = _CFArrayGetValueAtIndex(lVar5,lVar7);
          lVar8 = _CFDictionaryGetValue(lVar3,local_60);
          if (lVar8 != 0) {
            lVar9 = _CFGetTypeID(lVar8);
            lVar10 = _CFDictionaryGetTypeID();
            lVar5 = local_48;
            if ((lVar9 == lVar10) && (lVar8 = _CFDictionaryGetValue(lVar8,local_70), lVar8 != 0)) {
              lVar9 = _CFGetTypeID(lVar8);
              lVar10 = _CFDataGetTypeID();
              lVar5 = local_48;
              if (lVar9 == lVar10) {
                local_88 = lVar8;
                lVar8 = _CFDictionaryCreateMutable
                                  (local_68,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                if (lVar8 == 0) {
                  pcVar12 = &cf__s_requestEntryisNULL;
                  uStack_a0 = 2;
                  goto LAB_0029e4dd;
                }
                _CFDictionarySetValue(lVar8,local_70,local_88);
                _CFDictionarySetValue(local_40,local_60,lVar8);
                _AMSupportSafeRelease(lVar8);
              }
            }
          }
          lVar7 = lVar7 + 1;
          lVar8 = _CFArrayGetCount(lVar5);
        } while (lVar7 < lVar8);
      }
      lVar5 = local_40;
      _AMSupportCFDictionarySetBoolean(local_40,&cf__Cryptex1_Ticket,1);
      lVar3 = _CFDictionaryGetValue(lVar3,&cf_Cryptex1_Type);
      if (lVar3 != 0) {
        lVar7 = _CFGetTypeID(lVar3);
        lVar8 = _CFNumberGetTypeID();
        if (lVar7 == lVar8) {
          _CFNumberGetValue(lVar3,9,&local_4c);
        }
      }
      lVar7 = local_58;
      cVar1 = _AMSupportCFDictionaryGetBoolean(local_58,&cf_UseGlobalSigning,0);
      if (cVar1 == '\0') {
        local_60 = local_60 & 0xffffffffffffff00;
        uVar6 = _CFNumberGetTypeID();
        param_4 = local_38;
        lVar3 = __AMAuthInstallCryptex1GetDeviceInfoValue(lVar7,&cf_ApChipId,uVar6,local_38);
        if (lVar3 == 0) {
          lVar3 = 0;
          goto LAB_0029e46e;
        }
        uVar6 = _CFNumberGetTypeID();
        lVar5 = __AMAuthInstallCryptex1GetDeviceInfoValue(lVar7,&cf_ApECID,uVar6,param_4);
        if (lVar5 == 0) {
          lVar3 = 0;
          param_4 = local_38;
          lVar5 = local_40;
          goto LAB_0029e46e;
        }
        local_98 = 0;
        uStack_90 = 0;
        _CFNumberGetValue(lVar3,3);
        _CFNumberGetValue(lVar5,4,&uStack_90);
        local_98 = CONCAT44(local_98._4_4_ >> 0x18 | (local_98._4_4_ & 0xff0000) >> 8 |
                            (local_98._4_4_ & 0xff00) << 8 | local_98._4_4_ << 0x18,
                            (undefined4)local_98);
        uStack_90 = uStack_90 >> 0x38 | (uStack_90 & 0xff000000000000) >> 0x28 |
                    (uStack_90 & 0xff0000000000) >> 0x18 | (uStack_90 & 0xff00000000) >> 8 |
                    (uStack_90 & 0xff000000) << 8 | (uStack_90 & 0xff0000) << 0x18 |
                    (uStack_90 & 0xff00) << 0x28 | uStack_90 << 0x38;
        lVar3 = _CFDataCreate(local_68,&local_98,0x10);
        lVar5 = local_40;
        if (lVar3 == 0) {
          pcVar12 = &cf__s_udidismissingorinvalid;
          uStack_a0 = 0xe;
LAB_0029e4dd:
          param_4 = local_38;
          _AMSupportCreateErrorInternal
                    (local_38,&cf_AuthInstallErrorDomain,uStack_a0,0,pcVar12,
                     "AMAuthInstallUpdaterCryptex1CreateRequest");
          goto LAB_0029e5d1;
        }
        _CFDictionarySetValue(local_40,&cf_Cryptex1_UDID,lVar3);
        lVar7 = local_58;
        cVar1 = (char)local_60;
      }
      else {
        _AMSupportCFDictionarySetInteger32(lVar5,&cf_Cryptex1_UseGlobalSigning,1);
        _CFDictionaryRemoveValue(lVar5,&cf_Cryptex1_NonceDomain);
        _CFDictionaryRemoveValue(lVar5,&cf_Cryptex1_LiveNonceDomain);
        _CFDictionaryRemoveValue(lVar5,&cf_Cryptex1_ExclaveNonceDomain);
        _CFDictionaryRemoveValue(lVar5,&cf_Cryptex1_ExclaveLiveNonceDomain);
        if (local_4c == 1) {
          cVar2 = _AMSupportCFDictionaryGetBoolean(lVar7,&cf_IsX86,0);
          if (cVar2 == '\0') {
            puVar11 = &_kAMAuthInstallTagApUseGlobalSigning;
          }
          else {
            puVar11 = &_kAMAuthInstallTagX86UseGlobalSigning;
          }
          _AMSupportCFDictionarySetInteger32(lVar5,*puVar11,1);
        }
        lVar3 = 0;
      }
      uVar6 = _CFBooleanGetTypeID();
      lVar8 = __AMAuthInstallCryptex1GetDeviceInfoValue(lVar7,&cf_ApProductionMode,uVar6,local_38);
      param_4 = local_38;
      if (((((lVar8 != 0) &&
            (_CFDictionarySetValue(lVar5,&cf_Cryptex1_ProductionMode,lVar8), param_4 = local_38,
            cVar1 == '\0')) &&
           (cVar1 = __AMAuthInstallCryptex1RequestSetNonce
                              (lVar5,&cf_Cryptex1_Nonce,lVar7,&cf_Nonce,local_38), lVar7 = local_58,
           cVar1 != '\0')) &&
          ((local_4c == 4 &&
           (cVar1 = __AMAuthInstallCryptex1RequestSetNonce
                              (lVar5,&cf_Cryptex1_LiveNonce,local_58,&cf_LiveNonce,param_4),
           cVar1 != '\0')))) &&
         ((cVar1 = __AMAuthInstallCryptex1RequestSetNonce
                             (lVar5,&cf_Cryptex1_ExclaveNonce,lVar7,&cf_ExclaveNonce,param_4),
          cVar1 != '\0' &&
          (cVar1 = __AMAuthInstallCryptex1RequestSetNonce
                             (lVar5,&cf_Cryptex1_ExclaveLiveNonce,lVar7,&cf_ExclaveLiveNonce,param_4
                             ), cVar1 != '\0')))) {
        uVar6 = _CFDataGetTypeID();
        lVar7 = __AMAuthInstallCryptex1GetDeviceInfoValue(lVar7,&cf_BootUUID,uVar6,param_4);
        if (lVar7 != 0) {
          _CFDictionarySetValue(lVar5,&cf_Cryptex1_BootUUID,lVar7);
        }
      }
      goto LAB_0029e46e;
    }
    _AMSupportCreateErrorInternal
              (local_38,&cf_AuthInstallErrorDomain,2,0,&cf__s_objectTagsisNULL,
               "AMAuthInstallUpdaterCryptex1CreateRequest");
    local_48 = 0;
  }
LAB_0029e5d1:
  lVar3 = 0;
  lVar5 = local_40;
LAB_0029e46e:
  _AMSupportSafeRelease(lVar4);
  _AMSupportSafeRelease(local_48);
  _AMSupportSafeRelease(lVar3);
  if ((param_4 != (long *)0x0) && (*param_4 != 0)) {
    lVar5 = 0;
    __AMAuthInstallCryptex1Log
              (local_78,local_80,extraout_RDX,"AMAuthInstallUpdaterCryptex1CreateRequest");
  }
  return lVar5;
}

