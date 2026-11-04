// rea decompile_all
// name: _ZopfliCostModelSetFromLiteralCosts
// address: 0x4ce14
// body: available
// range: 0x4ce14-0x4cf4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ZopfliCostModelSetFromLiteralCosts
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = *(long *)(param_1 + 0xb00);
  puVar4 = *(undefined4 **)(param_1 + 0xb10);
  lVar5 = *(long *)(param_1 + 0xb20);
  _BrotliEstimateBitCostsForLiterals(param_2,lVar5,param_4,param_3,puVar4 + 1);
  *puVar4 = 0;
  if (lVar5 != 0) {
    lVar6 = 0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    do {
      fVar1 = (float)puVar4[lVar6 + 1];
      fVar12 = fVar11 + fVar10 + fVar1;
      puVar4[lVar6 + 1] = fVar12;
      lVar6 = lVar6 + 1;
      fVar10 = (fVar10 + fVar1) - (fVar12 - fVar11);
      fVar11 = fVar12;
    } while (lVar5 != lVar6);
  }
  uVar8 = 0;
  do {
    if (uVar8 < 0xf5) {
      dVar9 = (double)(&DAT_003259e8)[uVar8];
    }
    else {
      dVar9 = (double)_log2((double)(long)(uVar8 + 0xb));
    }
    *(float *)(param_1 + uVar8 * 4) = (float)dVar9;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x2c0);
  uVar2 = *(uint *)(param_1 + 0xb08);
  if ((ulong)uVar2 != 0) {
    uVar8 = 0x14;
    do {
      uVar7 = uVar8 & 0xffffffff;
      if (uVar7 < 0x100) {
        dVar9 = (double)(&_kBrotliLog2Table)[uVar7];
      }
      else {
        dVar9 = (double)_log2((double)uVar7);
      }
      *(float *)(lVar3 + -0x50 + uVar8 * 4) = (float)dVar9;
      lVar5 = uVar8 - uVar2;
      uVar8 = uVar8 + 1;
    } while (lVar5 != 0x13);
  }
  *(undefined4 *)(param_1 + 0xb18) = 0x405d6754;
  return;
}

