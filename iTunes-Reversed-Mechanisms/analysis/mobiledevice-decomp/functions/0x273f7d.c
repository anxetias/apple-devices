// rea decompile_all
// name: _AMAuthInstallApSetParameters
// address: 0x273f7d
// body: available
// range: 0x273f7d-0x274994 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApSetParameters(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  cfstringStruct *pcVar11;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    pvVar5 = _calloc(1,200);
    *(void **)(param_1 + 0x10) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    *(undefined4 *)((long)pvVar5 + 0x10) = 1;
  }
  lVar6 = _CFDictionaryGetValue(param_2,&cf_ECID);
  if (lVar6 == 0) {
LAB_00274012:
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApChipID);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFNumberGetTypeID();
      if ((lVar7 == lVar8) &&
         (cVar1 = _CFNumberGetValue(lVar6,3,*(long *)(param_1 + 0x10) + 8), cVar1 == '\0')) {
        pcVar10 = "failed to convert chip ID %@";
        goto LAB_0027497f;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApBoardID);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFNumberGetTypeID();
      if ((lVar7 == lVar8) &&
         (cVar1 = _CFNumberGetValue(lVar6,3,*(long *)(param_1 + 0x10) + 0xc), cVar1 == '\0')) {
        pcVar10 = "failed to convert board ID %@";
        goto LAB_0027497f;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApSikaFuse);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFNumberGetTypeID();
      if (lVar7 == lVar8) {
        _AMSupportSafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa0));
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa0) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_UIDMode);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        _AMSupportSafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8));
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_RequiresUIDMode);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        _AMSupportSafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0));
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_Ap_EphemeralDataMode);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        _AMSupportSafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb8));
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb8) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_Ap_DisablePlatformOnlyCode);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        _AMSupportSafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xc0));
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xc0) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApSecurityDomain);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFNumberGetTypeID();
      if ((lVar7 == lVar8) &&
         (cVar1 = _CFNumberGetValue(lVar6,3,*(long *)(param_1 + 0x10) + 0x10), cVar1 == '\0')) {
        pcVar10 = "failed to convert security domain %@";
        goto LAB_0027497f;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApProductionMode);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x14) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApSupportsImg4);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x60) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApImg4DigestType);
    if (lVar6 == 0) {
LAB_00274382:
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x70) = 1;
    }
    else {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFStringGetTypeID();
      if ((lVar7 != lVar8) || (lVar7 = _CFStringCompare(lVar6,&cf_sha1,1), lVar7 == 0))
      goto LAB_00274382;
      lVar7 = _CFStringCompare(lVar6,&cf_sha2_256,1);
      if (lVar7 == 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x70) = 0x100;
      }
      else {
        lVar7 = _CFStringCompare(lVar6,&cf_sha2_384,1);
        if (lVar7 == 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x70) = 0x180;
        }
        else {
          _AMAuthInstallLog(3,"AMAuthInstallApSetParameters","unsupported digest type %@",lVar6);
        }
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApNonce);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFDataGetTypeID();
      if (lVar7 == lVar8) {
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_SepNonce);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFDataGetTypeID();
      if ((lVar7 == lVar8) && (iVar4 = _AMAuthInstallApImg4SetSepNonce(param_1,lVar6), iVar4 != 0))
      {
        return iVar4;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApNonceSlotID);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFNumberGetTypeID();
      if (lVar7 == lVar8) {
        _AMAuthInstallApImg4SetApNonceSlotID(param_1,lVar6);
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_SepNonceSlotID);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFNumberGetTypeID();
      if (lVar7 == lVar8) {
        _AMAuthInstallApImg4SetSepNonceSlotID(param_1,lVar6);
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_Ap_SoftwareNonceForUpdateFreshness);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFDataGetTypeID();
      if (lVar7 == lVar8) {
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApSecurityMode);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x48) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApInRomDFU);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x50) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApEffectiveSecurityMode);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x52) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApEffectiveProductionMode);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x51) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_DemotionPolicy);
    pcVar11 = &cf___;
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFStringGetTypeID();
      if (lVar7 == lVar8) {
        pcVar11 = (cfstringStruct *)_CFRetain(lVar6);
      }
    }
    *(cfstringStruct **)(*(long *)(param_1 + 0x10) + 0x58) = pcVar11;
    lVar6 = _CFDictionaryGetValue(param_2,&cf_HardwareModel);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFStringGetTypeID();
      if (lVar7 == lVar8) {
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ApX86);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x74) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_UseGlobalSigning);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x4f) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_Ap_InternalUseOnlySW);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x4b) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_NoDefaultRequestRules);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFBooleanGetTypeID();
      if (lVar7 == lVar8) {
        uVar2 = _CFBooleanGetValue(lVar6);
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x98) = uVar2;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_TagPrefix);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFStringGetTypeID();
      if (lVar7 == lVar8) {
        _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90));
        _CFStringGetLength(lVar6);
        lVar7 = _CFStringCreateMutableCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,lVar6)
        ;
        *(long *)(*(long *)(param_1 + 0x10) + 0x90) = lVar7;
        if (lVar7 == 0) {
          pcVar10 = "failed to convert TagPrefix %@";
          goto LAB_0027497f;
        }
        cVar1 = _CFStringHasSuffix(lVar6,&cf__);
        if (cVar1 != '\0') {
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90);
          lVar6 = _CFStringGetLength(uVar9);
          _CFStringPad(uVar9,0,lVar6 + -1,0);
        }
        _SafeRelease(*(undefined8 *)(param_1 + 0x58));
        uVar9 = _CFGetAllocator(param_1);
        uVar9 = _CFStringCreateWithFormat
                          (uVar9,0,&cf____Ticket,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90));
        *(undefined8 *)(param_1 + 0x58) = uVar9;
      }
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_APTagOverrides);
    if (lVar6 != 0) {
      lVar7 = _CFGetTypeID(lVar6);
      lVar8 = _CFDictionaryGetTypeID();
      if (lVar7 == lVar8) {
        _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88));
        uVar9 = _CFRetain(lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88) = uVar9;
        lVar6 = _CFDictionaryGetValue(uVar9,&cf__ApImg4Ticket);
        if (((lVar6 != 0) && (lVar7 = _CFStringGetLength(lVar6), 2 < lVar7)) &&
           (sVar3 = _CFStringGetCharacterAtIndex(lVar6,0), sVar3 == 0x40)) {
          _SafeRelease(*(undefined8 *)(param_1 + 0x58));
          uVar9 = _CFGetAllocator(param_1);
          lVar7 = _CFStringGetLength(lVar6);
          uVar9 = _CFStringCreateWithSubstring(uVar9,lVar6,1,lVar7 + -1);
          *(undefined8 *)(param_1 + 0x58) = uVar9;
        }
      }
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallApIsImg4","%s: apParameters is NULL");
    }
    else if ((*(char *)(*(long *)(param_1 + 0x10) + 0x60) != '\0') &&
            (iVar4 = _AMAuthInstallApImg4SetParameters(param_1,param_2), iVar4 != 0)) {
      return iVar4;
    }
    iVar4 = 0;
  }
  else {
    lVar7 = _CFGetTypeID(lVar6);
    lVar8 = _CFNumberGetTypeID();
    if ((lVar7 != lVar8) ||
       (cVar1 = _CFNumberGetValue(lVar6,4,*(undefined8 *)(param_1 + 0x10)), cVar1 != '\0'))
    goto LAB_00274012;
    pcVar10 = "failed to convert ECID %@";
LAB_0027497f:
    iVar4 = 3;
    _AMAuthInstallLog(3,"AMAuthInstallApSetParameters",pcVar10,lVar6);
  }
  return iVar4;
}

