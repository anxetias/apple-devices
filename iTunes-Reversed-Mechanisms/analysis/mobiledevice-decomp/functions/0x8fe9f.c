// rea decompile_all
// name: _deflate_fast
// address: 0x8fe9f
// body: available
// range: 0x8fe9f-0x9025e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _deflate_fast(long *param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
LAB_0008febc:
  do {
    if (*(uint *)((long)param_1 + 0xa4) < 0x106) {
      _fill_window(param_1);
      uVar9 = *(uint *)((long)param_1 + 0xa4);
      if (param_2 == 0 && uVar9 < 0x106) {
        return '\0';
      }
      if (uVar9 == 0) {
        uVar10 = param_1[0x11];
        if ((long)uVar10 < 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = (uVar10 & 0xffffffff) + param_1[10];
        }
        __tr_flush_block(param_1,lVar14,*(uint *)((long)param_1 + 0x9c) - uVar10,param_2 == 4);
        param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
        _flush_pending(*param_1);
        if (*(int *)(*param_1 + 0x20) != 0) {
          return (param_2 == 4) * '\x02' + '\x01';
        }
        return (param_2 == 4) * '\x02';
      }
      if (2 < uVar9) goto LAB_0008fefb;
LAB_0008ff51:
      uVar9 = *(uint *)(param_1 + 0x12);
    }
    else {
LAB_0008fefb:
      uVar9 = *(uint *)((long)param_1 + 0x9c);
      uVar11 = ((uint)*(byte *)(param_1[10] + (ulong)(uVar9 + 2)) ^
               (int)param_1[0xe] << (*(byte *)(param_1 + 0x10) & 0x1f)) &
               *(uint *)((long)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar11;
      lVar14 = param_1[0xd];
      uVar2 = *(ushort *)(lVar14 + (ulong)uVar11 * 2);
      *(ushort *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar9) * 2) = uVar2;
      *(short *)(lVar14 + (ulong)uVar11 * 2) = (short)uVar9;
      if ((uVar2 == 0) || (*(int *)((long)param_1 + 0x44) - 0x106U < uVar9 - uVar2))
      goto LAB_0008ff51;
      uVar9 = _longest_match(param_1);
      *(uint *)(param_1 + 0x12) = uVar9;
    }
    if (uVar9 < 3) {
      bVar8 = *(byte *)(param_1[10] + (ulong)*(uint *)((long)param_1 + 0x9c));
      uVar9 = *(uint *)((long)param_1 + 0x16fc);
      *(undefined2 *)(param_1[0x2e0] + (ulong)uVar9 * 2) = 0;
      *(uint *)((long)param_1 + 0x16fc) = uVar9 + 1;
      *(byte *)(param_1[0x2de] + (ulong)uVar9) = bVar8;
      psVar1 = (short *)((long)param_1 + (ulong)bVar8 * 4 + 0xc4);
      *psVar1 = *psVar1 + 1;
      *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
      uVar9 = *(int *)((long)param_1 + 0x9c) + 1;
      uVar10 = (ulong)uVar9;
      *(uint *)((long)param_1 + 0x9c) = uVar9;
      if (*(int *)((long)param_1 + 0x16fc) != (int)param_1[0x2df] + -1) goto LAB_0008febc;
    }
    else {
      bVar8 = (char)uVar9 - 3;
      iVar12 = *(int *)((long)param_1 + 0x9c) - (int)param_1[0x14];
      uVar9 = *(uint *)((long)param_1 + 0x16fc);
      *(short *)(param_1[0x2e0] + (ulong)uVar9 * 2) = (short)iVar12;
      *(uint *)((long)param_1 + 0x16fc) = uVar9 + 1;
      *(byte *)(param_1[0x2de] + (ulong)uVar9) = bVar8;
      uVar13 = iVar12 - 1;
      psVar1 = (short *)((long)param_1 + (ulong)(byte)(&__length_code)[bVar8] * 4 + 0x4c8);
      *psVar1 = *psVar1 + 1;
      uVar11 = uVar13 & 0xffff;
      uVar9 = (uVar11 >> 7) + 0x100;
      if (uVar11 < 0x100) {
        uVar9 = uVar13;
      }
      psVar1 = (short *)((long)param_1 + (ulong)(byte)(&__dist_code)[uVar9 & 0xffff] * 4 + 0x9b8);
      *psVar1 = *psVar1 + 1;
      iVar12 = *(int *)((long)param_1 + 0x16fc);
      lVar14 = param_1[0x2df];
      uVar9 = *(uint *)(param_1 + 0x12);
      uVar11 = *(int *)((long)param_1 + 0xa4) - uVar9;
      *(uint *)((long)param_1 + 0xa4) = uVar11;
      if (uVar11 < 3 || *(uint *)(param_1 + 0x16) < uVar9) {
        iVar15 = *(int *)((long)param_1 + 0x9c);
        uVar11 = iVar15 + uVar9;
        uVar10 = (ulong)uVar11;
        *(uint *)((long)param_1 + 0x9c) = uVar11;
        *(undefined4 *)(param_1 + 0x12) = 0;
        uVar11 = (uint)*(byte *)(param_1[10] + uVar10);
        *(uint *)(param_1 + 0xe) = uVar11;
        *(uint *)(param_1 + 0xe) =
             ((uint)*(byte *)(param_1[10] + (ulong)(iVar15 + uVar9 + 1)) ^
             uVar11 << (*(byte *)(param_1 + 0x10) & 0x1f)) & *(uint *)((long)param_1 + 0x7c);
      }
      else {
        *(uint *)(param_1 + 0x12) = uVar9 - 1;
        lVar7 = param_1[0x10];
        lVar3 = param_1[10];
        uVar11 = *(uint *)((long)param_1 + 0x7c);
        lVar4 = param_1[0xd];
        lVar5 = param_1[0xc];
        uVar13 = *(uint *)((long)param_1 + 0x4c);
        uVar16 = *(uint *)(param_1 + 0xe);
        iVar15 = uVar9 - 2;
        uVar10 = (ulong)(*(int *)((long)param_1 + 0x9c) + 1);
        do {
          uVar9 = (uint)uVar10;
          *(uint *)((long)param_1 + 0x9c) = uVar9;
          uVar16 = ((uint)*(byte *)(lVar3 + (ulong)(uVar9 + 2)) ^
                   uVar16 << ((byte)(int)lVar7 & 0x1f)) & uVar11;
          *(uint *)(param_1 + 0xe) = uVar16;
          *(undefined2 *)(lVar5 + (ulong)(uVar13 & uVar9) * 2) =
               *(undefined2 *)(lVar4 + (ulong)uVar16 * 2);
          *(short *)(lVar4 + (ulong)uVar16 * 2) = (short)uVar10;
          *(int *)(param_1 + 0x12) = iVar15;
          uVar10 = (ulong)(uVar9 + 1);
          bVar17 = iVar15 != 0;
          iVar15 = iVar15 + -1;
        } while (bVar17);
        *(uint *)((long)param_1 + 0x9c) = uVar9 + 1;
      }
      if (iVar12 != (int)lVar14 + -1) goto LAB_0008febc;
    }
    uVar6 = param_1[0x11];
    if ((long)uVar6 < 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (uVar6 & 0xffffffff) + param_1[10];
    }
    __tr_flush_block(param_1,lVar14,uVar10 - uVar6,0);
    param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
    _flush_pending(*param_1);
    if (*(int *)(*param_1 + 0x20) == 0) {
      return '\0';
    }
  } while( true );
}

