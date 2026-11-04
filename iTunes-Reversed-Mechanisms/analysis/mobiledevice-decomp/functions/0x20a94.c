// rea decompile_all
// name: _ccsha256_ltc_compress
// address: 0x20a94
// body: available
// range: 0x20a94-0x20fc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20fc1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccsha256_ltc_compress(uint *param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint auStack_178 [6];
  code *pcStack_160;
  int iStack_154;
  long local_150;
  long local_148;
  uint *local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  while (lVar2 = param_3, param_2 != 0) {
    lVar4 = 0;
    do {
      uVar12 = *(uint *)(lVar2 + lVar4);
      *(uint *)(local_138 + lVar4) =
           uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x40);
    param_2 = param_2 + -1;
    lVar4 = 0x10;
    do {
      uVar12 = *(uint *)(local_138 + lVar4 * 4 + -8);
      uVar14 = auStack_178[lVar4 + 1];
      *(uint *)(local_138 + lVar4 * 4) =
           (uVar12 >> 10 ^ (uVar12 >> 0x11 | uVar12 << 0xf) ^ (uVar12 >> 0x13 | uVar12 << 0xd)) +
           (&iStack_154)[lVar4] + auStack_178[lVar4] +
           (uVar14 >> 3 ^ (uVar14 >> 7 | uVar14 << 0x19) ^ (uVar14 >> 0x12 | uVar14 << 0xe));
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40);
    uVar12 = *param_1;
    uVar14 = param_1[1];
    uVar13 = param_1[2];
    uVar10 = param_1[3];
    uVar9 = param_1[4];
    uVar8 = param_1[5];
    uVar7 = param_1[6];
    uVar3 = param_1[7];
    uVar5 = 0xfffffffffffffff8;
    do {
      iVar6 = ((uVar8 ^ uVar7) & uVar9 ^ uVar7) + uVar3 +
              ((uVar9 >> 0x19 | uVar9 << 7) ^
              (uVar9 >> 0xb | uVar9 << 0x15) ^ (uVar9 >> 6 | uVar9 << 0x1a)) +
              (&DAT_002b1e70)[uVar5] + *(int *)(local_118 + uVar5 * 4);
      uVar10 = uVar10 + iVar6;
      uVar3 = (uVar12 & uVar14 | (uVar12 | uVar14) & uVar13) +
              ((uVar12 >> 0x16 | uVar12 << 10) ^
              (uVar12 >> 0xd | uVar12 << 0x13) ^ (uVar12 >> 2 | uVar12 << 0x1e)) + iVar6;
      iVar6 = ((uVar9 ^ uVar8) & uVar10 ^ uVar8) + uVar7 +
              ((uVar10 >> 0x19 | uVar10 * 0x80) ^
              (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
              *(int *)(&UNK_002b1e74 + uVar5 * 4) + *(int *)(local_118 + uVar5 * 4 + 4);
      uVar13 = uVar13 + iVar6;
      uVar7 = (uVar3 & uVar12 | (uVar3 | uVar12) & uVar14) +
              ((uVar3 >> 0x16 | uVar3 * 0x400) ^
              (uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000)) + iVar6;
      iVar6 = ((uVar10 ^ uVar9) & uVar13 ^ uVar9) + uVar8 +
              ((uVar13 >> 0x19 | uVar13 * 0x80) ^
              (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000)) +
              *(int *)(&UNK_002b1e78 + uVar5 * 4) + *(int *)(local_118 + uVar5 * 4 + 8);
      uVar14 = uVar14 + iVar6;
      iVar11 = ((uVar13 ^ uVar10) & uVar14 ^ uVar10) + uVar9 +
               ((uVar14 >> 0x19 | uVar14 * 0x80) ^
               (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
               *(int *)(&UNK_002b1e7c + uVar5 * 4) + *(int *)(local_118 + uVar5 * 4 + 0xc);
      uVar8 = (uVar7 & uVar3 | (uVar7 | uVar3) & uVar12) +
              ((uVar7 >> 0x16 | uVar7 * 0x400) ^
              (uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000)) + iVar6;
      uVar12 = uVar12 + iVar11;
      uVar9 = (uVar8 & uVar7 | (uVar8 | uVar7) & uVar3) +
              ((uVar8 >> 0x16 | uVar8 * 0x400) ^
              (uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000)) + iVar11;
      iVar6 = ((uVar14 ^ uVar13) & uVar12 ^ uVar13) + uVar10 +
              ((uVar12 >> 0x19 | uVar12 * 0x80) ^
              (uVar12 >> 0xb | uVar12 * 0x200000) ^ (uVar12 >> 6 | uVar12 * 0x4000000)) +
              *(int *)(&UNK_002b1e80 + uVar5 * 4) + *(int *)(local_108 + uVar5 * 4);
      uVar10 = (uVar9 & uVar8 | (uVar9 | uVar8) & uVar7) +
               ((uVar9 >> 0x16 | uVar9 * 0x400) ^
               (uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000)) + iVar6;
      uVar3 = iVar6 + uVar3;
      iVar6 = ((uVar12 ^ uVar14) & uVar3 ^ uVar14) + uVar13 +
              ((uVar3 >> 0x19 | uVar3 * 0x80) ^
              (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
              *(int *)(&UNK_002b1e84 + uVar5 * 4) + *(int *)(local_108 + uVar5 * 4 + 4);
      uVar7 = uVar7 + iVar6;
      uVar13 = ((uVar10 >> 0x16 | uVar10 * 0x400) ^
               (uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000)) +
               (uVar10 & uVar9 | (uVar10 | uVar9) & uVar8) + iVar6;
      iVar6 = ((uVar7 >> 0x19 | uVar7 * 0x80) ^
              (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
              ((uVar3 ^ uVar12) & uVar7 ^ uVar12) + uVar14 + *(int *)(&UNK_002b1e88 + uVar5 * 4) +
              *(int *)(local_108 + uVar5 * 4 + 8);
      uVar8 = uVar8 + iVar6;
      iVar11 = ((uVar7 ^ uVar3) & uVar8 ^ uVar3) + uVar12 +
               ((uVar8 >> 0x19 | uVar8 * 0x80) ^
               (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
               *(int *)(&UNK_002b1e8c + uVar5 * 4) + *(int *)(local_108 + uVar5 * 4 + 0xc);
      uVar14 = (uVar13 & uVar10 | (uVar13 | uVar10) & uVar9) +
               ((uVar13 >> 0x16 | uVar13 * 0x400) ^
               (uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 >> 2 | uVar13 * 0x40000000)) + iVar6;
      uVar9 = uVar9 + iVar11;
      uVar12 = (uVar14 & uVar13 | (uVar14 | uVar13) & uVar10) +
               ((uVar14 >> 0x16 | uVar14 * 0x400) ^
               (uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000)) + iVar11;
      uVar5 = uVar5 + 8;
    } while (uVar5 < 0x38);
    auVar1 = *(undefined1 (*) [16])(param_1 + 4);
    *param_1 = *param_1 + uVar12;
    param_1[1] = param_1[1] + uVar14;
    param_1[2] = param_1[2] + uVar13;
    param_1[3] = param_1[3] + uVar10;
    param_1[4] = uVar9 + auVar1._0_4_;
    param_1[5] = uVar8 + auVar1._4_4_;
    param_1[6] = uVar7 + auVar1._8_4_;
    param_1[7] = uVar3 + auVar1._12_4_;
    param_3 = lVar2 + 0x40;
    local_140 = param_1;
    local_148 = lVar2;
    local_150 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pcStack_160 = _cczp_mm_redc_ws;
  ___stack_chk_fail();
}

