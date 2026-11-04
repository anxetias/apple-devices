// rea decompile_all
// name: FUN_1000008d2
// address: 0x1000008d2
// body: available
// range: 0x1000008d2-0x100000aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100000a9f to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000008d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  uint param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 local_8f8 [24];
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8b8;
  undefined8 local_8a8;
  undefined8 local_898;
  undefined8 local_888;
  undefined8 local_878;
  undefined8 local_868;
  undefined8 local_858;
  undefined1 local_848 [2048];
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  long local_30;
  
  if (in_AL != '\0') {
    local_8c8 = param_1;
    local_8b8 = param_2;
    local_8a8 = param_3;
    local_898 = param_4;
    local_888 = param_5;
    local_878 = param_6;
    local_868 = param_7;
    local_858 = param_8;
  }
  local_30 = *(long *)PTR____stack_chk_guard_10001c070;
  local_8e0 = param_12;
  local_8d8 = param_13;
  local_8d0 = param_14;
  ___bzero(local_848,0x800);
  if (DAT_100021320 == 0) {
    DAT_100021320 = __os_log_create(0x100000000,"com.apple.usbmux","daemon");
  }
  if (DAT_100021328 == 0) {
    DAT_100021328 = __os_log_create(0x100000000,"com.apple.usbmux","bonjour");
  }
  lVar3 = DAT_100021328;
  if (param_10 == 0) {
    lVar3 = DAT_100021320;
  }
  local_38 = local_8f8;
  local_40 = &stack0x00000008;
  local_48 = 0x3000000018;
  lVar2 = _CFStringCreateWithFormatAndArguments
                    (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,param_11);
  if (lVar2 == 0) {
    __os_log_internal(0x100000000,PTR___os_log_default_10001c080,0x11,
                      "Could not create base string for logging");
  }
  else {
    _CFStringGetCString(lVar2,local_848,0x800,0x8000100);
    cVar1 = '\x11';
    if ((2 < (int)param_9) && (cVar1 = '\x10', param_9 != 3)) {
      cVar1 = '\x02' - (param_9 < 7);
    }
    __os_log_internal(0x100000000,lVar3,cVar1,"%{public}s",local_848);
    _CFRelease(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

