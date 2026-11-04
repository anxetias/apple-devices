// rea decompile_all
// name: FUN_1000021c0
// address: 0x1000021c0
// body: available
// range: 0x1000021c0-0x100002273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000021c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  long local_38 [4];
  
  iVar2 = _open("/Library/Preferences/com.apple.usbmuxd.plist",0);
  if (iVar2 != -1) {
    local_38[0] = (long)iVar2;
    local_38[1] = 0x230021fffc;
    local_38[2] = 0;
    local_38[3] = 0;
    FUN_100001667();
    _close(*param_1);
    cVar1 = FUN_10000b7c2(local_38,FUN_1000020db);
    if (cVar1 == '\0') {
      if (6 < DAT_100021030) {
        piVar3 = ___error();
        iVar2 = *piVar3;
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        FUN_1000008d2(7,0,&cf__skeventfailed__d__s,"prefs_dir_changed",iVar2,pcVar4);
      }
      _close(*param_1);
    }
  }
  return;
}

