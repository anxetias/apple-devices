// rea decompile_all
// name: _verify_pkcs1_sig
// address: 0x1c4c
// body: available
// range: 0x1c4c-0x1e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e37 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_verify_pkcs1_sig(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *local_6c8;
  undefined1 *local_6c0;
  ulong local_6b8;
  long lStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  ulong local_690;
  ulong local_688 [200];
  ulong local_48 [3];
  
  local_6c0 = (undefined1 *)&local_6c8;
  local_48[2] = *(ulong *)PTR____stack_chk_guard_004412b8;
  local_48[0] = 0;
  local_48[1] = 0;
  ___bzero(local_688,0x640);
  local_688[0] = 0x40;
  local_690 = (ulong)*(uint *)(param_1 + 1);
  local_698 = *param_1;
  local_6a8 = 0;
  uStack_6a0 = 0;
  local_6b8 = 0;
  lStack_6b0 = 0;
  iVar1 = _DERParseSequence(&local_698,2,&_DERRSAPubKeyPKCS1ItemSpecs,&local_6b8,0x20);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (lStack_6b0 == 0) {
      lVar4 = 0;
      uVar6 = local_6b8;
    }
    else {
      lVar5 = 0;
      do {
        if (*(char *)(local_6b8 + lVar5) != '\0') {
          lVar4 = lStack_6b0 - lVar5;
          uVar2 = lVar4 + 7;
          if (0x207 < uVar2) goto LAB_00001d44;
          uVar6 = local_6b8 + lVar5;
          goto LAB_00001d4f;
        }
        lVar5 = lVar5 + 1;
      } while (lStack_6b0 != lVar5);
      lVar4 = 0;
      uVar6 = local_6b8 + lStack_6b0;
    }
LAB_00001d4f:
    local_688[0] = uVar2 >> 3;
    uVar3 = _ccrsa_make_pub(local_688,uStack_6a0,local_6a8,lVar4,uVar6);
    if ((int)uVar3 == 0) {
      if (PTR__CCRSA_PKCS1_FAULT_CANARY_00441018 == (undefined *)0x0 ||
          PTR_LAB_0001f31c_4_00441038 == (undefined *)0x0) {
        local_6b8 = local_6b8 & 0xffffffffffffff00;
        local_6c8 = &local_6b8;
        uVar3 = _ccrsa_verify_pkcs1v15(local_688,param_2,param_3[1],*param_3,param_4[1],*param_4);
        if (((int)uVar3 != 0) || ((local_6b8 & 1) == 0)) goto LAB_00001e12;
      }
      else {
        local_6c8 = local_48;
        uVar3 = _ccrsa_verify_pkcs1v15_digest
                          (local_688,param_2,param_3[1],*param_3,param_4[1],*param_4);
        if ((int)uVar3 != 0) goto LAB_00001e12;
        _cc_cmp_safe(0x10,&_CCRSA_PKCS1_FAULT_CANARY,local_48);
      }
      uVar3 = 0;
    }
  }
  else {
LAB_00001d44:
    uVar3 = 0xffffffffffffffff;
  }
LAB_00001e12:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_48[2]) {
                    /* WARNING: Subroutine does not return */
    *(code **)(local_6c0 + -8) = _AMSupportX509CreateDerCertFromPEM;
    ___stack_chk_fail();
  }
  return uVar3;
}

