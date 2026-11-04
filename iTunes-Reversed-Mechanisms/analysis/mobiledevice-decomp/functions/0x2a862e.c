// rea decompile_all
// name: _GetYonkersMeasurementTags
// address: 0x2a862e
// body: available
// range: 0x2a862e-0x2a8721 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _GetYonkersMeasurementTags(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_34;
  
  local_34 = 0;
  local_48 = 0;
  uVar3 = 2;
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    lVar4 = _CFDictionaryGetValue(param_1,&cf_Yonkers_ProductionMode);
    uVar3 = 0x11;
    if (lVar4 != 0) {
      local_40 = param_2;
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFBooleanGetTypeID();
      if (lVar5 == lVar6) {
        cVar2 = _CFBooleanGetValue(lVar4);
        lVar4 = _CFDictionaryGetValue(param_1,&cf_Yonkers_FabRevision);
        if (lVar4 != 0) {
          lVar5 = _CFGetTypeID(lVar4);
          lVar6 = _CFNumberGetTypeID();
          puVar1 = local_40;
          if (lVar5 == lVar6) {
            _CFNumberGetValue(lVar4,3,&local_34);
            uVar3 = _GetYonkersFabRevisionTags(local_34,cVar2 != '\0',&local_48);
            *puVar1 = local_48;
          }
        }
      }
    }
  }
  return uVar3;
}

