// rea decompile_all
// name: FUN_001d4a24
// address: 0x1d4a24
// body: available
// range: 0x1d4a24-0x1d4c0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_001d4a24(byte *param_1,long param_2,undefined4 *param_3,ulong param_4,ulong *param_5,
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
  undefined4 *local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  long local_c0;
  ulong local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  ulong *local_58;
  byte *local_50;
  ulong local_48;
  ulong local_40;
  byte *local_38;
  
  local_d0 = 0xffffffff;
  if (param_4 < 0xffffffff) {
    local_d0 = param_4;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  local_68 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_c0 = local_d0 - 8;
  local_50 = param_1 + param_2;
  local_a0 = param_1 + param_2 + -8;
  uVar4 = (uint)(param_7 != 0x901) * 3 + 0xb;
  uVar1 = *param_3;
  local_98 = (ulong)uVar4;
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
  local_e0 = param_3;
  local_b0 = param_1;
  local_a8 = param_1;
  local_60 = param_6;
  local_58 = param_5;
  _lzvnEncode(&local_e0);
  pbVar2 = local_a0;
  pvVar10 = (void *)((long)local_e0 + local_b8);
  local_48 = local_d0;
  local_40 = local_b8;
  local_38 = local_b0;
  pbVar6 = local_b0;
  for (uVar9 = local_d0 - local_b8; 0xf < uVar9; uVar9 = uVar9 - sVar8) {
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
    local_40 = local_48;
    local_38 = pbVar6;
  }
LAB_001d4bd5:
  if (local_38 + 8 <= local_50) {
    local_38[0] = 6;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    local_38 = local_38 + 8;
  }
  *local_58 = local_40;
  return (long)local_38 - (long)local_a8;
}

