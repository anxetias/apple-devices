// rea decompile_all
// name: _AMSupportEcDsaCreateSignatureSha256
// address: 0x2605cc
// body: available
// range: 0x2605cc-0x260660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26065c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportEcDsaCreateSignatureSha256
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
          undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = 1;
  if (((param_1 != 0) && (param_3 != 0)) && (param_5 != 0)) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uVar1 = _AMSupportDigestSha256();
    if ((int)uVar1 == 0) {
      uVar1 = _ccec_cp_256();
      uVar1 = _AMSupportEcDsaCreateSignatureWithCp
                        (uVar1,&local_58,0x20,param_3,param_4,param_5,param_6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

