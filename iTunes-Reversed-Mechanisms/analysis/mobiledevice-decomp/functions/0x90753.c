// rea decompile_all
// name: _fill_window
// address: 0x90753
// body: available
// range: 0x90753-0x909b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fill_window(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint len;
  uint uVar4;
  ushort *puVar5;
  uLong uVar6;
  ushort uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  
  uVar1 = *(uint *)((long)param_1 + 0x44);
  uVar9 = (ulong)uVar1;
  uVar4 = *(uint *)((long)param_1 + 0xa4);
  do {
    uVar14 = *(uint *)((long)param_1 + 0x9c);
    uVar11 = (int)param_1[0xb] - (uVar4 + uVar14);
    if (*(int *)((long)param_1 + 0x44) + (uVar1 - 0x106) <= uVar14) {
      _memcpy((void *)param_1[10],(void *)(param_1[10] + uVar9),uVar9);
      uVar14 = (int)*(undefined8 *)((long)param_1 + 0x9c) - uVar1;
      *(ulong *)((long)param_1 + 0x9c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x9c) >> 0x20) - uVar1,uVar14);
      param_1[0x11] = param_1[0x11] - uVar9;
      uVar12 = (ulong)*(uint *)((long)param_1 + 0x74);
      puVar5 = (ushort *)(param_1[0xd] + uVar12 * 2);
      do {
        puVar5 = puVar5 + -1;
        uVar7 = *puVar5 - (short)uVar1;
        if (*puVar5 < uVar1) {
          uVar7 = 0;
        }
        *puVar5 = uVar7;
        uVar4 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar4;
      } while (uVar4 != 0);
      puVar5 = (ushort *)(param_1[0xc] + uVar9 * 2 + -2);
      uVar4 = uVar1;
      do {
        uVar7 = *puVar5 - (short)uVar1;
        if (*puVar5 < uVar1) {
          uVar7 = 0;
        }
        *puVar5 = uVar7;
        puVar5 = puVar5 + -1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar11 = uVar11 + uVar1;
    }
    plVar3 = (long *)*param_1;
    uVar2 = *(uint *)(plVar3 + 1);
    if (uVar2 == 0) {
      return;
    }
    uVar4 = *(uint *)((long)param_1 + 0xa4);
    len = uVar11;
    if (uVar2 < uVar11) {
      len = uVar2;
    }
    uVar12 = (ulong)len;
    if (uVar11 != 0) {
      lVar10 = param_1[10];
      *(uint *)(plVar3 + 1) = uVar2 - len;
      if (*(int *)(plVar3[7] + 0x2c) == 2) {
        uVar6 = _crc32(plVar3[0xc],(Bytef *)*plVar3,len);
LAB_000908a6:
        plVar3[0xc] = uVar6;
      }
      else if (*(int *)(plVar3[7] + 0x2c) == 1) {
        uVar6 = _adler32(plVar3[0xc],(Bytef *)*plVar3,len);
        goto LAB_000908a6;
      }
      _memcpy((void *)((ulong)uVar14 + lVar10 + (ulong)uVar4),(void *)*plVar3,uVar12);
      *plVar3 = *plVar3 + uVar12;
      plVar3[2] = plVar3[2] + uVar12;
      uVar4 = *(uint *)((long)param_1 + 0xa4);
    }
    uVar4 = uVar4 + len;
    *(uint *)((long)param_1 + 0xa4) = uVar4;
    if (2 < uVar4) {
      uVar14 = (uint)*(byte *)(param_1[10] + (ulong)*(uint *)((long)param_1 + 0x9c));
      *(uint *)(param_1 + 0xe) = uVar14;
      *(uint *)(param_1 + 0xe) =
           ((uint)*(byte *)(param_1[10] + (ulong)(*(uint *)((long)param_1 + 0x9c) + 1)) ^
           uVar14 << (*(byte *)(param_1 + 0x10) & 0x1f)) & *(uint *)((long)param_1 + 0x7c);
      if (0x105 < uVar4) break;
    }
  } while (*(int *)(*param_1 + 8) != 0);
  uVar9 = param_1[0x2e5];
  uVar12 = param_1[0xb];
  uVar8 = uVar12 - uVar9;
  if (uVar9 <= uVar12 && uVar8 != 0) {
    uVar13 = (ulong)uVar4 + (ulong)*(uint *)((long)param_1 + 0x9c);
    if (uVar9 < uVar13) {
      uVar12 = uVar12 - uVar13;
      if (0x101 < uVar12) {
        uVar12 = 0x102;
      }
      ___bzero(param_1[10] + uVar13,uVar12);
      lVar10 = uVar12 + uVar13;
    }
    else {
      uVar12 = (uVar13 + 0x102) - uVar9;
      if (uVar13 + 0x102 < uVar9 || uVar12 == 0) {
        return;
      }
      if (uVar12 < uVar8) {
        uVar8 = uVar12;
      }
      ___bzero(uVar9 + param_1[10],uVar8 & 0xffffffff);
      lVar10 = uVar8 + param_1[0x2e5];
    }
    param_1[0x2e5] = lVar10;
  }
  return;
}

