// rea decompile_all
// name: _AMRestoreGetFileSystemRepresentation
// address: 0xe511f
// body: available
// range: 0xe511f-0xe51b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 _AMRestoreGetFileSystemRepresentation(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = &cf_Can_tgetfilesystemrepresentationfromNULLstring;
  }
  else if (param_2 == 0) {
    pcVar3 = &cf_Can_tloadNULLbuffwithpath;
  }
  else {
    if (-1 < param_3) {
      lVar2 = _AMRestoreCopyFileSystemPathFromString();
      if (lVar2 == 0) {
        _AMRLogWithFilePath(3,param_1,&cf_Failedtogetposixpathfrominputstring);
        return 0;
      }
      uVar1 = _CFStringGetFileSystemRepresentation(lVar2,param_2,param_3);
      _CFRelease(lVar2);
      return uVar1;
    }
    pcVar3 = &cf_Can_tloadbufferwithnegativesize;
  }
  _AMRLog(3,pcVar3);
  return 0;
}

