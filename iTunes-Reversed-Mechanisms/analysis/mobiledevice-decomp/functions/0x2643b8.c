// rea decompile_all
// name: _ccdrbg_df_bc_init_internal
// address: 0x2643b8
// body: available
// range: 0x2643b8-0x26443f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26443b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccdrbg_df_bc_init_internal(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_28 = 0x1716151413121110;
  uStack_20 = 0x1f1e1d1c1b1a1918;
  local_38 = 0x3020100;
  uStack_34 = 0x7060504;
  uStack_30 = 0xb0a0908;
  uStack_2c = 0xf0e0d0c;
  uVar1 = 0xfffffffffffffffb;
  if (((param_3 < 0x21) && (*param_2 < 0x201)) && (param_2[1] == 0x10)) {
    *param_1 = _ccdrbg_df_bc_derive_keys;
    param_1[1] = param_2;
    param_1[2] = param_3;
    uVar1 = _cccbc_init_internal(param_2,param_1 + 4,param_3,&local_38);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

