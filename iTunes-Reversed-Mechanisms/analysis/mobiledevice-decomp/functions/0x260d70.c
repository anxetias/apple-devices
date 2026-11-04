// rea decompile_all
// name: _AMSupportRsaCreateSignatureSha256
// address: 0x260d70
// body: available
// range: 0x260d70-0x260ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x260eb7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong _AMSupportRsaCreateSignatureSha256
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                undefined8 *param_5,size_t *param_6)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  ulong uStack_90;
  long alStack_88 [2];
  size_t *local_78;
  undefined8 *local_70;
  long local_68;
  size_t local_60 [6];
  
  local_60[5] = *(size_t *)PTR____stack_chk_guard_004412b8;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[0] = 0;
  uStack_90 = 0x260dbf;
  alStack_88[1] = param_2;
  local_78 = param_6;
  local_70 = param_5;
  lVar6 = _ccrsa_import_priv_n(param_4,param_3);
  lVar3 = -(lVar6 * 0x20 + (lVar6 * 4 & 0x7ffffffffffffff8U) * 7 + 0xcf & 0xffffffffffffffe0);
  plVar8 = (long *)((long)alStack_88 + lVar3);
  local_68 = (long)alStack_88;
  *(undefined8 *)((long)&uStack_90 + lVar3) = 0x260e06;
  ___bzero(plVar8);
  *plVar8 = lVar6;
  *(undefined8 *)((long)&uStack_90 + lVar3) = 0x260e17;
  iVar5 = _ccrsa_import_priv(plVar8,param_4,param_3);
  *(undefined8 *)((long)&uStack_90 + lVar3) = 6;
  lVar4 = alStack_88[1];
  uVar9 = *(ulong *)((long)&uStack_90 + lVar3);
  if (iVar5 == 0) {
    *(undefined8 *)((long)&uStack_90 + lVar3) = 0x260e2f;
    iVar5 = _AMSupportDigestSha256(param_1,lVar4,local_60 + 1);
    if (iVar5 == 0) {
      local_60[0] = lVar6 << 3;
      *(undefined8 *)((long)&uStack_90 + lVar3) = 1;
      sVar1 = *(size_t *)((long)&uStack_90 + lVar3);
      *(undefined8 *)((long)&uStack_90 + lVar3) = 0x260e46;
      pvVar7 = _calloc(sVar1,lVar6 << 3);
      if (pvVar7 != (void *)0x0) {
        *(undefined8 *)((long)&uStack_90 + lVar3) = 0x20;
        uVar2 = *(undefined8 *)((long)&uStack_90 + lVar3);
        *(undefined8 *)((long)&uStack_90 + lVar3) = 0x260e6b;
        iVar5 = _ccrsa_sign_pkcs1v15(plVar8,s___H_e_003b4c17,uVar2,local_60 + 1,local_60,pvVar7);
        if (iVar5 == 0) {
          *local_70 = pvVar7;
          *local_78 = local_60[0];
          uVar9 = 0;
        }
        else {
          *(undefined8 *)((long)&uStack_90 + lVar3) = 0x260eb5;
          _free(pvVar7);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_60[5]) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(local_68 + 0xfffffffffffffff8) = _AMSupportRsaCreateSignatureSha384;
  ___stack_chk_fail();
}

