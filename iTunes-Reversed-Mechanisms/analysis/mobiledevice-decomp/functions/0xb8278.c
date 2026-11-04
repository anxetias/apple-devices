// rea decompile_all
// name: ___AFCCreateErrorObject
// address: 0xb8278
// body: available
// range: 0xb8278-0xb8352 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb834e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ___AFCCreateErrorObject(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  cfstringStruct *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  cfstringStruct *local_48;
  cfstringStruct *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = &cf_NSLocalizedDescription;
  pcStack_40 = &cf_AFCExtendedInfo;
  local_58 = 0x457c10;
  uStack_54 = 0;
  uStack_50 = 0x457c30;
  uStack_4c = 0;
  local_78 = &cf_AFCErrorDomain;
  local_70 = _CFNumberCreate(param_1,10);
  local_68 = _AFCCopyErrorString(param_2);
  local_60 = param_3;
  uVar1 = _CFDictionaryCreate(param_1,&local_58,&local_78,4 - (ulong)(param_3 == 0),
                              PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  _CFRelease(local_70);
  _CFRelease(local_68);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

