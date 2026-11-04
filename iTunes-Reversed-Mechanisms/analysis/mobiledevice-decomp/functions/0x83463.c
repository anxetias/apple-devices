// rea decompile_all
// name: _compress_block
// address: 0x83463
// body: available
// range: 0x83463-0x8388b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _compress_block(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ushort uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 0x16fc) == 0) {
    iVar6 = *(int *)(param_1 + 0x1724);
  }
  else {
    uVar5 = 0;
    do {
      uVar2 = *(ushort *)(*(long *)(param_1 + 0x1700) + uVar5 * 2);
      bVar1 = *(byte *)(*(long *)(param_1 + 0x16f0) + uVar5);
      uVar8 = (ulong)bVar1;
      if (uVar2 == 0) {
        uVar2 = *(ushort *)(param_2 + 2 + uVar8 * 4);
        iVar6 = *(int *)(param_1 + 0x1724);
        uVar3 = *(ushort *)(param_2 + uVar8 * 4);
        uVar7 = uVar3 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x1720);
        *(ushort *)(param_1 + 0x1720) = uVar7;
        if ((int)(0x10 - (uint)uVar2) < iVar6) {
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar7;
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
               *(undefined1 *)(param_1 + 0x1721);
          *(ushort *)(param_1 + 0x1720) = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f)
          ;
          iVar6 = (uint)uVar2 + *(int *)(param_1 + 0x1724) + -0x10;
        }
        else {
          iVar6 = iVar6 + (uint)uVar2;
        }
LAB_000837cd:
        *(int *)(param_1 + 0x1724) = iVar6;
      }
      else {
        uVar8 = (ulong)(byte)(&__length_code)[uVar8];
        uVar3 = *(ushort *)(param_2 + 0x406 + uVar8 * 4);
        iVar6 = *(int *)(param_1 + 0x1724);
        uVar7 = *(ushort *)(param_2 + 0x404 + uVar8 * 4);
        uVar11 = uVar7 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x1720);
        *(ushort *)(param_1 + 0x1720) = uVar11;
        if ((int)(0x10 - (uint)uVar3) < iVar6) {
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar11;
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar11 = uVar7 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
          *(ushort *)(param_1 + 0x1720) = uVar11;
          iVar6 = (uint)uVar3 + *(int *)(param_1 + 0x1724) + -0x10;
        }
        else {
          iVar6 = iVar6 + (uint)uVar3;
        }
        uVar12 = (uint)uVar11;
        *(int *)(param_1 + 0x1724) = iVar6;
        if (0xffffffffffffffeb < uVar8 - 0x1c) {
          uVar9 = (uint)bVar1 - *(int *)(&_base_length + uVar8 * 4);
          iVar4 = *(int *)(&_extra_lbits + uVar8 * 4);
          if (0x10 - iVar4 < iVar6) {
            uVar12 = uVar12 | uVar9 << ((byte)iVar6 & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar12;
            uVar10 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar10 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) = (char)uVar12;
            uVar12 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar12 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar12 = (uVar9 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar12;
            iVar6 = iVar4 + *(int *)(param_1 + 0x1724) + -0x10;
          }
          else {
            uVar12 = uVar12 | uVar9 << ((byte)iVar6 & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar12;
            iVar6 = iVar4 + iVar6;
          }
          *(int *)(param_1 + 0x1724) = iVar6;
        }
        uVar10 = uVar2 - 1;
        uVar9 = (uVar10 >> 7) + 0x100;
        if (uVar2 < 0x101) {
          uVar9 = uVar10;
        }
        bVar1 = (&__dist_code)[uVar9];
        uVar8 = (ulong)bVar1;
        uVar2 = *(ushort *)(param_3 + 2 + uVar8 * 4);
        uVar3 = *(ushort *)(param_3 + uVar8 * 4);
        uVar12 = uVar12 | (uint)uVar3 << ((byte)iVar6 & 0x1f);
        *(short *)(param_1 + 0x1720) = (short)uVar12;
        if ((int)(0x10 - (uint)uVar2) < iVar6) {
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar12;
          uVar12 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar12 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar3 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
          *(ushort *)(param_1 + 0x1720) = uVar3;
          iVar6 = (uint)uVar2 + *(int *)(param_1 + 0x1724) + -0x10;
          uVar12 = (uint)uVar3;
        }
        else {
          iVar6 = iVar6 + (uint)uVar2;
        }
        *(int *)(param_1 + 0x1724) = iVar6;
        if (3 < bVar1) {
          uVar10 = uVar10 - *(int *)(&_base_dist + uVar8 * 4);
          iVar4 = *(int *)(&_extra_dbits + uVar8 * 4);
          if (0x10 - iVar4 < iVar6) {
            uVar12 = uVar12 | uVar10 << ((byte)iVar6 & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar12;
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar12;
            uVar12 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar12 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) =
                 *(undefined1 *)(param_1 + 0x1721);
            *(short *)(param_1 + 0x1720) =
                 (short)((uVar10 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f));
            iVar6 = iVar4 + *(int *)(param_1 + 0x1724) + -0x10;
          }
          else {
            *(ushort *)(param_1 + 0x1720) =
                 (ushort)uVar12 | (ushort)(uVar10 << ((byte)iVar6 & 0x1f));
            iVar6 = iVar4 + iVar6;
          }
          goto LAB_000837cd;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x16fc));
  }
  uVar2 = *(ushort *)(param_2 + 0x402);
  uVar3 = *(ushort *)(param_2 + 0x400);
  uVar7 = uVar3 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x1720);
  *(ushort *)(param_1 + 0x1720) = uVar7;
  if ((int)(0x10 - (uint)uVar2) < iVar6) {
    uVar12 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar12 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = (char)uVar7;
    uVar12 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar12 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar12) = *(undefined1 *)(param_1 + 0x1721);
    *(ushort *)(param_1 + 0x1720) = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
    iVar6 = (uint)uVar2 + *(int *)(param_1 + 0x1724) + -0x10;
  }
  else {
    iVar6 = iVar6 + (uint)uVar2;
  }
  *(int *)(param_1 + 0x1724) = iVar6;
  *(uint *)(param_1 + 0x171c) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}

