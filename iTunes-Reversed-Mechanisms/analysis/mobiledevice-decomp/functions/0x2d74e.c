// rea decompile_all
// name: _DEREncodeItemSized
// address: 0x2d74e
// body: available
// range: 0x2d74e-0x2d877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2d869 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DEREncodeItemSized(undefined8 param_1,ulong param_2,void *param_3,void *param_4,ulong param_5,
                   ulong *param_6)

{
  void *pvVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = *param_6;
  uVar4 = _DERLengthOfItem();
  uVar5 = 7;
  if (param_5 < uVar4) {
LAB_0002d845:
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar6 = local_40;
  if (uVar4 <= *param_6) {
    *param_6 = uVar4;
    uVar6 = uVar4;
    if (uVar4 <= uVar2) {
      local_40 = uVar4;
      uVar5 = _DEREncodeTag(param_1,param_4,&local_40);
      if ((int)uVar5 == 0) {
        pvVar7 = (void *)((long)param_4 + local_40);
        if (CARRY8((ulong)param_4,local_40)) {
LAB_0002d86e:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar6 = uVar4 - local_40;
        if (uVar4 < local_40) {
LAB_0002d873:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pvVar1 = (void *)((long)param_4 + uVar2);
        if (((pvVar1 < pvVar7) || (pvVar7 < param_4)) || (uVar2 - local_40 < uVar6))
        goto LAB_0002d864;
        local_40 = uVar6;
        uVar5 = _DEREncodeLengthSized(param_2,pvVar7,uVar6,&local_40);
        if ((int)uVar5 == 0) {
          pvVar8 = (void *)((long)pvVar7 + local_40);
          if (CARRY8((ulong)pvVar7,local_40)) goto LAB_0002d86e;
          if (uVar6 < local_40) goto LAB_0002d873;
          uVar6 = local_40;
          if (((pvVar1 < pvVar8) || (pvVar8 < param_4)) ||
             ((ulong)((long)pvVar1 - (long)pvVar8) < param_2)) goto LAB_0002d864;
          _memmove(pvVar8,param_3,param_2);
          uVar5 = 0;
        }
      }
      goto LAB_0002d845;
    }
  }
LAB_0002d864:
  local_40 = uVar6;
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

