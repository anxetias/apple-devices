// rea decompile_all
// name: _Ace3ExternalDFURestoreInfoGetInfo
// address: 0x1880ac
// body: available
// range: 0x1880ac-0x188195 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x188191 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _Ace3ExternalDFURestoreInfoGetInfo(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x60) != 0) {
      local_48 = 0x461750;
      uStack_44 = 0;
      uStack_40 = 0x461770;
      uStack_3c = 0;
      local_60 = (ulong)*(uint *)(param_1 + 0x6c);
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      local_58 = _CFNumberCreate(uVar1,4);
      local_50 = _CFNumberCreate(uVar1,4,&local_60);
      uVar1 = _CFDictionaryCreate(uVar1,&local_48,&local_58,2,
                                  PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      uVar1 = _CFRetain(uVar1);
      goto LAB_00188174;
    }
    _Ace3ExternalDFULog(param_1,param_3,6,"No available UARP Context");
  }
  uVar1 = 0;
LAB_00188174:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

