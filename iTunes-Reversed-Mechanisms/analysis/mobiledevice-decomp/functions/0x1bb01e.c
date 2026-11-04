// rea decompile_all
// name: _tss_get_hash
// address: 0x1bb01e
// body: available
// range: 0x1bb01e-0x1bb167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bb163 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _tss_get_hash(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int local_a4;
  undefined1 local_a0 [104];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_a4 = param_2;
  iVar2 = 0x2714;
  if (param_1 != 0) {
    iVar2 = _tss_strip_img3_signature(param_1,&local_a4);
    if (iVar2 != 0) {
      _AMAuthInstallLog(3,"tss_get_hash","failed to strip img3 header");
    }
    if ((local_a4 < 0xc) || (iVar1 = *(int *)(param_1 + 8), local_a4 < iVar1 + 0x14)) {
      _AMAuthInstallLog(3,"tss_get_hash","invalid image3 length=%d");
      iVar2 = 0x2714;
    }
    else {
      iVar3 = _SHA1Reset(local_a0);
      if (iVar3 == 0) {
        iVar3 = _SHA1Input(local_a0,param_1 + 0xc,iVar1 + 8);
        if (iVar3 == 0) {
          iVar3 = _SHA1Result(local_a0,param_3);
          if (iVar3 == 0) goto LAB_001bb13d;
          pcVar4 = "SHA1Result failed=%d";
        }
        else {
          pcVar4 = "SHA1Input failed=%d";
        }
      }
      else {
        pcVar4 = "SHA1Reset failed=%d";
      }
      _AMAuthInstallLog(3,"tss_get_hash",pcVar4,iVar3);
      iVar2 = 0x2717;
    }
  }
LAB_001bb13d:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

