// rea decompile_all
// name: _ccn_mod_192_ws
// address: 0xfd6b
// body: available
// range: 0xfd6b-0xfeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfeaf to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_mod_192_ws(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_58 = *(undefined8 *)(param_4 + 0x18);
  local_48 = 0;
  local_78 = 0;
  local_70 = *(undefined8 *)(param_4 + 0x20);
  local_98 = *(undefined8 *)(param_4 + 0x28);
  local_90 = local_98;
  local_88 = local_98;
  local_68 = local_70;
  local_50 = local_58;
  lVar1 = _ccn_add_ws(param_1,3);
  lVar2 = _ccn_add_ws(param_1,3,param_3,param_3,&local_78);
  local_b8 = _ccn_add_ws(param_1,3,param_3,param_3,&local_98);
  local_b8 = local_b8 + lVar2 + lVar1;
  local_a8 = 0;
  local_b0 = local_b8;
  uVar3 = _ccn_add_ws(param_1,3,&local_b8,param_3,&local_b8);
  uVar4 = _cczp_prime(param_2);
  uVar5 = _ccn_sub_ws(param_1,3,param_3,&local_b8,uVar4);
  _ccn_mux(3,uVar3 | uVar5 ^ 1,param_3,param_3,&local_b8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

