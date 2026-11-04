// rea decompile_all
// name: _deflate_rle
// address: 0x8f793
// body: available
// range: 0x8f793-0x8fae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _deflate_rle(long *param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  do {
    uVar6 = *(uint *)((long)param_1 + 0xa4);
    if (uVar6 < 0x102) {
      _fill_window(param_1);
      uVar6 = *(uint *)((long)param_1 + 0xa4);
      if (param_2 == 0 && uVar6 < 0x102) {
        return '\0';
      }
      if (uVar6 == 0) {
        uVar8 = param_1[0x11];
        if ((long)uVar8 < 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (uVar8 & 0xffffffff) + param_1[10];
        }
        __tr_flush_block(param_1,lVar12,*(uint *)((long)param_1 + 0x9c) - uVar8,param_2 == 4);
        param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
        _flush_pending(*param_1);
        if (*(int *)(*param_1 + 0x20) != 0) {
          return (param_2 == 4) * '\x02' + '\x01';
        }
        return (param_2 == 4) * '\x02';
      }
      *(undefined4 *)(param_1 + 0x12) = 0;
      uVar5 = *(uint *)((long)param_1 + 0x9c);
      if (2 < uVar6) goto LAB_0008f816;
LAB_0008f8c4:
      uVar6 = *(uint *)((long)param_1 + 0x16fc);
LAB_0008f8cb:
      bVar9 = *(byte *)(param_1[10] + (ulong)uVar5);
      *(undefined2 *)(param_1[0x2e0] + (ulong)uVar6 * 2) = 0;
      *(uint *)((long)param_1 + 0x16fc) = uVar6 + 1;
      *(byte *)(param_1[0x2de] + (ulong)uVar6) = bVar9;
      psVar3 = (short *)((long)param_1 + (ulong)bVar9 * 4 + 0xc4);
      *psVar3 = *psVar3 + 1;
      iVar7 = *(int *)((long)param_1 + 0x16fc);
      iVar10 = (int)param_1[0x2df];
      *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
      uVar6 = *(int *)((long)param_1 + 0x9c) + 1;
      *(uint *)((long)param_1 + 0x9c) = uVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x12) = 0;
      uVar5 = *(uint *)((long)param_1 + 0x9c);
LAB_0008f816:
      if (uVar5 == 0) goto LAB_0008f8c4;
      lVar12 = param_1[10];
      uVar8 = (ulong)uVar5;
      cVar4 = *(char *)(lVar12 + -1 + uVar8);
      if (((cVar4 != *(char *)(lVar12 + uVar8)) ||
          (lVar12 = lVar12 + uVar8, cVar4 != *(char *)(lVar12 + 1))) ||
         (cVar4 != *(char *)(lVar12 + 2))) goto LAB_0008f8c4;
      iVar7 = (int)lVar12;
      lVar13 = 0;
      do {
        iVar10 = (int)lVar13;
        if (cVar4 != *(char *)(lVar12 + 3 + lVar13)) {
          iVar10 = iVar7 + iVar10 + 3;
          goto LAB_0008f9bc;
        }
        if (cVar4 != *(char *)(lVar12 + 4 + lVar13)) {
          iVar10 = iVar7 + iVar10 + 4;
          goto LAB_0008f9bc;
        }
        if (cVar4 != *(char *)(lVar12 + 5 + lVar13)) {
          iVar10 = iVar7 + iVar10 + 5;
          goto LAB_0008f9bc;
        }
        if (cVar4 != *(char *)(lVar12 + 6 + lVar13)) {
          iVar10 = iVar7 + iVar10 + 6;
          goto LAB_0008f9bc;
        }
        if (cVar4 != *(char *)(lVar12 + 7 + lVar13)) {
          iVar10 = iVar7 + iVar10 + 7;
          goto LAB_0008f9bc;
        }
        if (cVar4 != *(char *)(lVar12 + 8 + lVar13)) {
          iVar10 = iVar7 + iVar10 + 8;
          goto LAB_0008f9bc;
        }
        if (cVar4 != *(char *)(lVar12 + 9 + lVar13)) {
          iVar10 = iVar7 + iVar10 + 9;
          goto LAB_0008f9bc;
        }
        lVar1 = lVar13 + 8;
      } while ((lVar13 + 2U < 0xfa) &&
              (pcVar2 = (char *)(lVar12 + 10 + lVar13), lVar13 = lVar1, cVar4 == *pcVar2));
      iVar10 = iVar7 + (int)lVar1 + 2;
LAB_0008f9bc:
      uVar11 = (iVar10 - (iVar7 + 0x102)) + 0x102;
      if (uVar6 <= uVar11) {
        uVar11 = uVar6;
      }
      *(uint *)(param_1 + 0x12) = uVar11;
      uVar6 = *(uint *)((long)param_1 + 0x16fc);
      if (uVar11 < 3) goto LAB_0008f8cb;
      bVar9 = (char)uVar11 - 3;
      *(undefined2 *)(param_1[0x2e0] + (ulong)uVar6 * 2) = 1;
      *(uint *)((long)param_1 + 0x16fc) = uVar6 + 1;
      *(byte *)(param_1[0x2de] + (ulong)uVar6) = bVar9;
      psVar3 = (short *)((long)param_1 + (ulong)(byte)(&__length_code)[bVar9] * 4 + 0x4c8);
      *psVar3 = *psVar3 + 1;
      *(short *)(param_1 + 0x137) = (short)param_1[0x137] + 1;
      iVar7 = *(int *)((long)param_1 + 0x16fc);
      iVar10 = (int)param_1[0x2df];
      *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) - (int)param_1[0x12];
      uVar6 = (int)param_1[0x12] + *(int *)((long)param_1 + 0x9c);
      *(uint *)((long)param_1 + 0x9c) = uVar6;
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
    if (iVar7 == iVar10 + -1) {
      uVar8 = param_1[0x11];
      if ((long)uVar8 < 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (uVar8 & 0xffffffff) + param_1[10];
      }
      __tr_flush_block(param_1,lVar12,uVar6 - uVar8,0);
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      _flush_pending(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return '\0';
      }
    }
  } while( true );
}

