// rea decompile_all
// name: _AMSupportEcDsaCreateSignatureWithCp
// address: 0x1784
// body: available
// range: 0x1784-0x18a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18a4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMSupportEcDsaCreateSignatureWithCp
                (long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                undefined8 *param_6,size_t *param_7)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uStack_70;
  undefined1 *local_68 [2];
  long local_58;
  undefined8 local_50;
  undefined8 *local_48;
  size_t local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_70 = 0x17bd;
  local_68[1] = (undefined1 *)param_5;
  local_50 = param_3;
  local_48 = param_6;
  lVar7 = _cczp_bitlen();
  sVar1 = (lVar7 + 7U >> 3) * 2 + 9;
  lVar7 = -(*param_1 << 5 | 0x10U);
  puVar11 = (undefined8 *)((long)local_68 + lVar7);
  local_68[0] = (undefined1 *)local_68;
  local_40 = sVar1;
  *(undefined8 *)((long)&uStack_70 + lVar7) = 0x17f1;
  ___bzero(puVar11);
  *(undefined8 *)((long)&uStack_70 + lVar7) = 1;
  uVar10 = *(ulong *)((long)&uStack_70 + lVar7);
  local_58 = param_2;
  if (((param_2 != 0) && (param_4 != 0)) && (local_48 != (undefined8 *)0x0)) {
    *puVar11 = param_1;
    puVar3 = local_68[1];
    *(undefined8 *)((long)&uStack_70 + lVar7) = 0x181e;
    iVar6 = _ccec_der_import_priv(param_1,puVar3,param_4,puVar11);
    *(undefined8 *)((long)&uStack_70 + lVar7) = 99;
    uVar10 = *(ulong *)((long)&uStack_70 + lVar7);
    if (iVar6 == 0) {
      uVar10 = uVar10 & 0xffffffff;
      *(undefined8 *)((long)&uStack_70 + lVar7) = 1;
      sVar2 = *(size_t *)((long)&uStack_70 + lVar7);
      *(undefined8 *)((long)&uStack_70 + lVar7) = 0x1833;
      pvVar8 = _calloc(sVar2,sVar1);
      if (pvVar8 != (void *)0x0) {
        *(undefined8 *)((long)&uStack_70 + lVar7) = 0x1840;
        uVar9 = _ccDRBGGetRngState();
        uVar5 = local_50;
        lVar4 = local_58;
        *(undefined8 *)((long)&uStack_70 + lVar7) = 0x185a;
        iVar6 = _ccec_sign(puVar11,uVar5,lVar4,&local_40,pvVar8,uVar9);
        if (iVar6 == 0) {
          *local_48 = pvVar8;
          *param_7 = local_40;
          uVar10 = 0;
        }
        else {
          *(undefined8 *)((long)&uStack_70 + lVar7) = 0x189f;
          _free(pvVar8);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)(local_68[0] + -8) = _AMSupportDigestInitContext;
    ___stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}

