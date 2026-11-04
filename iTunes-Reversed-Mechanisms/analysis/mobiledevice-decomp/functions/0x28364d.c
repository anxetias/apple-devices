// rea decompile_all
// name: _AMAuthInstallBasebandVinylAddMeasurementTags
// address: 0x28364d
// body: available
// range: 0x28364d-0x283831 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandVinylAddMeasurementTags(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_R9;
  bool bVar6;
  undefined8 uVar7;
  
  uVar5 = 1;
  if ((param_1 != 0) && (uVar7 = 1, *(long *)(param_1 + 0x30) != 0)) {
    lVar2 = _CFDictionaryGetValue(param_2,&cf_BasebandFirmware);
    bVar6 = false;
    if (lVar2 != 0) {
      lVar3 = _CFDictionaryGetTypeID();
      lVar4 = _CFGetTypeID(lVar2);
      if (lVar3 == lVar4) {
        cVar1 = _CFDictionaryContainsKey(lVar2,&cf_EUICCSignedProfileMain);
        bVar6 = cVar1 != '\0';
      }
    }
    _AMAuthInstallLog(6,"AMAuthInstallBasebandVinylAddMeasurementTags",
                      "Vinyl Tags %d Measurements %d",
                      *(long *)(*(long *)(param_1 + 0x30) + 0x78) != 0,bVar6,in_R9,uVar7);
    lVar2 = *(long *)(param_1 + 0x30);
    uVar5 = 8;
    if ((((*(long *)(lVar2 + 0x78) != 0) && (*(long *)(lVar2 + 0x80) != 0)) && (bVar6 != false)) &&
       (*(long *)(lVar2 + 0x98) != 0)) {
      _CFDictionarySetValue(param_2,&cf_EUICCCSN);
      lVar2 = *(long *)(param_1 + 0x30);
      if (*(long *)(lVar2 + 0x80) != 0) {
        _CFDictionarySetValue(param_2,&cf_EUICCMainNonce);
        lVar2 = *(long *)(param_1 + 0x30);
      }
      if (*(long *)(lVar2 + 0x88) != 0) {
        _CFDictionarySetValue(param_2,&cf_EUICCGoldNonce);
        lVar2 = *(long *)(param_1 + 0x30);
      }
      if (*(long *)(lVar2 + 0x90) != 0) {
        _CFDictionarySetValue(param_2,&cf_EUICCTicketVersion);
        lVar2 = *(long *)(param_1 + 0x30);
      }
      if (*(long *)(lVar2 + 0x98) != 0) {
        _CFDictionarySetValue(param_2,&cf_EUICCCertIdentifier);
        lVar2 = *(long *)(param_1 + 0x30);
      }
      if (*(long *)(lVar2 + 0xa0) != 0) {
        _CFDictionarySetValue(param_2,&cf_EUICCChipID);
        lVar2 = *(long *)(param_1 + 0x30);
      }
      if (*(long *)(lVar2 + 0xa8) != 0) {
        _CFDictionarySetValue(param_2,&cf_EUICCFirmwareLoaderVersion);
      }
      _CFDictionarySetValue(param_2,&cf__EUICCTicket,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      uVar5 = 0;
    }
  }
  return uVar5;
}

