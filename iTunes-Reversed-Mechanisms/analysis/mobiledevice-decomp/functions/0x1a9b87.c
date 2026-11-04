// rea decompile_all
// name: __AMAuthInstallBundlePopulateManifestProperties
// address: 0x1a9b87
// body: available
// range: 0x1a9b87-0x1aa029 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a9ff7 to 0x3054 _AMSupportSafeRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1aa025 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMAuthInstallBundlePopulateManifestProperties(long param_1,long param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  cfstringStruct *local_238 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == 0) {
    __AMAuthInstallBundlePopulateManifestProperties_cold_4();
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      __AMAuthInstallBundlePopulateManifestProperties_cold_3();
    }
    else {
      if (param_2 != 0) {
        local_238[0] = &cf_UniqueBuildID;
        if ((*(long *)(lVar3 + 0x78) == 0) && (*(long *)(lVar3 + 0x80) == 0)) {
          uVar8 = 1;
        }
        else {
          local_238[1] = &cf_ProductMarketingVersion;
          uVar8 = 2;
        }
        uVar9 = (ulong)(uVar8 * 8);
        *(cfstringStruct **)((long)local_238 + uVar9) = &cf_Ap_InternalUseOnlyUnit;
        *(cfstringStruct **)((long)local_238 + uVar9 + 8) = &cf_Ap_EngineeringUseOnlyUnit;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x10) = &cf_Ap_InternalUseOnlySW;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x18) = &cf_Ap_RestoreSecurityOverrides0;
        local_238[(ulong)uVar8 + 4] = &cf_Ap_RestoreSecurityOverrides1;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x28) = &cf_Ap_RestoreSecurityOverrides2;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x30) = &cf_Ap_RestoreSecurityOverrides3;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x38) = &cf_Ap_OSLongVersion;
        local_238[(ulong)uVar8 + 8] = &cf_x86_OSLongVersion;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x48) = &cf_PearlCertificationRootPub;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x50) = &cf_Ap_OSEnvironment;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x58) = &cf_AllowNeRDBoot;
        local_238[(ulong)uVar8 + 0xc] = &cf_NeRDEpoch;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x68) = &cf_Ap_CurrentOSSecurityVersion;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x70) = &cf_Ap_MinimumOSSecurityVersion;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x78) = &cf_Ap_EphemeralDataMode;
        local_238[(ulong)uVar8 + 0x10] = &cf_Ap_EnableGroundhog;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x88) = &cf_Ap_TargetType;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x90) = &cf_Ap_ProductType;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0x98) = &cf_Ap_SoftwareUpdateDeviceID;
        local_238[(ulong)uVar8 + 0x14] = &cf_Ap_SDKPlatform;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0xa8) = &cf_Ap_Target;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0xb0) = &cf_Ap_OSReleaseType;
        *(cfstringStruct **)((long)local_238 + uVar9 + 0xb8) = &cf_Ap_UniqueTagList;
        local_238[(ulong)uVar8 + 0x18] = &cf_Ap_ProductMarketingVersion;
        uVar9 = 0;
        do {
          pcVar1 = local_238[uVar9];
          lVar3 = _CFDictionaryGetValue(param_2,pcVar1);
          if (lVar3 != 0) {
            _CFDictionaryAddValue(param_3,pcVar1,lVar3);
            _AMAuthInstallLog(6,"_AMAuthInstallBundlePopulateManifestProperties",
                              "Copying manifest property %@ into request",pcVar1);
          }
          uVar9 = uVar9 + 1;
        } while (uVar8 + 0x19 != uVar9);
        uVar4 = _CFDictionaryGetValue(param_2,&cf_Info);
        cVar2 = __CFDictionaryGetBoolean(uVar4,&cf_RequiresUIDMode,0);
        if (cVar2 != '\0') {
          lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8);
          if (lVar3 == 0) {
            lVar3 = *(long *)PTR__kCFBooleanFalse_00441108;
          }
          _CFDictionarySetValue(param_3,&cf_UID_MODE,lVar3);
        }
        lVar3 = _CFDictionaryGetValue(uVar4,&cf_RequestManifestProperties);
        if (lVar3 != 0) {
          lVar5 = _CFGetTypeID(lVar3);
          lVar6 = _CFArrayGetTypeID();
          if (lVar5 == lVar6) {
            lVar5 = _CFArrayGetCount(lVar3);
            if (0 < lVar5) {
              lVar5 = 0;
              do {
                uVar7 = _CFArrayGetValueAtIndex(lVar3,lVar5);
                lVar6 = _CFDictionaryGetValue(param_2,uVar7);
                if (lVar6 == 0) {
                  lVar6 = _CFDictionaryGetValue(uVar4,uVar7);
                  if (lVar6 != 0) goto LAB_001a9f27;
                }
                else {
LAB_001a9f27:
                  _CFDictionaryAddValue(param_3,uVar7,lVar6);
                  _AMAuthInstallLog(6,"_AMAuthInstallBundlePopulateManifestProperties",
                                    "Copying manifest property %@ into request. (Via BuildManifest)"
                                    ,uVar7);
                }
                lVar5 = lVar5 + 1;
                lVar6 = _CFArrayGetCount(lVar3);
              } while (lVar5 < lVar6);
            }
          }
        }
        cVar2 = _CFDictionaryContainsKey(param_2,&cf_NeRDEpoch);
        if (cVar2 == '\0') {
          lVar3 = 0;
        }
        else {
          uVar4 = _CFGetAllocator(param_1);
          lVar3 = _CFDataCreateMutable(uVar4,0);
          if (lVar3 == 0) {
            __AMAuthInstallBundlePopulateManifestProperties_cold_1();
            goto LAB_001aa020;
          }
          _CFDictionarySetValue(param_3,&cf_PermitNeRDPivot,lVar3);
        }
        _AMAuthInstallLog(6,"_AMAuthInstallBundlePopulateManifestProperties",
                          "Finished copying manifest entitlements.");
        goto LAB_001a9fd3;
      }
      __AMAuthInstallBundlePopulateManifestProperties_cold_2();
    }
  }
LAB_001aa020:
  lVar3 = 0;
LAB_001a9fd3:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    _AMSupportSafeRelease(lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

