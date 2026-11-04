// rea decompile_all
// name: _ccrsa_verify_pkcs1v15
// address: 0x1f1b6
// body: available
// range: 0x1f1b6-0x1f2b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f2ad to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccrsa_verify_pkcs1v15
              (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  int iVar1;
  int iVar2;
  long local_78;
  long local_70;
  undefined8 local_68;
  code *local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  *param_7 = 0;
  local_50 = param_5;
  local_78 = _cc_malloc_clear(*param_1 * 0x58);
  local_70 = *param_1 * 0xb;
  local_68 = 0;
  local_60 = _cc_ws_alloc;
  local_58 = _cc_ws_free;
  if (local_78 == 0) {
    iVar2 = -0xd;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    iVar1 = _ccrsa_verify_pkcs1v15_internal_ws
                      (&local_78,param_1,param_2,param_3,param_4,local_50,param_6,0,&local_48);
    (*local_58)(&local_78);
    if (iVar1 == 0) {
      *param_7 = 1;
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      if (iVar1 != -0x92) {
        iVar2 = iVar1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

