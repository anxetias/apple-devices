// rea decompile_all
// name: _BrotliHistogramRemapLiteral
// address: 0x7fb20
// body: available
// range: 0x7fb20-0x7fca1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliHistogramRemapLiteral
               (long param_1,long param_2,long param_3,long param_4,long param_5,uint *param_6)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double local_58;
  ulong local_50;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      puVar4 = param_6 + lVar5 + -1;
      if (lVar5 == 0) {
        puVar4 = param_6;
      }
      uVar3 = *puVar4;
      local_50 = (ulong)uVar3;
      lVar7 = lVar5 * 0x410 + param_1;
      local_58 = (double)_BrotliHistogramBitCostDistanceLiteral(lVar7,local_50 * 0x410 + param_5);
      if (param_4 != 0) {
        lVar6 = 0;
        do {
          dVar8 = (double)_BrotliHistogramBitCostDistanceLiteral
                                    (lVar7,(ulong)*(uint *)(param_3 + lVar6 * 4) * 0x410 + param_5);
          if (dVar8 < local_58) {
            local_50 = (ulong)*(uint *)(param_3 + lVar6 * 4);
            local_58 = dVar8;
          }
          lVar6 = lVar6 + 1;
          uVar3 = (uint)local_50;
        } while (param_4 != lVar6);
      }
      local_50._0_4_ = uVar3;
      param_6[lVar5] = (uint)local_50;
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_2);
  }
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      lVar7 = (ulong)*(uint *)(param_3 + lVar5 * 4) * 0x410;
      ___bzero(param_5 + lVar7,0x408);
      *(undefined8 *)(param_5 + 0x408 + lVar7) = 0x7ff0000000000000;
      lVar5 = lVar5 + 1;
    } while (param_4 != lVar5);
  }
  if (param_2 != 0) {
    lVar7 = 0;
    lVar5 = param_1;
    do {
      uVar3 = param_6[lVar7];
      plVar2 = (long *)(param_5 + 0x400 + (ulong)uVar3 * 0x410);
      *plVar2 = *plVar2 + *(long *)(param_1 + 0x400 + lVar7 * 0x410);
      lVar6 = 0;
      do {
        piVar1 = (int *)(param_5 + (ulong)uVar3 * 0x410 + lVar6 * 4);
        *piVar1 = *piVar1 + *(int *)(lVar5 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x410;
    } while (lVar7 != param_2);
  }
  return;
}

