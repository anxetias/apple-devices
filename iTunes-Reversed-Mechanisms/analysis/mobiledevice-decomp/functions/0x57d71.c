// rea decompile_all
// name: _BrotliSafeReadBits32Slow
// address: 0x57d71
// body: available
// range: 0x57d71-0x57eaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _BrotliSafeReadBits32Slow(ulong *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  
  uVar3 = *param_1;
  iVar2 = (int)param_1[1];
  pbVar4 = (byte *)param_1[2];
  uVar5 = param_1[3];
  uVar9 = uVar3;
  pbVar12 = pbVar4;
  uVar7 = uVar5;
  iVar1 = iVar2;
  if (iVar2 - 0x31U < 0x10) {
    lVar11 = -1;
    uVar7 = 0;
    iVar6 = iVar2;
    do {
      if (uVar5 == uVar7) goto LAB_00057e90;
      *param_1 = uVar9 >> 8;
      uVar9 = uVar9 >> 8 | (ulong)pbVar4[uVar7] << 0x38;
      *param_1 = uVar9;
      iVar1 = iVar6 + -8;
      *(int *)(param_1 + 1) = iVar1;
      param_1[3] = uVar5 + lVar11;
      param_1[2] = (ulong)(pbVar4 + uVar7 + 1);
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + -1;
      uVar13 = iVar6 - 0x39;
      iVar6 = iVar1;
    } while (uVar13 < 0x10);
    pbVar12 = pbVar4 + uVar7;
    uVar7 = uVar5 - uVar7;
  }
  uVar10 = uVar9 >> ((byte)iVar1 & 0x3f);
  iVar6 = iVar1 + 0x10;
  *(int *)(param_1 + 1) = iVar6;
  uVar8 = param_2 - 0x10;
  uVar13 = 0x30 - iVar1;
  while( true ) {
    if (uVar8 <= uVar13) {
      uVar13 = *(uint *)(&_kBrotliBitMask + (ulong)uVar8 * 4);
      *(uint *)(param_1 + 1) = iVar6 + uVar8;
      *param_3 = ((uint)(uVar9 >> ((byte)iVar6 & 0x3f)) & uVar13) << 0x10 | (uint)uVar10 & 0xffff;
      return 1;
    }
    uVar7 = uVar7 - 1;
    if (uVar7 == 0xffffffffffffffff) break;
    *param_1 = uVar9 >> 8;
    uVar9 = uVar9 >> 8 | (ulong)*pbVar12 << 0x38;
    *param_1 = uVar9;
    iVar6 = iVar6 + -8;
    *(int *)(param_1 + 1) = iVar6;
    param_1[3] = uVar7;
    param_1[2] = (ulong)(pbVar12 + 1);
    uVar13 = uVar13 + 8;
    pbVar12 = pbVar12 + 1;
  }
LAB_00057e90:
  *param_1 = uVar3;
  *(int *)(param_1 + 1) = iVar2;
  param_1[2] = (ulong)pbVar4;
  param_1[3] = uVar5;
  return 0;
}

