// rea decompile_all
// name: __AMRestoreCopyBoardConfigCacheForRestoreBundle
// address: 0xe02c1
// body: available
// range: 0xe02c1-0xe0355 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestoreCopyBoardConfigCacheForRestoreBundle(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_20;
  
  local_20 = 0;
  lVar4 = 0;
  lVar3 = _CFStringCreateWithFormat
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf____cRestore_plist,
                     param_1,0x2f);
  if (lVar3 != 0) {
    iVar2 = __AMRestoreCreateCFPropertyListWithContentsOfFile(lVar3,&local_20);
    _CFRelease(lVar3);
    uVar1 = local_20;
    if (iVar2 == 0) {
      lVar4 = _CFDictionaryGetValue(local_20,&cf_DeviceMap);
      if (lVar4 != 0) {
        _CFRetain(lVar4);
      }
      _CFRelease(uVar1);
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}

