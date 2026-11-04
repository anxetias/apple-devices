// rea decompile_all
// name: FUN_10000a951
// address: 0x10000a951
// body: available
// range: 0x10000a951-0x10000a9d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10000a951(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_1000166e0;
  if (DAT_1000166e0 == 0) {
    lVar1 = _NSHomeDirectory();
    if (lVar1 == 0) {
      uVar2 = FUN_10000b8f0();
      lVar1 = 0;
      __os_log_internal(0x100000000,uVar2,0x10,"_getBackupDirPath: Can\'t get home directory!");
    }
    else {
      uVar2 = (*(code *)PTR__objc_msgSend_100012170)
                        (lVar1,"stringByAppendingPathComponent:",
                         &cf_Library_ApplicationSupport_MobileSync_Backup);
      DAT_1000166e0 = (*(code *)PTR__objc_retain_100012180)(uVar2);
      _DLEnsureDirectoryExists(DAT_1000166e0);
      lVar1 = DAT_1000166e0;
    }
  }
  return lVar1;
}

