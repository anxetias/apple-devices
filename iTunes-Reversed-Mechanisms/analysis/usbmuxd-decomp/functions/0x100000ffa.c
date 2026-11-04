// rea decompile_all
// name: FUN_100000ffa
// address: 0x100000ffa
// body: available
// range: 0x100000ffa-0x1000010d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000010a8 to 0x100013239 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000010d3 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100000ffa(void)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  if ((DAT_100021288 != 0) && (DAT_1000212c0 == 0 && DAT_1000212b0 == 0)) {
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    dVar3 = (double)_CFAbsoluteTimeGetCurrent();
    lVar1 = _CFRunLoopTimerCreate(dVar3 + 30.0,0,uVar2,0,0,FUN_1000010d8,0);
    if (lVar1 != 0) {
      if (6 < DAT_100021030) {
        FUN_1000008d2(7,0,&cf__sstarting30secondtimertoshutdown,"start_shutdown_timer");
      }
      uVar2 = _CFRunLoopGetCurrent();
      _CFRunLoopAddTimer(uVar2,lVar1,*(undefined8 *)PTR__kCFRunLoopCommonModes_10001c040);
      _CFRelease(lVar1);
      return;
    }
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__sfailedtocreateshutdowntimer,"start_shutdown_timer");
      return;
    }
  }
  return;
}

