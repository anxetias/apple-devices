// rea decompile_all
// name: _ccec_mult_blinded_ws
// address: 0xb773
// body: available
// range: 0xb773-0xb924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb920 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccec_mult_blinded_ws
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 *param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar7 = *param_2;
  uVar2 = _ccn_bitlen_internal(lVar7,param_4);
  uVar3 = _cczp_bitlen(param_2);
  uVar4 = 0xfffffff9;
  if (uVar2 <= uVar3) {
    local_40 = 1;
    if (param_6 == (undefined8 *)0x0) {
      local_40 = 0x80000001;
    }
    else {
      uVar4 = (*(code *)*param_6)(param_6,8,&local_40);
      if ((int)uVar4 != 0) goto LAB_0000b8fb;
      local_40 = local_40 | 0x80000000;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = (**(code **)(param_1 + 0x18))(param_1,lVar7 * 3);
    uVar6 = (**(code **)(param_1 + 0x18))(param_1,lVar7);
    _ccn_mux_seed_mask(local_40);
    local_40 = local_40 & 0xffffffff;
    uVar4 = _ccec_mult_ws(param_1,param_2,uVar5,&local_40,0x20,param_5);
    if ((int)uVar4 == 0) {
      local_48 = 0;
      _ccn_divmod_ws(param_1,lVar7,param_4,lVar7,uVar6,1,&local_48,&local_40);
      lVar7 = _cczp_bitlen(param_2);
      uVar4 = _ccec_mult_ws(param_1,param_2,param_3,uVar6,lVar7 + -0x1f,uVar5);
      if (((int)uVar4 == 0) &&
         (uVar4 = _ccec_mult_ws(param_1,param_2,uVar5,&local_48,0x20,param_5), (int)uVar4 == 0)) {
        _ccec_full_add_ws(param_1,param_2,param_3,param_3,uVar5);
        uVar4 = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
LAB_0000b8fb:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

