// rea decompile_all
// name: _SetCost
// address: 0x1c9663
// body: available
// range: 0x1c9663-0x1c97da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _SetCost(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + *(uint *)(param_1 + lVar2 * 4);
      lVar2 = lVar2 + 1;
    } while (param_2 != lVar2);
    if (0xff < uVar3) {
      auVar7._8_4_ = (int)(uVar3 >> 0x20);
      auVar7._0_8_ = uVar3;
      auVar7._12_4_ = 0x45300000;
      dVar4 = (double)_log2(((double)CONCAT44(0x43300000,(int)uVar3) - 4503599627370496.0) +
                            (auVar7._8_8_ - 1.9342813113834067e+25));
      goto LAB_001c96d6;
    }
  }
  dVar4 = (double)(&_kBrotliLog2Table)[uVar3];
LAB_001c96d6:
  if (param_2 != 0 && param_3 == 0) {
    lVar2 = 0;
    do {
      uVar3 = uVar3 + (*(int *)(param_1 + lVar2 * 4) == 0);
      lVar2 = lVar2 + 1;
    } while (param_2 != lVar2);
  }
  if (uVar3 < 0x100) {
    dVar5 = (double)(&_kBrotliLog2Table)[uVar3];
  }
  else {
    auVar8._8_4_ = (int)(uVar3 >> 0x20);
    auVar8._0_8_ = uVar3;
    auVar8._12_4_ = 0x45300000;
    dVar5 = (double)_log2(((double)CONCAT44(0x43300000,(int)uVar3) - 4503599627370496.0) +
                          (auVar8._8_8_ - 1.9342813113834067e+25));
  }
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_1 + lVar2 * 4);
      uVar3 = (ulong)uVar1;
      if (uVar3 == 0) {
        *(float *)(param_4 + lVar2 * 4) = (float)dVar5 + 2.0;
      }
      else {
        if (uVar1 < 0x100) {
          dVar6 = (double)(&_kBrotliLog2Table)[uVar3];
        }
        else {
          dVar6 = (double)_log2((double)uVar3);
        }
        *(float *)(param_4 + lVar2 * 4) = (float)dVar4 - (float)dVar6;
        if ((float)dVar4 - (float)dVar6 < 1.0) {
          *(undefined4 *)(param_4 + lVar2 * 4) = 0x3f800000;
        }
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != lVar2);
  }
  return;
}

