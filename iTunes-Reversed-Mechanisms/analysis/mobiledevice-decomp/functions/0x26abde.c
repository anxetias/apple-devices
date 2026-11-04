// rea decompile_all
// name: __AMRestoreWKMSCopyDecryptionKeyFromServer
// address: 0x26abde
// body: available
// range: 0x26abde-0x26b411 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestoreWKMSCopyDecryptionKeyFromServer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  size_t sVar14;
  cfstringStruct *pcVar15;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_90 = 0;
  local_78 = 0;
  local_88 = 0;
  local_94 = 3;
  local_68 = 0;
  local_70 = param_1;
  local_60 = param_6;
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_3;
  uVar2 = _CFURLCopyHostName(param_3);
  local_38 = 0;
  lVar3 = __copyRestoreOptionOrPreferences(param_7,&cf_AuthorizationTokensPath);
  if (lVar3 == 0) {
LAB_0026b2b5:
    lVar4 = 0;
  }
  else {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFStringGetTypeID();
    if ((lVar4 != lVar5) ||
       (iVar1 = __AMRestoreCreateCFArrayWithContentsOfFile(lVar3,&local_38), iVar1 != 0))
    goto LAB_0026b2b5;
    lVar4 = _CFGetTypeID(local_38);
    lVar5 = _CFDictionaryGetTypeID();
    if (lVar4 == lVar5) {
      lVar4 = _CFDictionaryGetValue(local_38,uVar2);
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFStringGetTypeID();
      if (lVar5 == lVar6) {
        _AMRLog(6,&cf_WKMS_usingstoredauthtokenfor__from___,uVar2,lVar3);
        _AMSupportSafeRetain(lVar4);
      }
      else {
        lVar4 = 0;
        _AMRLog(4,&cf_WKMS_foundauthtokenfor___butnotasstring_ignoring,uVar2);
      }
    }
    else {
      lVar4 = 0;
      _AMRLog(4,&cf_WKMS_foundauthtokenfile_butnotasdictionary_ignoring);
    }
  }
  _AMSupportSafeRelease(local_38);
  _AMSupportSafeRelease(lVar3);
  local_38 = 0;
  local_58 = 0;
  local_80 = lVar4;
  lVar3 = _CFDictionaryGetValue(param_7,&cf_MutualTLSIdentities);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFStringGetTypeID();
    if (lVar4 == lVar5) {
      iVar1 = __AMRestoreCreateCFArrayWithContentsOfFile(lVar3,&local_58);
      if (iVar1 == 0) {
        lVar3 = _CFGetTypeID(local_58);
        lVar4 = _CFArrayGetTypeID();
        if (lVar3 == lVar4) {
          lVar3 = _CFArrayGetCount(local_58);
          if (lVar3 != 0) {
            lVar3 = _CFArrayGetCount(local_58);
            if (0 < lVar3) {
              lVar3 = 0;
              do {
                uVar7 = _CFArrayGetValueAtIndex(local_58,lVar3);
                lVar4 = _CFGetTypeID(uVar7);
                lVar5 = _CFDataGetTypeID();
                if (lVar4 != lVar5) {
                  pcVar15 = &cf_WKMS_mTLSidentityfilecontainsinvalidentries_ignoring;
                  goto LAB_0026b2a4;
                }
                lVar3 = lVar3 + 1;
                lVar4 = _CFArrayGetCount(local_58);
              } while (lVar3 < lVar4);
            }
            uVar7 = _CFDictionaryCreateMutable
                              (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                               PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            _CFDictionarySetValue
                      (uVar7,*(undefined8 *)PTR__kSecClass_004411e8,
                       *(undefined8 *)PTR__kSecClassIdentity_004411f0);
            _CFDictionarySetValue(uVar7,*(undefined8 *)PTR__kSecMatchItemList_00441210,local_58);
            _CFDictionarySetValue
                      (uVar7,*(undefined8 *)PTR__kSecMatchLimit_00441218,
                       *(undefined8 *)PTR__kSecMatchLimitOne_00441220);
            _CFDictionarySetValue
                      (uVar7,*(undefined8 *)PTR__kSecReturnRef_00441230,
                       *(undefined8 *)PTR__kSecReturnData_00441228);
            iVar1 = _SecItemCopyMatching(uVar7,&local_38);
            if (iVar1 == 0) {
              lVar3 = _CFGetTypeID(local_38);
              lVar4 = _SecIdentityGetTypeID();
              if (lVar3 != lVar4) {
                _AMRLog(4,&cf_WKMS_FoundmTLSidentity_butreceivednonsensicalreturnvalue_ignoring);
                _CFRelease(local_38);
                local_38 = 0;
              }
            }
            else {
              _AMRLog(4,&cf_WKMS_NovalidmTLSidentitiesfound__d,iVar1);
            }
            goto LAB_0026ae81;
          }
          pcVar15 = &cf_WKMS_mTLSidentityfileprovided_butisempty_ignoring;
          goto LAB_0026b2a4;
        }
      }
      pcVar15 = &cf_WKMS_mTLSidentityfileprovided_butdoesn_tcontainarray_ignoring;
    }
    else {
      pcVar15 = &cf_WKMS_mTLSidentityoptionprovided_butnotasastring_ignoring;
    }
LAB_0026b2a4:
    uVar7 = 0;
    _AMRLog(4,pcVar15);
  }
LAB_0026ae81:
  _AMSupportSafeRelease(uVar7);
  uVar7 = local_38;
  lVar3 = _CFDictionaryGetValue(param_7,&cf_ImageDecryptionKeysEnableSso);
  if (local_80 == 0) {
    if ((lVar3 == 0) || (lVar3 == *(long *)PTR__kCFBooleanTrue_00441110)) {
      local_38 = 0;
      iVar1 = _AMAuthInstallSsoCreateDAWToken(local_70,&cf_15531444804973541,0x2f9,0,&local_80);
      if (iVar1 != 0) {
        _AMRLog(4,&cf_WKMS_FailedtoobtainDAWtokenforhost__appID_lld_servicename___,uVar2,0x2f9,
                &cf_15531444804973541);
      }
      if (local_80 != 0) goto LAB_0026aeb0;
    }
    local_40 = 0;
    _AMRLog(3,&cf_WKMS_Noauthorizationtokenavailablefor___failing,uVar2);
    uVar8 = 0;
  }
  else {
LAB_0026aeb0:
    uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar8 = _CFStringCreateWithFormat(uVar12,0,&cf_Bearer__);
    lVar3 = _CFHTTPMessageCreateRequest
                      (uVar12,local_50,local_40,*(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8);
    if (lVar3 != 0) {
      local_40 = uVar12;
      _CFHTTPMessageSetBody(lVar3,local_48);
      _CFHTTPMessageSetHeaderFieldValue(lVar3,&cf_Authorization,uVar8);
      lVar4 = local_60;
      local_50 = lVar3;
      if ((local_60 != 0) && (sVar9 = _CFDictionaryGetCount(local_60), 0 < (long)sVar9)) {
        local_70 = uVar2;
        local_48 = uVar8;
        pvVar10 = _calloc(sVar9,8);
        pvVar11 = _calloc(sVar9,8);
        if ((pvVar10 == (void *)0x0) || (pvVar11 == (void *)0x0)) {
          local_40 = 0;
          _AMRLog(3,&cf_WKMS_calloc_3_failed);
          local_60 = 0;
          uVar12 = 0;
          lVar3 = 0;
          uVar8 = local_48;
          uVar2 = local_70;
          goto LAB_0026b196;
        }
        _CFDictionaryGetKeysAndValues(lVar4,pvVar10,pvVar11);
        sVar14 = 0;
        do {
          lVar3 = _CFGetTypeID(*(undefined8 *)((long)pvVar10 + sVar14 * 8));
          lVar4 = _CFStringGetTypeID();
          if (lVar3 == lVar4) {
            lVar3 = _CFGetTypeID(*(undefined8 *)((long)pvVar11 + sVar14 * 8));
            lVar4 = _CFStringGetTypeID();
            if (lVar3 != lVar4) goto LAB_0026afc7;
            _CFHTTPMessageSetHeaderFieldValue
                      (local_50,*(undefined8 *)((long)pvVar10 + sVar14 * 8),
                       *(undefined8 *)((long)pvVar11 + sVar14 * 8));
          }
          else {
LAB_0026afc7:
            _AMRLog(3,&cf_WKMS_Receivedadditionalheaderofnon_stringtype_ignoring);
          }
          sVar14 = sVar14 + 1;
        } while (sVar9 != sVar14);
        _free(pvVar11);
        _free(pvVar10);
        uVar8 = local_48;
        uVar2 = local_70;
        lVar3 = local_50;
      }
      uVar13 = local_40;
      uVar12 = _CFDictionaryCreateMutable
                         (local_40,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      uVar13 = _CFNumberCreate(uVar13,3,&local_94);
      _CFDictionarySetValue(uVar12,&cf_MaxAttempts,uVar13);
      local_60 = _AMSupportCreateSetFromCFIndexArray
                           (&__AMRestoreWKMSCopyDecryptionKeyFromServer_validResponseRange,6);
      _CFDictionaryAddValue(uVar12,&cf_ValidResponses);
      iVar1 = _AMSupportHttpSendSync(lVar3,uVar12,&local_68,&local_88,&local_78,&local_90);
      local_40 = uVar13;
      if (iVar1 == 0) {
        if (local_78 == 200) {
          if (local_68 == 0) {
            pcVar15 = &cf_WKMS_Keyfetchingrequestreturnednodata;
          }
          else {
            lVar3 = _CFDataGetLength();
            if (lVar3 != 0) {
              lVar3 = _CFRetain(local_68);
              _AMRLog(6,&cf_WKMS_Fetchedkeyforarchive__from__,param_2,uVar2);
              goto LAB_0026b196;
            }
            pcVar15 = &cf_WKMS_Keyfetchingrequestreturnedemptyresponse;
          }
          lVar3 = 0;
          _AMRLog(3,pcVar15);
        }
        else {
          lVar3 = 0;
          _AMRLog(3,&cf_WKMS_Keyfetchingrequestfailedwithstatus_ld);
        }
      }
      else {
        lVar3 = 0;
        _AMRLog(3,&cf_WKMS_Keyfetchingrequestfailed__d____,iVar1,local_90);
      }
      goto LAB_0026b196;
    }
    local_40 = 0;
    _AMRLog(3,&cf_WKMS_Failedtocreatekeyfetchingrequest);
  }
  local_50 = 0;
  local_60 = 0;
  uVar12 = 0;
  lVar3 = 0;
LAB_0026b196:
  uVar13 = 0;
  if ((lVar3 == 0) && (local_78 != 0)) {
    if (local_68 == 0) {
      uVar13 = 0;
    }
    else {
      local_48 = uVar8;
      lVar4 = _CFStringCreateFromExternalRepresentation
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_68,0x8000100);
      if (lVar4 == 0) {
        uVar13 = 0;
        uVar8 = local_48;
      }
      else {
        uVar13 = _CFStringCreateMutableCopy(0,0,lVar4);
        _CFStringTrimWhitespace(uVar13);
        _CFRelease(lVar4);
        uVar8 = local_48;
      }
    }
    _AMRLog(3,&cf_WKMS_ServerResponse_ld_____,local_78,uVar13,local_88);
  }
  _AMSupportSafeRelease(local_90);
  _AMSupportSafeRelease(uVar13);
  _AMSupportSafeRelease(local_88);
  _AMSupportSafeRelease(local_68);
  _AMSupportSafeRelease(local_60);
  _AMSupportSafeRelease(local_40);
  _AMSupportSafeRelease(uVar12);
  _AMSupportSafeRelease(local_50);
  _AMSupportSafeRelease(uVar2);
  _AMSupportSafeRelease(uVar8);
  _AMSupportSafeRelease(local_80);
  _AMSupportSafeRelease(uVar7);
  return lVar3;
}

