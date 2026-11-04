// rea decompile_all
// name: _build_tree
// address: 0x82fd0
// body: available
// range: 0x82fd0-0x83462 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x8345e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _build_tree(long param_1,long *param_2)

{
  short *psVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  uint uVar12;
  byte bVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  short *psVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  int *piVar29;
  long lVar30;
  ulong uVar31;
  short *psVar32;
  ushort auStack_58 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar5 = *param_2;
  lVar10 = *(long *)param_2[2];
  uVar31 = (ulong)*(int *)(param_2[2] + 0x14);
  pcVar2 = "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib" +
           param_1 + 0x2c;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '=';
  pcVar2[5] = '\x02';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  uVar19 = 0xffffffff;
  if ((long)uVar31 < 1) {
    uVar23 = 0;
  }
  else {
    uVar14 = 0;
    do {
      if (*(short *)(lVar5 + uVar14 * 4) == 0) {
        *(undefined2 *)(lVar5 + 2 + uVar14 * 4) = 0;
      }
      else {
        iVar16 = *(int *)(
                         "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                         + param_1 + 0x2c);
        *(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib" +
                param_1 + 0x2c) = iVar16 + 1;
        *(int *)(param_1 + 0xbb4 + (long)iVar16 * 4) = (int)uVar14;
        "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
        [uVar14 + param_1 + 0x34] = '\0';
        uVar19 = uVar14 & 0xffffffff;
      }
      iVar16 = (int)uVar19;
      uVar14 = uVar14 + 1;
    } while (uVar31 != uVar14);
    uVar23 = *(uint *)(
                      "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                      + param_1 + 0x2c);
    if (1 < (int)uVar23) goto LAB_000830c8;
  }
  do {
    uVar12 = (int)uVar19 + 1;
    if ((int)uVar19 < 2) {
      uVar19 = (ulong)uVar12;
    }
    else {
      uVar12 = 0;
    }
    iVar16 = (int)uVar19;
    *(uint *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib" +
             param_1 + 0x2c) = uVar23 + 1;
    *(uint *)(param_1 + 0xbb4 + (long)(int)uVar23 * 4) = uVar12;
    lVar30 = (long)(int)uVar12;
    *(undefined2 *)(lVar5 + lVar30 * 4) = 1;
    "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
    [lVar30 + param_1 + 0x34] = '\0';
    *(long *)(param_1 + 0x1708) = *(long *)(param_1 + 0x1708) + -1;
    if (lVar10 != 0) {
      *(long *)(param_1 + 0x1710) =
           *(long *)(param_1 + 0x1710) - (ulong)*(ushort *)(lVar10 + 2 + lVar30 * 4);
    }
    uVar23 = *(uint *)(
                      "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                      + param_1 + 0x2c);
  } while ((int)uVar23 < 2);
LAB_000830c8:
  *(int *)(param_2 + 1) = iVar16;
  uVar23 = uVar23 >> 1;
  do {
    _pqdownheap(param_1,lVar5,uVar23);
    bVar7 = 1 < uVar23;
    uVar23 = uVar23 - 1;
  } while (bVar7);
  iVar21 = *(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                   + param_1 + 0x2c);
  do {
    iVar17 = *(int *)(param_1 + 0xbb4);
    lVar30 = (long)iVar17;
    *(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib" +
            param_1 + 0x2c) = iVar21 + -1;
    *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_1 + 0xbb0 + (long)iVar21 * 4);
    _pqdownheap(param_1,lVar5,1);
    iVar21 = *(int *)(param_1 + 0xbb4);
    lVar10 = (long)iVar21;
    iVar27 = *(int *)(
                     "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                     + param_1 + 0x30);
    *(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib" +
            param_1 + 0x30) = iVar27 + -1;
    *(int *)(param_1 + 0xbac + (long)iVar27 * 4) = iVar17;
    iVar17 = *(int *)(
                     "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                     + param_1 + 0x30);
    *(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib" +
            param_1 + 0x30) = iVar17 + -1;
    *(int *)(param_1 + 0xbac + (long)iVar17 * 4) = iVar21;
    *(short *)(lVar5 + uVar31 * 4) = *(short *)(lVar5 + lVar10 * 4) + *(short *)(lVar5 + lVar30 * 4)
    ;
    bVar13 = "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
             [lVar10 + param_1 + 0x34];
    if ((byte)"/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
              [lVar10 + param_1 + 0x34] <
        (byte)"/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
              [lVar30 + param_1 + 0x34]) {
      bVar13 = "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
               [lVar30 + param_1 + 0x34];
    }
    "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
    [uVar31 + param_1 + 0x34] = bVar13 + 1;
    *(short *)(lVar5 + 2 + lVar10 * 4) = (short)uVar31;
    *(short *)(lVar5 + 2 + lVar30 * 4) = (short)uVar31;
    *(int *)(param_1 + 0xbb4) = (int)uVar31;
    _pqdownheap(param_1,lVar5,1);
    iVar21 = *(int *)(
                     "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                     + param_1 + 0x2c);
    uVar31 = uVar31 + 1;
  } while (1 < iVar21);
  uVar4 = *(undefined4 *)(param_1 + 0xbb4);
  iVar21 = *(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                   + param_1 + 0x30);
  *(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib" +
          param_1 + 0x30) = iVar21 + -1;
  *(undefined4 *)(param_1 + 0xbac + (long)iVar21 * 4) = uVar4;
  lVar10 = *param_2;
  lVar8 = param_2[1];
  plVar6 = (long *)param_2[2];
  lVar30 = *plVar6;
  lVar22 = plVar6[1];
  lVar9 = plVar6[2];
  iVar21 = (int)plVar6[3];
  lVar15 = (long)iVar21;
  *(undefined8 *)(param_1 + 0xba0) = 0;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xb90) = 0;
  *(undefined8 *)(param_1 + 0xb98) = 0;
  *(undefined2 *)
   (lVar10 + 2 +
   (long)*(int *)(param_1 + 0xbb0 +
                 (long)*(int *)(
                               "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                               + param_1 + 0x30) * 4) * 4) = 0;
  if ((long)*(int *)("/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                    + param_1 + 0x30) < 0x23c) {
    lVar3 = param_1 + 0xb90;
    iVar17 = 0;
    lVar28 = (long)*(int *)(
                           "/Library/Apple/usr/appleinternal/lib/libMobileRestoreInternalExtensions.dylib"
                           + param_1 + 0x30);
    do {
      iVar27 = *(int *)(param_1 + 0xbb4 + lVar28 * 4);
      lVar24 = (long)iVar27;
      uVar11 = *(ushort *)(lVar10 + 2 + (ulong)*(ushort *)(lVar10 + 2 + lVar24 * 4) * 4);
      iVar20 = iVar21;
      if ((int)(uint)uVar11 < iVar21) {
        iVar20 = uVar11 + 1;
      }
      *(short *)(lVar10 + 2 + lVar24 * 4) = (short)iVar20;
      if (iVar27 <= (int)lVar8) {
        psVar32 = (short *)(lVar3 + (long)iVar20 * 2);
        *psVar32 = *psVar32 + 1;
        iVar26 = 0;
        if ((int)lVar9 <= iVar27) {
          iVar26 = *(int *)(lVar22 + (long)(iVar27 - (int)lVar9) * 4);
        }
        uVar19 = (ulong)*(ushort *)(lVar10 + lVar24 * 4);
        *(long *)(param_1 + 0x1708) = *(long *)(param_1 + 0x1708) + (long)(iVar20 + iVar26) * uVar19
        ;
        if (lVar30 != 0) {
          *(long *)(param_1 + 0x1710) =
               *(long *)(param_1 + 0x1710) +
               ((long)iVar26 + (ulong)*(ushort *)(lVar30 + 2 + lVar24 * 4)) * uVar19;
        }
      }
      iVar17 = iVar17 + (uint)(iVar21 <= (int)(uint)uVar11);
      iVar27 = (int)lVar28;
      lVar28 = lVar28 + 1;
    } while (iVar27 != 0x23b);
    if (iVar17 != 0) {
      lVar22 = (lVar15 << 0x20) + 0x100000000;
      psVar25 = (short *)(param_1 + lVar15 * 2 + 0xb90);
      lVar30 = lVar22;
      psVar32 = psVar25;
      do {
        do {
          lVar30 = lVar30 + -0x100000000;
          psVar1 = psVar32 + -1;
          psVar32 = psVar32 + -1;
        } while (*psVar1 == 0);
        *psVar32 = *psVar1 + -1;
        psVar32 = (short *)(lVar3 + (lVar30 >> 0x1f));
        *psVar32 = *psVar32 + 2;
        psVar32 = (short *)(lVar3 + lVar15 * 2);
        *psVar32 = *psVar32 + -1;
        bVar7 = 2 < iVar17;
        lVar30 = lVar22;
        psVar32 = psVar25;
        iVar17 = iVar17 + -2;
      } while (bVar7);
      if (iVar21 != 0) {
        iVar21 = 0x23d;
        do {
          uVar11 = *(ushort *)(lVar3 + lVar15 * 2);
          uVar23 = (uint)uVar11;
          if (uVar11 != 0) {
            do {
              piVar29 = (int *)(param_1 + 0xbac + (long)iVar21 * 4);
              do {
                iVar17 = *piVar29;
                lVar30 = (long)iVar17;
                iVar21 = iVar21 + -1;
                piVar29 = piVar29 + -1;
              } while ((int)lVar8 < iVar17);
              lVar22 = lVar15 - (ulong)*(ushort *)(lVar10 + 2 + lVar30 * 4);
              if (lVar22 != 0) {
                *(long *)(param_1 + 0x1708) =
                     *(long *)(param_1 + 0x1708) + lVar22 * (ulong)*(ushort *)(lVar10 + lVar30 * 4);
                *(short *)(lVar10 + 2 + lVar30 * 4) = (short)lVar15;
              }
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
  }
  lVar10 = 0;
  uVar11 = 0;
  do {
    uVar11 = (uVar11 + *(short *)(param_1 + 0xb90 + lVar10 * 2)) * 2;
    auStack_58[lVar10 + 1] = uVar11;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0xf);
  if (-1 < iVar16) {
    uVar19 = 0;
    do {
      uVar11 = *(ushort *)(lVar5 + 2 + uVar19 * 4);
      if (uVar11 != 0) {
        uVar12 = (uint)uVar11;
        uVar31 = (ulong)auStack_58[uVar12];
        auStack_58[uVar12] = auStack_58[uVar12] + 1;
        uVar12 = uVar12 + 1;
        uVar23 = 0;
        do {
          uVar18 = uVar23 | (uint)uVar31 & 1;
          uVar31 = uVar31 >> 1;
          uVar23 = uVar18 * 2;
          uVar12 = uVar12 - 1;
        } while (1 < uVar12);
        *(short *)(lVar5 + uVar19 * 4) = (short)uVar18;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != iVar16 + 1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

