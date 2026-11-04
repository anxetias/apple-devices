// rea decompile_all
// name: _AMRestoreCopySystemRestoreImagePath
// address: 0xe2402
// body: available
// range: 0xe2402-0xe255c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMRestoreCopySystemRestoreImagePath(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_38;
  
  local_38 = 0;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar3 = _CFStringCreateWithFormat(uVar1,0,&cf____cRestore_plist,param_1,0x2f);
  if (lVar3 != 0) {
    iVar2 = __AMRestoreCreateCFPropertyListWithContentsOfFile(lVar3,&local_38);
    lVar6 = local_38;
    if (iVar2 == 0) {
      lVar4 = _systemRestoreImagesForTarget(local_38,param_3);
      if ((lVar4 == 0) || (lVar4 = _CFDictionaryGetValue(lVar4,param_2), lVar4 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = _CFStringCreateWithFormat(uVar1,0,&cf____c__,param_1,0x2f,lVar4);
      }
    }
    else {
      uVar5 = 0;
      _AMRLogWithFilePath(3,lVar3,&cf_unabletoloadRestore_plist__d,iVar2);
      lVar6 = local_38;
    }
    _CFRelease(lVar3);
    lVar3 = _systemRestoreImagesForTarget(lVar6,param_3);
    if ((lVar3 != 0) && (lVar3 = _CFDictionaryGetValue(lVar3,param_2), lVar3 != 0)) {
      uVar5 = _CFStringCreateWithFormat(uVar1,0,&cf____c__,param_1,0x2f,lVar3);
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    return uVar5;
  }
  _AMRLog(3,&cf_failedtoallocaterestoreInfoPath);
  return 0;
}

