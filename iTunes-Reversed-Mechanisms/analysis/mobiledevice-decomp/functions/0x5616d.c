// rea decompile_all
// name: _BrotliIsMostlyUTF8
// address: 0x5616d
// body: available
// range: 0x5616d-0x5639a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _BrotliIsMostlyUTF8(double param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_5 == 0) {
    dVar11 = 0.0;
  }
  else {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = uVar4 + param_3 & param_4;
      bVar1 = *(byte *)(param_2 + uVar2);
      uVar9 = (uint)bVar1;
      lVar5 = 1;
      if ((char)bVar1 < '\x01') {
        uVar8 = param_5 - uVar4;
        if (1 < uVar8) {
          uVar10 = (uint)bVar1;
          if ((((uVar10 & 0xffffffe0) == 0xc0) &&
              (bVar1 = *(byte *)(param_2 + 1 + uVar2), (bVar1 & 0xc0) == 0x80)) &&
             (uVar6 = (uVar10 & 0x1f) << 6, 0x7f < uVar6)) {
            uVar9 = bVar1 & 0x3f | uVar6;
            lVar5 = 2;
            goto LAB_00056204;
          }
          if (uVar8 != 2) {
            if ((((uVar10 & 0xfffffff0) == 0xe0) &&
                (bVar1 = *(byte *)(param_2 + 1 + uVar2), (bVar1 & 0xc0) == 0x80)) &&
               ((uVar6 = (uint)*(byte *)(param_2 + 2 + uVar2), (uVar6 & 0xffffffc0) == 0x80 &&
                (uVar10 = (bVar1 & 0x3f) << 6 | (uVar10 & 0xf) << 0xc, 0x7ff < uVar10)))) {
              uVar9 = uVar6 & 0x3f | uVar10;
              lVar5 = 3;
              goto LAB_00056204;
            }
            if (((3 < uVar8) && ((uVar9 & 0xfffffff8) == 0xf0)) &&
               ((uVar10 = (uint)*(byte *)(param_2 + 1 + uVar2), (uVar10 & 0xffffffc0) == 0x80 &&
                ((bVar1 = *(byte *)(param_2 + 2 + uVar2), (bVar1 & 0xc0) == 0x80 &&
                 (uVar6 = (uint)*(byte *)(param_2 + 3 + uVar2), (uVar6 & 0xffffffc0) == 0x80)))))) {
              uVar7 = (uVar9 & 7) * 0x40000;
              uVar10 = (uVar10 & 0x3f) * 0x1000;
              if ((uVar10 + uVar7) - 0x10000 < 0x100000) {
                uVar9 = uVar6 & 0x3f | (bVar1 & 0x3f) << 6 | uVar10 | uVar7;
                lVar5 = 4;
                goto LAB_00056204;
              }
            }
          }
        }
        uVar9 = uVar9 | 0x110000;
      }
LAB_00056204:
      uVar4 = uVar4 + lVar5;
      if (0x10ffff < uVar9) {
        lVar5 = 0;
      }
      lVar3 = lVar3 + lVar5;
    } while (uVar4 < param_5);
    auVar12._8_4_ = (int)((ulong)lVar3 >> 0x20);
    auVar12._0_8_ = lVar3;
    auVar12._12_4_ = 0x45300000;
    dVar11 = ((double)CONCAT44(0x43300000,(int)lVar3) - 4503599627370496.0) +
             (auVar12._8_8_ - 1.9342813113834067e+25);
  }
  auVar13._8_4_ = (int)(param_5 >> 0x20);
  auVar13._0_8_ = param_5;
  auVar13._12_4_ = 0x45300000;
  return (((double)CONCAT44(0x43300000,(int)param_5) - 4503599627370496.0) +
         (auVar13._8_8_ - 1.9342813113834067e+25)) * param_1 < dVar11;
}

