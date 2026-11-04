// rea decompile_all
// name: _GetRelevantMeasurementTags
// address: 0x2a84ae
// body: available
// range: 0x2a84ae-0x2a862d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GetRelevantMeasurementTags(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 2;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 2;
  }
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Savage_ProductionMode);
  if (lVar2 == 0) {
    return 0x11;
  }
  lVar3 = _CFGetTypeID(lVar2);
  lVar4 = _CFBooleanGetTypeID();
  if (lVar3 != lVar4) {
    return 0x11;
  }
  cVar1 = _CFBooleanGetValue(lVar2);
  lVar2 = _CFDictionaryGetValue(param_1,&cf_Savage_Revision);
  if (lVar2 == 0) {
    return 0x11;
  }
  lVar3 = _CFGetTypeID(lVar2);
  lVar4 = _CFDataGetTypeID();
  if (lVar3 != lVar4) {
    return 0x11;
  }
  pbVar5 = (byte *)_CFDataGetBytePtr(lVar2);
  if (pbVar5 != (byte *)0x0) {
    bVar7 = *pbVar5 + 0x60;
    if ((bVar7 < 0xa0) && (bVar7 = bVar7 >> 4, (0x311U >> bVar7 & 1) != 0)) {
      lVar2 = (ulong)bVar7 * 8;
      puVar9 = *(undefined8 **)(&DAT_0044fac0 + lVar2);
      puVar10 = *(undefined8 **)(&DAT_0044fb10 + lVar2);
      puVar6 = *(undefined8 **)(&DAT_0044fb60 + lVar2);
      puVar8 = *(undefined8 **)(&DAT_0044fbb0 + lVar2);
      goto LAB_002a8602;
    }
    if (0xef < *pbVar5) {
      puVar8 = &_kSavageTagMeasurementBFDevPatchVT;
      puVar6 = (undefined8 *)&_kSavageTagMeasurementBFProdPatchVT;
      puVar10 = &_kSavageTagMeasurementBFDevPatch;
      puVar9 = (undefined8 *)&_kSavageTagMeasurementBFProdPatch;
      goto LAB_002a8602;
    }
  }
  puVar8 = &_kSavageTagMeasurementB0DevPatchVT;
  puVar6 = (undefined8 *)&_kSavageTagMeasurementB0ProdPatchVT;
  puVar10 = &_kSavageTagMeasurementB0DevPatch;
  puVar9 = (undefined8 *)&_kSavageTagMeasurementB0ProdPatch;
LAB_002a8602:
  if (cVar1 == '\0') {
    puVar9 = puVar10;
  }
  if (cVar1 == '\0') {
    puVar6 = puVar8;
  }
  *param_2 = *puVar9;
  *param_3 = *puVar6;
  return 0;
}

