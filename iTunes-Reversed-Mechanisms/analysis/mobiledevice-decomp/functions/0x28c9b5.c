// rea decompile_all
// name: __AMAuthInstallBundleApplyActions
// address: 0x28c9b5
// body: available
// range: 0x28c9b5-0x28caaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMAuthInstallBundleApplyActions(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  pvVar4 = (void *)0x0;
  uStack_50 = 1;
  local_40 = param_1;
  local_38 = param_3;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar3 = _CFDictionaryGetCount(param_2);
    pvVar4 = _malloc(lVar3 * 8);
    uStack_50 = 2;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar5 = _malloc(lVar3 * 8);
      if (pvVar5 != (void *)0x0) {
        _CFDictionaryGetKeysAndValues(param_2,pvVar4,pvVar5);
        if (0 < lVar3) {
          lVar6 = 0;
          do {
            uVar1 = *(undefined8 *)((long)pvVar4 + lVar6 * 8);
            iVar2 = __AMAuthInstallBundleGetValueForAction
                              (local_40,uVar1,*(undefined8 *)((long)pvVar5 + lVar6 * 8),&local_48);
            if (iVar2 != 0) {
              uStack_50 = 1;
              goto LAB_0028ca7c;
            }
            _CFDictionarySetValue(local_38,uVar1,local_48);
            lVar6 = lVar6 + 1;
          } while (lVar3 != lVar6);
        }
        uStack_50 = 0;
        goto LAB_0028ca7c;
      }
    }
  }
  pvVar5 = (void *)0x0;
LAB_0028ca7c:
  _SafeFree(pvVar4);
  _SafeFree(pvVar5);
  return uStack_50;
}

