// rea decompile_all
// name: _AMSupportX509DecodeIterateCertChainNext
// address: 0x260b6e
// body: available
// range: 0x260b6e-0x260c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x260c1f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00260c1a) */

undefined8 _AMSupportX509DecodeIterateCertChainNext(long *param_1,undefined8 *param_2,uint *param_3)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  undefined8 uStack_40;
  
  lVar2 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_40 = 1;
  if (((param_1 == (long *)0x0) || (param_2 == (undefined8 *)0x0)) || (*param_1 == 0))
  goto LAB_00260bb3;
  if (param_1[1] == 0) {
    *param_2 = 0;
  }
  else {
    iVar3 = _AMSupportX509DecodeParseDERLengthFromBuffer();
    if (iVar3 != 0) {
      uStack_40 = 0x13;
      goto LAB_00260bb3;
    }
    uStack_40 = _AMSupportX509DecodeCertificate(*param_2,*param_1);
    if ((int)uStack_40 != 0) goto LAB_00260bb3;
    uVar1 = *(ushort *)(param_1 + 2);
    *(ushort *)(param_1 + 2) = uVar1 + 1;
    *param_3 = (uint)uVar1;
    *param_1 = *param_1;
    param_1[1] = param_1[1];
  }
  uStack_40 = 0;
LAB_00260bb3:
  if (*(long *)PTR____stack_chk_guard_004412b8 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_40;
}

