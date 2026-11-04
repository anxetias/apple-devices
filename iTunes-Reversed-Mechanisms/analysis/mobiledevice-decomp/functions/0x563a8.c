// rea decompile_all
// name: _BrotliTransformDictionaryWord
// address: 0x563a8
// body: available
// range: 0x563a8-0x565cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _BrotliTransformDictionaryWord
                (long param_1,long param_2,uint param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  
  uVar18 = (ulong)param_3;
  lVar5 = *(long *)(param_4 + 8);
  lVar10 = *(long *)(param_4 + 0x20);
  lVar8 = (long)param_5;
  lVar6 = lVar8 * 3;
  uVar12 = (ulong)*(ushort *)(*(long *)(param_4 + 0x10) + (ulong)*(byte *)(lVar10 + lVar6) * 2);
  bVar1 = *(byte *)(lVar10 + 1 + lVar6);
  uVar11 = (ulong)*(ushort *)(*(long *)(param_4 + 0x10) + (ulong)*(byte *)(lVar10 + 2 + lVar6) * 2);
  bVar2 = *(byte *)(lVar5 + uVar12);
  if (bVar2 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    do {
      *(undefined1 *)(param_1 + uVar14) = *(undefined1 *)(uVar12 + lVar5 + 1 + uVar14);
      uVar14 = uVar14 + 1;
    } while ((uint)bVar2 != (uint)uVar14);
  }
  if (bVar1 < 10) {
    uVar18 = (ulong)(param_3 - bVar1);
  }
  else if ((byte)(bVar1 - 0xc) < 9) {
    param_2 = param_2 + (ulong)(bVar1 - 0xb);
    uVar18 = (ulong)(param_3 - (bVar1 - 0xb));
  }
  iVar7 = (int)uVar18;
  if (0 < iVar7) {
    uVar12 = 0;
    do {
      *(undefined1 *)(param_1 + (uVar14 & 0xffffffff) + uVar12) = *(undefined1 *)(param_2 + uVar12);
      uVar12 = uVar12 + 1;
    } while (uVar18 != uVar12);
    uVar14 = (ulong)(uint)((int)uVar14 + (int)uVar12);
  }
  iVar13 = (int)uVar14;
  if (bVar1 == 0x14 || bVar1 < 0x14) {
    if (bVar1 == 10) {
      lVar10 = (long)(iVar13 - iVar7);
      bVar1 = *(byte *)(param_1 + lVar10);
      if (bVar1 < 0xc0) {
        if ((byte)(bVar1 + 0x9f) < 0x1a) {
          *(byte *)(param_1 + lVar10) = bVar1 & 0x5f;
        }
      }
      else if (bVar1 < 0xe0) {
        pbVar9 = (byte *)(param_1 + 1 + lVar10);
        *pbVar9 = *pbVar9 ^ 0x20;
      }
      else {
        pbVar9 = (byte *)(param_1 + 2 + lVar10);
        *pbVar9 = *pbVar9 ^ 5;
      }
    }
    else if ((bVar1 == 0xb) && (0 < iVar7)) {
      pbVar9 = (byte *)((iVar13 - iVar7) + param_1);
      do {
        bVar1 = *pbVar9;
        if (bVar1 < 0xc0) {
          uVar17 = 1;
          if ((byte)(bVar1 + 0x9f) < 0x1a) {
            *pbVar9 = bVar1 & 0x5f;
          }
        }
        else if (bVar1 < 0xe0) {
          pbVar9[1] = pbVar9[1] ^ 0x20;
          uVar17 = 2;
        }
        else {
          pbVar9[2] = pbVar9[2] ^ 5;
          uVar17 = 3;
        }
        pbVar9 = pbVar9 + uVar17;
        iVar7 = (int)uVar18;
        uVar15 = iVar7 - uVar17;
        uVar18 = (ulong)uVar15;
      } while (uVar15 != 0 && (int)uVar17 <= iVar7);
    }
  }
  else if (bVar1 == 0x15) {
    _Shift((iVar13 - iVar7) + param_1,uVar18,
           CONCAT11(*(undefined1 *)(*(long *)(param_4 + 0x28) + 1 + (long)(param_5 * 2)),
                    *(undefined1 *)(*(long *)(param_4 + 0x28) + lVar8 * 2)));
  }
  else if ((bVar1 == 0x16) && (0 < iVar7)) {
    uVar3 = *(undefined1 *)(*(long *)(param_4 + 0x28) + lVar8 * 2);
    uVar4 = *(undefined1 *)(*(long *)(param_4 + 0x28) + 1 + (long)(param_5 * 2));
    lVar10 = (iVar13 - iVar7) + param_1;
    do {
      iVar16 = (int)uVar18;
      iVar7 = _Shift(lVar10,uVar18,CONCAT11(uVar4,uVar3));
      lVar10 = lVar10 + iVar7;
      uVar17 = iVar16 - iVar7;
      uVar18 = (ulong)uVar17;
    } while (uVar17 != 0 && iVar7 <= iVar16);
  }
  bVar1 = *(byte *)(lVar5 + uVar11);
  if (bVar1 != 0) {
    lVar10 = 0;
    do {
      *(undefined1 *)(param_1 + (uVar14 & 0xffffffff) + lVar10) =
           *(undefined1 *)(uVar11 + lVar5 + 1 + lVar10);
      lVar10 = lVar10 + 1;
    } while ((uint)bVar1 != (uint)lVar10);
    uVar14 = (ulong)(iVar13 + (uint)lVar10);
  }
  return uVar14 & 0xffffffff;
}

