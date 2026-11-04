// rea decompile_all
// name: _AMRAuthInstallCopyRecoveryOSVariant
// address: 0x26e975
// body: available
// range: 0x26e975-0x26eb76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMRAuthInstallCopyRecoveryOSVariant(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  long local_30;
  
  local_30 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = _CFDictionaryGetValue(param_2,&cf_AuthInstallVariant);
  if (lVar2 == 0) {
    lVar3 = _CFDictionaryGetValue(param_2,&cf_AuthInstallRecoveryOSVariant);
    if (lVar3 == 0) {
      pcVar6 = &cf_FailedtocreaterecoveryOSvariant_norecoveryvariantinoptionsnorrestorevariant_;
    }
    else {
LAB_0026e9d2:
      _AMRLog(6,&cf_requestedrecoveryOSvariant___,lVar3);
LAB_0026e9e9:
      lVar4 = _CFDictionaryGetValue(param_2,&cf_MacOSVariantPresent);
      if ((lVar4 == 0) || (lVar4 != *(long *)PTR__kCFBooleanTrue_00441110)) {
        if (lVar2 == 0) {
          _AMRLog(6,&
                    cf__s_Couldn_tfindvariantinrestoreOptions_continuetocheckifrecoveryOSvariantpresent_
                  ,"AMRAuthInstallCopyRecoveryOSVariant");
          goto LAB_0026eabd;
        }
        if (local_30 == 0) goto LAB_0026eb6b;
        uVar5 = _CFGetAllocator(param_1);
        lVar2 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar5,local_30,&cf_Info_MacOSVariant);
        if (lVar2 == 0) goto LAB_0026eabd;
        if (lVar3 == 0) {
          _AMRLog(6,&cf__s_FoundMacOSVariant_settingasrecoveryvariant___,
                  "AMRAuthInstallCopyRecoveryOSVariant",lVar2);
          lVar3 = lVar2;
        }
        iVar1 = _AMAuthInstallSetMacOSVariantIsPresent(param_1,1);
        if (iVar1 != 0) {
          pcVar6 = &
                   cf_AMAuthInstallSetMacOSVariantIsPresentfailedtosetMacOSvariantlibusbrestore_AMRAuthInstall_cispresent_
          ;
          goto LAB_0026ea26;
        }
      }
      else {
        _AMRLog(6,&cf_MacOSvariantpresent_usingMacOSrestorepath);
LAB_0026eabd:
        if (lVar3 == 0) {
          pcVar6 = &cf_norecoveryOSvariantfoundinBuildManifest_plist;
          goto LAB_0026ea26;
        }
      }
      iVar1 = _AMAuthInstallSetRecoveryOSVariant(param_1,lVar3);
      if (iVar1 == 0) {
        _CFRetain(lVar3);
        goto LAB_0026eae1;
      }
      pcVar6 = &cf_AMAuthInstallSetRecoveryOSVariantfailedtosetrecoveryOSvariant_;
    }
  }
  else {
    _AMRAuthInstallCopyBuildIdentity(param_1,param_2,lVar2,&local_30);
    lVar3 = _CFDictionaryGetValue(param_2,&cf_AuthInstallRecoveryOSVariant);
    if (lVar3 != 0) goto LAB_0026e9d2;
    if (local_30 != 0) {
      uVar5 = _CFGetAllocator(param_1);
      lVar3 = _AMAuthInstallSupportGetValueForKeyPathInDict(uVar5,local_30,&cf_Info_RecoveryVariant)
      ;
      goto LAB_0026e9e9;
    }
LAB_0026eb6b:
    pcVar6 = &cf_AMRAuthInstallCopyBuildIdentityfailedtocreatebuildIdentity_;
  }
LAB_0026ea26:
  lVar3 = 0;
  _AMRLog(3,pcVar6);
LAB_0026eae1:
  if (local_30 != 0) {
    _CFRelease();
  }
  return lVar3;
}

