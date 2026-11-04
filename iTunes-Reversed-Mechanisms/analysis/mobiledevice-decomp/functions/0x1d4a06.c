// rea decompile_all
// name: _lzvn_encode_partial
// address: 0x1d4a06
// body: available
// range: 0x1d4a06-0x1d4a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lzvn_encode_partial
               (byte *param_1,ulong param_2,undefined4 *param_3,ulong param_4,ulong *param_5,
               long param_6,int param_7)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  size_t sVar8;
  ulong uVar9;
  void *pvVar10;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong *puStack_58;
  byte *pbStack_50;
  ulong uStack_48;
  ulong uStack_40;
  byte *pbStack_38;
  
  if (param_2 < 8 || param_4 < 8) {
    *param_5 = 0;
    return 0;
  }
  uStack_d0 = 0xffffffff;
  if (param_4 < 0xffffffff) {
    uStack_d0 = param_4;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_68 = 0;
  uStack_d8 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  lStack_c0 = uStack_d0 - 8;
  pbStack_50 = param_1 + param_2;
  pbStack_a0 = param_1 + (param_2 - 8);
  uVar4 = (uint)(param_7 != 0x901) * 3 + 0xb;
  uVar1 = *param_3;
  uStack_98 = (ulong)uVar4;
  puVar7 = (undefined4 *)(param_6 + 0x10);
  uVar3 = 1;
  do {
    *(undefined8 *)(puVar7 + -4) = 0;
    *(undefined8 *)(puVar7 + -2) = 0;
    uVar5 = uVar3 >> (sbyte)uVar4;
    *puVar7 = uVar1;
    puVar7[1] = uVar1;
    puVar7[2] = uVar1;
    puVar7[3] = uVar1;
    uVar3 = uVar3 + 1;
    puVar7 = puVar7 + 8;
  } while (uVar5 == 0);
  puStack_e0 = param_3;
  pbStack_b0 = param_1;
  pbStack_a8 = param_1;
  lStack_60 = param_6;
  puStack_58 = param_5;
  _lzvnEncode(&puStack_e0);
  pbVar2 = pbStack_a0;
  pvVar10 = (void *)((long)puStack_e0 + uStack_b8);
  uStack_48 = uStack_d0;
  uStack_40 = uStack_b8;
  pbStack_38 = pbStack_b0;
  pbVar6 = pbStack_b0;
  for (uVar9 = uStack_d0 - uStack_b8; 0xf < uVar9; uVar9 = uVar9 - sVar8) {
    sVar8 = 0x10f;
    if (uVar9 < 0x10f) {
      sVar8 = uVar9;
    }
    if (pbVar2 <= pbVar6 + sVar8 + 10) goto LAB_001d4bd5;
    *(short *)pbVar6 = (short)((int)sVar8 << 8) + -0xf20;
    _memcpy(pbVar6 + 2,pvVar10,sVar8);
    pbVar6 = pbVar6 + sVar8 + 2;
    pvVar10 = (void *)((long)pvVar10 + sVar8);
  }
  if (uVar9 != 0) {
    if (pbVar2 <= pbVar6 + uVar9 + 10) goto LAB_001d4bd5;
    *pbVar6 = (byte)uVar9 | 0xe0;
    _memcpy(pbVar6 + 1,pvVar10,uVar9);
    pbVar6 = pbVar6 + uVar9 + 1;
  }
  if (pbVar6 < pbVar2) {
    uStack_40 = uStack_48;
    pbStack_38 = pbVar6;
  }
LAB_001d4bd5:
  if (pbStack_38 + 8 <= pbStack_50) {
    pbStack_38[0] = 6;
    pbStack_38[1] = 0;
    pbStack_38[2] = 0;
    pbStack_38[3] = 0;
    pbStack_38[4] = 0;
    pbStack_38[5] = 0;
    pbStack_38[6] = 0;
    pbStack_38[7] = 0;
    pbStack_38 = pbStack_38 + 8;
  }
  *puStack_58 = uStack_40;
  return (long)pbStack_38 - (long)pbStack_a8;
}

