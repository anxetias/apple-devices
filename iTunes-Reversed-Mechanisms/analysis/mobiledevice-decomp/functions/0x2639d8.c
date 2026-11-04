// rea decompile_all
// name: _ccrng_process_init
// address: 0x2639d8
// body: available
// range: 0x2639d8-0x263bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x263bbb to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccrng_process_init(undefined8 *param_1,code *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  char local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_90 = param_2;
  _ccrng_schedule_timer_init(param_1 + 0x10,param_2,5000000000);
  _ccrng_schedule_atomic_flag_init(param_1 + 0x15);
  _ccrng_schedule_tree_init(param_1 + 0xc,param_1 + 0x10,param_1 + 0x15);
  uVar2 = _cc_lock_init(param_1 + 0x1a,"corecrypto process rng");
  if ((int)uVar2 == 0) {
    uVar2 = _ccentropy_rng_init(param_1 + 0x18,param_3);
    if ((int)uVar2 == 0) {
      local_88 = param_1 + 0x1a;
      uVar2 = _ccaes_cbc_encrypt_mode();
      uVar2 = _ccdrbg_df_bc_init_internal(param_1 + 0x1c,uVar2,0x20);
      if ((int)uVar2 == 0) {
        local_a8 = 0;
        local_80 = param_1 + 0xc;
        local_b8 = _ccaes_ctr_crypt_mode();
        local_b0 = 0x20;
        local_a8 = CONCAT44(local_a8._4_4_,1);
        puVar1 = param_1 + 0x60;
        local_a0 = param_1 + 0x1c;
        _ccdrbg_factory_nistctr(puVar1,&local_b8);
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        uVar2 = (*(code *)*param_3)(param_3,0x20);
        if ((int)uVar2 == 0) {
          local_98 = (*local_90)();
          builtin_strncpy(local_78 + 0x10,"ss rng",7);
          builtin_strncpy(local_78,"corecrypto proce",0x10);
          uVar2 = _ccdrbg_init_internal
                            (puVar1,param_1 + 0x67,0x20,&local_58,8,&local_98,0x16,local_78);
          if ((int)uVar2 == 0) {
            uVar2 = _ccrng_crypto_init(param_1 + 1,param_1 + 0x18,local_80,local_88,puVar1,
                                       param_1 + 0x67,0x1000,0x20,0x100,param_1 + 0x107);
            if ((int)uVar2 == 0) {
              *param_1 = _generate;
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

