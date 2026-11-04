// rea decompile_all
// name: _AMSupportRsaCreateSignatureSha384
// address: 0x260ebc
// body: available
// range: 0x260ebc-0x261011 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26100d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong _AMSupportRsaCreateSignatureSha384
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
  ulong uStack_a0;
  long alStack_98 [2];
  size_t *local_88;
  undefined8 *local_80;
  long local_78;
  size_t local_70 [8];
  
  local_70[7] = *(size_t *)PTR____stack_chk_guard_004412b8;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[0] = 0;
  uStack_a0 = 0x260f12;
  alStack_98[1] = param_2;
  local_88 = param_6;
  local_80 = param_5;
  lVar6 = _ccrsa_import_priv_n(param_4,param_3);
  lVar3 = -(lVar6 * 0x20 + (lVar6 * 4 & 0x7ffffffffffffff8U) * 7 + 0xcf & 0xffffffffffffffe0);
  plVar8 = (long *)((long)alStack_98 + lVar3);
  local_78 = (long)alStack_98;
  *(undefined8 *)((long)&uStack_a0 + lVar3) = 0x260f59;
  ___bzero(plVar8);
  *plVar8 = lVar6;
  *(undefined8 *)((long)&uStack_a0 + lVar3) = 0x260f6a;
  iVar5 = _ccrsa_import_priv(plVar8,param_4,param_3);
  *(undefined8 *)((long)&uStack_a0 + lVar3) = 6;
  lVar4 = alStack_98[1];
  uVar9 = *(ulong *)((long)&uStack_a0 + lVar3);
  if (iVar5 == 0) {
    *(undefined8 *)((long)&uStack_a0 + lVar3) = 0x260f85;
    iVar5 = _AMSupportDigestSha384(param_1,lVar4,local_70 + 1);
    if (iVar5 == 0) {
      local_70[0] = lVar6 << 3;
      *(undefined8 *)((long)&uStack_a0 + lVar3) = 1;
      sVar1 = *(size_t *)((long)&uStack_a0 + lVar3);
      *(undefined8 *)((long)&uStack_a0 + lVar3) = 0x260f9c;
      pvVar7 = _calloc(sVar1,lVar6 << 3);
      if (pvVar7 != (void *)0x0) {
        *(undefined8 *)((long)&uStack_a0 + lVar3) = 0x30;
        uVar2 = *(undefined8 *)((long)&uStack_a0 + lVar3);
        *(undefined8 *)((long)&uStack_a0 + lVar3) = 0x260fc1;
        iVar5 = _ccrsa_sign_pkcs1v15(plVar8,s___H_e_003b4c23,uVar2,local_70 + 1,local_70,pvVar7);
        if (iVar5 == 0) {
          *local_80 = pvVar7;
          *local_88 = local_70[0];
          uVar9 = 0;
        }
        else {
          *(undefined8 *)((long)&uStack_a0 + lVar3) = 0x26100b;
          _free(pvVar7);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_70[7]) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(local_78 + 0xfffffffffffffff8) = _AMSupportRsaVerifySignatureSha1;
  ___stack_chk_fail();
}

