// rea decompile_all
// name: FUN_100001a9d
// address: 0x100001a9d
// body: available
// range: 0x100001a9d-0x100001b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100001b2f to 0x10001487b ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100001a9d(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  char local_68 [72];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_1000201b0;
  cVar1 = _CFStringHasPrefix(param_1,&cf_com_apple_syncservices_);
  if (cVar1 == '\0') {
    pcVar2 = (char *)_CFStringGetCStringPtr(param_1,0x8000100);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = local_68;
      cVar1 = _CFStringGetCString(param_1,pcVar2,0x40,0x8000100);
      if (cVar1 == '\0') goto LAB_100001ac9;
    }
    sVar3 = _strlen(pcVar2);
    if ((sVar3 < 9) || (pcVar2[8] != '-')) {
      uVar4 = 1;
      goto LAB_100001b16;
    }
  }
LAB_100001ac9:
  uVar4 = 0;
LAB_100001b16:
  if (*(long *)PTR____stack_chk_guard_1000201b0 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

