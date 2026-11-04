// rea decompile_all
// name: _AMAuthInstallBundleCopyPersonalizedImagesMatchingType
// address: 0x28d086
// body: available
// range: 0x28d086-0x28d18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleCopyPersonalizedImagesMatchingType
              (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  iVar1 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_5 != (undefined8 *)0x0)) {
    iVar1 = _AMAuthInstallBundleCopyPersonalizedURLsMatchingType();
    if (iVar1 == 0) {
      uVar2 = _CFGetAllocator(param_1);
      lVar3 = _CFDictionaryCreateMutable
                        (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar3 == 0) {
        iVar1 = 2;
        lVar3 = 0;
      }
      else {
        _CFDictionaryApplyFunction(0,__AMAuthInstallBundleCopyFirmwareData,lVar3);
        lVar4 = _CFDictionaryGetCount(0);
        lVar5 = _CFDictionaryGetCount(lVar3);
        if (lVar4 == lVar5) {
          uVar2 = _CFRetain(lVar3);
          *param_5 = uVar2;
          iVar1 = 0;
        }
        else {
          iVar1 = 0xe;
        }
      }
    }
    else {
      lVar3 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyPersonalizedImagesMatchingType",
                        "failed to copy urls for firmware images");
    }
  }
  _SafeRelease(0);
  _SafeRelease(lVar3);
  return iVar1;
}

