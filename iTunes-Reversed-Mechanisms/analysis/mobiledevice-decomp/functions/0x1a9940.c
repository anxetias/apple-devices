// rea decompile_all
// name: _AMAuthInstallBundleAppendRecoveryOSiBootFirmwareEntriesToAssetArray
// address: 0x1a9940
// body: available
// range: 0x1a9940-0x1a9ade inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBundleAppendRecoveryOSiBootFirmwareEntriesToAssetArray
          (long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar9 = 0;
  if (param_1 == 0) {
    uVar9 = 7;
    pvVar4 = (void *)0x0;
    pvVar3 = (void *)0x0;
  }
  else {
    lVar2 = _CFDictionaryGetCount();
    pvVar3 = _malloc(lVar2 * 8);
    pvVar4 = _malloc(lVar2 * 8);
    _CFDictionaryGetKeysAndValues(param_1,pvVar3,pvVar4);
    if (0 < lVar2) {
      uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar10 = 0;
      do {
        uVar8 = *(undefined8 *)((long)pvVar3 + lVar10 * 8);
        uVar7 = *(undefined8 *)((long)pvVar4 + lVar10 * 8);
        lVar5 = _CFGetTypeID(uVar7);
        lVar6 = _CFDictionaryGetTypeID();
        if (lVar5 != lVar6) {
          _AMAuthInstallBundleAppendRecoveryOSiBootFirmwareEntriesToAssetArray_cold_1();
          uVar9 = 99;
          goto LAB_001a9aa2;
        }
        lVar5 = _CFDictionaryGetValue(uVar7,&cf_Info);
        if (lVar5 != 0) {
          cVar1 = __CFDictionaryGetBoolean(lVar5,&cf_IsLoadedByiBoot,0);
          if (cVar1 != '\0') {
            uVar7 = _CFStringCreateWithFormat(uVar9,0,&cf_RecoveryOS__,uVar8);
            _AMAuthInstallLog(6,
                              "AMAuthInstallBundleAppendRecoveryOSiBootFirmwareEntriesToAssetArray",
                              "Found %@: %@",&cf_IsLoadedByiBoot,uVar8);
            uVar8 = _CFArrayGetCount(param_2);
            cVar1 = _CFArrayContainsValue(param_2,0,uVar8,uVar7);
            if (cVar1 == '\0') {
              _CFArrayAppendValue(param_2,uVar7);
            }
            _CFRelease(uVar7);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      uVar9 = 0;
    }
  }
LAB_001a9aa2:
  _SafeFree(pvVar3);
  _SafeFree(pvVar4);
  _SafeRelease(0);
  return uVar9;
}

