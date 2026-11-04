// rea decompile_all
// name: FUN_100011b5a
// address: 0x100011b5a
// body: available
// range: 0x100011b5a-0x100011c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100011c87 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011b5a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10001c070;
  if (*(long *)(param_2 + 0x28) != 0) {
    _CFRelease();
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    _CFRelease();
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    _CFRelease();
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  lVar2 = *(long *)(param_2 + 0x40);
  if (lVar2 != 0) {
    uVar1 = _CFArrayGetCount(lVar2);
    _CFArrayApplyFunction(lVar2,0,uVar1,FUN_10000f2fe,0);
    _CFRelease(*(undefined8 *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  local_30 = &cf_EventTypeKey;
  local_38 = &cf_EventBonjourError;
  lVar2 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,&local_30,&local_38,
                              1,PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                              PTR__kCFTypeDictionaryValueCallBacks_10001c060);
  if (lVar2 != 0) {
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sBonjoursource_pdied_SignallingRLS_,
                    "_USBMuxBonjourSourceDiedCallback",param_1);
    }
    FUN_10000f398(lVar2);
    _CFRelease(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

