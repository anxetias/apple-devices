// rea decompile_all
// name: _DLCopyHomeDirPath
// address: 0xa9d1
// body: available
// range: 0xa9d1-0xaa27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLCopyHomeDirPath(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _CFCopyHomeDirectoryURLForUser(0);
  if (lVar1 == 0) {
    _fwrite("Could not get a home URL for the default user\n",0x2e,1,
            *(FILE **)PTR____stderrp_00015078);
    uVar2 = 0;
  }
  else {
    uVar2 = _CFURLCopyFileSystemPath(lVar1,0);
    _CFRelease(lVar1);
  }
  return uVar2;
}

