// rea decompile_all
// name: _AMAuthInstallUpdaterWriteManifests
// address: 0x1b4716
// body: available
// range: 0x1b4716-0x1b486a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallUpdaterWriteManifests(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    _AMAuthInstallUpdaterWriteManifests_cold_4(param_4);
    return 0;
  }
  if (*(long *)(param_1 + 0x1c8) == 0) {
    _AMAuthInstallUpdaterWriteManifests_cold_3(param_4);
    return 0;
  }
  if (param_2 == 0) {
    _AMAuthInstallUpdaterWriteManifests_cold_2(param_4);
    return 0;
  }
  if (param_3 == 0) {
    _AMAuthInstallUpdaterWriteManifests_cold_1(param_4);
    return 0;
  }
  lVar2 = _CFDictionaryGetCount();
  pvVar3 = _malloc(lVar2 * 8);
  pvVar4 = _malloc(lVar2 * 8);
  if (pvVar4 == (void *)0x0 || pvVar3 == (void *)0x0) {
    uVar5 = 0;
    _AMSupportCreateErrorInternal
              (param_4,&cf_AuthInstallErrorDomain,2,0,&cf__s_failedtoallocatekeysorvalues,
               "AMAuthInstallUpdaterWriteManifests");
    if (pvVar3 == (void *)0x0) goto LAB_001b4817;
  }
  else {
    _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 0x1c8),pvVar3,pvVar4);
    uVar5 = 1;
    if (0 < lVar2) {
      lVar6 = 0;
      do {
        cVar1 = _AMAuthInstallUpdaterWriteManifest
                          (*(undefined8 *)((long)pvVar4 + lVar6 * 8),
                           *(undefined8 *)((long)pvVar3 + lVar6 * 8),param_2,param_3,param_4);
        if (cVar1 == '\0') {
          uVar5 = 0;
          goto LAB_001b480f;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      uVar5 = 1;
    }
  }
LAB_001b480f:
  _free(pvVar3);
LAB_001b4817:
  if (pvVar4 != (void *)0x0) {
    _free(pvVar4);
    return uVar5;
  }
  return uVar5;
}

