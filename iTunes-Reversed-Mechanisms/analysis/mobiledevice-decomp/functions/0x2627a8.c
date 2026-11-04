// rea decompile_all
// name: _AMSupportApplyBlockToDictionary
// address: 0x2627a8
// body: available
// range: 0x2627a8-0x262876 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26285c to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMSupportApplyBlockToDictionary(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar2 = _CFDictionaryGetCount();
  if (lVar2 == 0) {
    return;
  }
  pvVar3 = _malloc(lVar2 * 8);
  pvVar4 = _malloc(lVar2 * 8);
  if ((pvVar3 == (void *)0x0) || (pvVar4 == (void *)0x0)) {
    if (pvVar3 == (void *)0x0) goto LAB_00262846;
  }
  else {
    _CFDictionaryGetKeysAndValues(param_1,pvVar3,pvVar4);
    if (0 < lVar2) {
      lVar5 = 0;
      do {
        cVar1 = (**(code **)(param_2 + 0x10))
                          (param_2,*(undefined8 *)((long)pvVar3 + lVar5 * 8),
                           *(undefined8 *)((long)pvVar4 + lVar5 * 8));
        if (cVar1 == '\0') break;
        bVar6 = lVar2 + -1 != lVar5;
        lVar5 = lVar5 + 1;
      } while (bVar6);
    }
  }
  _free(pvVar3);
LAB_00262846:
  if (pvVar4 == (void *)0x0) {
    return;
  }
  _free(pvVar4);
  return;
}

