// rea decompile_all
// name: __copyBackupDirPath
// address: 0xc033f
// body: available
// range: 0xc033f-0xc03f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __copyBackupDirPath(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _CFCopyHomeDirectoryURLForUser(0);
  if (lVar1 != 0) {
    lVar2 = _CFURLCopyFileSystemPath(lVar1,0);
    if (lVar2 == 0) {
      _CFRelease(lVar1);
    }
    else {
      lVar3 = _CFStringCreateWithFormat(0,0,&cf____Library_ApplicationSupport,lVar2);
      _CFRelease(lVar2);
      _CFRelease(lVar1);
      if (lVar3 != 0) {
        uVar4 = _CFStringCreateWithFormat(0,0,&cf_____MobileSync__Backup,lVar3,&cf__,&cf__);
        _CFRelease(lVar3);
        __ensureDirectoryExists(uVar4);
        return uVar4;
      }
    }
  }
  __AMSDebugLog("_copyBackupDirPath: Can\'t get home directory!\n");
  return 0;
}

