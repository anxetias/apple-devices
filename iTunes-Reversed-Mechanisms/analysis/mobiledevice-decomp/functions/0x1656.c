// rea decompile_all
// name: _AMSupportEcDsaVerifySignature
// address: 0x1656
// body: available
// range: 0x1656-0x1783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x177f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4
_AMSupportEcDsaVerifySignature
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 ***pppuVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 ***pppuVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 ***apppuStack_60 [3];
  long local_48;
  char local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_39 = '\0';
  apppuStack_60[0] = (undefined1 ***)0x168e;
  local_48 = param_5;
  uVar5 = _ccec_x963_import_pub_size(param_2);
  apppuStack_60[0] = (undefined1 ***)0x1699;
  iVar4 = _ccec_keysize_is_supported(uVar5);
  if (iVar4 == 0) {
    pppuVar7 = (undefined1 ***)(apppuStack_60 + 1);
    uVar9 = 0xd;
  }
  else {
    apppuStack_60[0] = (undefined1 ***)0x16ad;
    apppuStack_60[2] = (undefined1 ***)param_6;
    plVar6 = (long *)_ccec_get_cp(uVar5);
    lVar1 = -(*plVar6 * 0x18 + 0x1fU & 0xfffffffffffffff0);
    puVar8 = (undefined8 *)((long)apppuStack_60 + lVar1 + 8U);
    apppuStack_60[1] = (undefined1 ***)(apppuStack_60 + 1);
    *(undefined8 *)((long)apppuStack_60 + lVar1) = 0x16d8;
    ___bzero(puVar8);
    *puVar8 = plVar6;
    uVar9 = 1;
    pppuVar7 = apppuStack_60[1];
    if (((param_1 != 0) && (local_48 != 0)) && (param_7 != 0)) {
      *(undefined8 *)((long)apppuStack_60 + lVar1) = 0x1705;
      iVar4 = _ccec_import_pub(plVar6,param_2,param_1,puVar8);
      lVar3 = local_48;
      pppuVar2 = apppuStack_60[2];
      pppuVar7 = apppuStack_60[1];
      uVar9 = 2;
      if (iVar4 != -0xd) {
        if (iVar4 == 0) {
          *(undefined8 *)((long)apppuStack_60 + lVar1) = 0x1730;
          iVar4 = _ccec_verify(puVar8,param_8,param_7,pppuVar2,lVar3,&local_39);
          pppuVar7 = apppuStack_60[1];
          if (iVar4 == -0xd) goto LAB_00001755;
          if (iVar4 == 0) {
            uVar9 = 6;
            if (local_39 != '\0') {
              uVar9 = 0;
            }
            goto LAB_00001755;
          }
        }
        uVar9 = 6;
        pppuVar7 = apppuStack_60[1];
      }
    }
  }
LAB_00001755:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    pppuVar7[0xffffffffffffffff] = (undefined1 **)_AMSupportEcDsaCreateSignatureWithCp;
    ___stack_chk_fail();
  }
  return uVar9;
}

