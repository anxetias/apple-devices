// rea decompile_all
// name: FUN_10000e9e8
// address: 0x10000e9e8
// body: available
// range: 0x10000e9e8-0x10000ea85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000ea57 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000ea81 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000e9e8(void)

{
  undefined1 local_218 [520];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10001c070;
  ___bzero(local_218,0x200);
  if (DAT_100022be8 == 0) {
    FUN_100012f36(local_218);
  }
  else if (2 < DAT_100021030) {
    if (*(long *)PTR____stack_chk_guard_10001c070 == local_10) {
      FUN_1000008d2(3,0,&cf__salreadylisteningforbonjourdevices,"StartListeningForBonjourDevices");
      return;
    }
    goto LAB_10000ea81;
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_10) {
    return;
  }
LAB_10000ea81:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

