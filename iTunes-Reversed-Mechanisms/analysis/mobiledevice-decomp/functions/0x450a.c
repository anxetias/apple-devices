// rea decompile_all
// name: __AMSupportCreateDataFromFileURLInternal
// address: 0x450a
// body: available
// range: 0x450a-0x45c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45bd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMSupportCreateDataFromFileURLInternal
              (undefined8 param_1,long param_2,long param_3,char param_4)

{
  int iVar1;
  long local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_38 = 0;
  iVar1 = 1;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = _AMSupportCopyPreserveFileURL(param_1,param_3,&local_38,0);
    if (iVar1 == 0) {
      if (param_4 == '\0') {
        iVar1 = _AMSupportPlatformCreateDataFromFileURL(param_1,param_2,local_38);
      }
      else {
        iVar1 = _AMSupportPlatformCreateDataFromMappedFileURL();
      }
    }
    else {
      _AMSupportLogInternal
                (3,"_AMSupportCreateDataFromFileURLInternal","AMSupportCopyPreserveFileURL failed.")
      ;
    }
    if (local_38 != 0) {
      _CFRelease();
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

