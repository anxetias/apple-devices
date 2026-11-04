// rea decompile_all
// name: _ccrng_crypto_generate
// address: 0x13605
// body: available
// range: 0x13605-0x1384f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1384b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _ccrng_crypto_generate(long param_1,ulong param_2,void *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar9 = param_2;
  pvVar1 = param_3;
  do {
    if (uVar9 == 0) {
      uVar4 = 0;
LAB_000137db:
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if ((*(long *)(param_1 + 0x18) != 0) && (_os_unfair_lock_lock(), *(long *)(param_1 + 0x18) != 0)
       ) {
      _os_unfair_lock_assert_owner();
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    iVar3 = _ccrng_schedule_read(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 != 1) {
      uVar4 = _ccentropy_get_seed(*(undefined8 *)(param_1 + 8),uVar2,&local_78);
      if (uVar4 == 0xfffffff6) {
        if (iVar3 == 2) goto LAB_000136e7;
        uVar4 = -(uint)(iVar3 != 3) | 0xffffff5e;
      }
      else {
        if (uVar4 == 0) {
          uVar4 = _drbg_reseed(param_1,uVar2,&local_78,0,0);
          if (uVar4 == 0) {
            _ccrng_schedule_notify_reseed(*(undefined8 *)(param_1 + 0x10));
            _cc_clear(uVar2,&local_78);
            goto LAB_000136e7;
          }
        }
        _cc_clear(uVar2,&local_78);
      }
LAB_00013812:
      if (*(long *)(param_1 + 0x18) != 0) {
        _os_unfair_lock_unlock();
      }
      _cc_clear(param_2,param_3);
      goto LAB_000137db;
    }
LAB_000136e7:
    uVar5 = *(ulong *)(param_1 + 0x30);
    if (uVar9 < *(ulong *)(param_1 + 0x30)) {
      uVar5 = uVar9;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      _os_unfair_lock_assert_owner();
    }
    if ((param_2 < 0xc) && (uVar5 <= *(ulong *)(param_1 + 0x40))) {
      pvVar6 = (void *)(*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50));
      uVar7 = *(ulong *)(param_1 + 0x40) - *(long *)(param_1 + 0x50);
      uVar10 = uVar5;
      if (uVar7 < uVar5) {
        uVar10 = uVar7;
      }
      _memcpy(pvVar1,pvVar6,uVar10);
      _cc_clear(uVar10,pvVar6);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + uVar10;
      if (uVar7 < uVar5) {
        uVar4 = _drbg_generate(param_1,*(undefined8 *)(param_1 + 0x40),
                               *(undefined8 *)(param_1 + 0x48));
        if (uVar4 != 0) goto LAB_00013812;
        sVar8 = uVar5 - uVar10;
        _memcpy((void *)((long)pvVar1 + uVar10),*(void **)(param_1 + 0x48),sVar8);
        _cc_clear(sVar8,*(undefined8 *)(param_1 + 0x48));
        *(size_t *)(param_1 + 0x50) = sVar8;
      }
    }
    else {
      uVar4 = _drbg_generate(param_1,uVar5,pvVar1);
      if (uVar4 != 0) goto LAB_00013812;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      _os_unfair_lock_unlock();
    }
    uVar9 = uVar9 - uVar5;
    pvVar1 = (void *)((long)pvVar1 + uVar5);
  } while( true );
}

