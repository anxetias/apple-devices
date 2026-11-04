// rea decompile_all
// name: _AMSupportGetUInt32
// address: 0x261ded
// body: available
// range: 0x261ded-0x261ec5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x261ec1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportGetUInt32(long param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == 0) {
    uStack_40 = 1;
    goto LAB_00261e80;
  }
  local_24 = 0;
  local_30 = 0;
  pcVar3 = (char *)_CFNumberGetType();
  if (pcVar3 == "\a") {
    cVar1 = _CFNumberGetValue(param_1,4,&local_30);
    if (cVar1 == '\0') {
      pcVar4 = "%s: failed to convert 64-bit value";
LAB_00261eb0:
      pcVar3 = "AMSupportGetUInt32";
      goto LAB_00261e79;
    }
    uVar2 = (undefined4)local_30;
  }
  else {
    if (pcVar3 != (char *)0x3) {
      pcVar4 = "Incoming CFNumberRef is of unexpected type %d";
LAB_00261e79:
      uStack_40 = 3;
      _AMSupportLogInternal(3,"AMSupportGetUInt32",pcVar4,pcVar3);
      goto LAB_00261e80;
    }
    cVar1 = _CFNumberGetValue(param_1,3,&local_24);
    uVar2 = local_24;
    if (cVar1 == '\0') {
      pcVar4 = "%s: failed to convert 32-bit value";
      goto LAB_00261eb0;
    }
  }
  *param_2 = uVar2;
  uStack_40 = 0;
LAB_00261e80:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_40;
}

