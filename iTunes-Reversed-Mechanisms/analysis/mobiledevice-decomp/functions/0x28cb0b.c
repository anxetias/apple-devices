// rea decompile_all
// name: _AMAuthInstallBundleProcessRules
// address: 0x28cb0b
// body: available
// range: 0x28cb0b-0x28cc19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleProcessRules(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char local_31;
  
  iVar1 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar2 = _CFArrayGetCount(param_2);
    if (0 < lVar2) {
      lVar6 = 0;
      do {
        local_31 = '\0';
        lVar3 = _CFArrayGetValueAtIndex(param_2,lVar6);
        if (lVar3 == 0) {
          return 7;
        }
        lVar4 = _CFDictionaryGetValue(lVar3,&cf_Conditions);
        if ((lVar4 != 0) &&
           (iVar1 = __AMAuthInstallBundleCheckCondition(param_1,lVar4,&local_31), iVar1 != 0)) {
          pcVar5 = "failed to check conditions";
LAB_0028cc07:
          _AMAuthInstallLog(3,"AMAuthInstallBundleProcessRules",pcVar5);
          return iVar1;
        }
        if (((local_31 != '\0') && (lVar3 = _CFDictionaryGetValue(lVar3,&cf_Actions), lVar3 != 0))
           && (iVar1 = __AMAuthInstallBundleApplyActions(param_1,lVar3,param_3), iVar1 != 0)) {
          pcVar5 = "failed to apply actions";
          goto LAB_0028cc07;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
    }
    iVar1 = 0;
  }
  return iVar1;
}

