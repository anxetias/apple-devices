// rea decompile_all
// name: _AMAuthInstallSetRequestEntry
// address: 0x273a95
// body: available
// range: 0x273a95-0x273ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallSetRequestEntry(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar3 = 0;
    if (param_4 != 0) {
      lVar2 = *(long *)(param_1 + 0x1a8);
      uVar4 = 2;
      if (lVar2 == 0) {
        uVar1 = _CFGetAllocator(param_1);
        lVar2 = _CFDictionaryCreateMutable
                          (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        *(long *)(param_1 + 0x1a8) = lVar2;
        lVar3 = 0;
        if (lVar2 == 0) goto LAB_00273b8e;
      }
      lVar2 = _CFDictionaryGetValue(lVar2,param_2);
      if (lVar2 == 0) {
        uVar1 = _CFGetAllocator(param_1);
        lVar3 = 0;
        lVar2 = _CFDictionaryCreateMutable
                          (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar2 == 0) goto LAB_00273b8e;
        _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar2);
      }
      else {
        _CFRetain(lVar2);
      }
      _CFDictionarySetValue(lVar2,param_3,param_4);
      uVar4 = 0;
      lVar3 = lVar2;
    }
  }
LAB_00273b8e:
  _SafeRelease(lVar3);
  return uVar4;
}

