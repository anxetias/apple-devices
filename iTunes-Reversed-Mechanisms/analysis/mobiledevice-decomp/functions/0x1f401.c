// rea decompile_all
// name: _sha1_compress
// address: 0x1f401
// body: available
// range: 0x1f401-0x1f8e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f8e2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _sha1_compress(undefined1 (*param_1) [16],long param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_178 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_178,0x140);
  while (param_2 != 0) {
    lVar2 = 0;
    do {
      uVar9 = *(uint *)(param_3 + lVar2);
      *(uint *)((long)local_178 + lVar2) =
           uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x40);
    uVar9 = *(uint *)*param_1;
    uVar10 = *(uint *)(*param_1 + 4);
    uVar6 = *(uint *)(*param_1 + 8);
    uVar4 = *(uint *)(*param_1 + 0xc);
    uVar7 = *(uint *)param_1[1];
    lVar2 = 0;
    do {
      uVar5 = local_178[lVar2 + 8] ^ local_178[lVar2 + 0xd] ^ local_178[lVar2 + 2] ^
              local_178[lVar2];
      local_178[lVar2 + 0x10] = uVar5 << 1 | uVar5 >> 0x1f;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x40);
    uVar3 = 0xfffffffffffffffb;
    do {
      uVar7 = (uVar9 << 5 | uVar9 >> 0x1b) + uVar7 + ((uVar6 ^ uVar4) & uVar10 ^ uVar4) +
              local_178[uVar3 + 5] + 0x5a827999;
      uVar10 = uVar10 << 0x1e | uVar10 >> 2;
      uVar4 = ((uVar10 ^ uVar6) & uVar9 ^ uVar6) + 0x5a827999 +
              (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar4 + local_178[uVar3 + 6];
      uVar9 = uVar9 << 0x1e | uVar9 >> 2;
      uVar6 = ((uVar9 ^ uVar10) & uVar7 ^ uVar10) + 0x5a827999 +
              (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar6 + local_178[uVar3 + 7];
      uVar7 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar10 = ((uVar7 ^ uVar9) & uVar4 ^ uVar9) + 0x5a827999 +
               (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar10 + local_178[uVar3 + 8];
      uVar4 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar9 = ((uVar4 ^ uVar7) & uVar6 ^ uVar7) + 0x5a827999 +
              (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar9 + local_178[uVar3 + 9];
      uVar6 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar3 = uVar3 + 5;
    } while (uVar3 < 0xf);
    param_2 = param_2 + -1;
    uVar3 = 0xf;
    do {
      uVar7 = (uVar9 << 5 | uVar9 >> 0x1b) + uVar7 + (uVar6 ^ uVar4 ^ uVar10) + local_178[uVar3 + 5]
              + 0x6ed9eba1;
      uVar10 = uVar10 << 0x1e | uVar10 >> 2;
      uVar4 = (uVar9 ^ uVar6 ^ uVar10) + uVar4 + (uVar7 * 0x20 | uVar7 >> 0x1b) +
              local_178[uVar3 + 6] + 0x6ed9eba1;
      uVar9 = uVar9 << 0x1e | uVar9 >> 2;
      uVar6 = (uVar10 ^ uVar9 ^ uVar7) + uVar6 + (uVar4 * 0x20 | uVar4 >> 0x1b) +
              local_178[uVar3 + 7] + 0x6ed9eba1;
      uVar7 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar10 = (uVar7 ^ uVar9 ^ uVar4) + uVar10 + (uVar6 * 0x20 | uVar6 >> 0x1b) +
               local_178[uVar3 + 8] + 0x6ed9eba1;
      uVar4 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar9 = (uVar4 ^ uVar7 ^ uVar6) + uVar9 + (uVar10 * 0x20 | uVar10 >> 0x1b) +
              local_178[uVar3 + 9] + 0x6ed9eba1;
      uVar6 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar3 = uVar3 + 5;
    } while (uVar3 < 0x23);
    uVar3 = 0x23;
    do {
      iVar8 = (uVar9 << 5 | uVar9 >> 0x1b) + uVar7 + ((uVar10 | uVar6) & uVar4 | uVar10 & uVar6) +
              local_178[uVar3 + 5];
      uVar7 = iVar8 + 0x8f1bbcdc;
      uVar10 = uVar10 << 0x1e | uVar10 >> 2;
      uVar4 = ((uVar9 | uVar10) & uVar6 | uVar10 & uVar9) + 0x8f1bbcdc +
              (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar4 + local_178[uVar3 + 6];
      uVar9 = uVar9 << 0x1e | uVar9 >> 2;
      uVar6 = ((uVar7 | uVar9) & uVar10 | uVar9 & uVar7) + 0x8f1bbcdc +
              (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar6 + local_178[uVar3 + 7];
      uVar7 = iVar8 * 0x40000000 | uVar7 >> 2;
      uVar10 = ((uVar4 | uVar7) & uVar9 | uVar4 & uVar7) + 0x8f1bbcdc +
               (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar10 + local_178[uVar3 + 8];
      uVar4 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar9 = ((uVar4 | uVar6) & uVar7 | uVar6 & uVar4) + 0x8f1bbcdc +
              (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar9 + local_178[uVar3 + 9];
      uVar6 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar3 = uVar3 + 5;
    } while (uVar3 < 0x37);
    uVar3 = 0x37;
    do {
      uVar7 = (uVar9 << 5 | uVar9 >> 0x1b) + uVar7 + (uVar6 ^ uVar4 ^ uVar10) + local_178[uVar3 + 5]
              + 0xca62c1d6;
      uVar10 = uVar10 << 0x1e | uVar10 >> 2;
      uVar4 = (uVar9 ^ uVar6 ^ uVar10) + uVar4 + (uVar7 * 0x20 | uVar7 >> 0x1b) +
              local_178[uVar3 + 6] + 0xca62c1d6;
      uVar9 = uVar9 << 0x1e | uVar9 >> 2;
      uVar6 = (uVar10 ^ uVar9 ^ uVar7) + uVar6 + (uVar4 * 0x20 | uVar4 >> 0x1b) +
              local_178[uVar3 + 7] + 0xca62c1d6;
      uVar7 = uVar7 * 0x40000000 | uVar7 >> 2;
      uVar10 = (uVar7 ^ uVar9 ^ uVar4) + uVar10 + (uVar6 * 0x20 | uVar6 >> 0x1b) +
               local_178[uVar3 + 8] + 0xca62c1d6;
      uVar4 = uVar4 * 0x40000000 | uVar4 >> 2;
      uVar9 = (uVar7 ^ uVar4 ^ uVar6) + uVar9 + (uVar10 * 0x20 | uVar10 >> 0x1b) +
              local_178[uVar3 + 9] + 0xca62c1d6;
      uVar6 = uVar6 * 0x40000000 | uVar6 >> 2;
      uVar3 = uVar3 + 5;
    } while (uVar3 < 0x4b);
    auVar1 = *param_1;
    *(uint *)*param_1 = uVar9 + auVar1._0_4_;
    *(uint *)(*param_1 + 4) = uVar10 + auVar1._4_4_;
    *(uint *)(*param_1 + 8) = uVar6 + auVar1._8_4_;
    *(uint *)(*param_1 + 0xc) = uVar4 + auVar1._12_4_;
    *(uint *)param_1[1] = *(int *)param_1[1] + uVar7;
    param_3 = param_3 + 0x40;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

