// rea decompile_all
// name: _AMSupportX509DecodeCertificate
// address: 0x2609a9
// body: available
// range: 0x2609a9-0x260b3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x260b3a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportX509DecodeCertificate(long param_1,long param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    ___bzero(param_1,0x120);
    *(long *)(param_1 + 0x100) = param_2;
    *(ulong *)(param_1 + 0x108) = (ulong)param_3;
    iVar2 = _DERParseSequence(param_1 + 0x100,3,&_DERSignedCertCrlItemSpecs,param_1,0x30);
    uVar3 = 0x13;
    if (iVar2 == 0) {
      iVar2 = _DERParseSequence(param_1,10,&_AMSupportX509DERTBSCertItemSpecs,param_1 + 0x30,0xa0);
      if (iVar2 == 0) {
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_59 = '\0';
        iVar2 = _DERParseSequence(param_1 + 0x90,2,&_DERSubjPubKeyInfoItemSpecs,&local_58,0x20);
        if (iVar2 == 0) {
          iVar2 = _DERParseSequenceContent
                            (&local_58,2,&_DERAlgorithmIdItemSpecs,param_1 + 0xe0,0x20);
          if (iVar2 == 0) {
            cVar1 = _DEROidCompare(param_1 + 0xe0,&_oidRsa);
            if ((cVar1 != '\0') &&
               ((*(long *)(param_1 + 0xf8) == 0 ||
                (((*(long *)(param_1 + 0xf8) == 2 && (**(char **)(param_1 + 0xf0) == '\x05')) &&
                 ((*(char **)(param_1 + 0xf0))[1] == '\0')))))) {
              iVar2 = _DERParseBitString(&local_48,param_1 + 0xd0,&local_59);
              if ((iVar2 == 0) && (local_59 == '\0')) {
                uVar3 = 0;
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

