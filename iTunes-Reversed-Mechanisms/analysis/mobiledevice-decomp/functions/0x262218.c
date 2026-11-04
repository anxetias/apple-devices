// rea decompile_all
// name: _AMSupportApplyDictionaryOverrides
// address: 0x262218
// body: available
// range: 0x262218-0x262348 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportApplyDictionaryOverrides(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == (long *)0x0) {
    return 1;
  }
  if (*param_3 == 0) {
    return 1;
  }
  lVar1 = _CFDictionaryGetCount(param_2);
  pvVar2 = _malloc(lVar1 * 8);
  pvVar3 = _malloc(lVar1 * 8);
  if ((pvVar2 == (void *)0x0) || (pvVar3 == (void *)0x0)) {
    uStack_40 = 2;
    uVar8 = 2;
    if (pvVar2 == (void *)0x0) goto LAB_002622f8;
  }
  else {
    _CFDictionaryGetKeysAndValues(param_2,pvVar2,pvVar3);
    if (0 < lVar1) {
      lVar7 = 0;
      do {
        lVar4 = *(long *)((long)pvVar2 + lVar7 * 8);
        if (lVar4 == 0) {
          pcVar6 = "invalid overridesKey";
LAB_00262327:
          _AMSupportLogInternal(3,"AMSupportApplyDictionaryOverrides",pcVar6);
          uStack_40 = 99;
          uVar8 = uStack_40;
          goto LAB_002622f0;
        }
        lVar5 = *(long *)((long)pvVar3 + lVar7 * 8);
        if (lVar5 == 0) {
          pcVar6 = "invalid overridesValue";
          goto LAB_00262327;
        }
        if (param_4 == 0) {
LAB_002622d9:
          _CFDictionarySetValue(*param_3,lVar4,lVar5);
        }
        else {
          lVar4 = _CFStringFind(lVar4,param_4,0);
          if (lVar4 != -1) {
            lVar4 = *(long *)((long)pvVar2 + lVar7 * 8);
            lVar5 = *(long *)((long)pvVar3 + lVar7 * 8);
            goto LAB_002622d9;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
    }
    uVar8 = 0;
  }
LAB_002622f0:
  _free(pvVar2);
  uStack_40 = uVar8;
LAB_002622f8:
  if (pvVar3 != (void *)0x0) {
    _free(pvVar3);
  }
  return uStack_40;
}

