// rea decompile_all
// name: __CreateUDIDStringFromFileName
// address: 0x13b272
// body: available
// range: 0x13b272-0x13b311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __CreateUDIDStringFromFileName(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFStringCreateWithCString(uVar1,param_1,0x8000100);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar3 = _CFURLCreateWithFileSystemPathRelativeToBase(uVar1,lVar2,0,1,0);
    if (lVar3 != 0) {
      lVar4 = _CFURLCreateCopyDeletingPathExtension(uVar1,lVar3);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = _CFURLCopyLastPathComponent(lVar4);
      }
      _CFRelease(lVar2);
      _CFRelease(lVar3);
      lVar2 = lVar4;
      if (lVar4 == 0) {
        return uVar5;
      }
    }
    _CFRelease(lVar2);
  }
  return uVar5;
}

