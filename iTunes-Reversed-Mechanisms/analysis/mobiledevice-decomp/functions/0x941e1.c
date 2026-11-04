// rea decompile_all
// name: _StoreDataWithHuffmanCodes
// address: 0x941e1
// body: available
// range: 0x941e1-0x944c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _StoreDataWithHuffmanCodes
               (long param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
               long param_7,long param_8,long param_9,long param_10,long param_11,ulong *param_12,
               long param_13)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  
  if (param_5 != 0) {
    uVar6 = *param_12;
    lVar17 = 0;
    do {
      lVar11 = lVar17 * 0x10;
      uVar9 = *(uint *)(param_4 + lVar11);
      uVar13 = (ulong)uVar9;
      uVar14 = *(uint *)(param_4 + 4 + lVar11);
      uVar2 = *(ushort *)(param_4 + 0xc + lVar11);
      bVar1 = *(byte *)(param_8 + (ulong)uVar2);
      uVar4 = *(uint *)(param_4 + 8 + lVar11);
      uVar3 = *(ushort *)(param_4 + 0xe + lVar11);
      *(ulong *)(param_13 + (uVar6 >> 3)) =
           (ulong)*(ushort *)(param_9 + (ulong)uVar2 * 2) << ((byte)uVar6 & 7) |
           (ulong)*(byte *)(param_13 + (uVar6 >> 3));
      uVar6 = bVar1 + uVar6;
      *param_12 = uVar6;
      uVar12 = uVar9;
      if (5 < uVar13) {
        if (uVar9 < 0x82) {
          uVar12 = 0x1f;
          uVar10 = (uint)(uVar13 - 2);
          if (uVar10 != 0) {
            for (; uVar10 >> uVar12 == 0; uVar12 = uVar12 - 1) {
            }
          }
          iVar8 = (uVar12 ^ 0xffffffe0) + 0x1f;
          uVar12 = (int)(uVar13 - 2 >> ((byte)iVar8 & 0x3f)) + iVar8 * 2 + 2;
        }
        else if (uVar9 < 0x842) {
          uVar12 = 0x1f;
          if (uVar9 - 0x42 != 0) {
            for (; uVar9 - 0x42 >> uVar12 == 0; uVar12 = uVar12 - 1) {
            }
          }
          uVar12 = (uVar12 ^ 0xffffffe0) + 0x2a;
        }
        else {
          uVar12 = 0x15;
          if (0x1841 < uVar9) {
            uVar12 = 0x17 - (uVar9 < 0x5842);
          }
        }
      }
      bVar1 = (byte)(uVar14 >> 0x18);
      uVar14 = uVar14 & 0x1ffffff;
      uVar10 = (int)(char)(bVar1 & 0x80 | bVar1 >> 1) + uVar14;
      if (uVar10 < 10) {
        uVar16 = uVar10 + 0xfffe;
      }
      else if (uVar10 < 0x86) {
        uVar16 = 0x1f;
        uVar15 = (uint)((ulong)uVar10 - 6);
        if (uVar15 != 0) {
          for (; uVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {
          }
        }
        iVar8 = (uVar16 ^ 0xffffffe0) + 0x1f;
        uVar16 = (int)((ulong)uVar10 - 6 >> ((byte)iVar8 & 0x3f)) + iVar8 * 2 + 4;
      }
      else {
        uVar16 = 0x17;
        if (uVar10 < 0x846) {
          uVar16 = 0x1f;
          if (uVar10 - 0x46 != 0) {
            for (; uVar10 - 0x46 >> uVar16 == 0; uVar16 = uVar16 - 1) {
            }
          }
          uVar16 = (uVar16 ^ 0xffffffe0) + 0x2c;
        }
      }
      uVar12 = (uVar12 & 0xffff) << 2;
      iVar8 = *(int *)(&_kBrotliInsExtra + uVar12);
      uVar16 = (uVar16 & 0xffff) << 2;
      iVar5 = *(int *)(&_kBrotliCopyExtra + uVar16);
      *(ulong *)(param_13 + (uVar6 >> 3)) =
           ((ulong)(uVar10 - *(int *)(&_kBrotliCopyBase + uVar16)) << ((byte)iVar8 & 0x3f) |
           (ulong)(uVar9 - *(int *)(&_kBrotliInsBase + uVar12))) << ((byte)uVar6 & 7) |
           (ulong)*(byte *)(param_13 + (uVar6 >> 3));
      uVar6 = (uint)(iVar8 + iVar5) + uVar6;
      *param_12 = uVar6;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        uVar7 = (ulong)*(byte *)(param_1 + (param_2 & param_3));
        bVar1 = *(byte *)(param_6 + uVar7);
        *(ulong *)(param_13 + (uVar6 >> 3)) =
             (ulong)*(ushort *)(param_7 + uVar7 * 2) << ((byte)uVar6 & 7) |
             (ulong)*(byte *)(param_13 + (uVar6 >> 3));
        uVar6 = uVar6 + bVar1;
        *param_12 = uVar6;
        param_2 = param_2 + 1;
      }
      if ((uVar14 != 0) && (0x7f < uVar2)) {
        uVar9 = uVar3 & 0x3ff;
        uVar13 = *(byte *)(param_10 + (ulong)uVar9) + uVar6;
        *(ulong *)(param_13 + (uVar6 >> 3)) =
             (ulong)*(ushort *)(param_11 + (ulong)uVar9 * 2) << ((byte)uVar6 & 7) |
             (ulong)*(byte *)(param_13 + (uVar6 >> 3));
        *param_12 = uVar13;
        *(ulong *)(param_13 + (uVar13 >> 3)) =
             (ulong)uVar4 << ((byte)uVar13 & 7) | (ulong)*(byte *)(param_13 + (uVar13 >> 3));
        uVar6 = uVar13 + (uVar3 >> 10);
        *param_12 = uVar6;
      }
      param_2 = param_2 + uVar14;
      lVar17 = lVar17 + 1;
    } while (lVar17 != param_5);
  }
  return;
}

