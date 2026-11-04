// rea decompile_all
// name: __AMSupportX509DecodeRsaVerifySignatureDataWithOid
// address: 0x1b1d
// body: available
// range: 0x1b1d-0x1c35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1c31 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMSupportX509DecodeRsaVerifySignatureDataWithOid
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_60 = (ulong)param_8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_68 = param_7;
  cVar1 = _DEROidCompare(&local_68,&_oidSha1Rsa);
  if (cVar1 == '\0') {
    cVar1 = _DEROidCompare(&local_68,&_oidSha256Rsa);
    uVar3 = 0xd;
    if (cVar1 == '\0') goto LAB_00001c0b;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    iVar2 = _AMSupportDigestSha256(param_5,param_6);
    if (iVar2 == 0) {
      iVar2 = _AMSupportRsaVerifySignatureSha256(param_1,param_2,param_3,param_4,&local_58,0x20);
      goto LAB_00001c05;
    }
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = local_48 & 0xffffffff00000000;
    iVar2 = _AMSupportDigestSha1(param_5,param_6);
    if (iVar2 == 0) {
      iVar2 = _AMSupportRsaVerifySignatureSha1(param_1,param_2,param_3,param_4,&local_58,0x14);
LAB_00001c05:
      if (iVar2 == 0) {
        uVar3 = 0;
        goto LAB_00001c0b;
      }
    }
  }
  uVar3 = 6;
LAB_00001c0b:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

