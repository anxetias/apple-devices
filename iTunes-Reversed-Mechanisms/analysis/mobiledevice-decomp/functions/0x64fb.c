// rea decompile_all
// name: _AMSupportCreateErrorInternal
// address: 0x64fb
// body: available
// range: 0x64fb-0x666a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6666 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportCreateErrorInternal
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 *param_9,undefined8 param_10,undefined8 param_11,long param_12,
          undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  char in_AL;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_128 [40];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  long local_38;
  
  local_48 = local_128;
  if (in_AL != '\0') {
    local_f8 = param_1;
    local_e8 = param_2;
    local_d8 = param_3;
    local_c8 = param_4;
    local_b8 = param_5;
    local_a8 = param_6;
    local_98 = param_7;
    local_88 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_58 = 0x3000000028;
  puStack_50 = &stack0x00000008;
  local_100 = param_14;
  if (param_9 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar4 = 0;
    local_70 = param_11;
    local_68 = param_10;
    local_60 = param_12;
    lVar2 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar2 != 0) {
      lVar3 = _CFStringCreateWithFormatAndArguments(uVar1,0,param_13,&local_58);
      if (lVar3 != 0) {
        _CFDictionaryAddValue(lVar2,*(undefined8 *)PTR__kCFErrorDescriptionKey_00441138,lVar3);
        _CFRelease(lVar3);
      }
      if (local_60 != 0) {
        _CFDictionaryAddValue(lVar2,*(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_00441150);
      }
      uVar4 = _CFErrorCreate(uVar1,local_68,local_70,lVar2);
      *param_9 = uVar4;
      _CFRelease(lVar2);
      uVar4 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

