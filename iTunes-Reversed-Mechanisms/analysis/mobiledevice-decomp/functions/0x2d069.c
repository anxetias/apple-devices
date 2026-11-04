// rea decompile_all
// name: _DERDecodeSeqInit
// address: 0x2d069
// body: available
// range: 0x2d069-0x2d10f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2d101 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DERDecodeSeqInit(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  local_28 = 0xaaaaaaaaaaaaaaaa;
  local_38 = 0xaaaaaaaa;
  uStack_34 = 0xaaaaaaaa;
  uStack_30 = 0xaaaaaaaa;
  uStack_2c = 0xaaaaaaaa;
  uVar3 = _DERDecodeItemPartialBufferGetLength(param_1,&local_38,0);
  if ((int)uVar3 == 0) {
    *param_2 = CONCAT44(uStack_34,local_38);
    uVar3 = 2;
    if (CONCAT44(uStack_34,local_38) >> 1 == 0x1000000000000008) {
      uVar2 = CONCAT44(uStack_2c,uStack_30);
      if (CARRY8(local_28,uVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (local_28 + uVar2 < uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *param_3 = uVar2;
      param_3[1] = local_28 + uVar2;
      uVar3 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

