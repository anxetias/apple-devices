// rea decompile_all
// name: FUN_1000020db
// address: 0x1000020db
// body: available
// range: 0x1000020db-0x1000021bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000021b2 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000020db(int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 local_20;
  
  if ((short)param_1[2] == -4) {
    uVar3 = param_1[3];
    if ((uVar3 & 0x23) != 0) {
      FUN_100001667();
      uVar3 = param_1[3];
    }
    if ((uVar3 & 0x21) != 0) {
      _close(*param_1);
      cVar2 = FUN_100001c3c(param_1,&local_20,0);
      if (cVar2 != '\0') {
        cVar2 = FUN_10000b7c2(param_1,local_20);
        if (cVar2 == '\0') {
          if (6 < DAT_100021030) {
            piVar4 = ___error();
            iVar1 = *piVar4;
            piVar4 = ___error();
            pcVar5 = _strerror(*piVar4);
            FUN_1000008d2(7,0,&cf__skeventfailed__d__s,"prefs_file_changed",iVar1,pcVar5);
          }
          _close(*param_1);
        }
      }
    }
  }
  else if (2 < DAT_100021030) {
    FUN_1000008d2(3,0,&cf__sfilter_d_expected_d,"prefs_file_changed",(int)(short)param_1[2],
                  0xfffffffc);
    return;
  }
  return;
}

