// rea decompile_all
// name: _AMSupportWriteDataToFileURL
// address: 0x261f52
// body: available
// range: 0x261f52-0x262011 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26200d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMSupportWriteDataToFileURL(undefined8 param_1,long param_2,long param_3,char param_4)

{
  int iVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_30 = 0;
  iVar1 = 1;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_00261fd4;
  if (param_4 == '\0') {
    iVar1 = _AMSupportCopyPreserveFileURL(param_1,param_3,&local_30,1);
    lVar2 = local_30;
    if (iVar1 == 0) {
LAB_00261fb0:
      if (lVar2 != 0) {
        param_3 = lVar2;
      }
      iVar1 = __AMSupportPlatformWriteDataToFileURLInternal(param_2,param_3,0);
    }
    else {
      _AMSupportLogInternal(3,"AMSupportWriteDataToFileURL","AMSupportCopyPreserveFileURL failed.");
    }
  }
  else {
    iVar1 = _AMSupportRemoveFile(param_3);
    if (iVar1 == 0) {
      lVar2 = 0;
      goto LAB_00261fb0;
    }
  }
  if (local_30 != 0) {
    _CFRelease();
  }
LAB_00261fd4:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

