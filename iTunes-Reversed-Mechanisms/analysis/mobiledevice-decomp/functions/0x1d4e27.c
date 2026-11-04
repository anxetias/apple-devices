// rea decompile_all
// name: _smb_lznt1_encode_buffer
// address: 0x1d4e27
// body: available
// range: 0x1d4e27-0x1d51f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _smb_lznt1_encode_buffer
               (ushort *param_1,ulong param_2,void *param_3,ulong param_4,long param_5)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  size_t sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  
  ___bzero(param_5,0x8000);
  lVar10 = 0;
  do {
    if (param_4 == 0) {
      if (1 < param_2) {
        *param_1 = 0;
        lVar10 = lVar10 + 2;
      }
      return lVar10;
    }
    sVar13 = 0x1000;
    if (param_4 < 0x1000) {
      sVar13 = param_4;
    }
    if (param_2 < 3) {
      return 0;
    }
    uVar22 = sVar13 + 7;
    if (param_4 < sVar13 + 7) {
      uVar22 = param_4;
    }
    uVar16 = (uint)uVar22;
    if (uVar16 < 8) {
      uVar16 = 7;
    }
    uVar16 = uVar16 - 7;
    uVar22 = 2;
    uVar24 = 0x10000;
    uVar19 = 3;
    uVar17 = 0;
    do {
      uVar6 = (uint)sVar13;
      if (param_2 < (int)uVar19 + 3) {
        uVar19 = 0xffffffff;
        break;
      }
      uVar20 = uVar19;
      if (uVar24 < 0x200) {
        *(char *)((long)param_1 + uVar22) = (char)uVar24;
        uVar24 = 0x10000;
        uVar20 = (ulong)((int)uVar19 + 1);
        uVar22 = uVar19;
      }
      uVar24 = uVar24 >> 1;
      uVar5 = (uint)uVar17;
      iVar18 = (int)uVar20;
      if (param_4 < uVar5 + 4) {
        uVar19 = (ulong)(iVar18 + 1);
        *(undefined1 *)((long)param_1 + uVar20) = *(undefined1 *)((long)param_3 + uVar17);
        uVar17 = (ulong)(uVar5 + 1);
      }
      else {
        pcVar1 = (char *)((long)param_3 + uVar17);
        uVar7 = *(uint *)((long)param_3 + uVar17);
        uVar15 = uVar7 >> 8;
        uVar19 = (ulong)((uVar7 & 0xffffff) * -0x61c8864f >> 0x13);
        uVar8 = (ulong)(uVar15 * -0x61c8864f >> 0x13);
        uVar12 = *(uint *)(param_5 + uVar19 * 4);
        uVar2 = *(uint *)(param_5 + uVar8 * 4);
        *(uint *)(param_5 + uVar19 * 4) = uVar7 * 0x1000 + uVar5;
        uVar19 = (ulong)uVar12 & 0xfff;
        uVar14 = 0;
        if ((((uVar7 & 0xfffff) == uVar12 >> 0xc) && ((uint)uVar19 < uVar5)) && (uVar5 < uVar16)) {
          uVar9 = 0;
LAB_001d4f9d:
          uVar23 = *(ulong *)((long)param_3 + uVar9 + uVar19);
          if (*(ulong *)(pcVar1 + uVar9) == uVar23) goto code_r0x001d4faa;
          uVar23 = uVar23 ^ *(ulong *)(pcVar1 + uVar9);
          uVar17 = 0;
          if (uVar23 != 0) {
            for (; (uVar23 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
            }
          }
          uVar14 = ((uint)(uVar17 >> 3) & 0x1fffffff) + (int)uVar9;
        }
LAB_001d4fc6:
        if ((uVar15 & 0xfffff) == uVar2 >> 0xc) {
          uVar9 = (ulong)uVar2 & 0xfff;
          uVar7 = (uint)uVar9;
          if (uVar7 <= uVar5) {
            uVar17 = (ulong)(uVar5 + 1);
            uVar12 = 0;
            if (uVar5 + 1 < uVar16) {
              uVar23 = 0;
LAB_001d500b:
              uVar3 = *(ulong *)((long)param_3 + uVar23 + uVar17);
              uVar21 = *(ulong *)((long)param_3 + uVar23 + uVar9);
              if (uVar3 == uVar21) goto code_r0x001d5019;
              uVar21 = uVar21 ^ uVar3;
              uVar9 = 0;
              if (uVar21 != 0) {
                for (; (uVar21 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar12 = ((uint)(uVar9 >> 3) & 0x1fffffff) + (int)uVar23;
            }
LAB_001d504c:
            if (((uVar7 == 0) || (*pcVar1 != *(char *)((long)param_3 + (ulong)(uVar7 - 1)))) ||
               (uVar12 < uVar14)) {
              if (uVar14 < uVar12) {
                uVar19 = (ulong)(iVar18 + 1);
                *(char *)((long)param_1 + uVar20) = *pcVar1;
                goto LAB_001d513f;
              }
            }
            else {
              uVar14 = uVar12 + 1;
              uVar19 = (ulong)(uVar7 - 1);
            }
          }
        }
        uVar7 = uVar6 - uVar5;
        if (uVar14 < uVar6 - uVar5) {
          uVar7 = uVar14;
        }
        uVar17 = (ulong)(uVar5 + 1);
        if (uVar7 < 3) {
          uVar19 = (ulong)(iVar18 + 1);
          *(char *)((long)param_1 + uVar20) = *pcVar1;
        }
        else {
          *(uint *)(param_5 + uVar8 * 4) = uVar5 + 1 + uVar15 * 0x1000;
          uVar12 = uVar5 - 1 & 0xff7 | 8;
          iVar4 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          bVar11 = ((byte)iVar4 ^ 0x1f) - 0x10;
          uVar12 = (1 << (bVar11 & 0x1f)) + 2;
          if (uVar7 < uVar12) {
            uVar12 = uVar7;
          }
          *(short *)((long)param_1 + uVar20) =
               (short)(~(uint)uVar19 + uVar5 << (bVar11 & 0x1f)) + (short)uVar12 + -3;
          uVar19 = (ulong)(iVar18 + 2);
          uVar17 = (ulong)(uVar12 + uVar5);
          uVar24 = uVar24 | 0x80;
        }
      }
LAB_001d513f:
    } while ((uint)uVar17 < uVar6);
    do {
      uVar16 = uVar24;
      uVar24 = uVar16 >> 1;
    } while (0x1ff < uVar16);
    *(char *)((long)param_1 + uVar22) = (char)uVar16;
    if ((uint)uVar19 < uVar6 + 2) {
      *param_1 = (short)uVar19 + 0x7ffdU | 0xb000;
    }
    else {
      uVar19 = (ulong)(uVar6 + 2);
      if (param_2 < uVar19) {
        return 0;
      }
      *param_1 = (short)sVar13 - 1U | 0x3000;
      _memcpy(param_1 + 1,param_3,sVar13);
    }
    param_3 = (void *)((long)param_3 + sVar13);
    param_1 = (ushort *)((long)param_1 + uVar19);
    param_2 = param_2 - uVar19;
    lVar10 = lVar10 + uVar19;
    param_4 = param_4 - sVar13;
  } while( true );
code_r0x001d4faa:
  uVar14 = (int)uVar9 + 8;
  uVar9 = (ulong)uVar14;
  if ((ulong)uVar16 <= uVar9 + uVar17) goto LAB_001d4fc6;
  goto LAB_001d4f9d;
code_r0x001d5019:
  uVar12 = (int)uVar23 + 8;
  uVar23 = (ulong)uVar12;
  if ((ulong)uVar16 <= uVar23 + uVar17) goto LAB_001d504c;
  goto LAB_001d500b;
}

