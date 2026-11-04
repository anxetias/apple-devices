// rea decompile_all
// name: FUN_10000f1a9
// address: 0x10000f1a9
// body: available
// range: 0x10000f1a9-0x10000f2fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000f1a9(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_R9;
  
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 == 0) {
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__s__dbdl_>bdl_workingRunLoop_NULL,
                    "USBMuxBonjourDeviceListenerUnscheduleFromRunLoop",0x7d4);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    lVar4 = param_1;
    lVar1 = _CFRunLoopGetCurrent();
    if (lVar2 != lVar1) {
      uVar3 = FUN_100013055();
      if (lVar4 != 0) {
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sKillingresolvesource_p_,
                        "ResolveSourcesArrayApplierFunction",lVar4,in_R9,uVar3,param_1,
                        &stack0xfffffffffffffff8);
        }
        FUN_10000f478(lVar4);
        return;
      }
      return;
    }
    lVar2 = FUN_10000f772(*(undefined8 *)(param_1 + 0x28));
    if (lVar2 == 0) {
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sCouldnotunschedulev1RunLoopSourceforDNSbrowserservice_,
                      "USBMuxBonjourDeviceListenerUnscheduleFromRunLoop");
      }
    }
    else {
      _CFRunLoopRemoveSource(*(undefined8 *)(param_1 + 0x60),lVar2,*(undefined8 *)(param_1 + 0x68));
    }
    lVar2 = FUN_10000f772(*(undefined8 *)(param_1 + 0x30));
    if (lVar2 == 0) {
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sCouldnotunschedulev2RunLoopSourceforDNSbrowserservice_,
                      "USBMuxBonjourDeviceListenerUnscheduleFromRunLoop");
      }
    }
    else {
      _CFRunLoopRemoveSource(*(undefined8 *)(param_1 + 0x60),lVar2,*(undefined8 *)(param_1 + 0x68));
    }
    if (DAT_100021034 == '\x01') {
      lVar2 = FUN_10000f772(*(undefined8 *)(param_1 + 0x38));
      if (lVar2 == 0) {
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,0,&cf__sCouldnotunschedulev3RunLoopSourceforDNSbrowserservice_,
                        "USBMuxBonjourDeviceListenerUnscheduleFromRunLoop");
        }
      }
      else {
        _CFRunLoopRemoveSource
                  (*(undefined8 *)(param_1 + 0x60),lVar2,*(undefined8 *)(param_1 + 0x68));
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}

