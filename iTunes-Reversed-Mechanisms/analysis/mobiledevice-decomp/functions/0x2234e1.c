// rea decompile_all
// name: _verify_ecdsa_sig
// address: 0x2234e1
// body: available
// range: 0x2234e1-0x223625 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22361f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int _verify_ecdsa_sig(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuStack_60;
  undefined8 *apuStack_58 [3];
  byte local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_39 = 0;
  ppuStack_60 = (undefined8 **)0x223516;
  uVar9 = _ccec_x963_import_pub_size(param_1[1]);
  ppuStack_60 = (undefined8 **)0x223521;
  iVar7 = _ccec_keysize_is_supported(uVar9);
  if (iVar7 == 0) {
    iVar7 = -1;
    puVar12 = apuStack_58;
  }
  else {
    ppuStack_60 = (undefined8 **)0x223531;
    puVar10 = (ulong *)_ccec_get_cp(uVar9);
    if ((*puVar10 >> 0x3d != 0) ||
       (auVar4._8_8_ = 0, auVar4._0_8_ = *puVar10 << 3, uVar11 = SUB168(auVar4 * ZEXT816(3),0),
       SUB168(auVar4 * ZEXT816(3),8) != 0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    apuStack_58[2] = param_3;
    if ((0xffffffffffffffef < uVar11) || (0xffffffffffffffef < uVar11 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar6 = -(uVar11 + 0x1f & 0xfffffffffffffff0);
    puVar13 = (undefined8 *)((long)apuStack_58 + lVar6);
    apuStack_58[1] = apuStack_58;
    *(undefined8 *)((long)&ppuStack_60 + lVar6) = 0x223590;
    ___bzero(puVar13);
    if (uVar11 + 0x1f < 0x10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *puVar13 = puVar10;
    uVar9 = *param_1;
    uVar1 = param_1[1];
    *(undefined8 *)((long)&ppuStack_60 + lVar6) = 0x2235b0;
    iVar8 = _ccec_import_pub(puVar10,uVar1,uVar9,puVar13);
    iVar7 = -1;
    puVar12 = apuStack_58[1];
    if (iVar8 == 0) {
      uVar9 = *param_2;
      uVar1 = param_2[1];
      uVar2 = *apuStack_58[2];
      uVar3 = apuStack_58[2][1];
      *(undefined8 *)((long)&ppuStack_60 + lVar6) = 0x2235d8;
      iVar8 = _ccec_verify(puVar13,uVar1,uVar9,uVar3,uVar2,&local_39);
      puVar12 = apuStack_58[1];
      if (iVar8 == 0) {
        iVar7 = -(local_39 ^ 1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)puVar12 + 0xfffffffffffffff8) = 0x223624;
    ___stack_chk_fail();
  }
  return iVar7;
}

