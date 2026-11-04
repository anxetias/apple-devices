// rea decompile_all
// name: _BrotliZopfliComputeShortestPath
// address: 0x4bf5b
// body: available
// range: 0x4bf5b-0x4cda1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4cd9d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _BrotliZopfliComputeShortestPath
                 (long param_1,ulong param_2,long param_3,qword param_4,ulong param_5,
                 undefined8 param_6,long param_7,undefined8 param_8,long param_9,
                 undefined4 *param_10)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  qword *pqVar10;
  char *pcVar11;
  qword *pqVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  qword *pqVar20;
  dword *pdVar21;
  qword *pqVar22;
  char *pcVar23;
  bool bVar24;
  undefined1 local_19e0 [2816];
  undefined8 local_ee0;
  undefined8 local_ed0;
  undefined1 local_eb8 [256];
  undefined8 local_db8;
  long local_db0;
  qword *local_da8;
  long local_da0;
  long local_d98;
  long local_d90;
  undefined8 local_d88;
  char *local_d80;
  long local_d78;
  long local_d70;
  ulong local_d68;
  qword *local_d60;
  char *local_d58;
  long local_d50;
  qword *local_d48;
  qword *local_d40;
  char *local_d38;
  ulong local_d30;
  ulong local_d28;
  char *local_d20;
  char *local_d18;
  ulong local_d10;
  qword *local_d08;
  ulong local_d00;
  qword *local_cf8;
  qword *local_cf0;
  qword *local_ce8;
  qword local_ce0;
  undefined8 local_cd8;
  uint local_d8 [40];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_d60 = (qword *)(1L << (*(byte *)(param_7 + 8) & 0x3f));
  uVar18 = 0x145;
  if (*(int *)(param_7 + 4) < 0xb) {
    uVar18 = 0x96;
  }
  pcVar9 = (char *)0x0;
  pcVar7 = (char *)(param_2 - 0x7f);
  if (param_2 < 0x7f) {
    pcVar7 = pcVar9;
  }
  local_d90 = *(long *)(param_7 + 0x10);
  *param_10 = 0;
  param_10[3] = 0;
  local_d70 = param_3;
  local_d00 = param_5;
  local_ce0 = param_4;
  _InitZopfliCostModel(param_1,local_19e0,param_7 + 0x40,param_2);
  uVar2 = local_d00;
  lVar17 = local_d70;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_d98 = param_1;
    local_d88 = uVar18;
    local_d80 = pcVar7;
    _ZopfliCostModelSetFromLiteralCosts(local_19e0,local_d70,local_ce0,local_d00);
    local_db8 = 0;
    if (3 < param_2) {
      local_d60 = local_d60 + -2;
      local_d80 = local_d80 + lVar17;
      local_da0 = param_7 + 0x58;
      local_db0 = local_d90 + lVar17;
      lVar3 = 0;
      local_d30 = param_2;
      do {
        pqVar12 = (qword *)(lVar3 + lVar17);
        local_d40 = local_d60;
        if (pqVar12 < local_d60) {
          local_d40 = pqVar12;
        }
        local_da8 = (qword *)((long)pqVar12 + local_d90);
        if (local_d60 <= (qword *)((long)pqVar12 + local_d90)) {
          local_da8 = local_d60;
        }
        local_ce8 = (qword *)(param_2 - lVar3);
        local_d38 = (char *)((ulong)pqVar12 & uVar2);
        pqVar10 = (qword *)&MACH_HEADER.ncmds;
        if (*(int *)(param_7 + 4) == 0xb) {
          pqVar10 = &segment_command_00000020.vmsize;
        }
        uVar16 = 0;
        if (pqVar10 <= pqVar12) {
          uVar16 = (long)pqVar12 - (long)pqVar10;
        }
        uVar6 = lVar3 + -1 + lVar17;
        pcVar7 = (char *)((long)&MACH_HEADER.magic + 1);
        local_cf8 = &local_cd8;
        if (uVar16 < uVar6) {
          pqVar10 = (qword *)(local_d38 + local_ce0);
          uVar15 = (ulong)((uint)local_ce8 & 7);
          local_cf0 = (qword *)((long)pqVar10 + (long)((ulong)local_ce8 & 0xfffffffffffffff8));
          local_cf8 = &local_cd8;
          while ((char *)((long)pqVar12 - uVar6) <= local_d40) {
            if (((char)*pqVar10 == *(char *)(local_ce0 + (uVar6 & uVar2))) &&
               (lVar17 = (uVar6 & uVar2) + local_ce0,
               *(char *)((long)pqVar10 + 1) == *(char *)(lVar17 + 1))) {
              if ((char *)((long)&MACH_HEADER.cputype + 3) < local_ce8) {
                lVar19 = 0;
                uVar2 = 0;
LAB_0004c1b6:
                uVar8 = *(ulong *)(lVar17 + uVar2 * 8);
                if (pqVar10[uVar2] == uVar8) goto code_r0x0004c1c3;
                uVar8 = uVar8 ^ pqVar10[uVar2];
                uVar2 = 0;
                if (uVar8 != 0) {
                  for (; (uVar8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                  }
                }
                pcVar5 = (char *)((uVar2 >> 3 & 0x1fffffff) - lVar19);
                goto LAB_0004c1f1;
              }
              pcVar9 = (char *)0x0;
              pqVar20 = pqVar10;
LAB_0004c245:
              pcVar5 = pcVar9;
              if (uVar15 != 0) {
                pcVar23 = (char *)(uVar15 | (ulong)pcVar9);
                uVar2 = uVar15;
                do {
                  pcVar5 = pcVar9;
                  if (pcVar9[lVar17] != (char)*pqVar20) break;
                  pqVar20 = (qword *)((long)pqVar20 + 1);
                  pcVar9 = pcVar9 + 1;
                  uVar2 = uVar2 - 1;
                  pcVar5 = pcVar23;
                } while (uVar2 != 0);
              }
LAB_0004c1f1:
              uVar2 = local_d00;
              if (pcVar7 < pcVar5) {
                *(int *)local_cf8 = (int)(char *)((long)pqVar12 - uVar6);
                *(int *)((long)local_cf8 + 4) = (int)pcVar5 << 5;
                local_cf8 = local_cf8 + 1;
                pcVar7 = pcVar5;
              }
            }
            uVar6 = uVar6 - 1;
            param_2 = local_d30;
            if ((uVar6 <= uVar16) || ((char *)((long)&MACH_HEADER.magic + 2) < pcVar7)) break;
          }
        }
        if (pcVar7 < local_ce8) {
          uVar16 = (ulong)((uint)(*(int *)(local_d38 + local_ce0) * 0x1e35a7bd) >> 0xf);
          local_d10 = *(ulong *)(param_9 + 0x30);
          lVar17 = *(long *)(param_9 + 0x48);
          pcVar9 = (char *)(ulong)*(uint *)(*(long *)(param_9 + 0x38) + uVar16 * 4);
          local_d48 = local_ce8;
          if (section_00000068.segname + 8 <= local_ce8) {
            *(int *)(*(long *)(param_9 + 0x38) + uVar16 * 4) = (int)pqVar12;
            local_d48 = (qword *)(section_00000068.segname + 8);
          }
          local_d28 = (local_d10 & (ulong)pqVar12) * 2 + 1;
          local_d68 = (local_d10 & (ulong)pqVar12) * 2;
          if (pqVar12 != (qword *)pcVar9) {
            local_d58 = local_d38 + local_ce0;
            pqVar10 = &segment_command_00000020.vmsize;
            local_d18 = (char *)0x0;
            pcVar5 = (char *)0x0;
LAB_0004c35a:
            bVar24 = pqVar10 != (qword *)0x0;
            pqVar10 = (qword *)((long)pqVar10 + -1);
            local_d50 = lVar17;
            if (((char *)((long)pqVar12 - (long)pcVar9) <= local_d40) && (bVar24)) {
              pcVar23 = local_d18;
              if (pcVar5 < local_d18) {
                pcVar23 = pcVar5;
              }
              lVar19 = ((ulong)pcVar9 & uVar2) + local_ce0;
              pcVar11 = pcVar23 + lVar19;
              uVar2 = (long)local_ce8 - (long)pcVar23;
              if (7 < uVar2) {
                uVar6 = uVar2 & 0xfffffffffffffff8;
                lVar14 = 0;
                uVar16 = 0;
LAB_0004c3c7:
                uVar15 = *(ulong *)(local_d58 + (long)pcVar23 + uVar16 * 8);
                if (*(ulong *)(pcVar11 + uVar16 * 8) == uVar15) goto code_r0x0004c3d4;
                uVar15 = uVar15 ^ *(ulong *)(pcVar11 + uVar16 * 8);
                uVar2 = 0;
                if (uVar15 != 0) {
                  for (; (uVar15 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                  }
                }
                uVar16 = (uVar2 >> 3 & 0x1fffffff) - lVar14;
                goto LAB_0004c412;
              }
              uVar6 = 0;
              goto LAB_0004c515;
            }
          }
LAB_0004c2f7:
          if (section_00000068.segname + 8 <= local_ce8) {
            uVar13 = *(undefined4 *)(param_9 + 0x40);
            *(undefined4 *)(lVar17 + local_d68 * 4) = uVar13;
LAB_0004c31a:
            *(undefined4 *)(lVar17 + local_d28 * 4) = uVar13;
          }
        }
LAB_0004c58a:
        local_d78 = lVar3;
        local_d08 = pqVar12;
        _memset_pattern16(local_d8,&DAT_0032afa0,0x98);
        pqVar10 = local_ce8;
        pdVar21 = (dword *)(pcVar7 + 1);
        if (pdVar21 < (char *)((long)&MACH_HEADER.cputype + 1)) {
          pdVar21 = &MACH_HEADER.cputype;
        }
        iVar1 = _BrotliFindAllStaticDictionaryMatches
                          (local_da0,local_d38 + local_ce0,pdVar21,local_ce8,local_d8);
        pqVar20 = local_cf8;
        if (iVar1 != 0) {
          if (&segment_command_00000020.cmdsize < pqVar10) {
            pqVar10 = (qword *)((long)&segment_command_00000020.cmdsize + 1);
          }
          if (pdVar21 <= pqVar10) {
            iVar1 = (int)pdVar21 << 5;
            do {
              uVar4 = local_d8[(long)pdVar21];
              if ((uVar4 < 0xfffffff) &&
                 (pcVar7 = (char *)((long)local_da8 + (ulong)(uVar4 >> 5) + 1),
                 pcVar7 <= *(char **)(param_7 + 0x50))) {
                uVar4 = uVar4 & 0x1f;
                *(int *)pqVar20 = (int)pcVar7;
                if (pdVar21 == (dword *)(ulong)uVar4) {
                  uVar4 = 0;
                }
                *(uint *)((long)pqVar20 + 4) = uVar4 + iVar1;
                pqVar20 = pqVar20 + 1;
              }
              pdVar21 = (dword *)((long)pdVar21 + 1);
              iVar1 = iVar1 + 0x20;
            } while ((dword *)((long)pqVar10 + 1) != pdVar21);
          }
        }
        if ((long)pqVar20 - (long)&local_cd8 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = (long)pqVar20 - (long)&local_cd8 >> 3;
          if ((uint)local_d88 < *(uint *)((long)pqVar20 + -4) >> 5) {
            local_cd8 = (&local_ce0)[lVar17];
            lVar17 = 1;
          }
        }
        uVar2 = _UpdateNodes(param_2,local_d70,local_d78,local_ce0,local_d00,param_7,local_d60,
                             param_8,lVar17,&local_cd8,local_19e0,local_eb8,param_10);
        local_d28 = 0;
        if (0x3fff < uVar2) {
          local_d28 = uVar2;
        }
        if (lVar17 == 1) {
          uVar4 = local_cd8._4_4_ >> 5;
          if (((uint)local_d88 < uVar4) && (local_d28 < uVar4)) {
            local_d28 = (ulong)uVar4;
          }
        }
        lVar19 = local_d78;
        if (1 < local_d28) {
          pcVar7 = (char *)((long)pqVar12 + 1);
          local_d58 = (char *)((long)pqVar12 + local_d28);
          if (local_d80 <= (char *)((long)pqVar12 + local_d28)) {
            local_d58 = local_d80;
          }
          pcVar9 = local_d58 + -0x3f;
          if (local_d58 < pqVar12 + 8) {
            pcVar9 = pcVar7;
          }
          if (((char *)((long)pqVar12 + 0x201U) <= pcVar9) && (pcVar7 < pcVar9)) {
            local_d20 = *(char **)(param_9 + 0x30);
            local_d50 = *(long *)(param_9 + 0x38);
            local_d38 = local_d20 + -0xf;
            local_d48 = *(qword **)(param_9 + 0x48);
            do {
              uVar2 = (ulong)((uint)(*(int *)(local_ce0 + ((ulong)pcVar7 & local_d00)) * 0x1e35a7bd)
                             >> 0xf);
              pcVar5 = (char *)(ulong)*(uint *)(local_d50 + uVar2 * 4);
              local_d08 = (qword *)(((ulong)local_d20 & (ulong)pcVar7) * 2 + 1);
              local_cf0 = (qword *)(((ulong)local_d20 & (ulong)pcVar7) * 2);
              *(int *)(local_d50 + uVar2 * 4) = (int)pcVar7;
              if (pcVar7 != pcVar5) {
                local_d10 = ((ulong)pcVar7 & local_d00) + local_ce0;
                lVar17 = 0x40;
                local_ce8 = (qword *)0x0;
                pqVar12 = (qword *)0x0;
LAB_0004c862:
                bVar24 = lVar17 != 0;
                lVar17 = lVar17 + -1;
                if ((pcVar7 + -(long)pcVar5 <= local_d38) && (bVar24)) {
                  uVar13 = SUB84(pcVar5,0);
                  local_d40 = (qword *)CONCAT44(local_d40._4_4_,uVar13);
                  pqVar10 = pqVar12;
                  if (local_ce8 < pqVar12) {
                    pqVar10 = local_ce8;
                  }
                  lVar3 = ((ulong)pcVar5 & local_d00) + local_ce0;
                  pcVar23 = (char *)((long)pqVar10 + lVar3);
                  uVar2 = 0x80 - (long)pqVar10;
                  if (7 < uVar2) {
                    uVar6 = uVar2 & 0xfffffffffffffff8;
                    lVar19 = 0;
                    uVar16 = 0;
LAB_0004c8d2:
                    uVar15 = *(ulong *)((long)pqVar10 + uVar16 * 8 + local_d10);
                    if (*(ulong *)(pcVar23 + uVar16 * 8) == uVar15) goto code_r0x0004c8e2;
                    uVar15 = uVar15 ^ *(ulong *)(pcVar23 + uVar16 * 8);
                    uVar2 = 0;
                    if (uVar15 != 0) {
                      for (; (uVar15 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                      }
                    }
                    uVar16 = (uVar2 >> 3 & 0x1fffffff) - lVar19;
                    goto LAB_0004c936;
                  }
                  uVar6 = 0;
                  goto LAB_0004c9c0;
                }
              }
LAB_0004c809:
              uVar13 = *(undefined4 *)(param_9 + 0x40);
              *(undefined4 *)((long)local_d48 + (long)local_cf0 * 4) = uVar13;
LAB_0004c81b:
              *(undefined4 *)((long)local_d48 + (long)local_d08 * 4) = uVar13;
              pcVar7 = pcVar7 + 8;
              param_2 = local_d30;
              local_d18 = pcVar9;
            } while (pcVar7 < pcVar9);
          }
          if (pcVar9 < local_d58) {
            local_d20 = *(char **)(param_9 + 0x30);
            local_d48 = *(qword **)(param_9 + 0x38);
            local_d38 = local_d20 + -0xf;
            lVar17 = *(long *)(param_9 + 0x48);
            do {
              uVar2 = (ulong)((uint)(*(int *)(local_ce0 + ((ulong)pcVar9 & local_d00)) * 0x1e35a7bd)
                             >> 0xf);
              pcVar7 = (char *)(ulong)*(uint *)((long)local_d48 + uVar2 * 4);
              local_d08 = (qword *)(((ulong)local_d20 & (ulong)pcVar9) * 2 + 1);
              local_cf0 = (qword *)(((ulong)local_d20 & (ulong)pcVar9) * 2);
              *(int *)((long)local_d48 + uVar2 * 4) = (int)pcVar9;
              if (pcVar9 != pcVar7) {
                local_d10 = ((ulong)pcVar9 & local_d00) + local_ce0;
                lVar3 = 0x40;
                pqVar12 = (qword *)0x0;
                pqVar10 = (qword *)0x0;
LAB_0004cac6:
                pqVar20 = pqVar10;
                bVar24 = lVar3 != 0;
                lVar3 = lVar3 + -1;
                local_d18 = pcVar9;
                if ((pcVar9 + -(long)pcVar7 <= local_d38) && (bVar24)) {
                  uVar13 = SUB84(pcVar7,0);
                  local_d40 = (qword *)CONCAT44(local_d40._4_4_,uVar13);
                  pqVar10 = pqVar12;
                  if (pqVar20 < pqVar12) {
                    pqVar10 = pqVar20;
                  }
                  lVar19 = ((ulong)pcVar7 & local_d00) + local_ce0;
                  pcVar5 = (char *)((long)pqVar10 + lVar19);
                  uVar2 = 0x80 - (long)pqVar10;
                  if (7 < uVar2) {
                    uVar6 = uVar2 & 0xfffffffffffffff8;
                    lVar14 = 0;
                    uVar16 = 0;
LAB_0004cb39:
                    uVar15 = *(ulong *)((long)pqVar10 + uVar16 * 8 + local_d10);
                    if (*(ulong *)(pcVar5 + uVar16 * 8) == uVar15) goto code_r0x0004cb46;
                    uVar15 = uVar15 ^ *(ulong *)(pcVar5 + uVar16 * 8);
                    uVar2 = 0;
                    if (uVar15 != 0) {
                      for (; (uVar15 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                      }
                    }
                    uVar16 = (uVar2 >> 3 & 0x1fffffff) - lVar14;
                    goto LAB_0004cb92;
                  }
                  uVar6 = 0;
                  goto LAB_0004cc21;
                }
              }
LAB_0004cc5b:
              uVar13 = *(undefined4 *)(param_9 + 0x40);
              *(undefined4 *)(lVar17 + (long)local_cf0 * 4) = uVar13;
LAB_0004cc6d:
              *(undefined4 *)(lVar17 + (long)local_d08 * 4) = uVar13;
              pcVar9 = pcVar9 + 1;
              param_2 = local_d30;
            } while (pcVar9 < local_d58);
          }
          lVar17 = local_d28 - 1;
          uVar2 = local_d78 + 4;
          do {
            lVar19 = uVar2 - 3;
            if (param_2 <= uVar2) break;
            _EvaluateNode(local_db0,lVar19,local_d60,param_8,local_19e0,local_eb8,param_10);
            uVar2 = uVar2 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        lVar3 = lVar19 + 1;
        uVar2 = local_d00;
        lVar17 = local_d70;
      } while (lVar19 + 4U < param_2);
    }
    lVar17 = local_d98;
    _BrotliFree(local_d98,local_ed0);
    _BrotliFree(lVar17,local_ee0);
    pcVar9 = (char *)_ComputeShortestPathFromNodes(param_2,param_10);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return pcVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x0004c1c3:
  uVar2 = uVar2 + 1;
  lVar19 = lVar19 + -8;
  pcVar9 = (char *)((ulong)local_ce8 & 0xfffffffffffffff8);
  pqVar20 = local_cf0;
  if ((ulong)local_ce8 >> 3 == uVar2) goto LAB_0004c245;
  goto LAB_0004c1b6;
code_r0x0004c3d4:
  uVar16 = uVar16 + 1;
  lVar14 = lVar14 + -8;
  if (uVar2 >> 3 == uVar16) goto code_r0x0004c3e0;
  goto LAB_0004c3c7;
code_r0x0004c3e0:
  pcVar11 = pcVar11 + -lVar14;
LAB_0004c515:
  uVar2 = uVar2 & 7;
  uVar16 = uVar6;
  if (uVar2 != 0) {
    uVar15 = uVar6 | uVar2;
    do {
      uVar16 = uVar6;
      if ((local_d58 + (long)pcVar23)[uVar6] != *pcVar11) break;
      pcVar11 = pcVar11 + 1;
      uVar6 = uVar6 + 1;
      uVar2 = uVar2 - 1;
      uVar16 = uVar15;
    } while (uVar2 != 0);
  }
LAB_0004c412:
  pcVar23 = pcVar23 + uVar16;
  if (local_cf8 == (qword *)0x0) {
    local_cf8 = (qword *)0x0;
  }
  else if (pcVar7 < pcVar23) {
    *(int *)local_cf8 = (int)(char *)((long)pqVar12 - (long)pcVar9);
    *(int *)((long)local_cf8 + 4) = (int)pcVar23 << 5;
    local_cf8 = local_cf8 + 1;
    pcVar7 = pcVar23;
  }
  local_d20 = pcVar5;
  local_cf0 = pqVar10;
  if (local_d48 <= pcVar23) {
    param_2 = local_d30;
    if (local_ce8 < section_00000068.segname + 8) goto LAB_0004c58a;
    *(undefined4 *)(lVar17 + local_d68 * 4) =
         *(undefined4 *)(lVar17 + ((ulong)pcVar9 & local_d10) * 8);
    uVar13 = *(undefined4 *)(lVar17 + 4 + ((ulong)pcVar9 & local_d10) * 8);
    goto LAB_0004c31a;
  }
  if ((byte)pcVar23[lVar19] < (byte)local_d58[(long)pcVar23]) {
    if (section_00000068.segname + 7 < local_ce8) {
      *(int *)(lVar17 + local_d68 * 4) = (int)pcVar9;
    }
    uVar2 = ((ulong)pcVar9 & local_d10) * 2 + 1;
    pcVar5 = pcVar23;
    local_d68 = uVar2;
  }
  else {
    if (section_00000068.segname + 7 < local_ce8) {
      *(int *)(lVar17 + local_d28 * 4) = (int)pcVar9;
    }
    uVar2 = ((ulong)pcVar9 & local_d10) * 2;
    local_d28 = uVar2;
    local_d18 = pcVar23;
  }
  pcVar9 = (char *)(ulong)*(uint *)(lVar17 + uVar2 * 4);
  uVar2 = local_d00;
  param_2 = local_d30;
  if (pqVar12 == (qword *)pcVar9) goto LAB_0004c2f7;
  goto LAB_0004c35a;
code_r0x0004c8e2:
  uVar16 = uVar16 + 1;
  lVar19 = lVar19 + -8;
  if (uVar2 >> 3 == uVar16) goto code_r0x0004c8f1;
  goto LAB_0004c8d2;
code_r0x0004c8f1:
  pcVar23 = pcVar23 + -lVar19;
LAB_0004c9c0:
  uVar2 = uVar2 & 7;
  uVar16 = uVar6;
  if (uVar2 != 0) {
    uVar15 = uVar6 | uVar2;
    do {
      uVar16 = uVar6;
      if (*(char *)((long)pqVar10 + uVar6 + local_d10) != *pcVar23) break;
      pcVar23 = pcVar23 + 1;
      uVar6 = uVar6 + 1;
      uVar2 = uVar2 - 1;
      uVar16 = uVar15;
    } while (uVar2 != 0);
  }
LAB_0004c936:
  pqVar10 = (qword *)((long)pqVar10 + uVar16);
  local_cf8 = pqVar12;
  if (section_00000068.segname + 7 < pqVar10) {
    *(int *)((long)local_d48 + (long)local_cf0 * 4) =
         (int)local_d48[(ulong)pcVar5 & (ulong)local_d20];
    uVar13 = *(undefined4 *)((long)local_d48 + ((ulong)pcVar5 & (ulong)local_d20) * 8 + 4);
    goto LAB_0004c81b;
  }
  pqVar20 = (qword *)(((ulong)pcVar5 & (ulong)local_d20) * 2);
  if ((byte)*(char *)((long)pqVar10 + lVar3) < (byte)*(char *)((long)pqVar10 + local_d10)) {
    *(undefined4 *)((long)local_d48 + (long)local_cf0 * 4) = uVar13;
    pqVar20 = (qword *)((ulong)pqVar20 | 1);
    local_cf0 = pqVar20;
    local_ce8 = pqVar10;
  }
  else {
    *(undefined4 *)((long)local_d48 + (long)local_d08 * 4) = uVar13;
    pqVar12 = pqVar10;
    local_d08 = pqVar20;
  }
  pcVar5 = (char *)(ulong)*(uint *)((long)local_d48 + (long)pqVar20 * 4);
  if (pcVar7 == pcVar5) goto LAB_0004c809;
  goto LAB_0004c862;
code_r0x0004cb46:
  uVar16 = uVar16 + 1;
  lVar14 = lVar14 + -8;
  if (uVar2 >> 3 == uVar16) goto code_r0x0004cb52;
  goto LAB_0004cb39;
code_r0x0004cb52:
  pcVar5 = pcVar5 + -lVar14;
LAB_0004cc21:
  uVar2 = uVar2 & 7;
  uVar16 = uVar6;
  if (uVar2 != 0) {
    uVar15 = uVar6 | uVar2;
    do {
      uVar16 = uVar6;
      if (*(char *)((long)pqVar10 + uVar6 + local_d10) != *pcVar5) break;
      pcVar5 = pcVar5 + 1;
      uVar6 = uVar6 + 1;
      uVar2 = uVar2 - 1;
      uVar16 = uVar15;
    } while (uVar2 != 0);
  }
LAB_0004cb92:
  pqVar10 = (qword *)((long)pqVar10 + uVar16);
  local_cf8 = pqVar20;
  local_ce8 = pqVar12;
  if (section_00000068.segname + 7 < pqVar10) {
    *(undefined4 *)(lVar17 + (long)local_cf0 * 4) =
         *(undefined4 *)(lVar17 + ((ulong)pcVar7 & (ulong)local_d20) * 8);
    uVar13 = *(undefined4 *)(lVar17 + 4 + ((ulong)pcVar7 & (ulong)local_d20) * 8);
    goto LAB_0004cc6d;
  }
  pqVar22 = (qword *)(((ulong)pcVar7 & (ulong)local_d20) * 2);
  if ((byte)*(char *)((long)pqVar10 + lVar19) < (byte)*(char *)((long)pqVar10 + local_d10)) {
    *(undefined4 *)(lVar17 + (long)local_cf0 * 4) = uVar13;
    pqVar22 = (qword *)((ulong)pqVar22 | 1);
    local_cf0 = pqVar22;
  }
  else {
    *(undefined4 *)(lVar17 + (long)local_d08 * 4) = uVar13;
    pqVar12 = pqVar10;
    pqVar10 = pqVar20;
    local_d08 = pqVar22;
  }
  pcVar7 = (char *)(ulong)*(uint *)(lVar17 + (long)pqVar22 * 4);
  if (pcVar9 == pcVar7) goto LAB_0004cc5b;
  goto LAB_0004cac6;
}

