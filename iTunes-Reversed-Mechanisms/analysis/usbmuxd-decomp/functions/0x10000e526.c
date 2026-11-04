// rea decompile_all
// name: FUN_10000e526
// address: 0x10000e526
// body: available
// range: 0x10000e526-0x10000e67f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000e5ea to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000e67b to 0x100013257 _CFRunLoopRemoveSource (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000e526(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_10000f772(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 == 0) {
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__sCouldnotcreatev1RunLoopSourceforDNSbrowserservice_,
                    "USBMuxBonjourDeviceListenerScheduleWithRunLoop");
      return;
    }
  }
  else {
    _CFRunLoopAddSource(param_2,lVar1,param_3);
    lVar2 = FUN_10000f772(*(undefined8 *)(param_1 + 0x30));
    if (lVar2 == 0) {
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sCouldnotcreatev2RunLoopSourceforDNSbrowserservice_,
                      "USBMuxBonjourDeviceListenerScheduleWithRunLoop");
      }
LAB_10000e66a:
      _CFRunLoopRemoveSource(param_2,lVar1,param_3);
      return;
    }
    _CFRunLoopAddSource(param_2,lVar2,param_3);
    if (DAT_100021034 == '\x01') {
      lVar3 = FUN_10000f772(*(undefined8 *)(param_1 + 0x38));
      if (lVar3 == 0) {
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,0,&cf__sCouldnotcreatev3RunLoopSourceforDNSbrowserservice_,
                        "USBMuxBonjourDeviceListenerScheduleWithRunLoop");
        }
        _CFRunLoopRemoveSource(param_2,lVar1,param_3);
        lVar1 = lVar2;
        goto LAB_10000e66a;
      }
      _CFRunLoopAddSource(param_2,lVar3,param_3);
    }
    *(undefined8 *)(param_1 + 0x60) = param_2;
    *(undefined8 *)(param_1 + 0x68) = param_3;
  }
  return;
}

