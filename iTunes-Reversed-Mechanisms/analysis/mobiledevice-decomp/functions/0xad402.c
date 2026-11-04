// rea decompile_all
// name: __CreateAndLogDMError
// address: 0xad402
// body: available
// range: 0xad402-0xad5b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xad5b0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__CreateAndLogDMError
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
          long param_13,undefined8 param_14,undefined8 param_15)

{
  char in_AL;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_108 [48];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  long local_28;
  
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_4c = param_10;
  lVar1 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  lVar2 = _CFStringCreateWithCString(0,param_9,0x8000100);
  _CFDictionaryAddValue(lVar1,&cf_FunctionName,lVar2);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  lVar2 = _CFNumberCreate(0,9,&local_4c);
  _CFDictionaryAddValue(lVar1,&cf_SourceFileLine,lVar2);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (param_13 != 0) {
    _CFDictionaryAddValue(lVar1,*(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_00441150,param_13);
  }
  local_38 = local_108;
  local_40 = &stack0x00000010;
  local_48 = 0x3000000030;
  lVar2 = _CFStringCreateWithFormatAndArguments(0,0,param_15);
  _dmlog("_CreateAndLogDMError",0x47,&cf___,lVar2);
  _CFDictionaryAddValue(lVar1,*(undefined8 *)PTR__kCFErrorLocalizedDescriptionKey_00441148,lVar2);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  uVar3 = _CFErrorCreate(0,&cf_MIInstallerDeltaErrorDomain,1,lVar1);
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

