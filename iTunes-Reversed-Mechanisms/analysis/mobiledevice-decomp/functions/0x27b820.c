// rea decompile_all
// name: _AMAuthInstallBasebandServerRequestAddRequiredTags
// address: 0x27b820
// body: available
// range: 0x27b820-0x27bbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandServerRequestAddRequiredTags(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  char *pcVar8;
  long local_58;
  long local_50;
  void *local_48;
  void *local_40;
  char local_31;
  
  local_50 = param_2;
  if (param_1 == 0) {
    pcVar8 = "%s: amai is NULL";
LAB_0027bb48:
    local_40 = (void *)0x0;
    _AMAuthInstallLog(3,"AMAuthInstallBasebandServerRequestAddRequiredTags",pcVar8);
    iVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      pcVar8 = "%s: amai->bbParameters is NULL";
      goto LAB_0027bb48;
    }
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x10) == 0) {
      pcVar8 = "%s: amai->bbParameters->snum is NULL";
      goto LAB_0027bb48;
    }
    if (param_2 == 0) {
      pcVar8 = "%s: requestDict is NULL";
      goto LAB_0027bb48;
    }
    lVar3 = _CFDictionaryGetTypeID();
    lVar4 = _CFGetTypeID(param_2);
    if (lVar3 != lVar4) {
      pcVar8 = "%s: requestDict mistyped";
      goto LAB_0027bb48;
    }
    if (param_3 == 0) {
      pcVar8 = "%s: bbfwURL is NULL";
      goto LAB_0027bb48;
    }
    iVar2 = _AMAuthInstallBasebandApplyTssOverrides(param_1,param_2,param_3);
    if (iVar2 == 0) {
      _CFDictionarySetValue(param_2,&cf_BbSNUM,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
      __CFDictionarySetInteger32
                (param_2,&cf_BbChipID,*(undefined4 *)(*(long *)(param_1 + 0x30) + 4));
      __CFDictionarySetInteger32
                (param_2,&cf_BbGoldCertId,*(undefined4 *)(*(long *)(param_1 + 0x30) + 8));
      if (*(long *)(*(long *)(param_1 + 0x30) + 0x18) != 0) {
        _CFDictionarySetValue(param_2,&cf_BbNonce);
        _CFDictionarySetValue(param_2,&cf__BBTicket,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        _CFDictionarySetValue(param_2,&cf_BbVendorData);
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        _CFDictionarySetValue(param_2,&cf_BbAntennaType);
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        _CFDictionarySetValue(param_2,&cf_BbBehavior);
      }
      if ((*(long *)(param_1 + 0x1a8) != 0) &&
         (lVar3 = _CFDictionaryGetValue(*(long *)(param_1 + 0x1a8),&cf_BbRequestEntries), lVar3 != 0
         )) {
        uVar5 = _CFGetAllocator(param_1);
        iVar2 = _AMAuthInstallSupportApplyDictionaryOverrides(uVar5,lVar3,&local_50,0);
        if (iVar2 != 0) {
          local_40 = (void *)0x0;
          _AMAuthInstallLog(3,"AMAuthInstallBasebandServerRequestAddRequiredTags",
                            "failed to set Bb entitlements");
          goto LAB_0027bb68;
        }
      }
      lVar3 = _CFDictionaryGetCount(*(undefined8 *)(param_1 + 200));
      pvVar6 = _malloc(lVar3 * 8);
      pvVar7 = _malloc(lVar3 * 8);
      iVar2 = 2;
      local_40 = pvVar6;
      if ((pvVar6 != (void *)0x0) && (pvVar7 != (void *)0x0)) {
        local_48 = pvVar7;
        _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 200),pvVar6,pvVar7);
        if (0 < lVar3) {
          lVar4 = 0;
          do {
            lVar1 = *(long *)((long)local_40 + lVar4 * 8);
            if (lVar1 == 0) {
              _AMAuthInstallLog(3,"AMAuthInstallBasebandServerRequestAddRequiredTags",
                                "invalid HashKeysBuffer array");
              iVar2 = 99;
              pvVar7 = local_48;
              goto LAB_0027baa8;
            }
            iVar2 = _AMAuthInstallBasebandGetTagForKeyHashName(param_1,lVar1,&local_58);
            pvVar7 = local_48;
            if (iVar2 != 0) goto LAB_0027baa8;
            if (local_58 == 0) {
              iVar2 = 3;
              _AMAuthInstallLog(3,"AMAuthInstallBasebandServerRequestAddRequiredTags",
                                "keyHashTag not found for %@",
                                *(undefined8 *)((long)local_40 + lVar4 * 8));
              pvVar7 = local_48;
              goto LAB_0027baa8;
            }
            _CFDictionarySetValue(local_50,local_58,*(undefined8 *)((long)local_48 + lVar4 * 8));
            lVar4 = lVar4 + 1;
          } while (lVar3 != lVar4);
        }
        local_31 = '\0';
        iVar2 = _AMAuthInstallVinylIsLegacyChipId(param_1);
        if (((iVar2 != 0) || (local_31 == '\0')) ||
           (iVar2 = _AMAuthInstallBasebandVinylAddMeasurementTags(param_1,local_50),
           pvVar7 = local_48, iVar2 == 0)) {
          iVar2 = 0;
          pvVar7 = local_48;
        }
      }
      goto LAB_0027baa8;
    }
    local_40 = (void *)0x0;
    _AMAuthInstallLog(3,"AMAuthInstallBasebandServerRequestAddRequiredTags",
                      "%s: failed to apply tss overrides");
  }
LAB_0027bb68:
  pvVar7 = (void *)0x0;
LAB_0027baa8:
  _SafeFree(local_40);
  _SafeFree(pvVar7);
  return iVar2;
}

