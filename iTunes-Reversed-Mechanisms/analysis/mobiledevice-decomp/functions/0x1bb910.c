// rea decompile_all
// name: _SHA1ProcessMessageBlock
// address: 0x1bb910
// body: available
// range: 0x1bb910-0x1bbb11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bbb0d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SHA1ProcessMessageBlock(undefined1 (*param_1) [16])

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  uint auStack_1a8 [8];
  uint auStack_188 [5];
  uint uStack_174;
  code *pcStack_170;
  uint auStack_168 [82];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar1 = 0;
  do {
    auVar11 = pshufb(*(undefined1 (*) [16])(param_1[1] + lVar1 * 4 + 0xe),_DAT_0032b460);
    *(undefined1 (*) [16])(auStack_168 + lVar1) = auVar11;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  lVar1 = 0x10;
  do {
    uVar2 = auStack_188[lVar1] ^ (&uStack_174)[lVar1] ^ auStack_1a8[lVar1 + 2] ^ auStack_1a8[lVar1];
    auStack_168[lVar1] = uVar2 << 1 | (uint)((int)uVar2 < 0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x50);
  auVar11 = *param_1;
  uVar2 = *(uint *)param_1[1];
  lVar1 = 0;
  uVar9 = *(uint *)(*param_1 + 4);
  uVar10 = *(uint *)(*param_1 + 0xc);
  uVar5 = uVar2;
  uVar4 = *(uint *)*param_1;
  uVar3 = *(uint *)(*param_1 + 8);
  do {
    uVar8 = uVar3;
    uVar6 = uVar4;
    uVar7 = uVar10;
    uVar4 = ((uVar8 ^ uVar7) & uVar9 ^ uVar7) + (uVar6 << 5 | uVar6 >> 0x1b) + uVar5 +
            auStack_168[lVar1] + 0x5a827999;
    uVar3 = uVar9 << 0x1e | uVar9 >> 2;
    lVar1 = lVar1 + 1;
    uVar9 = uVar6;
    uVar10 = uVar8;
    uVar5 = uVar7;
  } while (lVar1 != 0x14);
  lVar1 = 0x14;
  do {
    uVar5 = uVar3;
    uVar10 = uVar8;
    uVar9 = uVar4;
    uVar4 = (uVar5 ^ uVar6 ^ uVar10) + (uVar9 << 5 | uVar9 >> 0x1b) + uVar7 + auStack_168[lVar1] +
            0x6ed9eba1;
    uVar3 = uVar6 << 0x1e | uVar6 >> 2;
    lVar1 = lVar1 + 1;
    uVar6 = uVar9;
    uVar8 = uVar5;
    uVar7 = uVar10;
  } while (lVar1 != 0x28);
  lVar1 = 0x28;
  do {
    uVar7 = uVar3;
    uVar8 = uVar5;
    uVar6 = uVar4;
    uVar4 = auStack_168[lVar1] +
            (uVar8 & uVar7 | (uVar8 | uVar7) & uVar9) + (uVar6 << 5 | uVar6 >> 0x1b) + uVar10 +
            0x8f1bbcdc;
    uVar3 = uVar9 << 0x1e | uVar9 >> 2;
    lVar1 = lVar1 + 1;
    uVar9 = uVar6;
    uVar10 = uVar8;
    uVar5 = uVar7;
  } while (lVar1 != 0x3c);
  lVar1 = 0x3c;
  do {
    uVar9 = uVar3;
    uVar5 = uVar7;
    uVar10 = uVar4;
    uVar4 = (uVar9 ^ uVar6 ^ uVar5) + (uVar10 << 5 | uVar10 >> 0x1b) + uVar8 + auStack_168[lVar1] +
            0xca62c1d6;
    uVar3 = uVar6 << 0x1e | uVar6 >> 2;
    lVar1 = lVar1 + 1;
    uVar6 = uVar10;
    uVar8 = uVar5;
    uVar7 = uVar9;
  } while (lVar1 != 0x50);
  *(uint *)*param_1 = uVar4 + auVar11._0_4_;
  *(uint *)(*param_1 + 4) = uVar10 + auVar11._4_4_;
  *(uint *)(*param_1 + 8) = uVar3 + auVar11._8_4_;
  *(uint *)(*param_1 + 0xc) = uVar9 + auVar11._12_4_;
  *(uint *)param_1[1] = uVar5 + uVar2;
  *(undefined2 *)(param_1[1] + 0xc) = 0;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pcStack_170 = _tss_submit;
  ___stack_chk_fail();
}

