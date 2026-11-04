// rea decompile_all
// name: _ZipStreamCallPreflightResultCallback
// address: 0xa2159
// body: available
// range: 0xa2159-0xa227c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa2278 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ZipStreamCallPreflightResultCallback
               (long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_7a;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_90 = param_2;
  local_88 = param_3;
  local_7a = param_4;
  if (*(long *)(param_1 + 8) != 0) {
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar1 = _CFNumberCreate(uVar4,4,&local_90);
    uVar2 = _CFNumberCreate(uVar4,4,&local_88);
    uVar3 = _CFNumberCreate(uVar4,2,&local_7a);
    local_58 = &cf_PreflightResultTotalFileCount;
    local_50 = &cf_PreflightResultTotalFileSize;
    local_48 = &cf_PreflightTargetPathMode;
    local_78 = uVar1;
    local_70 = uVar2;
    local_68 = uVar3;
    uVar4 = _CFDictionaryCreate(uVar4,&local_58,&local_78,3,
                                PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    (**(code **)(param_1 + 8))(uVar4,*(undefined8 *)(param_1 + 0x10));
    _CFRelease(uVar1);
    _CFRelease(uVar2);
    _CFRelease(uVar3);
    _CFRelease(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

