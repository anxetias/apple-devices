// rea decompile_all
// name: _AMAuthInstallApRemoveInfoDict
// address: 0x274efd
// body: available
// range: 0x274efd-0x275049 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApRemoveInfoDict(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_50;
  
  uStack_50 = 1;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar1 = _CFDictionaryCreateMutableCopy(param_1,0,param_2);
    uStack_50 = 2;
    if (lVar1 != 0) {
      lVar2 = _CFDictionaryGetCount(lVar1);
      pvVar3 = _malloc(lVar2 * 8);
      pvVar4 = _malloc(lVar2 * 8);
      if ((pvVar3 != (void *)0x0) && (pvVar4 != (void *)0x0)) {
        _CFDictionaryGetKeysAndValues(lVar1,pvVar3,pvVar4);
        if (0 < lVar2) {
          lVar8 = 0;
          do {
            if ((*(long *)((long)pvVar3 + lVar8 * 8) == 0) ||
               (*(long *)((long)pvVar4 + lVar8 * 8) == 0)) {
              uStack_50 = 1;
              goto LAB_00275009;
            }
            lVar5 = _CFGetTypeID();
            lVar6 = _CFDictionaryGetTypeID();
            if ((lVar5 == lVar6) &&
               (lVar5 = _CFDictionaryGetValue(*(undefined8 *)((long)pvVar4 + lVar8 * 8),&cf_Info),
               lVar5 != 0)) {
              _CFDictionaryRemoveValue(*(undefined8 *)((long)pvVar4 + lVar8 * 8),&cf_Info);
            }
            lVar8 = lVar8 + 1;
          } while (lVar2 != lVar8);
        }
        uVar7 = _CFRetain(lVar1);
        *param_3 = uVar7;
        uStack_50 = 0;
      }
      goto LAB_00275009;
    }
  }
  pvVar3 = (void *)0x0;
  lVar1 = 0;
  pvVar4 = (void *)0x0;
LAB_00275009:
  _SafeRelease(lVar1);
  _SafeFree(pvVar3);
  _SafeFree(pvVar4);
  return uStack_50;
}

