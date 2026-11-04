// rea decompile_all
// name: _StoreSymbol
// address: 0x937a9
// body: available
// range: 0x937a9-0x93960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _StoreSymbol(long *param_1,long param_2,ulong *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = param_1[0x73];
  if (lVar5 == 0) {
    lVar5 = param_1[0x72];
    param_1[0x72] = lVar5 + 1;
    uVar4 = *(uint *)(param_1[3] + 4 + lVar5 * 4);
    uVar8 = (ulong)*(byte *)(param_1[2] + 1 + lVar5);
    param_1[0x73] = (ulong)uVar4;
    param_1[0x74] = *param_1 * uVar8;
    lVar5 = 1;
    if (param_1[5] + 1U != uVar8) {
      lVar5 = 0;
      if (param_1[6] != uVar8) {
        lVar5 = uVar8 + 2;
      }
    }
    param_1[6] = param_1[5];
    param_1[5] = uVar8;
    uVar8 = *param_3;
    uVar6 = *(byte *)((long)param_1 + lVar5 + 0x38) + uVar8;
    *(ulong *)(param_4 + (uVar8 >> 3)) =
         (ulong)*(ushort *)((long)param_1 + lVar5 * 2 + 0x13a) << ((byte)uVar8 & 7) |
         (ulong)*(byte *)(param_4 + (uVar8 >> 3));
    *param_3 = uVar6;
    uVar8 = 0xe;
    if (0x2f0 < uVar4) {
      uVar8 = 0x14;
    }
    uVar7 = 7;
    if (uVar4 < 0x29) {
      uVar7 = 0;
    }
    if (0xb0 < uVar4) {
      uVar7 = uVar8;
    }
    do {
      uVar8 = uVar7;
      if (uVar8 == 0x19) break;
      uVar7 = uVar8 + 1;
    } while ((ushort)(&DAT_002b5684)[uVar8 * 2] <= uVar4);
    uVar8 = uVar8 & 0xffffffff;
    bVar1 = (&DAT_002b5682)[uVar8 * 4];
    uVar3 = *(ushort *)(&__kBrotliPrefixCodeRanges + uVar8 * 4);
    bVar2 = *(byte *)((long)param_1 + uVar8 + 0x33e);
    *(ulong *)(param_4 + (uVar6 >> 3)) =
         (ulong)*(ushort *)((long)param_1 + uVar8 * 2 + 0x358) << ((byte)uVar6 & 7) |
         (ulong)*(byte *)(param_4 + (uVar6 >> 3));
    uVar6 = bVar2 + uVar6;
    *param_3 = uVar6;
    *(ulong *)(param_4 + (uVar6 >> 3)) =
         (ulong)(uVar4 - uVar3) << ((byte)uVar6 & 7) | (ulong)*(byte *)(param_4 + (uVar6 >> 3));
    *param_3 = uVar6 + bVar1;
    lVar5 = param_1[0x73];
  }
  param_1[0x73] = lVar5 + -1;
  bVar1 = *(byte *)(param_1[0x75] + param_2 + param_1[0x74]);
  uVar8 = *param_3;
  *(ulong *)(param_4 + (uVar8 >> 3)) =
       (ulong)*(ushort *)(param_1[0x76] + (param_2 + param_1[0x74]) * 2) << ((byte)uVar8 & 7) |
       (ulong)*(byte *)(param_4 + (uVar8 >> 3));
  *param_3 = bVar1 + uVar8;
  return;
}

