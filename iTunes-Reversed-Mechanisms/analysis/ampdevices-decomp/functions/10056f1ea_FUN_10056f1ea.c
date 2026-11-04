// name: FUN_10056f1ea
// address: 10056f1ea

undefined4 FUN_10056f1ea(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar23 = *(long *)(param_2 + 0x58);
  lVar18 = *(long *)(param_2 + 0x60);
  if (lVar23 == 0 && lVar18 == 0) {
    uVar19 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar19,0x10);
    if (cVar12 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "(chunkOffsetAtom != __null) || (chunkOffset64Atom != __null)";
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    local_5c = 0x20b7;
    goto LAB_10056f7b1;
  }
  lVar6 = *(long *)(param_2 + 0x48);
  lVar7 = *(long *)(param_2 + 0x50);
  lVar8 = *(long *)(param_2 + 0x68);
  uVar33 = *(uint *)(lVar7 + 0xc);
  *(uint *)(param_1 + 0x14) =
       uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
  uVar33 = *(uint *)(lVar7 + 0x10);
  lVar15 = (long)(int)(uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                      uVar33 << 0x18);
  lVar16 = FUN_1001c6429(lVar15 * 0x28);
  *(long *)(param_1 + 0x30) = lVar16;
  if (lVar16 == 0) {
    uVar19 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar19,0x10);
    if (cVar12 != '\0') {
      local_4a = "mSampleInfoTable != __null";
LAB_10056f893:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar16 = lVar23;
    if (lVar18 != 0) {
      lVar16 = lVar18;
    }
    uVar33 = *(uint *)(lVar16 + 0xc);
    uVar33 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
    lVar16 = (long)(int)uVar33 + 1;
    puVar17 = (ulong *)FUN_1001c6429();
    *(ulong **)(param_1 + 0x20) = puVar17;
    if (puVar17 != (ulong *)0x0) {
      if (0 < (int)uVar33) {
        lVar22 = 0;
        do {
          puVar17 = puVar17 + 4;
          if (lVar18 == 0) {
            uVar4 = *(uint *)(lVar23 + 0x10 + lVar22 * 4);
            uVar26 = (ulong)(int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18);
          }
          else {
            uVar26 = *(ulong *)(lVar18 + 0x10 + lVar22 * 8);
            uVar26 = uVar26 >> 0x38 | (uVar26 & 0xff000000000000) >> 0x28 |
                     (uVar26 & 0xff0000000000) >> 0x18 | (uVar26 & 0xff00000000) >> 8 |
                     (uVar26 & 0xff000000) << 8 | (uVar26 & 0xff0000) << 0x18 |
                     (uVar26 & 0xff00) << 0x28 | uVar26 << 0x38;
          }
          lVar22 = lVar22 + 1;
          *puVar17 = uVar26;
        } while ((int)uVar33 != lVar22);
      }
      uVar4 = *(uint *)(lVar8 + 0xc);
      uVar21 = *(uint *)(lVar8 + 0x10);
      uVar30 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      uVar21 = *(uint *)(lVar8 + 0x14);
      uVar31 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
      uVar21 = *(uint *)(lVar6 + 0xc);
      lVar18 = (long)(int)(uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                          uVar21 << 0x18);
      lVar23 = 0;
      if (0 < lVar18) {
        lVar23 = lVar18;
      }
      lVar32 = 0;
      iVar28 = 0;
      uVar26 = 0;
      local_5c = 0;
      lVar22 = 0;
      do {
        if (lVar22 == lVar23) {
          *(long *)(param_1 + 0x28) = lVar15;
          *(long *)(param_1 + 0x18) = lVar16;
          break;
        }
        uVar21 = *(uint *)(lVar6 + 0x10 + lVar22 * 0xc);
        uVar21 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18
        ;
        if ((int)uVar33 < (int)uVar21) {
          uVar19 = FUN_1001cc310();
          cVar12 = _os_log_type_enabled(uVar19,0x10);
          if (cVar12 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "sampleToChunkEntry.firstChunk <= numChunks";
            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          local_5c = 0x20b8;
          break;
        }
        lVar29 = lVar22 + 1;
        if (lVar29 < lVar18) {
          uVar13 = *(uint *)(lVar6 + 0x10 + lVar29 * 0xc);
          lVar27 = (long)(int)((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                               uVar13 << 0x18) - uVar21);
        }
        else {
          lVar27 = lVar16 - (int)uVar21;
        }
        bVar10 = false;
        if (0 < lVar27) {
          uVar13 = *(uint *)(lVar6 + 0x14 + lVar22 * 0xc);
          uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18;
          lVar22 = 0;
          do {
            lVar1 = (int)uVar21 + lVar22;
            plVar24 = (long *)(lVar1 * 0x20 + *(long *)(param_1 + 0x20));
            uVar5 = *(uint *)(lVar7 + 4);
            uVar25 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
            ;
            if ((uVar25 == 0x7374737a) || (uVar25 == 0x73747a32)) {
              bVar10 = false;
              plVar24[3] = (long)(int)uVar13;
              plVar24[2] = uVar26;
              if (0 < (int)uVar13) {
                lVar34 = uVar26 * 10 + 8;
                lVar35 = (long)(int)uVar13 + 1;
                do {
                  lVar9 = *(long *)(param_1 + 0x30);
                  if (uVar5 == 0x7a737473) {
                    uVar14 = *(uint *)(param_1 + 0x14);
                    if ((int)uVar14 < 1) {
                      uVar14 = *(uint *)(lVar7 + 0x14 + uVar26 * 4);
                      uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                               uVar14 << 0x18;
                    }
                  }
                  else {
                    uVar14 = *(uint *)(lVar7 + 0xc);
                    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                             uVar14 << 0x18;
                    if (uVar14 == 0x10) {
LAB_10056f527:
                      uVar3 = *(ushort *)(lVar7 + 0x14 + uVar26 * 2);
                      uVar14 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
                    }
                    else if (uVar14 == 8) {
                      uVar14 = (uint)*(byte *)(lVar7 + 0x14 + uVar26);
                    }
                    else {
                      if (uVar14 != 4) {
                        uVar19 = FUN_1001cc310();
                        cVar12 = _os_log_type_enabled(uVar19,0x10);
                        if (cVar12 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x822;
                          local_4a = "sampleSize == 16";
                          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                        goto LAB_10056f527;
                      }
                      bVar2 = *(byte *)(lVar7 + 0x14 + ((long)uVar26 >> 1));
                      bVar11 = bVar2 & 0xf;
                      if ((uVar26 & 1) == 0) {
                        bVar11 = bVar2 >> 4;
                      }
                      uVar14 = (uint)bVar11;
                    }
                  }
                  *(uint *)(lVar9 + -0x20 + lVar34 * 4) = uVar14;
                  *(long *)(lVar9 + -0x18 + lVar34 * 4) = lVar1;
                  lVar20 = plVar24[1];
                  *(long *)(lVar9 + -0x10 + lVar34 * 4) = *plVar24 + lVar20;
                  plVar24[1] = (int)uVar14 + lVar20;
                  *(long *)(lVar9 + -8 + lVar34 * 4) = lVar32;
                  lVar20 = (long)(int)uVar31;
                  *(long *)(lVar9 + lVar34 * 4) = lVar20;
                  uVar30 = uVar30 - 1;
                  if (uVar30 == 0) {
                    iVar28 = iVar28 + 1;
                    uVar30 = 0;
                    if (iVar28 < (int)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 |
                                       (uVar4 & 0xff00) << 8 | uVar4 << 0x18)) {
                      uVar30 = *(uint *)(lVar8 + 0x10 + (long)iVar28 * 8);
                      uVar31 = *(uint *)(lVar8 + 0x14 + (long)iVar28 * 8);
                      uVar30 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 |
                               uVar30 << 0x18;
                      uVar31 = uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 |
                               uVar31 << 0x18;
                    }
                  }
                  lVar32 = lVar32 + lVar20;
                  uVar26 = uVar26 + 1;
                  lVar34 = lVar34 + 10;
                  lVar35 = lVar35 + -1;
                } while (1 < lVar35);
              }
            }
            else {
              uVar19 = FUN_1001cc310();
              cVar12 = _os_log_type_enabled(uVar19,0x10);
              if (cVar12 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = 
                "(sampleSizeAtomType == STSampleSizeAID) || (sampleSizeAtomType == STSampleSize2AID)"
                ;
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              bVar10 = true;
              local_5c = 0xffffff30;
            }
            if ((uVar25 != 0x73747a32) && (uVar25 != 0x7374737a)) goto LAB_10056f706;
            lVar22 = lVar22 + 1;
          } while (lVar22 != lVar27);
          bVar10 = false;
        }
LAB_10056f706:
        lVar22 = lVar29;
      } while (!bVar10);
      goto LAB_10056f7b1;
    }
    uVar19 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar19,0x10);
    if (cVar12 != '\0') {
      local_4a = "mChunkInfoTable != __null";
      goto LAB_10056f893;
    }
  }
  FUN_1001782e9(0,0);
  local_5c = 0xffffff94;
LAB_10056f7b1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

