// rea decompile_all
// name: _lzfseDecodeV1
// address: 0x1d9695
// body: available
// range: 0x1d9695-0x1d987b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _lzfseDecodeV1(undefined4 *param_1,long param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  
  ___bzero(param_1,0x304);
  uVar2 = *(ulong *)(param_2 + 8);
  uVar3 = *(ulong *)(param_2 + 0x10);
  uVar4 = *(ulong *)(param_2 + 0x18);
  *param_1 = 0x31787662;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[3] = (uint)uVar2 & 0xfffff;
  uVar6 = (uint)(uVar2 >> 0x14) & 0xfffff;
  param_1[5] = uVar6;
  uVar11 = (uint)(uVar2 >> 0x20);
  uVar2 = (ulong)DAT_0032b340;
  param_1[7] = (uVar11 >> 0x1c & 7) - 7;
  *(ulong *)(param_1 + 8) =
       (uVar3 & 0xffff | (uVar3 >> 10 & 0xffff) << 0x10 | (uVar3 >> 0x14 & 0xfff) << 0x20 |
       (uVar3 >> 0x1e) << 0x30) & uVar2;
  param_1[4] = uVar11 >> 8 & 0xfffff;
  uVar11 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar11 >> 8 & 0xfffff;
  param_1[6] = uVar9;
  param_1[10] = (uVar11 >> 0x1c & 7) - 7;
  *(ushort *)(param_1 + 0xb) = (ushort)(uVar4 >> 0x20) & 0x3ff;
  *(ushort *)((long)param_1 + 0x2e) = (ushort)(uint)(uVar4 >> 0x2a) & 0x3ff;
  *(ushort *)(param_1 + 0xc) = (ushort)(uVar4 >> 0x34) & 0x3ff;
  param_1[2] = uVar9 + uVar6;
  pbVar7 = (byte *)((uVar4 & 0xffffffff) + param_2);
  iVar13 = 0;
  if (((uint)uVar4 != 0x20) && (iVar13 = -1, pbVar7 <= param_3 && 0x1f < (uint)uVar4)) {
    pbVar8 = (byte *)(param_2 + 0x20);
    lVar10 = 0;
    iVar13 = 0;
    uVar11 = 0;
    do {
      iVar12 = iVar13;
      if ((pbVar8 < pbVar7) && (iVar13 < 0x19)) {
        do {
          iVar12 = iVar13 + 8;
          uVar11 = (uint)*pbVar8 << ((byte)iVar13 & 0x1f) | uVar11;
          pbVar8 = pbVar8 + 1;
          if (pbVar7 <= pbVar8) break;
          bVar5 = iVar13 < 0x11;
          iVar13 = iVar12;
        } while (bVar5);
      }
      bVar1 = (&_lzfse_freq_nbits_table)[uVar11 & 0x1f];
      if (bVar1 == 0xe) {
        sVar14 = ((ushort)(uVar11 >> 4) & 0x3ff) + 0x18;
      }
      else if (bVar1 == 8) {
        sVar14 = ((ushort)(uVar11 >> 4) & 0xf) + 8;
      }
      else {
        sVar14 = (short)(char)(&_lzfse_freq_value_table)[uVar11 & 0x1f];
      }
      *(short *)((long)param_1 + lVar10 * 2 + 0x32) = sVar14;
      iVar13 = iVar12 - (char)bVar1;
      if (iVar12 < (char)bVar1) {
        return -1;
      }
      uVar11 = uVar11 >> (bVar1 & 0x1f);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x168);
    iVar13 = -(uint)(pbVar8 != pbVar7 || 7 < iVar13);
  }
                    /* WARNING: Read-only address (ram,0x0032b340) is written */
  return iVar13;
}

