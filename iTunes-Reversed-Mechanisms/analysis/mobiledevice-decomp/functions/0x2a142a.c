// rea decompile_all
// name: _AMAuthInstallVinylServerRequestAddRequiredTags
// address: 0x2a142a
// body: available
// range: 0x2a142a-0x2a1602 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallVinylServerRequestAddRequiredTags(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  
  uStack_40 = 1;
  if ((((((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x30), lVar1 != 0)) &&
        (*(long *)(lVar1 + 0x78) != 0)) &&
       ((*(long *)(lVar1 + 0xa0) != 0 && (*(long *)(lVar1 + 0x80) != 0)))) &&
      ((*(long *)(lVar1 + 0x88) != 0 && ((*(long *)(lVar1 + 0x90) != 0 && (param_2 != 0)))))) &&
     (*(long *)(lVar1 + 0x98) != 0)) {
    lVar1 = _CFDictionaryGetValue(param_2,&cf_eUICC_Gold);
    lVar2 = _CFDictionaryGetValue(param_2,&cf_eUICC_Main);
    if (lVar1 == 0 && lVar2 == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallVinylServerRequestAddRequiredTags",
                        "Neither main nor gold vinyl fw found!");
      uStack_40 = 8;
    }
    else {
      _CFDictionarySetValue(param_2,&cf_eUICC_EID,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78))
      ;
      _CFDictionarySetValue
                (param_2,&cf_eUICC_ChipID,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa0));
      if (lVar1 != 0) {
        _CFDictionarySetValue(lVar1,&cf_Nonce,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x88));
      }
      if (lVar2 != 0) {
        _CFDictionarySetValue(lVar2,&cf_Nonce,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80));
      }
      _CFDictionarySetValue(param_2,&cf__eUICC_Ticket,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      _CFDictionarySetValue
                (param_2,&cf_eUICC_RootKeyIdentifier,
                 *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98));
      if (param_3 != 0) {
        lVar1 = _CFDictionaryGetValue(param_3,&cf_UniqueBuildID);
        if (lVar1 != 0) {
          _CFDictionarySetValue(param_2,&cf_UniqueBuildID,lVar1);
        }
      }
      uStack_40 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        __CFDictionarySetBoolean
                  (param_2,&cf_eUICC_ApProductionMode,
                   *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x14));
      }
    }
  }
  return uStack_40;
}

