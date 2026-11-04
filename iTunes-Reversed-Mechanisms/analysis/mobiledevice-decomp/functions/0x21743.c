// rea decompile_all
// name: _ccsha512_ltc_compress
// address: 0x21743
// body: available
// range: 0x21743-0x21c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21c83 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccsha512_ltc_compress(ulong *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong local_2f8 [80];
  ulong local_78 [9];
  
  local_78[8] = *(ulong *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_2f8,0x280);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_78[6] = param_1[6];
    local_78[7] = param_1[7];
    local_78[4] = param_1[4];
    local_78[5] = param_1[5];
    local_78[2] = param_1[2];
    local_78[3] = param_1[3];
    local_78[0] = *param_1;
    local_78[1] = param_1[1];
    lVar2 = 0;
    do {
      uVar3 = *(ulong *)(param_3 + lVar2);
      *(ulong *)((long)local_2f8 + lVar2) =
           uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
           (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
           (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x80);
    lVar2 = 0;
    do {
      uVar3 = local_2f8[lVar2 + 1];
      uVar1 = local_2f8[lVar2 + 0xe];
      local_2f8[lVar2 + 0x10] =
           (uVar1 >> 6 ^ (uVar1 >> 0x13 | uVar1 << 0x2d) ^ (uVar1 >> 0x3d | uVar1 << 3)) +
           local_2f8[lVar2 + 9] + local_2f8[lVar2] +
           (uVar3 >> 7 ^ (uVar3 >> 1 | (ulong)((uVar3 & 1) != 0) << 0x3f) ^
           (uVar3 >> 8 | uVar3 << 0x38));
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x40);
    uVar3 = 0xfffffffffffffff8;
    do {
      lVar2 = ((local_78[4] >> 0x29 | local_78[4] << 0x17) ^
              (local_78[4] >> 0x12 | local_78[4] << 0x2e) ^
              (local_78[4] >> 0xe | local_78[4] << 0x32)) + local_78[7] + (&DAT_002b1b50)[uVar3] +
              local_2f8[uVar3 + 8] + ((local_78[5] ^ local_78[6]) & local_78[4] ^ local_78[6]);
      local_78[3] = local_78[3] + lVar2;
      local_78[7] = (local_78[1] & local_78[0] | (local_78[1] | local_78[0]) & local_78[2]) +
                    ((local_78[0] >> 0x27 | local_78[0] << 0x19) ^
                    (local_78[0] >> 0x22 | local_78[0] << 0x1e) ^
                    (local_78[0] >> 0x1c | local_78[0] << 0x24)) + lVar2;
      lVar2 = ((local_78[5] ^ local_78[4]) & local_78[3] ^ local_78[5]) + local_78[6] +
              ((local_78[3] >> 0x29 | local_78[3] * 0x800000) ^
              (local_78[3] >> 0x12 | local_78[3] << 0x2e) ^
              (local_78[3] >> 0xe | local_78[3] << 0x32)) + *(long *)(&UNK_002b1b58 + uVar3 * 8) +
              local_2f8[uVar3 + 9];
      local_78[2] = local_78[2] + lVar2;
      local_78[6] = (local_78[7] & local_78[0] | (local_78[7] | local_78[0]) & local_78[1]) +
                    ((local_78[7] >> 0x27 | local_78[7] * 0x2000000) ^
                    (local_78[7] >> 0x22 | local_78[7] * 0x40000000) ^
                    (local_78[7] >> 0x1c | local_78[7] << 0x24)) + lVar2;
      lVar4 = ((local_78[3] ^ local_78[4]) & local_78[2] ^ local_78[4]) + local_78[5] +
              ((local_78[2] >> 0x29 | local_78[2] * 0x800000) ^
              (local_78[2] >> 0x12 | local_78[2] << 0x2e) ^
              (local_78[2] >> 0xe | local_78[2] << 0x32)) + *(long *)(&UNK_002b1b60 + uVar3 * 8) +
              local_2f8[uVar3 + 10];
      local_78[1] = local_78[1] + lVar4;
      lVar2 = ((local_78[2] ^ local_78[3]) & local_78[1] ^ local_78[3]) + local_78[4] +
              ((local_78[1] >> 0x29 | local_78[1] * 0x800000) ^
              (local_78[1] >> 0x12 | local_78[1] << 0x2e) ^
              (local_78[1] >> 0xe | local_78[1] << 0x32)) + *(long *)(&UNK_002b1b68 + uVar3 * 8) +
              local_2f8[uVar3 + 0xb];
      local_78[5] = (local_78[6] & local_78[7] | (local_78[6] | local_78[7]) & local_78[0]) +
                    ((local_78[6] >> 0x27 | local_78[6] * 0x2000000) ^
                    (local_78[6] >> 0x22 | local_78[6] * 0x40000000) ^
                    (local_78[6] >> 0x1c | local_78[6] << 0x24)) + lVar4;
      local_78[0] = local_78[0] + lVar2;
      local_78[4] = (local_78[5] & local_78[6] | (local_78[5] | local_78[6]) & local_78[7]) +
                    ((local_78[5] >> 0x27 | local_78[5] * 0x2000000) ^
                    (local_78[5] >> 0x22 | local_78[5] * 0x40000000) ^
                    (local_78[5] >> 0x1c | local_78[5] << 0x24)) + lVar2;
      lVar2 = ((local_78[1] ^ local_78[2]) & local_78[0] ^ local_78[2]) + local_78[3] +
              ((local_78[0] >> 0x29 | local_78[0] * 0x800000) ^
              (local_78[0] >> 0x12 | local_78[0] << 0x2e) ^
              (local_78[0] >> 0xe | local_78[0] << 0x32)) + *(long *)(&UNK_002b1b70 + uVar3 * 8) +
              local_2f8[uVar3 + 0xc];
      local_78[7] = local_78[7] + lVar2;
      local_78[3] = (local_78[4] & local_78[5] | (local_78[4] | local_78[5]) & local_78[6]) +
                    ((local_78[4] >> 0x27 | local_78[4] * 0x2000000) ^
                    (local_78[4] >> 0x22 | local_78[4] * 0x40000000) ^
                    (local_78[4] >> 0x1c | local_78[4] << 0x24)) + lVar2;
      lVar2 = ((local_78[0] ^ local_78[1]) & local_78[7] ^ local_78[1]) + local_78[2] +
              ((local_78[7] >> 0x29 | local_78[7] * 0x800000) ^
              (local_78[7] >> 0x12 | local_78[7] << 0x2e) ^
              (local_78[7] >> 0xe | local_78[7] << 0x32)) + *(long *)(&UNK_002b1b78 + uVar3 * 8) +
              local_2f8[uVar3 + 0xd];
      local_78[6] = local_78[6] + lVar2;
      local_78[2] = (local_78[3] & local_78[4] | (local_78[3] | local_78[4]) & local_78[5]) +
                    ((local_78[3] >> 0x27 | local_78[3] * 0x2000000) ^
                    (local_78[3] >> 0x22 | local_78[3] * 0x40000000) ^
                    (local_78[3] >> 0x1c | local_78[3] << 0x24)) + lVar2;
      lVar4 = ((local_78[7] ^ local_78[0]) & local_78[6] ^ local_78[0]) + local_78[1] +
              ((local_78[6] >> 0x29 | local_78[6] * 0x800000) ^
              (local_78[6] >> 0x12 | local_78[6] << 0x2e) ^
              (local_78[6] >> 0xe | local_78[6] << 0x32)) + *(long *)(&UNK_002b1b80 + uVar3 * 8) +
              local_2f8[uVar3 + 0xe];
      local_78[5] = local_78[5] + lVar4;
      lVar2 = ((local_78[6] ^ local_78[7]) & local_78[5] ^ local_78[7]) + local_78[0] +
              ((local_78[5] >> 0x29 | local_78[5] * 0x800000) ^
              (local_78[5] >> 0x12 | local_78[5] << 0x2e) ^
              (local_78[5] >> 0xe | local_78[5] << 0x32)) + *(long *)(&UNK_002b1b88 + uVar3 * 8) +
              local_2f8[uVar3 + 0xf];
      local_78[1] = (local_78[2] & local_78[3] | (local_78[2] | local_78[3]) & local_78[4]) +
                    ((local_78[2] >> 0x27 | local_78[2] * 0x2000000) ^
                    (local_78[2] >> 0x22 | local_78[2] * 0x40000000) ^
                    (local_78[2] >> 0x1c | local_78[2] << 0x24)) + lVar4;
      local_78[4] = local_78[4] + lVar2;
      local_78[0] = (local_78[1] & local_78[2] | (local_78[1] | local_78[2]) & local_78[3]) +
                    ((local_78[1] >> 0x27 | local_78[1] * 0x2000000) ^
                    (local_78[1] >> 0x22 | local_78[1] * 0x40000000) ^
                    (local_78[1] >> 0x1c | local_78[1] << 0x24)) + lVar2;
      uVar3 = uVar3 + 8;
    } while (uVar3 < 0x48);
    lVar2 = 0;
    do {
      uVar3 = (param_1 + lVar2)[1];
      uVar1 = local_78[lVar2 + 1];
      param_1[lVar2] = param_1[lVar2] + local_78[lVar2];
      (param_1 + lVar2)[1] = uVar3 + uVar1;
      lVar2 = lVar2 + 2;
    } while (lVar2 != 8);
    param_3 = param_3 + 0x80;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_78[8]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

