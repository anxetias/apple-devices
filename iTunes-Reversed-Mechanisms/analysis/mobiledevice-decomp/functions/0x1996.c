// rea decompile_all
// name: _AMSupportX509DecodeVerifyCertIssuer
// address: 0x1996
// body: available
// range: 0x1996-0x1b1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b18 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportX509DecodeVerifyCertIssuer(undefined8 *param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 local_68;
  ulong uStack_60;
  char local_49;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if (*(size_t *)(param_2 + 0x88) == param_1[0xd]) {
    iVar1 = _memcmp(*(void **)(param_2 + 0x80),(void *)param_1[0xc],*(size_t *)(param_2 + 0x88));
    if (iVar1 != 0) goto LAB_000019d6;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_49 = '\0';
    local_68 = 0;
    uStack_60 = 0;
    iVar1 = _DERParseSequenceContent(param_1 + 2,2,&_DERAlgorithmIdItemSpecs,&local_48,0x20);
    if (iVar1 != 0) {
      pcVar2 = "decodeAlgId failed";
LAB_00001a97:
      _AMSupportLogInternal(3,"AMSupportX509DecodeVerifyCertIssuer",pcVar2);
      uVar3 = 0x13;
      goto LAB_000019f5;
    }
    iVar1 = _DERParseBitString(param_1 + 4,&local_68,&local_49);
    if (iVar1 != 0) {
      pcVar2 = "DERParseBitString(sig) failed";
      goto LAB_00001a97;
    }
    if (local_49 != '\0') {
      pcVar2 = "numUnused != 0";
      goto LAB_00001a97;
    }
    iVar1 = __AMSupportX509DecodeRsaVerifySignatureDataWithOid
                      (*(undefined8 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd8),local_68,
                       uStack_60 & 0xffffffff,*param_1,*(undefined4 *)(param_1 + 1),local_48,
                       uStack_40 & 0xffffffff);
    if (iVar1 == 0) {
      uVar3 = 0;
      _AMSupportLogInternal
                (7,"AMSupportX509DecodeVerifyCertIssuer",
                 "PKI: verify cert was issued and signed by issuer (success)");
      goto LAB_000019f5;
    }
    _AMSupportLogInternal
              (3,"AMSupportX509DecodeVerifyCertIssuer",
               "PKI: cert signature validation with issuer pubkey failed amstatus=%d",iVar1);
  }
  else {
LAB_000019d6:
    _AMSupportLogInternal
              (3,"AMSupportX509DecodeVerifyCertIssuer",
               "PKI: cert was not issued by issuer (subject != issuer)");
  }
  uVar3 = 0x12;
LAB_000019f5:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

