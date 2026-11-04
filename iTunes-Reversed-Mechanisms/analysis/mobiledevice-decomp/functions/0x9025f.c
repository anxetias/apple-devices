// rea decompile_all
// name: _deflate_slow
// address: 0x9025f
// body: available
// range: 0x9025f-0x90752 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _deflate_slow(long *param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  long lVar13;
  int iVar14;
  bool bVar15;
  
  do {
    if (*(uint *)((long)param_1 + 0xa4) < 0x106) {
      _fill_window(param_1);
      uVar10 = *(uint *)((long)param_1 + 0xa4);
      if (param_2 == 0 && uVar10 < 0x106) {
        return '\0';
      }
      if (uVar10 == 0) {
        if ((int)param_1[0x13] != 0) {
          bVar12 = *(byte *)(param_1[10] + (ulong)(*(int *)((long)param_1 + 0x9c) - 1));
          uVar10 = *(uint *)((long)param_1 + 0x16fc);
          *(undefined2 *)(param_1[0x2e0] + (ulong)uVar10 * 2) = 0;
          *(uint *)((long)param_1 + 0x16fc) = uVar10 + 1;
          *(byte *)(param_1[0x2de] + (ulong)uVar10) = bVar12;
          psVar1 = (short *)((long)param_1 + (ulong)bVar12 * 4 + 0xc4);
          *psVar1 = *psVar1 + 1;
          *(undefined4 *)(param_1 + 0x13) = 0;
        }
        uVar7 = param_1[0x11];
        if ((long)uVar7 < 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = (uVar7 & 0xffffffff) + param_1[10];
        }
        __tr_flush_block(param_1,lVar13,*(uint *)((long)param_1 + 0x9c) - uVar7,param_2 == 4);
        param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
        _flush_pending(*param_1);
        if (*(int *)(*param_1 + 0x20) == 0) {
          return (param_2 == 4) * '\x02';
        }
        return (param_2 == 4) * '\x02' + '\x01';
      }
      uVar9 = *(uint *)(param_1 + 0x12);
      uVar8 = (undefined4)param_1[0x14];
      if (2 < uVar10) goto LAB_000902f9;
      *(uint *)(param_1 + 0x15) = uVar9;
      *(undefined4 *)((long)param_1 + 0x94) = uVar8;
      *(undefined4 *)(param_1 + 0x12) = 2;
LAB_000903ad:
      uVar11 = 2;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x12);
      uVar8 = (undefined4)param_1[0x14];
LAB_000902f9:
      uVar10 = *(uint *)((long)param_1 + 0x9c);
      uVar11 = ((uint)*(byte *)(param_1[10] + (ulong)(uVar10 + 2)) ^
               (int)param_1[0xe] << (*(byte *)(param_1 + 0x10) & 0x1f)) &
               *(uint *)((long)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar11;
      lVar13 = param_1[0xd];
      uVar2 = *(ushort *)(lVar13 + (ulong)uVar11 * 2);
      *(ushort *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar10) * 2) = uVar2;
      *(short *)(lVar13 + (ulong)uVar11 * 2) = (short)uVar10;
      *(uint *)(param_1 + 0x15) = uVar9;
      *(undefined4 *)((long)param_1 + 0x94) = uVar8;
      *(undefined4 *)(param_1 + 0x12) = 2;
      if (uVar2 == 0) goto LAB_000903ad;
      uVar11 = 2;
      if ((uVar9 < *(uint *)(param_1 + 0x16)) &&
         (uVar10 - uVar2 <= *(int *)((long)param_1 + 0x44) - 0x106U)) {
        uVar11 = _longest_match(param_1);
        *(uint *)(param_1 + 0x12) = uVar11;
        if ((uVar11 < 6) &&
           (((int)param_1[0x17] == 1 ||
            ((uVar11 == 3 &&
             (uVar11 = 3, 0x1000 < (uint)(*(int *)((long)param_1 + 0x9c) - (int)param_1[0x14])))))))
        {
          *(undefined4 *)(param_1 + 0x12) = 2;
          uVar11 = 2;
        }
      }
      uVar9 = *(uint *)(param_1 + 0x15);
    }
    if ((uVar9 < 3) || (uVar9 < uVar11)) {
      if ((int)param_1[0x13] == 0) {
        *(undefined4 *)(param_1 + 0x13) = 1;
        *(int *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) + 1;
        *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
      }
      else {
        bVar12 = *(byte *)(param_1[10] + (ulong)(*(int *)((long)param_1 + 0x9c) - 1));
        uVar10 = *(uint *)((long)param_1 + 0x16fc);
        *(undefined2 *)(param_1[0x2e0] + (ulong)uVar10 * 2) = 0;
        *(uint *)((long)param_1 + 0x16fc) = uVar10 + 1;
        *(byte *)(param_1[0x2de] + (ulong)uVar10) = bVar12;
        psVar1 = (short *)((long)param_1 + (ulong)bVar12 * 4 + 0xc4);
        *psVar1 = *psVar1 + 1;
        if (*(int *)((long)param_1 + 0x16fc) == (int)param_1[0x2df] + -1) {
          uVar7 = param_1[0x11];
          if ((long)uVar7 < 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = (uVar7 & 0xffffffff) + param_1[10];
          }
          __tr_flush_block(param_1,lVar13,*(uint *)((long)param_1 + 0x9c) - uVar7,0);
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          _flush_pending(*param_1);
        }
        *(int *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) + 1;
        *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
        if (*(int *)(*param_1 + 0x20) == 0) {
          return '\0';
        }
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + 0x94);
      iVar3 = *(int *)((long)param_1 + 0x9c);
      iVar4 = *(int *)((long)param_1 + 0xa4);
      bVar12 = (char)uVar9 - 3;
      uVar9 = *(uint *)((long)param_1 + 0x16fc);
      *(short *)(param_1[0x2e0] + (ulong)uVar9 * 2) = (short)iVar3 + (short)~uVar10;
      *(uint *)((long)param_1 + 0x16fc) = uVar9 + 1;
      *(byte *)(param_1[0x2de] + (ulong)uVar9) = bVar12;
      psVar1 = (short *)((long)param_1 + (ulong)(byte)(&__length_code)[bVar12] * 4 + 0x4c8);
      *psVar1 = *psVar1 + 1;
      uVar9 = (~uVar10 + iVar3) - 1;
      uVar11 = uVar9 & 0xffff;
      uVar10 = (uVar11 >> 7) + 0x100;
      if (uVar11 < 0x100) {
        uVar10 = uVar9;
      }
      psVar1 = (short *)((long)param_1 + (ulong)(byte)(&__dist_code)[uVar10 & 0xffff] * 4 + 0x9b8);
      *psVar1 = *psVar1 + 1;
      iVar5 = *(int *)((long)param_1 + 0x16fc);
      lVar13 = param_1[0x2df];
      iVar14 = (int)param_1[0x15];
      *(int *)((long)param_1 + 0xa4) = (*(int *)((long)param_1 + 0xa4) - iVar14) + 1;
      *(int *)(param_1 + 0x15) = iVar14 + -2;
      iVar14 = iVar14 + -3;
      uVar10 = *(int *)((long)param_1 + 0x9c) + 1;
      do {
        *(uint *)((long)param_1 + 0x9c) = uVar10;
        if (uVar10 <= (iVar3 + iVar4) - 3U) {
          uVar9 = ((uint)*(byte *)(param_1[10] + (ulong)(uVar10 + 2)) ^
                  (int)param_1[0xe] << (*(byte *)(param_1 + 0x10) & 0x1f)) &
                  *(uint *)((long)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar9;
          lVar6 = param_1[0xd];
          *(undefined2 *)(param_1[0xc] + (ulong)(*(uint *)((long)param_1 + 0x4c) & uVar10) * 2) =
               *(undefined2 *)(lVar6 + (ulong)uVar9 * 2);
          *(short *)(lVar6 + (ulong)uVar9 * 2) = (short)uVar10;
        }
        *(int *)(param_1 + 0x15) = iVar14;
        uVar10 = uVar10 + 1;
        bVar15 = iVar14 != 0;
        iVar14 = iVar14 + -1;
      } while (bVar15);
      *(undefined4 *)(param_1 + 0x13) = 0;
      *(undefined4 *)(param_1 + 0x12) = 2;
      *(uint *)((long)param_1 + 0x9c) = uVar10;
      if (iVar5 == (int)lVar13 + -1) {
        uVar7 = param_1[0x11];
        if ((long)uVar7 < 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = (uVar7 & 0xffffffff) + param_1[10];
        }
        __tr_flush_block(param_1,lVar13,uVar10 - uVar7,0);
        param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
        _flush_pending(*param_1);
        if (*(int *)(*param_1 + 0x20) == 0) {
          return '\0';
        }
      }
    }
  } while( true );
}

