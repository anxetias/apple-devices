// rea decompile_all
// name: __Img4DecodePayloadPropertyExistsWithValue
// address: 0x22294e
// body: available
// range: 0x22294e-0x222acd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x222ac9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __Img4DecodePayloadPropertyExistsWithValue
              (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_118 [3];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined1 local_d8 [96];
  long local_78 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar1 = 6;
  iVar3 = iVar1;
  if (param_1 != 0) {
    local_e0 = param_2;
    ___bzero(local_d8,0xa0);
    local_128 = 0;
    uStack_120 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    if (*(long *)(param_1 + 8) != 0) {
      local_100 = param_3;
      ___bzero(local_d8,0xa0);
      iVar3 = _DERImg4DecodePayloadWithProperties(param_1 + 8,local_d8);
      if ((((iVar3 == 0) && (iVar3 = iVar1, local_78[0] != 0)) &&
          (iVar3 = _DERImg4DecodeContentFindItemWithTag(local_78,0x2000000000000010,&local_128),
          iVar3 == 0)) &&
         (iVar3 = _DERImg4DecodeContentFindItemWithTag(&local_128,0x2000000000000011,&local_f8),
         uVar2 = local_100, iVar3 == 0)) {
        if (param_5 != 0) {
          iVar3 = _DERImg4DecodeContentFindItemWithTag(&local_f8,local_e0,local_118);
          if (iVar3 != 0) goto LAB_00222a9f;
          *(bool *)param_5 = local_118[0] != 0;
        }
        if ((param_4 == 0) ||
           (iVar3 = _DERImg4DecodeFindProperty(&local_f8,local_e0,uVar2,param_4), iVar3 == 0)) {
          iVar3 = 0;
        }
      }
    }
  }
LAB_00222a9f:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

