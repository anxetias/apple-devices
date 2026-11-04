// rea decompile_all
// name: __AMRestoreCopyManifestForNORImage
// address: 0xe0b41
// body: available
// range: 0xe0b41-0xe0c15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRestoreCopyManifestForNORImage(long param_1)

{
  long in_RAX;
  long lVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  long local_28;
  
  if (param_1 == 0) {
    pcVar3 = &cf_Can_tcopymanifestsinceNORimagepathisnull;
    local_28 = in_RAX;
  }
  else {
    local_28 = 0;
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar1 = _CFStringCreateWithFormat(uVar2,0,&cf____cmanifest,param_1,0x2f);
    if (lVar1 != 0) {
      __AMRestoreCreateCFDataWithContentsOfFile(lVar1,&local_28);
      _CFRelease(lVar1);
      if (local_28 != 0) {
        lVar1 = _CFStringCreateFromExternalRepresentation(uVar2,local_28,0x8000100);
        _CFRelease(local_28);
        if (lVar1 != 0) {
          uVar2 = _CFStringCreateArrayBySeparatingStrings(uVar2,lVar1,&cf_newline_s_);
          _CFRelease(lVar1);
          return uVar2;
        }
      }
      return 0;
    }
    pcVar3 = &cf_Invalidmanifestfilepath;
  }
  _AMRLog(3,pcVar3);
  return 0;
}

