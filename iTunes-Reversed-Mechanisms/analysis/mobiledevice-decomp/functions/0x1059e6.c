// rea decompile_all
// name: _AMDeviceProxyMergeDictionaryWithDictionary
// address: 0x1059e6
// body: available
// range: 0x1059e6-0x105b08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyMergeDictionaryWithDictionary(__CFDictionary*, __CFDictionary const*, bool) */

undefined4
_AMDeviceProxyMergeDictionaryWithDictionary
          (__CFDictionary *param_1,__CFDictionary *param_2,bool param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  undefined7 in_register_00000011;
  size_t sVar5;
  cfstringStruct *pcVar6;
  
  if (param_1 == (__CFDictionary *)0x0) {
    pcVar6 = &cf_Can_treplacetargetdictifit_sNULL;
  }
  else {
    if (param_2 != (__CFDictionary *)0x0) {
      _CFDictionaryRemoveAllValues();
      sVar2 = _CFDictionaryGetCount(param_2);
      pvVar3 = _calloc(sVar2,8);
      pvVar4 = _calloc(sVar2,8);
      if (pvVar3 == (void *)0x0) {
        uVar1 = 0;
        _AMRLog(3,&cf_Failedtoallocatekeystocopydict);
      }
      else {
        uVar1 = (undefined4)CONCAT71((int7)((ulong)pvVar4 >> 8),pvVar4 != (void *)0x0);
        if (pvVar4 == (void *)0x0) {
          _AMRLog(3,&cf_Failedtoallocatevaluestocopydict);
        }
        else {
          _CFDictionaryGetKeysAndValues(param_2,pvVar3,pvVar4);
          if (0 < (long)sVar2) {
            sVar5 = 0;
            do {
              if (*(long *)((long)pvVar4 + sVar5 * 8) != 0 &&
                  *(long *)((long)pvVar3 + sVar5 * 8) != 0) {
                _CFDictionarySetValue(param_1);
              }
              sVar5 = sVar5 + 1;
            } while (sVar2 != sVar5);
          }
        }
        _free(pvVar3);
      }
      if (pvVar4 == (void *)0x0) {
        return uVar1;
      }
      _free(pvVar4);
      return uVar1;
    }
    pcVar6 = &cf_Can_tmergesourcedictifit_sNULL;
  }
  _AMRLog(3,pcVar6,CONCAT71(in_register_00000011,param_3));
  return 0;
}

