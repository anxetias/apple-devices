// rea decompile_all
// name: _BrotliZopfliCreateCommands
// address: 0x4bc2d
// body: available
// range: 0x4bc2d-0x4bf5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliZopfliCreateCommands
               (long param_1,long param_2,long param_3,uint *param_4,long *param_5,long param_6,
               long param_7,long *param_8)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined2 *puVar26;
  bool bVar27;
  
  uVar6 = *(uint *)(param_3 + 0xc);
  if (uVar6 == 0xffffffff) {
    lVar24 = 0;
  }
  else {
    lVar2 = *(long *)(param_6 + 0x10);
    uVar12 = (1L << (*(byte *)(param_6 + 8) & 0x3f)) - 0x10;
    puVar26 = (undefined2 *)(param_7 + 0xe);
    lVar16 = 0;
    lVar24 = 0;
    do {
      lVar20 = lVar24 * 0x10 + param_3;
      lVar14 = (ulong)uVar6 * 0x10;
      uVar11 = *(uint *)(lVar14 + lVar20);
      uVar23 = *(uint *)(lVar14 + 8 + lVar20);
      uVar15 = (ulong)(uVar23 & 0x7ffffff);
      uVar6 = *(uint *)(lVar14 + 0xc + lVar20);
      bVar27 = lVar16 == 0;
      lVar16 = lVar16 + -1;
      uVar25 = uVar15;
      if (bVar27) {
        uVar25 = *param_5 + uVar15;
        *param_5 = 0;
      }
      uVar17 = uVar11 & 0x1ffffff;
      uVar1 = *(uint *)(lVar20 + lVar14 + 4);
      iVar21 = uVar17 - (uVar11 >> 0x19);
      uVar22 = iVar21 + 9;
      uVar13 = param_2 + lVar2 + lVar24 + uVar15;
      if (uVar12 <= uVar13) {
        uVar13 = uVar12;
      }
      uVar3 = (uVar23 >> 0x1b) - 1;
      if (uVar23 < 0x8000000) {
        uVar3 = uVar1 + 0xf;
      }
      *(int *)(puVar26 + -7) = (int)uVar25;
      *(uint *)(puVar26 + -5) = (uVar22 - uVar11) * 0x2000000 | uVar17;
      uVar18 = (ulong)*(uint *)(param_6 + 0x44) + 0x10;
      if (uVar3 < uVar18) {
        uVar7 = 0;
        uVar11 = uVar3;
      }
      else {
        bVar10 = (byte)*(int *)(param_6 + 0x40);
        uVar9 = (((ulong)uVar3 - (ulong)*(uint *)(param_6 + 0x44)) + (4L << (bVar10 & 0x3f))) - 0x10
        ;
        uVar11 = 0x1f;
        uVar23 = (uint)uVar9;
        if (uVar23 != 0) {
          for (; uVar23 >> uVar11 == 0; uVar11 = uVar11 - 1) {
          }
        }
        uVar8 = (uVar11 ^ 0xffffffe0) + 0x1f;
        bVar27 = (uVar9 >> ((ulong)uVar8 & 0x3f) & 1) != 0;
        iVar19 = uVar8 - *(int *)(param_6 + 0x40);
        uVar11 = ((uint)bVar27 + iVar19 * 2 + 0xfffe << (bVar10 & 0x3f)) +
                 (int)uVar18 + (~(-1 << (bVar10 & 0x1f)) & uVar23) | iVar19 * 0x400;
        uVar7 = (undefined4)(uVar9 - ((ulong)bVar27 + 2 << ((byte)uVar8 & 0x3f)) >> (bVar10 & 0x3f))
        ;
      }
      *puVar26 = (short)uVar11;
      *(undefined4 *)(puVar26 + -3) = uVar7;
      if (uVar25 < 6) {
        uVar18 = uVar25 & 0xffffffff;
      }
      else if (uVar25 < 0x82) {
        uVar23 = 0x1f;
        uVar8 = (uint)(uVar25 - 2);
        if (uVar8 != 0) {
          for (; uVar8 >> uVar23 == 0; uVar23 = uVar23 - 1) {
          }
        }
        uVar18 = (ulong)((int)(uVar25 - 2 >> ((char)(uVar23 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                         (uVar23 ^ 0xffffffe0) * 2 + 0x40);
      }
      else if (uVar25 < 0x842) {
        uVar8 = (int)uVar25 - 0x42;
        uVar23 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> uVar23 == 0; uVar23 = uVar23 - 1) {
          }
        }
        uVar18 = (ulong)((uVar23 ^ 0xffe0) + 0x2a);
      }
      else {
        uVar18 = 0x15;
        if (0x1841 < uVar25) {
          uVar18 = (ulong)(ushort)(0x17 - (uVar25 < 0x5842));
        }
      }
      if (uVar22 < 10) {
        uVar23 = iVar21 + 7;
      }
      else if (uVar22 < 0x86) {
        uVar22 = iVar21 + 3;
        uVar23 = 0x1f;
        if (uVar22 != 0) {
          for (; uVar22 >> uVar23 == 0; uVar23 = uVar23 - 1) {
          }
        }
        uVar23 = (int)((ulong)(long)(int)uVar22 >> ((char)(uVar23 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                 (uVar23 ^ 0xffffffe0) * 2 + 0x42;
      }
      else {
        uVar23 = 0x17;
        if (uVar22 < 0x846) {
          uVar23 = 0x1f;
          if (iVar21 - 0x3dU != 0) {
            for (; iVar21 - 0x3dU >> uVar23 == 0; uVar23 = uVar23 - 1) {
            }
          }
          uVar23 = (uVar23 ^ 0xffe0) + 0x2c;
        }
      }
      uVar4 = (ushort)uVar23;
      sVar5 = (uVar4 & 7) + ((ushort)uVar18 & 7) * 8;
      if ((((uVar11 & 0x3ff) == 0) && ((ushort)uVar18 < 8)) && (uVar4 < 0x10)) {
        if (7 < uVar4) {
          sVar5 = sVar5 + 0x40;
        }
      }
      else {
        iVar21 = (int)((uVar18 & 0xffff) >> 3) * 3 + ((uVar23 & 0xffff) >> 3);
        sVar5 = sVar5 + ((ushort)(0x520d40 >> ((char)iVar21 * '\x02' & 0x1fU)) & 0xc0) +
                        (short)iVar21 * 0x40 + 0x40;
      }
      puVar26[-1] = sVar5;
      if ((uVar1 <= uVar13) && (uVar3 != 0)) {
        param_4[3] = param_4[2];
        *(undefined8 *)(param_4 + 1) = *(undefined8 *)param_4;
        *param_4 = uVar1;
      }
      *param_8 = *param_8 + uVar25;
      lVar24 = lVar24 + uVar15 + (ulong)uVar17;
      puVar26 = puVar26 + 8;
    } while (uVar6 != 0xffffffff);
  }
  *param_5 = *param_5 + (param_1 - lVar24);
  return;
}

