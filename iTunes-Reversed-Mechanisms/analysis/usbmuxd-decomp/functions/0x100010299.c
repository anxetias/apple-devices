// rea decompile_all
// name: FUN_100010299
// address: 0x100010299
// body: available
// range: 0x100010299-0x100010330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000102ff to 0x100008fdb FUN_100008fdb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100010327 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100010299(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      if (6 < DAT_100021030) {
        FUN_1000008d2(7,0,&cf__sheartbeatdetecteddetachfordevice___,"_heartbeat_failed",
                      *(undefined8 *)(lVar1 + 0x28));
        lVar2 = *(long *)(param_1 + 8);
      }
      FUN_100012083(lVar2);
      FUN_10000f83d(*(undefined8 *)(param_1 + 8));
      FUN_100008fdb(lVar1);
      return;
    }
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__sNoMIEobjectattachedtoHeartbeatInfo_p_,"_heartbeat_failed",param_1);
      return;
    }
  }
  return;
}

