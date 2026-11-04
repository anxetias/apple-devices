// rea decompile_all
// name: _Img4DecodeCopyManifestDigest
// address: 0x2a68e4
// body: available
// range: 0x2a68e4-0x2a69b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a69b4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4DecodeCopyManifestDigest(long param_1,void *param_2,ulong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar1 = 6;
  if ((((param_1 != 0) && (param_2 != (void *)0x0)) && (param_3 != 0)) &&
     ((param_4 != (undefined8 *)0x0 && ((code *)*param_4 != (code *)0x0)))) {
    if (*(long *)(param_1 + 0x18) == 0) {
      iVar1 = 1;
    }
    else if (param_3 < 0x31) {
      if (*(char *)(param_1 + 1) == '\x01') {
        _memcpy(param_2,(void *)(param_1 + 0x148),param_3);
        iVar1 = 0;
      }
      else {
        local_38 = 0;
        uStack_30 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        iVar1 = (*(code *)*param_4)(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                                    &local_58,param_3);
        if (iVar1 == 0) {
          _memcpy(param_2,&local_58,param_3);
        }
      }
    }
    else {
      iVar1 = 7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

