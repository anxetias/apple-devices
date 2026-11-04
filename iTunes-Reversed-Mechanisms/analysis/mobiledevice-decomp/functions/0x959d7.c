// rea decompile_all
// name: _BrotliBuildHuffmanTable
// address: 0x959d7
// body: available
// range: 0x959d7-0x95c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _BrotliBuildHuffmanTable(void *param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  short *psVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  void *pvVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  ulong local_40;
  uint local_38;
  int local_34;
  
  lVar12 = -1;
  do {
    lVar23 = lVar12;
    lVar12 = lVar23 + -1;
  } while (*(short *)(param_3 + lVar23 * 2) == -1);
  bVar8 = (byte)param_2;
  iVar10 = 1 << (bVar8 & 0x1f);
  uVar13 = (uint)(lVar23 + 0x10);
  iVar20 = 1 << ((byte)(lVar23 + 0x10) & 0x1f);
  uVar9 = uVar13;
  if ((int)param_2 <= (int)uVar13) {
    iVar20 = iVar10;
    uVar9 = param_2;
  }
  iVar22 = 2;
  uVar11 = 0x80;
  lVar23 = 0;
  lVar12 = 1;
  do {
    uVar6 = *(ushort *)(param_4 + lVar12 * 2);
    uVar14 = (uint)uVar6;
    if (uVar6 != 0) {
      uVar17 = (uint)lVar12 - 0x10;
      do {
        uVar17 = (uint)*(ushort *)(param_3 + (long)(int)uVar17 * 2);
        bVar5 = (&_kReverseBits)[lVar23];
        iVar19 = iVar20;
        do {
          iVar2 = iVar19 - iVar22;
          iVar19 = iVar19 - iVar22;
          *(uint *)((long)param_1 + (long)iVar2 * 4 + (ulong)bVar5 * 4) =
               uVar17 << 0x10 | (uint)lVar12;
        } while (0 < iVar19);
        lVar23 = lVar23 + uVar11;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar22 = iVar22 * 2;
    uVar11 = uVar11 >> 1;
    bVar7 = lVar12 < (int)uVar9;
    lVar12 = lVar12 + 1;
  } while (bVar7);
  for (; iVar10 != iVar20; iVar20 = iVar20 * 2) {
    _memcpy((void *)((long)param_1 + (long)iVar20 * 4),param_1,(long)iVar20 * 4);
  }
  local_40 = 0x80;
  local_34 = iVar10;
  if ((int)param_2 < (int)uVar13) {
    lVar16 = 0x100;
    iVar20 = 2;
    lVar12 = (long)(int)param_2;
    pvVar18 = param_1;
    local_38 = param_2;
    do {
      local_38 = local_38 + 1;
      lVar1 = lVar12 + 1;
      if (*(short *)(param_4 + 2 + lVar12 * 2) != 0) {
        uVar9 = (uint)lVar1 - param_2;
        uVar14 = (int)lVar12 - 0xf;
        do {
          if (lVar16 == 0x100) {
            lVar16 = lVar12;
            iVar22 = 1 << ((byte)uVar9 & 0x1f);
            uVar17 = local_38;
            uVar15 = (uint)lVar1;
            if (lVar12 < 0xe) {
              do {
                uVar21 = (uint)*(ushort *)(param_4 + 2 + lVar16 * 2);
                iVar19 = iVar22 - uVar21;
                uVar15 = uVar17;
                if (iVar19 == 0 || iVar22 < (int)uVar21) goto LAB_00095ba6;
                lVar16 = lVar16 + 1;
                iVar22 = iVar19 * 2;
                uVar17 = uVar17 + 1;
              } while (lVar16 < 0xe);
              uVar15 = 0xf;
            }
LAB_00095ba6:
            pvVar18 = (void *)((long)pvVar18 + (long)iVar10 * 4);
            iVar10 = 1 << ((char)uVar15 - bVar8 & 0x1f);
            local_34 = local_34 + iVar10;
            pbVar3 = &_kReverseBits + lVar23;
            lVar23 = lVar23 + (0x80UL >> (bVar8 - 1 & 0x3f));
            *(uint *)((long)param_1 + (ulong)*pbVar3 * 4) =
                 uVar15 & 0xff |
                 (((uint)((int)pvVar18 - (int)param_1) >> 2) - (uint)*pbVar3) * 0x10000;
            lVar16 = 0;
          }
          uVar14 = (uint)*(ushort *)(param_3 + (long)(int)uVar14 * 2);
          bVar5 = (&_kReverseBits)[lVar16];
          iVar22 = iVar10;
          do {
            iVar19 = iVar22 - iVar20;
            iVar22 = iVar22 - iVar20;
            *(uint *)((long)pvVar18 + (long)iVar19 * 4 + (ulong)bVar5 * 4) =
                 uVar14 * 0x10000 + (uVar9 & 0xff);
          } while (0 < iVar22);
          lVar16 = lVar16 + local_40;
          psVar4 = (short *)(param_4 + lVar1 * 2);
          *psVar4 = *psVar4 + -1;
        } while (*psVar4 != 0);
      }
      iVar20 = iVar20 * 2;
      local_40 = local_40 >> 1;
      lVar12 = lVar1;
    } while (lVar1 < (int)uVar13);
  }
  return local_34;
}

