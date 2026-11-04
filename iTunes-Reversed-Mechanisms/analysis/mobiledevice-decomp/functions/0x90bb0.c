// rea decompile_all
// name: _BrotliBuildHistogramsWithContext
// address: 0x90bb0
// body: available
// range: 0x90bb0-0x90e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliBuildHistogramsWithContext
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               ulong param_7,ulong param_8,byte param_9,byte param_10,long param_11,long param_12,
               long param_13,long param_14)

{
  int *piVar1;
  long *plVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_88;
  ulong local_78;
  long local_68;
  long local_58;
  ulong local_48;
  ulong local_38;
  
  puVar4 = *(uint **)(param_3 + 0x18);
  if (puVar4 == (uint *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulong)*puVar4;
  }
  puVar5 = *(uint **)(param_4 + 0x18);
  if (puVar5 == (uint *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = (ulong)*puVar5;
  }
  puVar6 = *(uint **)(param_5 + 0x18);
  if (puVar6 == (uint *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = (ulong)*puVar6;
  }
  if (param_2 != 0) {
    lVar10 = 0;
    lVar11 = 0;
    local_48 = 0;
    local_58 = 0;
    local_78 = 0;
    local_68 = 0;
    uVar13 = 0;
    do {
      if (local_88 == 0) {
        local_78 = (ulong)*(byte *)(*(long *)(param_4 + 0x10) + 1 + local_68);
        local_88 = (ulong)puVar5[local_68 + 1];
        local_68 = local_68 + 1;
      }
      puVar8 = (uint *)(lVar10 * 0x10 + param_1);
      uVar3 = (ushort)puVar8[3];
      piVar1 = (int *)(param_13 + local_78 * 0xb10 + (ulong)uVar3 * 4);
      *piVar1 = *piVar1 + 1;
      plVar2 = (long *)(param_13 + 0xb00 + local_78 * 0xb10);
      *plVar2 = *plVar2 + 1;
      for (uVar9 = (ulong)*puVar8; uVar9 != 0; uVar9 = uVar9 - 1) {
        if (uVar12 == 0) {
          uVar13 = (ulong)*(byte *)(*(long *)(param_3 + 0x10) + 1 + lVar11);
          uVar12 = (ulong)puVar4[lVar11 + 1];
          lVar11 = lVar11 + 1;
        }
        uVar15 = uVar13;
        if (param_11 != 0) {
          uVar14 = *(int *)(param_11 + uVar13 * 4) << 9;
          uVar15 = (ulong)(byte)(PTR___kBrotliContextLookupTable_00441028
                                 [(ulong)param_10 + 0x100 + (ulong)uVar14] |
                                PTR___kBrotliContextLookupTable_00441028
                                [(ulong)param_9 + (ulong)uVar14]) + uVar13 * 0x40;
        }
        uVar16 = param_7 & param_8;
        piVar1 = (int *)(param_12 + uVar15 * 0x410 + (ulong)*(byte *)(param_6 + uVar16) * 4);
        *piVar1 = *piVar1 + 1;
        uVar12 = uVar12 - 1;
        plVar2 = (long *)(param_12 + 0x400 + uVar15 * 0x410);
        *plVar2 = *plVar2 + 1;
        param_7 = param_7 + 1;
        param_10 = param_9;
        param_9 = *(byte *)(param_6 + uVar16);
      }
      param_7 = param_7 + (puVar8[1] & 0x1ffffff);
      if ((ulong)(puVar8[1] & 0x1ffffff) != 0) {
        param_10 = *(byte *)(param_6 + (param_7 - 2 & param_8));
        param_9 = *(byte *)(param_6 + (param_7 - 1 & param_8));
        if (0x7f < uVar3) {
          if (local_38 == 0) {
            local_48 = (ulong)*(byte *)(*(long *)(param_5 + 0x10) + 1 + local_58);
            local_38 = (ulong)puVar6[local_58 + 1];
            local_58 = local_58 + 1;
          }
          local_38 = local_38 - 1;
          uVar14 = uVar3 & 7;
          if (2 < (uVar3 & 7)) {
            uVar14 = 3;
          }
          uVar9 = 3;
          if (((uVar3 >> 6) - 2 & 0xfffffffd) == 0) {
            uVar9 = (ulong)uVar14;
          }
          if (uVar3 >> 6 == 7) {
            uVar9 = (ulong)uVar14;
          }
          lVar7 = (uVar9 + local_48 * 4) * 0x890;
          piVar1 = (int *)(param_14 + lVar7 + (ulong)(*(ushort *)((long)puVar8 + 0xe) & 0x3ff) * 4);
          *piVar1 = *piVar1 + 1;
          plVar2 = (long *)(param_14 + 0x880 + lVar7);
          *plVar2 = *plVar2 + 1;
        }
      }
      local_88 = local_88 - 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 != param_2);
  }
  return;
}

