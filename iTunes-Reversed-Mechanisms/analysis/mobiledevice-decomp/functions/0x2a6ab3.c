// rea decompile_all
// name: _Img4DecodeGetPayloadProperties
// address: 0x2a6ab3
// body: available
// range: 0x2a6ab3-0x2a6b51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a6b4d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4DecodeGetPayloadProperties(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_c8 [96];
  long local_68;
  long local_60;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar1 = 6;
  iVar2 = iVar1;
  if ((((param_1 != 0) && (___bzero(local_c8,0xa0), param_2 != (long *)0x0)) &&
      (*(long *)(param_1 + 8) != 0)) &&
     ((iVar2 = _DERImg4DecodePayloadWithProperties(param_1 + 8,local_c8), iVar2 == 0 &&
      (iVar2 = iVar1, local_68 != 0)))) {
    *param_2 = local_68;
    param_2[1] = local_60;
    iVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

