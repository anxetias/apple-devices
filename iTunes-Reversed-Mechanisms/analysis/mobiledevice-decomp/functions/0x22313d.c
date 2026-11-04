// rea decompile_all
// name: _verify_pkcs1_sig
// address: 0x22313d
// body: available
// range: 0x22313d-0x223358 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x223350 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_verify_pkcs1_sig(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  ulong *puVar13;
  ulong uVar14;
  long alStack_a0 [5];
  char *local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_5 != 0x1000) && (uVar10 = 0xffffffff, param_5 != 0xc00)) goto LAB_0022332a;
  local_48 = 0;
  uStack_40 = 0;
  uVar14 = param_5 + 0x3fU >> 6;
  lVar6 = -(uVar14 * 0x18 + 0x47 & 0xffffffffffffffe0);
  puVar13 = (ulong *)((long)alStack_a0 + lVar6 + 0x18);
  local_58 = param_2;
  local_50 = param_4;
  *(undefined8 *)((long)alStack_a0 + lVar6 + 0x10) = 0x2231c2;
  ___bzero(puVar13);
  *puVar13 = uVar14;
  alStack_a0[4] = (long)*(uint *)(param_1 + 1);
  alStack_a0[3] = *param_1;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  *(undefined8 *)((long)alStack_a0 + lVar6 + 0x10) = 0x22320e;
  iVar8 = _DERParseSequenceToObject
                    (alStack_a0 + 3,2,&_DERRSAPubKeyPKCS1ItemSpecs,&local_78,0x20,0x20);
  uVar7 = uStack_60;
  uVar10 = local_68;
  if (iVar8 == 0) {
    pcVar12 = local_78;
    if (uStack_70 != 0) {
      pcVar12 = local_78 + uStack_70;
      uVar14 = uStack_70;
      pcVar11 = local_78;
      do {
        if (*pcVar11 != '\0') goto LAB_00223248;
        if (pcVar11 == (char *)0xffffffffffffffff) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        pcVar11 = pcVar11 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    uVar14 = 0;
    pcVar11 = pcVar12;
LAB_00223248:
    if (0xfffffffffffffff7 < uVar14) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar9 = uVar14 + 7 >> 3;
    if (uVar9 <= *puVar13) {
      *puVar13 = uVar9;
      *(undefined8 *)((long)alStack_a0 + lVar6 + 0x10) = 0x22327e;
      iVar8 = _ccrsa_make_pub(puVar13,uVar7,uVar10,uVar14,pcVar11);
      uVar7 = local_58;
      uVar10 = 0xffffffff;
      if (iVar8 != 0) goto LAB_0022332a;
      if (PTR__CCRSA_PKCS1_FAULT_CANARY_00441018 == (undefined *)0x0 ||
          PTR_LAB_0001f31c_4_00441038 == (undefined *)0x0) {
        local_78 = (char *)((ulong)local_78 & 0xffffffffffffff00);
        uVar1 = *param_3;
        uVar2 = param_3[1];
        uVar3 = *local_50;
        uVar4 = local_50[1];
        *(char ***)((long)alStack_a0 + lVar6 + 8) = &local_78;
        *(undefined8 *)((long)alStack_a0 + lVar6) = 0x2232cd;
        iVar8 = _ccrsa_verify_pkcs1v15(puVar13,uVar7,uVar2,uVar1,uVar4,uVar3);
        if ((iVar8 != 0) || (((ulong)local_78 & 1) == 0)) goto LAB_0022332a;
      }
      else {
        uVar1 = *param_3;
        uVar2 = param_3[1];
        uVar3 = *local_50;
        uVar4 = local_50[1];
        *(undefined8 **)((long)alStack_a0 + lVar6 + 8) = &local_48;
        *(undefined8 *)((long)alStack_a0 + lVar6) = 0x223304;
        iVar8 = _ccrsa_verify_pkcs1v15_digest(puVar13,uVar7,uVar2,uVar1,uVar4,uVar3);
        if (iVar8 != 0) goto LAB_0022332a;
        *(undefined8 *)((long)alStack_a0 + lVar6 + 0x10) = 0x223321;
        iVar8 = _cc_cmp_safe(0x10,&_CCRSA_PKCS1_FAULT_CANARY,&local_48);
        if (iVar8 != 0) goto LAB_0022332a;
      }
      uVar10 = 0;
      goto LAB_0022332a;
    }
  }
  uVar10 = 0xffffffff;
LAB_0022332a:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    alStack_a0[2] = 0x223355;
    ___stack_chk_fail();
  }
  return uVar10;
}

