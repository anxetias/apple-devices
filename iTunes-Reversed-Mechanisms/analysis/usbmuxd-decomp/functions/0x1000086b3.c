// rea decompile_all
// name: FUN_1000086b3
// address: 0x1000086b3
// body: available
// range: 0x1000086b3-0x10000878b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100008787 to 0x10001349d _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000086b3(undefined8 param_1)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  size_t sVar7;
  
  sVar2 = _CFDictionaryGetCount();
  pvVar3 = _calloc(sVar2,8);
  pvVar4 = _calloc(sVar2,8);
  if ((pvVar4 != (void *)0x0 && pvVar3 != (void *)0x0) &&
     (_CFDictionaryGetKeysAndValues(param_1,pvVar3,pvVar4), 0 < (long)sVar2)) {
    sVar7 = 0;
    do {
      lVar1 = *(long *)((long)pvVar3 + sVar7 * 8);
      if ((lVar1 == 0) || (lVar6 = *(long *)((long)pvVar4 + sVar7 * 8), lVar6 == 0)) {
        if (2 < DAT_100021030) {
          lVar6 = *(long *)((long)pvVar4 + sVar7 * 8);
          pcVar5 = &cf__p__p;
          goto LAB_10000875f;
        }
      }
      else if (2 < DAT_100021030) {
        pcVar5 = &cf______;
LAB_10000875f:
        FUN_1000008d2(3,0,pcVar5,lVar1,lVar6);
      }
      sVar7 = sVar7 + 1;
    } while (sVar2 != sVar7);
  }
  _free(pvVar3);
  _free(pvVar4);
  return;
}

