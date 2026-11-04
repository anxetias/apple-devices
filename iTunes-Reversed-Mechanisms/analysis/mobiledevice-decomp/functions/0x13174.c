// rea decompile_all
// name: _ccec_verify_digest_ws
// address: 0x13174
// body: available
// range: 0x13174-0x1326e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1326a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccec_verify_digest_ws
          (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = 0;
    param_7[1] = 0;
  }
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = *(undefined8 *)*param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = (**(code **)(param_1 + 0x18))(param_1,uVar5);
  uVar3 = (**(code **)(param_1 + 0x18))(param_1,uVar5);
  lVar4 = _ccder_decode_seqii(uVar5,uVar2,uVar3,param_6,param_5 + param_6);
  if (lVar4 == param_5 + param_6) {
    uVar5 = _ccec_verify_internal_ws(param_1,param_2,param_3,param_4,uVar2,uVar3,&local_48);
    if ((param_7 != (undefined8 *)0x0) && ((int)uVar5 == 0)) {
      *(undefined4 *)param_7 = (undefined4)local_48;
      *(undefined4 *)((long)param_7 + 4) = local_48._4_4_;
      *(undefined4 *)(param_7 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((long)param_7 + 0xc) = uStack_40._4_4_;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xfffffffffffffff9;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

