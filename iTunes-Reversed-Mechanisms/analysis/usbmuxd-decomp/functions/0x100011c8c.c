// rea decompile_all
// name: FUN_100011c8c
// address: 0x100011c8c
// body: available
// range: 0x100011c8c-0x100011e64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100011db3 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100011e19 to 0x100013239 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011c8c(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  if (param_1 == (long *)0x0) {
    if (2 < DAT_100021030) {
      FUN_1000008d2(3,0,&cf__sNoUSBMuxBonjourDeviceListenerRef,"USBMuxRunLoopPerformCallback");
      return;
    }
  }
  else {
    iVar2 = _CFArrayGetCount(param_1[2]);
    if (1 < iVar2) {
      _CFRunLoopSourceSignal(param_1[10]);
      _CFRunLoopWakeUp(param_1[0xc]);
    }
    lVar3 = _CFArrayGetValueAtIndex(param_1[2],0);
    if (lVar3 != 0) {
      _CFRetain(lVar3);
      _CFArrayRemoveValueAtIndex(param_1[2],0);
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFDictionaryGetTypeID();
      if (lVar4 == lVar5) {
        lVar4 = _CFDictionaryGetValue(lVar3,&cf_EventTypeKey);
        if (lVar4 != 0) {
          cVar1 = _CFEqual(lVar4,&cf_EventDeviceAttach);
          if (cVar1 == '\0') {
            cVar1 = _CFEqual(lVar4,&cf_EventDeviceDetach);
            if (cVar1 == '\0') {
              cVar1 = _CFEqual(lVar4,&cf_EventBonjourError);
              if ((cVar1 == '\0') && (2 < DAT_100021030)) {
                FUN_1000008d2(3,0,&cf__sUnknowneventtype__,"USBMuxRunLoopPerformCallback",lVar4);
              }
              goto LAB_100011e0e;
            }
            lVar4 = _CFDictionaryGetValue(lVar3,&cf_DeviceDictionaryKey);
            if (lVar4 == 0) goto LAB_100011e0e;
            lVar5 = _CFGetTypeID(lVar4);
            lVar6 = _CFDictionaryGetTypeID();
            if ((lVar5 != lVar6) || (pcVar7 = (code *)*param_1, pcVar7 == (code *)0x0))
            goto LAB_100011e0e;
            lVar5 = param_1[1];
            uVar8 = 1;
          }
          else {
            lVar4 = _CFDictionaryGetValue(lVar3,&cf_DeviceDictionaryKey);
            if (lVar4 == 0) goto LAB_100011e0e;
            lVar5 = _CFGetTypeID(lVar4);
            lVar6 = _CFDictionaryGetTypeID();
            if ((lVar5 != lVar6) || (pcVar7 = (code *)*param_1, pcVar7 == (code *)0x0))
            goto LAB_100011e0e;
            lVar5 = param_1[1];
            uVar8 = 0;
          }
          (*pcVar7)(param_1,lVar5,uVar8,lVar4);
        }
      }
LAB_100011e0e:
      _CFRelease(lVar3);
      return;
    }
  }
  return;
}

