// rea decompile_all
// name: __SZConduitPreflightCallback
// address: 0x1531a9
// body: available
// range: 0x1531a9-0x153282 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __SZConduitPreflightCallback(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 local_38;
  ushort local_2a;
  
  local_40 = 0;
  local_38 = 0;
  local_2a = 0;
  lVar2 = _CFDictionaryGetValue(param_1,&cf_PreflightResultTotalFileCount);
  lVar3 = _CFDictionaryGetValue(param_1,&cf_PreflightResultTotalFileSize);
  lVar4 = _CFDictionaryGetValue(param_1,&cf_PreflightTargetPathMode);
  if (lVar2 != 0) {
    _CFNumberGetValue(lVar2,4,&local_40);
  }
  if (lVar3 != 0) {
    _CFNumberGetValue(lVar3,4,&local_38);
  }
  if (lVar4 != 0) {
    _CFNumberGetValue(lVar4,2,&local_2a);
    if ((local_2a & 0xf000) == 0x4000) {
      *(undefined1 *)(param_2 + 0x2a) = 1;
    }
  }
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  puVar1[1] = local_38;
  *puVar1 = local_40;
  return;
}

