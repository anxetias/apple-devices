// rea decompile_all
// name: _AMSupportCommonCopyHexStringFromData
// address: 0x89e4
// body: available
// range: 0x89e4-0x8ab8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportCommonCopyHexStringFromData(long param_1,long param_2,undefined8 *param_3,size_t *param_4)

{
  size_t sVar1;
  byte bVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1 == 0) {
    _AMSupportCommonCopyHexStringFromData_cold_5();
  }
  else if (param_2 == 0) {
    _AMSupportCommonCopyHexStringFromData_cold_4();
  }
  else if (param_3 == (undefined8 *)0x0) {
    _AMSupportCommonCopyHexStringFromData_cold_3();
  }
  else {
    if (param_4 != (size_t *)0x0) {
      sVar1 = param_2 * 2 + 1;
      pvVar3 = _calloc(1,sVar1);
      if (pvVar3 != (void *)0x0) {
        lVar4 = 0;
        do {
          bVar2 = *(byte *)(param_1 + lVar4);
          *(char *)((long)pvVar3 + lVar4 * 2) = "0123456789ABCDEF"[bVar2 >> 4];
          *(char *)((long)pvVar3 + lVar4 * 2 + 1) = "0123456789ABCDEF"[bVar2 & 0xf];
          lVar4 = lVar4 + 1;
        } while (param_2 != lVar4);
        *(undefined1 *)((long)pvVar3 + param_2 * 2) = 0;
        *param_3 = pvVar3;
        *param_4 = sVar1;
        return 0;
      }
      _AMSupportCommonCopyHexStringFromData_cold_1();
      return 99;
    }
    _AMSupportCommonCopyHexStringFromData_cold_2();
  }
  return 1;
}

