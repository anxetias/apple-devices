// rea decompile_all
// name: _emitMatch
// address: 0x59a78
// body: available
// range: 0x59a78-0x59cfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _emitMatch(long *param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  long in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  
  pbVar13 = (byte *)param_1[6];
  uVar9 = param_1[0xf];
  puVar14 = (undefined4 *)(param_1[5] + *param_1);
  pbVar2 = (byte *)param_1[8];
  for (uVar12 = in_stack_00000008 - param_1[5]; pbVar6 = pbVar2, 0xf < uVar12;
      uVar12 = uVar12 - uVar8) {
    uVar8 = 0x10f;
    if (uVar12 < 0x10f) {
      uVar8 = uVar12;
    }
    if (pbVar2 <= pbVar13 + uVar8 + 10) goto LAB_00059c38;
    *(short *)pbVar13 = (short)((int)uVar8 << 8) + -0xf20;
    _memcpy(pbVar13 + 2,puVar14,(uVar8 - 1 & 0xfffffffffffffff8) + 8);
    pbVar13 = pbVar13 + uVar8 + 2;
    puVar14 = (undefined4 *)((long)puVar14 + uVar8);
  }
  if (3 < uVar12) {
    if (pbVar2 <= pbVar13 + uVar12 + 10) goto LAB_00059c38;
    *pbVar13 = (byte)uVar12 | 0xe0;
    _memcpy(pbVar13 + 1,puVar14,(uVar12 - 1 & 0xfffffffffffffff8) + 8);
    pbVar13 = pbVar13 + uVar12 + 1;
    puVar14 = (undefined4 *)((long)puVar14 + uVar12);
    uVar12 = 0;
  }
  uVar8 = uVar12 * -2 + 10;
  if (in_stack_00000018 <= uVar8) {
    uVar8 = in_stack_00000018;
  }
  if (pbVar13 + 8 < pbVar2) {
    uVar4 = in_stack_00000018 - uVar8;
    bVar7 = (byte)uVar8;
    cVar3 = bVar7 - 3;
    uVar1 = *puVar14;
    if (in_stack_00000020 == uVar9) {
      bVar10 = 0xf0;
      if (uVar12 != 0) {
        bVar7 = (char)uVar12 * '@' + cVar3 * '\b';
        bVar10 = 6;
      }
      *pbVar13 = bVar7 | bVar10;
      pbVar13 = pbVar13 + 1;
    }
    else if (in_stack_00000020 < 0x600) {
      *pbVar13 = ((byte)((int)uVar12 << 6) | (byte)(in_stack_00000020 >> 8)) + cVar3 * '\b';
      pbVar13[1] = (byte)in_stack_00000020;
      pbVar13 = pbVar13 + 2;
    }
    else {
      if (((in_stack_00000018 < 0x23) && (in_stack_00000020 < 0x4000)) && (uVar4 != 0)) {
        uVar11 = (int)in_stack_00000018 - 3;
        *pbVar13 = (char)(uVar11 >> 2) + (char)uVar12 * '\b' + 0xa0;
        *(ushort *)(pbVar13 + 1) = ((ushort)uVar11 & 3) + (short)in_stack_00000020 * 4;
        *(undefined4 *)(pbVar13 + 3) = uVar1;
        pbVar6 = pbVar13 + uVar12 + 3;
        goto LAB_00059c38;
      }
      *pbVar13 = (char)((int)uVar12 << 6) + cVar3 * '\b' | 7;
      *(short *)(pbVar13 + 1) = (short)in_stack_00000020;
      pbVar13 = pbVar13 + 3;
    }
    *(undefined4 *)pbVar13 = uVar1;
    pbVar13 = pbVar13 + uVar12;
    for (; 0xf < uVar4; uVar4 = uVar4 - uVar9) {
      if (pbVar2 <= pbVar13 + 2) goto LAB_00059c38;
      uVar9 = 0x10f;
      if (uVar4 < 0x10f) {
        uVar9 = uVar4;
      }
      *(short *)pbVar13 = (short)((int)uVar9 << 8) + -0xf10;
      pbVar13 = pbVar13 + 2;
    }
    pbVar6 = pbVar13;
    if ((uVar4 != 0) && (pbVar6 = pbVar2, pbVar13 + 1 < pbVar2)) {
      *pbVar13 = (byte)uVar4 | 0xf0;
      pbVar6 = pbVar13 + 1;
    }
  }
LAB_00059c38:
  if (pbVar6 < (byte *)param_1[8]) {
    lVar5 = (long)pbVar6 - param_1[6];
    param_1[0xf] = in_stack_00000020;
    param_1[6] = (long)pbVar6;
    param_1[5] = in_stack_00000010;
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}

