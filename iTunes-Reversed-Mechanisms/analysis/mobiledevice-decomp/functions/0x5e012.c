// rea decompile_all
// name: _BrotliOptimizeHuffmanCountsForRle
// address: 0x5e012
// body: available
// range: 0x5e012-0x5e3fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _BrotliOptimizeHuffmanCountsForRle(ulong param_1,int *param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  bool bVar17;
  int iVar19;
  undefined1 auVar18 [16];
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (param_1 != 0) {
    uVar6 = 0;
    uVar9 = 0;
    do {
      uVar9 = (uVar9 + 1) - (ulong)(param_2[uVar6] == 0);
      uVar6 = uVar6 + 1;
    } while (param_1 != uVar6);
    if (0xf < uVar9) {
      piVar15 = param_2 + -1;
      do {
        if (piVar15[param_1] != 0) {
          uVar5 = 0x40000000;
          uVar9 = 0;
          uVar6 = 0;
          do {
            uVar13 = uVar6;
            uVar1 = param_2[uVar9];
            uVar8 = uVar1;
            if (uVar5 < uVar1) {
              uVar8 = uVar5;
            }
            if (uVar1 == 0) {
              uVar8 = uVar5;
            }
            uVar5 = uVar8;
            uVar6 = (uVar1 != 0) + uVar13;
            uVar9 = uVar9 + 1;
          } while (uVar9 < param_1);
          if (uVar6 < 5) {
            return;
          }
          if (((uVar5 < 4) && (((param_1 - 1) + (ulong)(uVar1 == 0)) - uVar13 < 6)) &&
             (1 < param_1 - 1)) {
            uVar9 = 1;
            do {
              if (((param_2[uVar9 - 1] != 0) && (param_2[uVar9] == 0)) && (param_2[uVar9 + 1] != 0))
              {
                param_2[uVar9] = 1;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < param_1 - 1);
          }
          if (uVar6 < 0x1c) {
            return;
          }
          ___bzero(param_3);
          iVar16 = *param_2;
          sVar10 = 0;
          uVar6 = 0;
          do {
            if ((param_1 == uVar6) || (param_2[uVar6] != iVar16)) {
              if ((iVar16 == 0 && 4 < sVar10) || (6 < sVar10 && iVar16 != 0)) {
                _memset((void *)((param_3 - sVar10) + uVar6),1,sVar10);
              }
              sVar10 = 1;
              if (param_1 != uVar6) {
                iVar16 = param_2[uVar6];
              }
            }
            else {
              sVar10 = sVar10 + 1;
            }
            auVar4 = _DAT_0032b310;
            auVar3 = _DAT_0032b300;
            auVar2 = _DAT_0032b2f0;
            bVar17 = uVar6 < param_1;
            uVar6 = uVar6 + 1;
          } while (bVar17);
          uVar6 = (ulong)((uint)((param_2[1] + *param_2 + param_2[2]) * 0x100) / 3 + 0x1a4);
          uVar14 = 0;
          uVar13 = 0;
          uVar9 = 0;
          do {
            if (((param_1 == uVar9) || (*(char *)(param_3 + uVar9) != '\0')) ||
               (((uVar9 != 0 && (*(char *)(param_3 + -1 + uVar9) != '\0')) ||
                (((uint)(param_2[uVar9] << 8) - uVar6) - 0x4d8 < 0xfffffffffffff650)))) {
              if ((3 < uVar13) || ((uVar13 == 3 && (uVar14 == 0)))) {
                uVar6 = (uVar13 >> 1) + uVar14;
                iVar16 = (int)(uVar6 / uVar13);
                if (uVar6 < uVar13) {
                  iVar16 = 1;
                }
                if (uVar14 == 0) {
                  iVar16 = 0;
                }
                lVar11 = uVar13 - 1;
                auVar18._8_4_ = (int)lVar11;
                auVar18._0_8_ = lVar11;
                auVar18._12_4_ = (int)((ulong)lVar11 >> 0x20);
                auVar18 = auVar18 ^ auVar4;
                uVar6 = 0;
                piVar12 = piVar15;
                auVar21 = auVar3;
                auVar22 = auVar2;
                do {
                  auVar23 = auVar21 ^ auVar4;
                  iVar19 = auVar18._4_4_;
                  iVar20 = auVar18._12_4_;
                  if ((bool)(~(auVar23._4_4_ == iVar19 && auVar18._0_4_ < auVar23._0_4_ ||
                              iVar19 < auVar23._4_4_) & 1)) {
                    *piVar12 = iVar16;
                  }
                  if ((auVar23._12_4_ != iVar20 || auVar23._8_4_ <= auVar18._8_4_) &&
                      auVar23._12_4_ <= iVar20) {
                    param_2[uVar9 + (uVar6 ^ 0x3ffffffffffffffe)] = iVar16;
                  }
                  auVar23 = auVar22 ^ auVar4;
                  if (auVar23._4_4_ <= iVar19 &&
                      (auVar23._0_4_ <= auVar18._0_4_ || auVar23._4_4_ != iVar19)) {
                    param_2[uVar9 + (uVar6 ^ 0x3ffffffffffffffd)] = iVar16;
                  }
                  if (auVar23._12_4_ <= iVar20 &&
                      (auVar23._8_4_ <= auVar18._8_4_ || auVar23._12_4_ != iVar20)) {
                    param_2[uVar9 + (uVar6 ^ 0x3ffffffffffffffc)] = iVar16;
                  }
                  uVar6 = uVar6 + 4;
                  lVar11 = auVar21._8_8_;
                  auVar21._0_8_ = auVar21._0_8_ + 4;
                  auVar21._8_8_ = lVar11 + 4;
                  lVar11 = auVar22._8_8_;
                  auVar22._0_8_ = auVar22._0_8_ + 4;
                  auVar22._8_8_ = lVar11 + 4;
                  piVar12 = piVar12 + -4;
                } while ((uVar13 + 3 & 0xfffffffffffffffc) != uVar6);
              }
              if (uVar9 < param_1 - 2) {
                uVar5 = (uint)((param_2[uVar9 + 1] + param_2[uVar9] + param_2[uVar9 + 2]) * 0x100) /
                        3 + 0x1a4;
              }
              else {
                uVar5 = 0;
                if (uVar9 < param_1) {
                  uVar5 = param_2[uVar9] << 8;
                }
              }
              uVar13 = 1;
              uVar6 = (ulong)uVar5;
              if (param_1 == uVar9) {
                uVar14 = 0;
              }
              else {
                uVar14 = (ulong)(uint)param_2[uVar9];
              }
            }
            else {
              uVar13 = uVar13 + 1;
              uVar14 = uVar14 + (uint)param_2[uVar9];
              if (3 < uVar13) {
                uVar7 = ((uVar13 >> 1) + uVar14 * 0x100) / uVar13;
                uVar6 = uVar7 + 0x78;
                if (uVar13 != 4) {
                  uVar6 = uVar7;
                }
              }
            }
            piVar15 = piVar15 + 1;
            bVar17 = uVar9 < param_1;
            uVar9 = uVar9 + 1;
          } while (bVar17);
          return;
        }
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
  }
                    /* WARNING: Read-only address (ram,0x0032b2f0) is written */
                    /* WARNING: Read-only address (ram,0x0032b300) is written */
                    /* WARNING: Read-only address (ram,0x0032b310) is written */
  return;
}

