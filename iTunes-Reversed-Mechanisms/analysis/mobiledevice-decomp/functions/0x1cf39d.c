// rea decompile_all
// name: _ExtendLastCommand
// address: 0x1cf39d
// body: available
// range: 0x1cf39d-0x1cf612 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ExtendLastCommand(long param_1,int *param_2,uint *param_3)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  lVar3 = *(long *)(param_1 + 0x900);
  lVar9 = *(long *)(param_1 + 0x908) * 0x10;
  uVar10 = (1L << (*(byte *)(param_1 + 8) & 0x3f)) - 0x10;
  uVar11 = *(uint *)(lVar3 + -0xc + lVar9);
  uVar13 = uVar11 & 0x1ffffff;
  uVar14 = *(long *)(param_1 + 0x928) - (ulong)uVar13;
  if (uVar10 <= uVar14) {
    uVar14 = uVar10;
  }
  lVar1 = lVar3 + lVar9;
  iVar5 = *(int *)(param_1 + 0x930);
  uVar2 = *(ushort *)(lVar3 + -2 + lVar9);
  uVar12 = uVar2 & 0x3ff;
  uVar8 = *(int *)(param_1 + 0x44) + 0x10;
  if (uVar8 <= uVar12) {
    bVar6 = (byte)*(uint *)(param_1 + 0x40);
    uVar12 = (uVar12 - *(int *)(param_1 + 0x44)) - 0x10;
    uVar12 = uVar8 + (~(-1 << (bVar6 & 0x1f)) & uVar12) +
             (*(int *)(lVar1 + -8) +
              (((uVar12 >> (*(uint *)(param_1 + 0x40) & 0x1f) & 1) != 0) + 2 <<
              ((byte)(uVar2 >> 10) & 0x1f)) + -4 << (bVar6 & 0x1f));
  }
  if ((ulong)(uVar12 - 0xf) == (long)iVar5 || uVar12 < 0x10) {
    if (((ulong)(long)iVar5 <= uVar14) && (*param_2 != 0)) {
      uVar13 = *(uint *)(param_1 + 0x8d4);
      lVar3 = *(long *)(param_1 + 0x8f0);
      uVar8 = *param_3;
      do {
        uVar11 = *(uint *)(lVar1 + -0xc);
        if (*(char *)(lVar3 + (ulong)(uVar8 & uVar13)) !=
            *(char *)(lVar3 + (ulong)(uVar8 - iVar5 & uVar13))) goto LAB_001cf4df;
        *(uint *)(lVar1 + -0xc) = uVar11 + 1;
        *param_2 = *param_2 + -1;
        uVar8 = *param_3 + 1;
        *param_3 = uVar8;
      } while (*param_2 != 0);
      uVar11 = *(uint *)(lVar1 + -0xc);
LAB_001cf4df:
      uVar13 = uVar11 & 0x1ffffff;
    }
    uVar8 = *(uint *)(lVar1 + -0x10);
    uVar13 = (uVar11 >> 0x19) + uVar13;
    uVar11 = uVar8;
    if (5 < (ulong)uVar8) {
      if (uVar8 < 0x82) {
        uVar14 = (ulong)uVar8 - 2;
        uVar11 = 0x1f;
        uVar8 = (uint)uVar14;
        if (uVar8 != 0) {
          for (; uVar8 >> uVar11 == 0; uVar11 = uVar11 - 1) {
          }
        }
        uVar11 = (int)(uVar14 >> ((char)(uVar11 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                 (uVar11 ^ 0xffffffe0) * 2 + 0x40;
      }
      else if (uVar8 < 0x842) {
        uVar11 = 0x1f;
        if (uVar8 - 0x42 != 0) {
          for (; uVar8 - 0x42 >> uVar11 == 0; uVar11 = uVar11 - 1) {
          }
        }
        uVar11 = (uVar11 ^ 0xffe0) + 0x2a;
      }
      else {
        uVar11 = 0x15;
        if (0x1841 < uVar8) {
          uVar11 = (uint)(ushort)(0x17 - (uVar8 < 0x5842));
        }
      }
    }
    if (uVar13 < 10) {
      uVar8 = uVar13 - 2;
    }
    else if (uVar13 < 0x86) {
      uVar8 = 0x1f;
      uVar12 = (uint)((ulong)uVar13 - 6);
      if (uVar12 != 0) {
        for (; uVar12 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      uVar8 = (int)((ulong)uVar13 - 6 >> ((char)(uVar8 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
              (uVar8 ^ 0xffffffe0) * 2 + 0x42;
    }
    else {
      uVar8 = 0x17;
      if (uVar13 < 0x846) {
        uVar8 = 0x1f;
        if (uVar13 - 0x46 != 0) {
          for (; uVar13 - 0x46 >> uVar8 == 0; uVar8 = uVar8 - 1) {
          }
        }
        uVar8 = (uVar8 ^ 0xffe0) + 0x2c;
      }
    }
    uVar4 = (ushort)uVar8;
    uVar7 = (uVar4 & 7) + ((ushort)uVar11 & 7) * 8;
    if ((((uVar2 & 0x3ff) == 0) && ((ushort)uVar11 < 8)) && (uVar4 < 0x10)) {
      if (7 < uVar4) {
        uVar7 = uVar7 | 0x40;
      }
    }
    else {
      iVar5 = ((uVar11 & 0xffff) >> 3) * 3 + ((uVar8 & 0xffff) >> 3);
      uVar7 = uVar7 + ((ushort)(0x520d40 >> ((char)iVar5 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar5 * 0x40 + 0x40;
    }
    *(ushort *)(lVar1 + -4) = uVar7;
  }
  return;
}

