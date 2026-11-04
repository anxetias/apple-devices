// rea decompile_all
// name: _send_tree
// address: 0x83b68
// body: available
// range: 0x83b68-0x84069 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _send_tree(long param_1,long param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ushort uVar15;
  
  if (-1 < param_3) {
    uVar1 = *(ushort *)(param_2 + 2);
    uVar4 = 7;
    if (uVar1 == 0) {
      uVar4 = 0x8a;
    }
    iVar6 = (uVar1 != 0) + 3;
    uVar12 = 0;
    uVar14 = 0xffffffff;
    uVar10 = (uint)uVar1;
    iVar7 = 0;
    do {
      uVar13 = (ulong)uVar10;
      uVar1 = *(ushort *)(param_2 + 6 + uVar12 * 4);
      uVar11 = (uint)uVar1;
      iVar8 = iVar7 + 1;
      if (((int)uVar4 <= iVar8) || (uVar10 != uVar11)) {
        if (iVar8 < iVar6) {
          iVar7 = *(int *)(param_1 + 0x1724);
          do {
            uVar2 = *(ushort *)(param_1 + 0xaae + uVar13 * 4);
            uVar3 = *(ushort *)(param_1 + 0xaac + uVar13 * 4);
            uVar15 = uVar3 << ((byte)iVar7 & 0x1f) | *(ushort *)(param_1 + 0x1720);
            *(ushort *)(param_1 + 0x1720) = uVar15;
            if ((int)(0x10 - (uint)uVar2) < iVar7) {
              uVar4 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar4 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = (char)uVar15;
              uVar4 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar4 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) =
                   *(undefined1 *)(param_1 + 0x1721);
              *(ushort *)(param_1 + 0x1720) =
                   uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
              iVar7 = (uint)uVar2 + *(int *)(param_1 + 0x1724) + -0x10;
            }
            else {
              iVar7 = iVar7 + (uint)uVar2;
            }
            *(int *)(param_1 + 0x1724) = iVar7;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x1724);
          bVar5 = (byte)iVar6;
          if (uVar10 == 0) {
            if (iVar7 < 10) {
              uVar2 = *(ushort *)(param_1 + 0xaf2);
              uVar3 = *(ushort *)(param_1 + 0xaf0);
              uVar4 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar3 << (bVar5 & 0x1f);
              if ((int)(0x10 - (uint)uVar2) < iVar6) {
                *(short *)(param_1 + 0x1720) = (short)uVar4;
                uVar14 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar14 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar14) = (char)uVar4;
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) =
                     *(undefined1 *)(param_1 + 0x1721);
                iVar6 = *(int *)(param_1 + 0x1724) + (uint)uVar2 + -0x10;
                uVar4 = (uint)(uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f));
              }
              else {
                iVar6 = iVar6 + (uint)uVar2;
              }
              *(int *)(param_1 + 0x1724) = iVar6;
              uVar14 = iVar7 + 0xfffe;
              if (iVar6 < 0xe) {
                *(ushort *)(param_1 + 0x1720) =
                     (ushort)uVar4 | (ushort)(uVar14 << ((byte)iVar6 & 0x1f));
                iVar6 = iVar6 + 3;
              }
              else {
                uVar4 = uVar4 | uVar14 << ((byte)iVar6 & 0x1f);
                *(short *)(param_1 + 0x1720) = (short)uVar4;
                uVar9 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar9 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar4;
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) =
                     *(undefined1 *)(param_1 + 0x1721);
                *(short *)(param_1 + 0x1720) =
                     (short)((uVar14 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f))
                ;
                iVar6 = *(int *)(param_1 + 0x1724) + -0xd;
              }
            }
            else {
              uVar2 = *(ushort *)(param_1 + 0xaf6);
              uVar3 = *(ushort *)(param_1 + 0xaf4);
              uVar4 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar3 << (bVar5 & 0x1f);
              if ((int)(0x10 - (uint)uVar2) < iVar6) {
                *(short *)(param_1 + 0x1720) = (short)uVar4;
                uVar14 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar14 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar14) = (char)uVar4;
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) =
                     *(undefined1 *)(param_1 + 0x1721);
                iVar6 = *(int *)(param_1 + 0x1724) + (uint)uVar2 + -0x10;
                uVar4 = (uint)(uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f));
              }
              else {
                iVar6 = iVar6 + (uint)uVar2;
              }
              *(int *)(param_1 + 0x1724) = iVar6;
              uVar14 = iVar7 + 0xfff6;
              if (iVar6 < 10) {
                *(ushort *)(param_1 + 0x1720) =
                     (ushort)uVar4 | (ushort)(uVar14 << ((byte)iVar6 & 0x1f));
                iVar6 = iVar6 + 7;
              }
              else {
                uVar4 = uVar4 | uVar14 << ((byte)iVar6 & 0x1f);
                *(short *)(param_1 + 0x1720) = (short)uVar4;
                uVar9 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar9 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar4;
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) =
                     *(undefined1 *)(param_1 + 0x1721);
                *(short *)(param_1 + 0x1720) =
                     (short)((uVar14 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f))
                ;
                iVar6 = *(int *)(param_1 + 0x1724) + -9;
              }
            }
          }
          else {
            if (uVar10 != uVar14) {
              uVar2 = *(ushort *)(param_1 + 0xaae + uVar13 * 4);
              uVar3 = *(ushort *)(param_1 + 0xaac + uVar13 * 4);
              uVar15 = uVar3 << (bVar5 & 0x1f) | *(ushort *)(param_1 + 0x1720);
              *(ushort *)(param_1 + 0x1720) = uVar15;
              if ((int)(0x10 - (uint)uVar2) < iVar6) {
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = (char)uVar15;
                uVar4 = *(uint *)(param_1 + 0x28);
                *(uint *)(param_1 + 0x28) = uVar4 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) =
                     *(undefined1 *)(param_1 + 0x1721);
                *(ushort *)(param_1 + 0x1720) =
                     uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
                iVar6 = *(int *)(param_1 + 0x1724) + (uint)uVar2 + -0x10;
              }
              else {
                iVar6 = iVar6 + (uint)uVar2;
              }
              *(int *)(param_1 + 0x1724) = iVar6;
              iVar8 = iVar7;
            }
            uVar2 = *(ushort *)(param_1 + 0xaee);
            uVar3 = *(ushort *)(param_1 + 0xaec);
            uVar15 = uVar3 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x1720);
            if ((int)(0x10 - (uint)uVar2) < iVar6) {
              *(ushort *)(param_1 + 0x1720) = uVar15;
              uVar4 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar4 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) = (char)uVar15;
              uVar4 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar4 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4) =
                   *(undefined1 *)(param_1 + 0x1721);
              uVar15 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f);
              iVar6 = *(int *)(param_1 + 0x1724) + (uint)uVar2 + -0x10;
            }
            else {
              iVar6 = iVar6 + (uint)uVar2;
            }
            *(int *)(param_1 + 0x1724) = iVar6;
            uVar4 = iVar8 + 0xfffd;
            if (iVar6 < 0xf) {
              *(ushort *)(param_1 + 0x1720) = uVar15 | (ushort)(uVar4 << ((byte)iVar6 & 0x1f));
              iVar6 = iVar6 + 2;
            }
            else {
              uVar9 = (uint)uVar15 | uVar4 << ((byte)iVar6 & 0x1f);
              *(short *)(param_1 + 0x1720) = (short)uVar9;
              uVar14 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar14 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar14) = (char)uVar9;
              uVar14 = *(uint *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = uVar14 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar14) =
                   *(undefined1 *)(param_1 + 0x1721);
              *(short *)(param_1 + 0x1720) =
                   (short)((uVar4 & 0xffff) >> (0x10U - (char)*(int *)(param_1 + 0x1724) & 0x1f));
              iVar6 = *(int *)(param_1 + 0x1724) + -0xe;
            }
          }
          *(int *)(param_1 + 0x1724) = iVar6;
        }
        iVar8 = 0;
        uVar14 = uVar10;
        if (uVar1 == 0) {
          uVar4 = 0x8a;
          iVar6 = 3;
        }
        else {
          iVar6 = 4 - (uint)(uVar10 == uVar11);
          uVar4 = uVar10 == uVar11 ^ 7;
          iVar8 = 0;
        }
      }
      uVar12 = uVar12 + 1;
      uVar10 = uVar11;
      iVar7 = iVar8;
    } while (uVar12 != param_3 + 1);
  }
  return;
}

