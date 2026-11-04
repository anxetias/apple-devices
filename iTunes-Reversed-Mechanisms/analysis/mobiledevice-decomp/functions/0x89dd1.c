// rea decompile_all
// name: _InverseMoveToFrontTransform
// address: 0x89dd1
// body: available
// range: 0x89dd1-0x89fb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _InverseMoveToFrontTransform(long param_1,uint param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar11;
  undefined1 auVar10 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  *(undefined4 *)(param_3 + 0x188) = 0x3020100;
  auVar5 = _DAT_0032b310;
  auVar4 = _DAT_0032b300;
  auVar3 = _DAT_0032b2f0;
  uVar6 = *(int *)(param_3 + 0x180) + 1;
  uVar7 = 2;
  if (2 < uVar6) {
    uVar7 = (ulong)uVar6;
  }
  lVar8 = uVar7 - 2;
  auVar10._8_4_ = (int)lVar8;
  auVar10._0_8_ = lVar8;
  auVar10._12_4_ = (int)((ulong)lVar8 >> 0x20);
  iVar13 = 0x3020100;
  iVar14 = 0x7060504;
  iVar15 = 0xb0a0908;
  iVar16 = 0xf0e0d0c;
  uVar9 = 0;
  auVar10 = auVar10 ^ _DAT_0032b310;
  do {
    auVar18._8_4_ = (int)uVar9;
    auVar18._0_8_ = uVar9;
    auVar18._12_4_ = (int)(uVar9 >> 0x20);
    auVar17 = (auVar18 | auVar4) ^ auVar5;
    iVar11 = auVar10._4_4_;
    iVar12 = auVar10._12_4_;
    if ((bool)(~(auVar17._4_4_ == iVar11 && auVar10._0_4_ < auVar17._0_4_ || iVar11 < auVar17._4_4_)
              & 1)) {
      *(int *)(param_3 + 0x18c + uVar9 * 4) = iVar13 + 0x4040404;
    }
    if ((auVar17._12_4_ != iVar12 || auVar17._8_4_ <= auVar10._8_4_) && auVar17._12_4_ <= iVar12) {
      *(int *)(param_3 + 400 + uVar9 * 4) = iVar14 + 0x4040404;
    }
    auVar17 = (auVar18 | auVar3) ^ auVar5;
    if ((auVar17._4_4_ != iVar11 || auVar17._0_4_ <= auVar10._0_4_) && auVar17._4_4_ <= iVar11) {
      *(int *)(param_3 + 0x194 + uVar9 * 4) = iVar15 + 0x4040404;
    }
    if (auVar17._12_4_ <= iVar12 && (auVar17._8_4_ <= auVar10._8_4_ || auVar17._12_4_ != iVar12)) {
      *(int *)(param_3 + 0x198 + uVar9 * 4) = iVar16 + 0x4040404;
    }
    uVar9 = uVar9 + 4;
    iVar13 = iVar13 + 0x10101010;
    iVar14 = iVar14 + 0x10101010;
    iVar15 = iVar15 + 0x10101010;
    iVar16 = iVar16 + 0x10101010;
  } while ((uVar7 + 2 & 0xfffffffffffffffc) != uVar9);
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(param_1 + uVar7);
      uVar2 = *(undefined1 *)(param_3 + 0x188 + (ulong)bVar1);
      *(undefined1 *)(param_1 + uVar7) = uVar2;
      *(undefined1 *)(param_3 + 0x187) = uVar2;
      _memmove((void *)(param_3 + 0x188),(undefined1 *)(param_3 + 0x187),(ulong)bVar1 + 1);
      uVar6 = uVar6 | bVar1;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    uVar6 = uVar6 >> 2;
  }
  *(uint *)(param_3 + 0x180) = uVar6;
  return;
}

