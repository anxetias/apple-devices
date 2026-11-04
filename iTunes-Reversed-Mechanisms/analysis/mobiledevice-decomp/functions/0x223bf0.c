// rea decompile_all
// name: _verify_chain_signatures
// address: 0x223bf0
// body: available
// range: 0x223bf0-0x223daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x223da6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _verify_chain_signatures(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  if (((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (long *)0x0)
     ) {
    local_88 = (char *)0x0;
    lStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_59 = '\0';
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_78 = 0;
    uStack_70 = 0;
    puVar1 = (ulong *)param_3[4];
    if (((puVar1 != (ulong *)0x0) && (puVar1[2] != 0)) &&
       ((*param_3 != 0 && ((param_3[5] != 0 && (*puVar1 < 0x31)))))) {
      iVar4 = _DERParseSequenceContentToObject
                        (param_2 + 2,2,&_DERAlgorithmIdItemSpecs,&local_98,0x20,0x20);
      if (iVar4 == 0) {
        if (lStack_80 != 0) {
          cVar3 = _DEROidCompare(&local_98,&_oidEcPubKey);
          if (cVar3 == '\0') {
            if ((lStack_80 == 2) && (*local_88 == '\x05')) {
              if (local_88 == (char *)0xffffffffffffffff) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (local_88[1] == '\0') goto LAB_00223d07;
            }
            goto LAB_00223d9f;
          }
        }
LAB_00223d07:
        cVar3 = _DEROidCompare(&local_98,param_3[5]);
        if (cVar3 != '\0') {
          iVar4 = (*(code *)*param_3)(*param_2,param_2[1],&local_58,*(undefined8 *)param_3[4],
                                      param_3);
          if (iVar4 == 0) {
            iVar4 = _DERParseBitString(param_2 + 4,&local_78,&local_59);
            if ((iVar4 == 0) && (local_59 == '\0')) {
              iVar4 = (*(code *)param_3[2])
                                (*param_1,param_1[1],local_78,uStack_70,&local_58,
                                 *(undefined8 *)param_3[4],param_3,0);
              uVar5 = 0;
              if (iVar4 == 0) goto LAB_00223d84;
            }
          }
        }
      }
    }
  }
LAB_00223d9f:
  uVar5 = 0xffffffff;
LAB_00223d84:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

