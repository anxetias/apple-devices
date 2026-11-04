// rea decompile_all
// name: _AMSupportRsaCreateKeyFromPEMBuffer
// address: 0x26119e
// body: available
// range: 0x26119e-0x2613f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2613f2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMSupportRsaCreateKeyFromPEMBuffer
                (undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 *param_5
                ,size_t *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  void *pvVar7;
  size_t **ppsVar8;
  ulong uVar9;
  long *plVar10;
  size_t sVar11;
  ulong uStack_70;
  size_t *local_68 [2];
  size_t local_58;
  void *local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  ppsVar8 = local_68;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = (void *)0x0;
  local_48 = 0;
  local_50 = (void *)0x0;
  local_58 = 0;
  if (param_3 == param_4) {
    uStack_70 = 0x261304;
    uVar2 = _AMSupportRsaCreateDataFromPem(param_1,param_2,&local_50,&local_58);
    pvVar7 = local_50;
    sVar11 = local_58;
    if (uVar2 == 0) {
      if (local_50 != (void *)0x0) {
        if (0x18 < local_58) {
          uStack_70 = 0x261334;
          iVar3 = _memcmp(local_50,&_rsa_oid,0x18);
          if (iVar3 == 0) {
            sVar11 = sVar11 - 0x18;
            uStack_70 = 0x26134a;
            pvVar7 = _calloc(1,sVar11);
            if (pvVar7 == (void *)0x0) {
              uStack_70 = 2;
              ppsVar8 = local_68;
              pvVar7 = local_50;
              uVar9 = uStack_70;
              goto LAB_002612de;
            }
            uStack_70 = 0x26136c;
            _memcpy(pvVar7,(void *)((long)local_50 + 0x18),sVar11);
            uStack_70 = 0x261375;
            _free(local_50);
            local_58 = sVar11;
          }
        }
        *param_5 = pvVar7;
        *param_6 = sVar11;
        local_50 = (void *)0x0;
        uVar9 = 0;
        goto LAB_00261394;
      }
      uStack_70 = 0xe;
      goto LAB_00261392;
    }
    uVar9 = (ulong)uVar2;
    ppsVar8 = local_68;
  }
  else {
    if ((byte)(param_4 ^ 1 | param_3) != 1) {
      uStack_70 = 6;
LAB_00261392:
      ppsVar8 = local_68;
      uVar9 = uStack_70;
      goto LAB_00261394;
    }
    uStack_70 = 0x2611fa;
    uVar2 = _AMSupportRsaCreateDataFromPem(param_1,param_2,&local_40,&local_48);
    if (uVar2 != 0) {
      ppsVar8 = local_68;
      uVar9 = (ulong)uVar2;
      goto LAB_00261394;
    }
    uStack_70 = 0x26120e;
    lVar4 = _ccrsa_import_priv_n(local_48 & 0xffffffff,local_40);
    lVar1 = -(lVar4 * 0x20 + (lVar4 * 4 & 0x7ffffffffffffff8U) * 7 + 0xcf & 0xffffffffffffffe0);
    plVar10 = (long *)((long)local_68 + lVar1);
    *(undefined8 *)((long)&uStack_70 + lVar1) = 0x261254;
    ___bzero(plVar10);
    *plVar10 = lVar4;
    pvVar7 = local_40;
    uVar9 = local_48 & 0xffffffff;
    *(undefined8 *)((long)&uStack_70 + lVar1) = 0x261267;
    iVar3 = _ccrsa_import_priv(plVar10,uVar9,pvVar7);
    *(undefined8 *)((long)&uStack_70 + lVar1) = 6;
    uVar9 = *(ulong *)((long)&uStack_70 + lVar1);
    if (iVar3 == 0) {
      local_68[0] = param_6;
      local_68[1] = (size_t *)local_68;
      *(undefined8 *)((long)&uStack_70 + lVar1) = 0x261283;
      uVar5 = _ccrsa_ctx_public(plVar10);
      *(undefined8 *)((long)&uStack_70 + lVar1) = 0x26128e;
      sVar6 = _ccrsa_export_pub_size(uVar5);
      local_58 = sVar6;
      *(undefined8 *)((long)&uStack_70 + lVar1) = 1;
      sVar11 = *(size_t *)((long)&uStack_70 + lVar1);
      *(undefined8 *)((long)&uStack_70 + lVar1) = 0x2612a0;
      pvVar7 = _calloc(sVar11,sVar6);
      local_50 = pvVar7;
      if (pvVar7 == (void *)0x0) {
        *(undefined8 *)((long)&uStack_70 + lVar1) = 2;
        uVar9 = *(ulong *)((long)&uStack_70 + lVar1);
        pvVar7 = (void *)0x0;
        ppsVar8 = (size_t **)local_68[1];
      }
      else {
        *(undefined8 *)((long)&uStack_70 + lVar1) = 0x2612be;
        iVar3 = _ccrsa_export_pub(uVar5,sVar6,pvVar7);
        ppsVar8 = (size_t **)local_68[1];
        if (iVar3 == 0) {
          *param_5 = pvVar7;
          *local_68[0] = sVar6;
          local_50 = (void *)0x0;
          pvVar7 = (void *)0x0;
          uVar9 = 0;
        }
      }
    }
    else {
      pvVar7 = (void *)0x0;
      ppsVar8 = local_68;
    }
  }
LAB_002612de:
  if (pvVar7 != (void *)0x0) {
    *(undefined8 *)((long)ppsVar8 + -8) = 0x2612ef;
    _free(pvVar7);
  }
LAB_00261394:
  pvVar7 = local_40;
  if (local_40 != (void *)0x0) {
    *(undefined8 *)((long)ppsVar8 + -8) = 0x2613a2;
    _free(pvVar7);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)ppsVar8 + -8) = _AMSupportCreateDictionaryFromFileURL;
    ___stack_chk_fail();
  }
  return uVar9 & 0xffffffff;
}

