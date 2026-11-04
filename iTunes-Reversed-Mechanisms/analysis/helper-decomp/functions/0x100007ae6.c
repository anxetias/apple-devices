// rea decompile_all
// name: FUN_100007ae6
// address: 0x100007ae6
// body: available
// range: 0x100007ae6-0x100007bd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100007bc9 to 0x10000bb2d __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100007ae6(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  cVar1 = _DLShouldLog(4);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_listenerStopped",4,&cf_Devicelistenerstopped_Restarting_);
  }
  _DLDeviceListenerDestroy(param_1);
  DAT_100016698 = 0;
  uVar2 = 0;
  DAT_100016698 = _DLDeviceListenerCreateWithCallbacks(0,0,FUN_100007ae6,0);
  if (DAT_100016698 == 0) {
    uVar3 = 0;
    do {
      DAT_100016698 = 0;
      _sleep(uVar2);
      DAT_100016698 = _DLDeviceListenerCreateWithCallbacks(0,0,FUN_100007ae6,0);
      if (DAT_100016698 != 0) break;
      uVar2 = uVar2 + 2;
      bVar4 = uVar3 < 4;
      uVar3 = uVar3 + 1;
    } while (bVar4);
    if (DAT_100016698 == 0) {
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_listenerStopped",3,
                &cf_Couldnotcreateadevicelistener_Thingsmaynotgosowellfromhereonout_);
        return;
      }
    }
  }
  return;
}

