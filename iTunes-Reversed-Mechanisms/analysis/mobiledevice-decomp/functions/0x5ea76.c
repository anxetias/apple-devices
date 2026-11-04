// rea decompile_all
// name: _lz4_encode_2gb
// address: 0x5ea76
// body: available
// range: 0x5ea76-0x5ef97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _lz4_encode_2gb(undefined8 *param_1,long param_2,long *param_3,long param_4,long param_5,
                    long param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  ulong *puVar29;
  
  puVar29 = (ulong *)*param_1;
  puVar19 = (ulong *)((long)puVar29 + param_2 + -0x80);
  if (puVar19 <= puVar29) {
    return;
  }
  puVar20 = (ulong *)*param_3;
  puVar7 = (ulong *)((long)puVar20 + param_5 + -0x80);
  puVar18 = puVar20;
  do {
    if (puVar7 <= puVar18) {
LAB_0005ee9a:
      if (param_7 != 0) {
        *param_3 = (long)puVar18;
        *param_1 = puVar29;
        return;
      }
      uVar24 = (long)puVar20 + (param_5 - (long)puVar18);
      if (uVar24 < 0xf) {
        *(char *)puVar29 = (char)uVar24 << 4;
        _memcpy((undefined1 *)((long)puVar29 + 1),puVar18,uVar24);
        puVar29 = (ulong *)((long)puVar29 + uVar24 + 1);
      }
      else {
        *(undefined1 *)puVar29 = 0xf0;
        uVar6 = (int)uVar24 - 0xf;
        if (uVar6 < 0x10ef) {
          puVar20 = (ulong *)((long)puVar29 + 1);
        }
        else {
          puVar29 = (ulong *)((long)puVar29 + 0x11);
          do {
            puVar20 = puVar29;
            if (puVar19 < puVar20) {
              return;
            }
            *(undefined4 *)(puVar20 + -2) = 0xffffffff;
            *(undefined4 *)((long)puVar20 + -0xc) = 0xffffffff;
            *(undefined4 *)(puVar20 + -1) = 0xffffffff;
            *(undefined4 *)((long)puVar20 + -4) = 0xffffffff;
            uVar6 = uVar6 - 0xff0;
            puVar29 = puVar20 + 2;
          } while (0x10ee < uVar6);
        }
        *(undefined4 *)puVar20 = 0xffffffff;
        *(undefined4 *)((long)puVar20 + 4) = 0xffffffff;
        *(undefined4 *)(puVar20 + 1) = 0xffffffff;
        *(undefined4 *)((long)puVar20 + 0xc) = 0xffffffff;
        uVar8 = (uVar6 & 0xffff) / 0xff;
        uVar10 = (ulong)uVar8;
        *(char *)((long)puVar20 + uVar10) = (char)uVar8 + (char)uVar6;
        puVar29 = (ulong *)((long)puVar20 + uVar24 + uVar10 + 1);
        if (puVar19 <= puVar29) {
          return;
        }
        _memcpy((undefined1 *)((long)puVar20 + uVar10 + 1),puVar18,uVar24);
      }
      *param_1 = puVar29;
      *param_3 = (long)puVar18 + uVar24;
      return;
    }
    iVar17 = (int)puVar18;
    iVar5 = iVar17 - (int)param_4;
    puVar9 = puVar18 + 2;
    lVar27 = 0;
    while( true ) {
      iVar2 = *(int *)((long)puVar18 + lVar27);
      iVar3 = *(int *)((long)puVar18 + lVar27 + 1);
      uVar22 = (ulong)((uint)(iVar2 * -0x61c8864f) >> 0x14);
      uVar10 = (ulong)*(uint *)(param_6 + uVar22 * 8);
      uVar25 = (ulong)((uint)(iVar3 * -0x61c8864f) >> 0x14);
      uVar24 = (ulong)*(uint *)(param_6 + uVar25 * 8);
      iVar4 = *(int *)(param_6 + 4 + uVar25 * 8);
      *(int *)(param_6 + uVar22 * 8) = iVar5 + (int)lVar27;
      iVar1 = *(int *)(param_6 + 4 + uVar22 * 8);
      *(int *)(param_6 + uVar25 * 8) = iVar5 + 1 + (int)lVar27;
      *(int *)(param_6 + 4 + uVar22 * 8) = iVar2;
      *(int *)(param_6 + 4 + uVar25 * 8) = iVar3;
      if ((iVar2 == iVar1) && ((long)puVar18 + ~uVar10 + (lVar27 - param_4) < 0xffff)) {
        lVar26 = lVar27 + (-uVar10 - param_4);
        lVar12 = 4;
        lVar23 = lVar27;
        goto LAB_0005ebdf;
      }
      if ((iVar3 == iVar4) && ((long)puVar18 + ((lVar27 - param_4) - uVar24) < 0xffff)) break;
      lVar26 = lVar27 + 2;
      lVar27 = lVar27 + 2;
      puVar9 = (ulong *)((long)puVar9 + 2);
      if (puVar7 <= (ulong *)((long)puVar18 + lVar26)) goto LAB_0005ee9a;
    }
    lVar26 = lVar27 + (-uVar24 - param_4) + 1;
    lVar12 = 5;
    lVar23 = lVar27 + 1;
LAB_0005ebdf:
    lVar26 = (long)puVar18 + lVar26;
    lVar23 = (long)puVar18 + lVar23;
    puVar28 = (ulong *)((long)puVar18 + lVar12 + lVar27);
    lVar27 = -lVar26;
    if (puVar28 < puVar7) {
      puVar9 = (ulong *)((long)puVar9 + lVar12);
      do {
        puVar28 = puVar9;
        uVar24 = *(ulong *)((long)puVar28 + lVar27 + -0x10);
        if (uVar24 != puVar28[-2]) {
          uVar24 = puVar28[-2] ^ uVar24;
          uVar10 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar24 = uVar10 >> 3 & 0x1fffffff;
LAB_0005ec71:
          puVar28 = (ulong *)((long)puVar28 + (uVar24 - 0x10));
          goto LAB_0005ec97;
        }
        uVar24 = *(ulong *)((long)puVar28 + lVar27 + -8);
        if (uVar24 != puVar28[-1]) {
          uVar24 = puVar28[-1] ^ uVar24;
          uVar10 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar24 = uVar10 >> 3 & 0x1fffffff | 8;
          goto LAB_0005ec71;
        }
        if (*(ulong *)((long)puVar28 + lVar27) != *puVar28) {
          uVar10 = *puVar28 ^ *(ulong *)((long)puVar28 + lVar27);
          uVar24 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
            }
          }
          uVar24 = uVar24 >> 3 & 0x1fffffff;
LAB_0005ec94:
          puVar28 = (ulong *)((long)puVar28 + uVar24);
          goto LAB_0005ec97;
        }
        uVar24 = *(ulong *)((long)puVar28 + lVar27 + 8);
        if (uVar24 != puVar28[1]) {
          uVar24 = puVar28[1] ^ uVar24;
          uVar10 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar24 = uVar10 >> 3 & 0x1fffffff | 8;
          goto LAB_0005ec94;
        }
        puVar9 = puVar28 + 4;
      } while (puVar28 + 2 < puVar7);
      puVar28 = puVar28 + 2;
    }
LAB_0005ec97:
    puVar9 = (ulong *)(param_4 + lVar26);
    if ((ulong *)(param_4 + lVar26) < puVar18) {
      puVar9 = puVar18;
    }
    lVar12 = 0;
    do {
      lVar13 = lVar12;
      if ((ulong *)(lVar13 + lVar23) <= puVar9) break;
      lVar12 = lVar13 + -1;
    } while (*(char *)(lVar27 + lVar23 + -1 + lVar13) == *(char *)(lVar23 + -1 + lVar13));
    uVar24 = (lVar23 - (long)puVar18) + lVar13;
    iVar5 = (int)lVar23;
    uVar8 = (iVar5 - iVar17) + (int)lVar13;
    uVar16 = (((int)puVar28 - iVar5) + -4) - (int)lVar13;
    uVar6 = 0xf;
    if (uVar8 < 0xf) {
      uVar6 = uVar8;
    }
    uVar11 = 0xf;
    if (uVar16 < 0xf) {
      uVar11 = uVar16;
    }
    puVar9 = (ulong *)((long)puVar29 + 1);
    *(byte *)puVar29 = (byte)uVar11 | (byte)(uVar6 << 4);
    if (uVar8 < 0xf) {
      uVar24 = (ulong)((uint)uVar24 & 0xf);
      uVar10 = puVar18[1];
      *puVar9 = *puVar18;
      *(ulong *)((long)puVar29 + 9) = uVar10;
      puVar21 = puVar9;
    }
    else {
      uVar10 = (ulong)((iVar5 - iVar17) - 0xf) + lVar13;
      uVar6 = (uint)uVar10;
      if (0x10ee < uVar6) {
        puVar29 = (ulong *)((long)puVar29 + 0x11);
        do {
          puVar9 = puVar29;
          if (puVar19 < puVar9) {
            return;
          }
          *(undefined4 *)(puVar9 + -2) = 0xffffffff;
          *(undefined4 *)((long)puVar9 + -0xc) = 0xffffffff;
          *(undefined4 *)(puVar9 + -1) = 0xffffffff;
          *(undefined4 *)((long)puVar9 + -4) = 0xffffffff;
          uVar6 = (int)uVar10 - 0xff0;
          uVar10 = (ulong)uVar6;
          puVar29 = puVar9 + 2;
        } while (0x10ee < uVar6);
      }
      *(undefined4 *)puVar9 = 0xffffffff;
      *(undefined4 *)((long)puVar9 + 4) = 0xffffffff;
      *(undefined4 *)(puVar9 + 1) = 0xffffffff;
      *(undefined4 *)((long)puVar9 + 0xc) = 0xffffffff;
      uVar11 = (uVar6 & 0xffff) / 0xff;
      uVar10 = (ulong)uVar11;
      *(char *)((long)puVar9 + uVar10) = (char)uVar11 + (char)uVar6;
      uVar24 = uVar24 & 0xffffffff;
      if (puVar19 <= (ulong *)((long)puVar9 + uVar24 + uVar10 + 1)) {
        return;
      }
      puVar21 = (ulong *)((long)puVar9 + uVar10 + 1);
      uVar22 = puVar18[1];
      *puVar21 = *puVar18;
      *(ulong *)((long)puVar9 + uVar10 + 9) = uVar22;
      if (0x10 < uVar8) {
        puVar14 = (undefined1 *)((long)puVar9 + uVar10 + 0x31);
        if (puVar14 < (undefined1 *)(uVar24 + (long)puVar21)) {
          puVar14 = (undefined1 *)(uVar24 + (long)puVar21);
        }
        _memcpy((undefined1 *)((long)puVar9 + uVar10 + 0x11),puVar18 + 2,
                ((ulong)(puVar14 + (-0x11 - (long)puVar21)) & 0xffffffffffffffe0) + 0x20);
      }
    }
    puVar29 = (ulong *)((undefined2 *)((long)puVar21 + uVar24) + 1);
    *(undefined2 *)((long)puVar21 + uVar24) = (short)lVar26;
    if (0xe < uVar16) {
      uVar10 = (ulong)(((int)puVar28 - iVar5) - 0x13) - lVar13;
      uVar6 = (uint)uVar10;
      if (0x10ee < uVar6) {
        puVar18 = (ulong *)((long)puVar21 + uVar24 + 0x12);
        do {
          puVar29 = puVar18;
          if (puVar19 < puVar29) {
            return;
          }
          *(undefined4 *)(puVar29 + -2) = 0xffffffff;
          *(undefined4 *)((long)puVar29 + -0xc) = 0xffffffff;
          *(undefined4 *)(puVar29 + -1) = 0xffffffff;
          *(undefined4 *)((long)puVar29 + -4) = 0xffffffff;
          uVar6 = (int)uVar10 - 0xff0;
          uVar10 = (ulong)uVar6;
          puVar18 = puVar29 + 2;
        } while (0x10ee < uVar6);
      }
      *(undefined4 *)puVar29 = 0xffffffff;
      *(undefined4 *)((long)puVar29 + 4) = 0xffffffff;
      *(undefined4 *)(puVar29 + 1) = 0xffffffff;
      *(undefined4 *)((long)puVar29 + 0xc) = 0xffffffff;
      uVar8 = (uVar6 & 0xffff) / 0xff;
      pcVar15 = (char *)((long)puVar29 + (ulong)uVar8);
      puVar29 = (ulong *)(pcVar15 + 1);
      *pcVar15 = (char)uVar8 + (char)uVar6;
    }
    *param_1 = puVar29;
    *param_3 = (long)puVar28;
    puVar18 = puVar28;
    if (puVar19 <= puVar29) {
      return;
    }
  } while( true );
}

