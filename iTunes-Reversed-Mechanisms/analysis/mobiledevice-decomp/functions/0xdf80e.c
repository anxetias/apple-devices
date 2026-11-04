// rea decompile_all
// name: _AMRLogWithFilePath
// address: 0xdf80e
// body: available
// range: 0xdf80e-0xdf96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdf967 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRLogWithFilePath(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,int param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                        undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  char cVar1;
  undefined8 uVar2;
  undefined1 local_118 [24];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  char local_59;
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_e8 = param_1;
    local_d8 = param_2;
    local_c8 = param_3;
    local_b8 = param_4;
    local_a8 = param_5;
    local_98 = param_6;
    local_88 = param_7;
    local_78 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_100 = param_12;
  local_f8 = param_13;
  local_f0 = param_14;
  if (param_9 <= _logLevel) {
    local_59 = '\0';
    local_48 = local_118;
    local_58 = 0x3000000018;
    puStack_50 = &stack0x00000008;
    uVar2 = _CFStringCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
    _CFStringAppendFormatAndArguments(uVar2,0,param_11,&local_58);
    cVar1 = _CFPreferencesGetAppBooleanValue
                      (&cf_LogFilePaths,
                       *(undefined8 *)PTR__kCFPreferencesCurrentApplication_00441170,&local_59);
    if ((__logFilePathsOnError != 0) || ((local_59 != '\0' && (cVar1 != '\0')))) {
      _CFStringAppendFormat(uVar2,0,&cf_File_____,param_10);
    }
    _AMRLog(param_9,&cf___,uVar2);
    _CFRelease(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

