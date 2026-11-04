// rea decompile_all
// name: __AMRestoreFindBestFittingSystemPartitionPadding
// address: 0xe48ec
// body: available
// range: 0xe48ec-0xe4a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestoreFindBestFittingSystemPartitionPadding(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  long local_40;
  int local_34;
  
  local_34 = 0;
  sVar3 = _CFDictionaryGetCount();
  pvVar4 = _calloc(sVar3,8);
  pvVar5 = _calloc(sVar3,8);
  if (pvVar4 == (void *)0x0) {
    _AMRLog(3,&cf_Failedtoallocateroomforkeys);
    local_40 = -1;
    goto LAB_000e4a19;
  }
  if (pvVar5 == (void *)0x0) {
    _AMRLog(3,&cf_Failedtoallocateroomforvalues);
LAB_000e4a04:
    local_40 = -1;
  }
  else {
    _CFDictionaryGetKeysAndValues(param_1,pvVar4,pvVar5);
    if ((long)sVar3 < 1) goto LAB_000e4a04;
    local_40 = -1;
    sVar7 = 0;
    uVar8 = 0;
    do {
      uVar1 = *(undefined8 *)((long)pvVar5 + sVar7 * 8);
      iVar2 = _CFStringGetIntValue(*(undefined8 *)((long)pvVar4 + sVar7 * 8));
      _CFNumberGetValue(uVar1,9,&local_34);
      uVar6 = -(param_2 - iVar2);
      if ((int)uVar6 < 0) {
        uVar6 = param_2 - iVar2;
      }
      if (sVar7 == 0 || uVar6 <= uVar8) {
        local_40 = (long)local_34;
        uVar8 = uVar6;
      }
      sVar7 = sVar7 + 1;
    } while (sVar3 != sVar7);
  }
  _free(pvVar4);
LAB_000e4a19:
  if (pvVar5 != (void *)0x0) {
    _free(pvVar5);
  }
  return local_40;
}

