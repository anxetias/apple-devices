// rea decompile_all
// name: _AMSupportWriteDictionarytoFileURLWithFormat
// address: 0x445d
// body: available
// range: 0x445d-0x4509 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4505 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMSupportWriteDictionarytoFileURLWithFormat
          (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_30 = 0;
  uVar1 = 1;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar2 = _CFPropertyListCreateData(param_1,param_2,param_4,0,&local_30);
    if (lVar2 == 0) {
      uVar1 = 3;
      _AMSupportLogInternal
                (3,"AMSupportWriteDictionarytoFileURLWithFormat","failed to create data: %@",
                 local_30);
    }
    else {
      uVar1 = __AMSupportPlatformWriteDataToFileURLInternal(lVar2,param_3,0);
      _CFRelease(lVar2);
    }
    if (local_30 != 0) {
      _CFRelease();
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

