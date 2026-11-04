// rea decompile_all
// name: FUN_100011261
// address: 0x100011261
// body: available
// range: 0x100011261-0x10001138e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10001138a to 0x100013239 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011261(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_100012191();
  if (lVar3 != 0) {
    lVar4 = _CFDictionaryGetValue(lVar3,&cf_AttachedInterfaceIndex);
    uVar1 = *(undefined8 *)PTR__kCFNumberNaN_10001c038;
    if ((lVar4 != 0) && (cVar2 = _CFEqual(lVar4,uVar1), cVar2 != '\0')) {
      return;
    }
    _CFDictionarySetValue(lVar3,&cf_AttachedInterfaceIndex,uVar1);
    lVar4 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                       PTR__kCFTypeDictionaryValueCallBacks_10001c060);
    if (lVar4 != 0) {
      _CFDictionarySetValue(lVar4,&cf_EventTypeKey,&cf_EventDeviceDetach);
      _CFDictionarySetValue(lVar4,&cf_DeviceDictionaryKey,lVar3);
      if (param_2 == 0) {
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf__ssendingdetachfordevice___,
                        "_SendDetachNotification",param_1);
        }
      }
      else if (2 < DAT_100021030) {
        FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf__ssendingdetachfordevice______,
                      "_SendDetachNotification",param_1,param_2);
      }
      FUN_10000f398(lVar4);
      _CFRelease(lVar4);
      return;
    }
  }
  return;
}

