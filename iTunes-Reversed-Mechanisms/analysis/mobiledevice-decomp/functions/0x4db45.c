// rea decompile_all
// name: _BrotliCreateHqZopfliBackwardReferences
// address: 0x4db45
// body: available
// range: 0x4db45-0x4ef43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ef3f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCreateHqZopfliBackwardReferences
               (long param_1,ulong param_2,long param_3,long param_4,ulong param_5,
               undefined8 param_6,long param_7,long param_8,undefined4 *param_9,ulong *param_10,
               long param_11,long *param_12,undefined8 *param_13)

{
  undefined4 *puVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  qword *pqVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  undefined4 uVar16;
  qword *pqVar17;
  ulong uVar18;
  undefined8 extraout_RDX;
  undefined8 uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  char *pcVar22;
  long lVar23;
  dword *pdVar24;
  long lVar25;
  qword *pqVar26;
  long lVar27;
  qword *pqVar28;
  qword *pqVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_27f8 [704];
  undefined8 local_1cf8;
  undefined4 local_1cf0;
  undefined4 *local_1ce8;
  float local_1ce0;
  long local_1cd8;
  long local_1cd0;
  undefined4 *local_1cc8;
  long local_1cc0;
  ulong local_1cb8;
  qword *local_1cb0;
  undefined4 *local_1ca8;
  char *local_1ca0;
  long local_1c98;
  int *local_1c90;
  undefined8 local_1c88;
  undefined4 *local_1c80;
  ulong local_1c78;
  long local_1c70;
  char *local_1c68;
  long local_1c60;
  undefined4 *local_1c58;
  long local_1c50;
  undefined4 *local_1c48;
  long local_1c40;
  qword *local_1c38;
  ulong local_1c30;
  void *local_1c28;
  ulong local_1c20;
  qword *local_1c18;
  qword *local_1c10;
  qword *local_1c08;
  qword *local_1c00;
  ulong local_1bf8;
  long local_1bf0;
  ulong local_1be8;
  undefined4 *local_1be0;
  qword *local_1bd8;
  qword *local_1bd0;
  undefined4 local_1bc8;
  undefined4 uStack_1bc4;
  undefined4 uStack_1bc0;
  undefined4 uStack_1bbc;
  float local_1bb8 [256];
  int local_17b8 [544];
  uint local_f38 [64];
  undefined8 local_e38;
  int local_438 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_1ca8 = (undefined4 *)(1L << (*(byte *)(param_7 + 8) & 0x3f));
  local_1c70 = param_3;
  local_1c40 = param_1;
  local_1c20 = param_5;
  local_1bf8 = param_2;
  local_1bf0 = param_4;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_0004ef1d;
    local_1c90 = (int *)(param_1 + 0x18);
    local_1c88 = 0;
    local_1c50 = 0;
    local_1c28 = (void *)0x0;
  }
  else {
    local_1cd0 = *(long *)(param_7 + 0x10);
    param_2 = param_2 * 4;
    local_1c50 = _BrotliAllocate(param_1,param_2);
    local_1c28 = (void *)0x0;
    local_1ca0 = (char *)(local_1bf8 - 0x7f);
    if (local_1bf8 < 0x7f) {
      local_1ca0 = (char *)0x0;
    }
    local_1c78 = param_2;
    if (param_2 != 0) {
      local_1c28 = (void *)_BrotliAllocate(param_1,local_1bf8 << 5);
    }
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_0004ef1d;
    local_1c90 = (int *)(param_1 + 0x18);
    local_1c88 = 0;
    if (3 < local_1bf8) {
      local_1ca8 = local_1ca8 + -4;
      local_1ca0 = local_1ca0 + param_3;
      local_1cc0 = param_7 + 0x58;
      local_1c60 = 0;
      lVar23 = 0;
      do {
        pvVar6 = local_1c28;
        lVar27 = local_1c40;
        puVar1 = (undefined4 *)(lVar23 + param_3);
        local_1be0 = local_1ca8;
        if (puVar1 < local_1ca8) {
          local_1be0 = puVar1;
        }
        local_1cc8 = (undefined4 *)(local_1cd0 + (long)puVar1);
        if (local_1ca8 <= (undefined4 *)(local_1cd0 + (long)puVar1)) {
          local_1cc8 = local_1ca8;
        }
        uVar18 = local_1c60 + 0x80;
        local_1c98 = lVar23;
        if (local_1c78 < uVar18) {
          uVar13 = local_1c78;
          if (local_1c78 == 0) {
            uVar13 = uVar18;
          }
          do {
            uVar14 = uVar13;
            uVar13 = uVar14 * 2;
          } while (uVar14 < uVar18);
          pvVar8 = (void *)_BrotliAllocate(local_1c40,uVar14 * 8);
          if ((*(int *)(lVar27 + 0x18) == 0) && (local_1c78 != 0)) {
            _memcpy(pvVar8,pvVar6,local_1c78 << 3);
            lVar27 = local_1c40;
          }
          _BrotliFree(lVar27,pvVar6);
          param_4 = local_1bf0;
          param_5 = local_1c20;
          local_1c78 = uVar14;
          local_1c28 = pvVar8;
        }
        if (*local_1c90 != 0) goto LAB_0004ef1d;
        local_1c08 = (qword *)(local_1bf8 - local_1c98);
        local_1cb0 = (qword *)((long)local_1c28 + local_1c60 * 8);
        local_1c10 = (qword *)((ulong)puVar1 & param_5);
        pqVar9 = (qword *)&MACH_HEADER.ncmds;
        if (*(int *)(param_7 + 4) == 0xb) {
          pqVar9 = &segment_command_00000020.vmsize;
        }
        uVar18 = 0;
        if (pqVar9 <= puVar1) {
          uVar18 = (long)puVar1 - (long)pqVar9;
        }
        uVar13 = (long)puVar1 - 1;
        pqVar9 = (qword *)((long)&MACH_HEADER.magic + 1);
        local_1bd0 = local_1cb0;
        if (uVar18 < uVar13) {
          pqVar17 = (qword *)((long)local_1c10 + param_4);
          uVar14 = (ulong)((uint)local_1c08 & 7);
          local_1c00 = (qword *)((long)pqVar17 + (long)((ulong)local_1c08 & 0xfffffffffffffff8));
          while ((undefined4 *)((long)puVar1 - uVar13) <= local_1be0) {
            if (((char)*pqVar17 == *(char *)(param_4 + (uVar13 & param_5))) &&
               (lVar23 = (uVar13 & param_5) + param_4,
               *(char *)((long)pqVar17 + 1) == *(char *)(lVar23 + 1))) {
              if ((char *)((long)&MACH_HEADER.cputype + 3) < local_1c08) {
                lVar27 = 0;
                uVar20 = 0;
LAB_0004de78:
                uVar10 = *(ulong *)(lVar23 + uVar20 * 8);
                if (pqVar17[uVar20] == uVar10) goto code_r0x0004de85;
                uVar10 = uVar10 ^ pqVar17[uVar20];
                uVar20 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
                  }
                }
                pqVar29 = (qword *)((uVar20 >> 3 & 0x1fffffff) - lVar27);
                goto LAB_0004deb9;
              }
              pqVar26 = (qword *)0x0;
              pqVar28 = pqVar17;
LAB_0004df08:
              pqVar29 = pqVar26;
              if (uVar14 != 0) {
                local_1bd8 = (qword *)(uVar14 | (ulong)pqVar26);
                uVar20 = uVar14;
                do {
                  pqVar29 = pqVar26;
                  if (*(char *)((long)pqVar26 + lVar23) != (char)*pqVar28) break;
                  pqVar28 = (qword *)((long)pqVar28 + 1);
                  pqVar26 = (qword *)((long)pqVar26 + 1);
                  uVar20 = uVar20 - 1;
                  pqVar29 = local_1bd8;
                } while (uVar20 != 0);
              }
LAB_0004deb9:
              param_4 = local_1bf0;
              param_5 = local_1c20;
              if (pqVar9 < pqVar29) {
                *(int *)local_1bd0 = (int)(undefined4 *)((long)puVar1 - uVar13);
                *(int *)((long)local_1bd0 + 4) = (int)pqVar29 << 5;
                local_1bd0 = local_1bd0 + 1;
                pqVar9 = pqVar29;
              }
            }
            uVar13 = uVar13 - 1;
            if ((uVar13 <= uVar18) || ((char *)((long)&MACH_HEADER.magic + 2) < pqVar9)) break;
          }
        }
        if (pqVar9 < local_1c08) {
          uVar13 = (ulong)((uint)(*(int *)((long)local_1c10 + param_4) * 0x1e35a7bd) >> 0xf);
          local_1be8 = *(ulong *)(param_8 + 0x30);
          uVar18 = *(ulong *)(param_8 + 0x48);
          puVar21 = (undefined4 *)(ulong)*(uint *)(*(long *)(param_8 + 0x38) + uVar13 * 4);
          local_1c38 = local_1c08;
          if (section_00000068.segname + 8 <= local_1c08) {
            *(int *)(*(long *)(param_8 + 0x38) + uVar13 * 4) = (int)puVar1;
            local_1c38 = (qword *)(section_00000068.segname + 8);
          }
          local_1c58 = (undefined4 *)((local_1be8 & (ulong)puVar1) * 2 + 1);
          local_1c48 = (undefined4 *)((local_1be8 & (ulong)puVar1) * 2);
          if (puVar1 != puVar21) {
            local_1c68 = (char *)((long)local_1c10 + param_4);
            pqVar17 = &segment_command_00000020.vmsize;
            local_1c18 = (qword *)0x0;
            local_1bd8 = (qword *)0x0;
LAB_0004dfff:
            bVar30 = pqVar17 != (qword *)0x0;
            pqVar17 = (qword *)((long)pqVar17 + -1);
            param_4 = local_1bf0;
            local_1c80 = puVar1;
            local_1c30 = uVar18;
            if (((undefined4 *)((long)puVar1 - (long)puVar21) <= local_1be0) && (bVar30)) {
              pqVar26 = local_1c18;
              if (local_1bd8 < local_1c18) {
                pqVar26 = local_1bd8;
              }
              lVar23 = ((ulong)puVar21 & param_5) + local_1bf0;
              pcVar22 = (char *)((long)pqVar26 + lVar23);
              uVar13 = (long)local_1c08 - (long)pqVar26;
              if (7 < uVar13) {
                uVar14 = uVar13 & 0xfffffffffffffff8;
                lVar27 = 0;
                uVar20 = 0;
LAB_0004e080:
                uVar10 = *(ulong *)(local_1c68 + (long)pqVar26 + uVar20 * 8);
                if (*(ulong *)(pcVar22 + uVar20 * 8) == uVar10) goto code_r0x0004e090;
                uVar10 = uVar10 ^ *(ulong *)(pcVar22 + uVar20 * 8);
                uVar13 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                  }
                }
                uVar20 = (uVar13 >> 3 & 0x1fffffff) - lVar27;
                goto LAB_0004e0ec;
              }
              uVar14 = 0;
              goto LAB_0004e1b2;
            }
          }
LAB_0004e1f9:
          if (section_00000068.segname + 7 < local_1c08) {
            uVar16 = *(undefined4 *)(param_8 + 0x40);
            *(undefined4 *)(uVar18 + (long)local_1c48 * 4) = uVar16;
LAB_0004e21b:
            *(undefined4 *)(uVar18 + (long)local_1c58 * 4) = uVar16;
          }
        }
LAB_0004e226:
        _memset_pattern16(local_f38,&DAT_0032afa0,0x98);
        pqVar17 = local_1c08;
        pdVar24 = (dword *)((long)pqVar9 + 1);
        if (pdVar24 < (char *)((long)&MACH_HEADER.cputype + 1)) {
          pdVar24 = &MACH_HEADER.cputype;
        }
        iVar7 = _BrotliFindAllStaticDictionaryMatches
                          (local_1cc0,(char *)((long)local_1c10 + param_4),pdVar24,local_1c08,
                           local_f38);
        param_3 = local_1c70;
        pqVar9 = local_1bd0;
        if (iVar7 != 0) {
          if (&segment_command_00000020.cmdsize < pqVar17) {
            pqVar17 = (qword *)((long)&segment_command_00000020.cmdsize + 1);
          }
          if (pdVar24 <= pqVar17) {
            iVar7 = (int)pdVar24 << 5;
            do {
              uVar12 = local_f38[(long)pdVar24];
              if ((uVar12 < 0xfffffff) &&
                 (uVar18 = (long)local_1cc8 + (ulong)(uVar12 >> 5) + 1,
                 uVar18 <= *(ulong *)(param_7 + 0x50))) {
                uVar12 = uVar12 & 0x1f;
                *(int *)pqVar9 = (int)uVar18;
                if (pdVar24 == (dword *)(ulong)uVar12) {
                  uVar12 = 0;
                }
                *(uint *)((long)pqVar9 + 4) = uVar12 + iVar7;
                pqVar9 = pqVar9 + 1;
              }
              pdVar24 = (dword *)((long)pdVar24 + 1);
              iVar7 = iVar7 + 0x20;
            } while ((dword *)((long)pqVar17 + 1) != pdVar24);
          }
        }
        lVar11 = (long)pqVar9 - (long)local_1cb0 >> 3;
        *(int *)(local_1c50 + local_1c98 * 4) = (int)lVar11;
        lVar27 = local_1c98;
        lVar23 = local_1c60;
        if (pqVar9 != local_1cb0) {
          lVar23 = lVar11 + local_1c60;
          uVar12 = *(uint *)((long)local_1c28 + lVar23 * 8 + -4);
          if (0x28bf < uVar12) {
            local_1c58 = (undefined4 *)(local_1c50 + local_1c98 * 4);
            local_1c48 = (undefined4 *)(ulong)(uVar12 >> 5);
            pqVar9 = (qword *)((long)puVar1 + 1);
            local_1c68 = (char *)((long)local_1c48 + (long)puVar1);
            if (local_1ca0 <= (char *)((long)local_1c48 + (long)puVar1)) {
              local_1c68 = local_1ca0;
            }
            pqVar17 = (qword *)(local_1c68 + -0x3f);
            if (local_1c68 < puVar1 + 0x10) {
              pqVar17 = pqVar9;
            }
            *(undefined8 *)((long)local_1c28 + local_1c60 * 8) =
                 *(undefined8 *)((long)local_1c28 + lVar23 * 8 + -8);
            *local_1c58 = 1;
            if (((char *)((long)puVar1 + 0x201) <= pqVar17) && (pqVar9 < pqVar17)) {
              local_1be8 = *(ulong *)(param_8 + 0x30);
              local_1c80 = *(undefined4 **)(param_8 + 0x38);
              local_1c30 = local_1be8 - 0xf;
              lVar23 = *(long *)(param_8 + 0x48);
              do {
                uVar12 = (uint)(*(int *)(param_4 + ((ulong)pqVar9 & param_5)) * 0x1e35a7bd) >> 0xf;
                pcVar22 = (char *)(ulong)(uint)local_1c80[uVar12];
                local_1c00 = (qword *)((local_1be8 & (ulong)pqVar9) * 2 + 1);
                local_1bd8 = (qword *)((local_1be8 & (ulong)pqVar9) * 2);
                local_1c80[uVar12] = (int)pqVar9;
                if (pqVar9 != (qword *)pcVar22) {
                  local_1c38 = (qword *)(((ulong)pqVar9 & param_5) + param_4);
                  lVar27 = 0x40;
                  local_1bd0 = (qword *)0x0;
                  pqVar26 = (qword *)0x0;
LAB_0004e4a9:
                  bVar30 = lVar27 != 0;
                  lVar27 = lVar27 + -1;
                  local_1c10 = pqVar9;
                  if (((ulong)((long)pqVar9 - (long)pcVar22) <= local_1c30) && (bVar30)) {
                    uVar16 = SUB84(pcVar22,0);
                    local_1be0 = (undefined4 *)CONCAT44(local_1be0._4_4_,uVar16);
                    pqVar28 = pqVar26;
                    if (local_1bd0 < pqVar26) {
                      pqVar28 = local_1bd0;
                    }
                    lVar11 = ((ulong)pcVar22 & param_5) + param_4;
                    pcVar15 = (char *)((long)pqVar28 + lVar11);
                    uVar18 = 0x80 - (long)pqVar28;
                    if (7 < uVar18) {
                      uVar13 = uVar18 & 0xfffffffffffffff8;
                      lVar25 = 0;
                      uVar14 = 0;
LAB_0004e51b:
                      uVar20 = *(ulong *)((char *)((long)local_1c38 + (long)pqVar28) + uVar14 * 8);
                      if (*(ulong *)(pcVar15 + uVar14 * 8) == uVar20) goto code_r0x0004e528;
                      uVar20 = uVar20 ^ *(ulong *)(pcVar15 + uVar14 * 8);
                      uVar18 = 0;
                      if (uVar20 != 0) {
                        for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                        }
                      }
                      uVar14 = (uVar18 >> 3 & 0x1fffffff) - lVar25;
                      param_4 = local_1bf0;
                      param_5 = local_1c20;
                      goto LAB_0004e579;
                    }
                    uVar13 = 0;
                    goto LAB_0004e5fd;
                  }
                }
LAB_0004e452:
                uVar16 = *(undefined4 *)(param_8 + 0x40);
                *(undefined4 *)(lVar23 + (long)local_1bd8 * 4) = uVar16;
LAB_0004e463:
                *(undefined4 *)(lVar23 + (long)local_1c00 * 4) = uVar16;
                pqVar9 = pqVar9 + 1;
                local_1c18 = pqVar17;
              } while (pqVar9 < pqVar17);
            }
            if (pqVar17 < local_1c68) {
              local_1be8 = *(ulong *)(param_8 + 0x30);
              local_1c30 = *(ulong *)(param_8 + 0x38);
              local_1c38 = (qword *)(local_1be8 - 0xf);
              lVar23 = *(long *)(param_8 + 0x48);
              do {
                uVar18 = (ulong)((uint)(*(int *)(param_4 + ((ulong)pqVar17 & param_5)) * 0x1e35a7bd)
                                >> 0xf);
                pcVar22 = (char *)(ulong)*(uint *)(local_1c30 + uVar18 * 4);
                local_1c00 = (qword *)((local_1be8 & (ulong)pqVar17) * 2 + 1);
                local_1bd8 = (qword *)((local_1be8 & (ulong)pqVar17) * 2);
                *(int *)(local_1c30 + uVar18 * 4) = (int)pqVar17;
                if (pqVar17 != (qword *)pcVar22) {
                  local_1c10 = (qword *)(((ulong)pqVar17 & param_5) + param_4);
                  lVar27 = 0x40;
                  pqVar9 = (qword *)0x0;
                  pqVar26 = (qword *)0x0;
LAB_0004e745:
                  pqVar28 = pqVar26;
                  bVar30 = lVar27 != 0;
                  lVar27 = lVar27 + -1;
                  local_1c18 = pqVar17;
                  if (((char *)((long)pqVar17 - (long)pcVar22) <= local_1c38) && (bVar30)) {
                    uVar16 = SUB84(pcVar22,0);
                    local_1be0 = (undefined4 *)CONCAT44(local_1be0._4_4_,uVar16);
                    pqVar26 = pqVar28;
                    if (pqVar9 < pqVar28) {
                      pqVar26 = pqVar9;
                    }
                    lVar11 = ((ulong)pcVar22 & local_1c20) + param_4;
                    pcVar15 = (char *)((long)pqVar26 + lVar11);
                    uVar18 = 0x80 - (long)pqVar26;
                    if (7 < uVar18) {
                      uVar13 = uVar18 & 0xfffffffffffffff8;
                      lVar25 = 0;
                      uVar14 = 0;
LAB_0004e7b9:
                      uVar20 = *(ulong *)((char *)((long)local_1c10 + (long)pqVar26) + uVar14 * 8);
                      if (*(ulong *)(pcVar15 + uVar14 * 8) == uVar20) goto code_r0x0004e7c6;
                      uVar20 = uVar20 ^ *(ulong *)(pcVar15 + uVar14 * 8);
                      uVar18 = 0;
                      if (uVar20 != 0) {
                        for (; (uVar20 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                        }
                      }
                      uVar14 = (uVar18 >> 3 & 0x1fffffff) - lVar25;
                      param_4 = local_1bf0;
                      goto LAB_0004e809;
                    }
                    uVar13 = 0;
                    goto LAB_0004e89a;
                  }
                }
LAB_0004e6eb:
                uVar16 = *(undefined4 *)(param_8 + 0x40);
                *(undefined4 *)(lVar23 + (long)local_1bd8 * 4) = uVar16;
LAB_0004e6fd:
                *(undefined4 *)(lVar23 + (long)local_1c00 * 4) = uVar16;
                pqVar17 = (qword *)((long)pqVar17 + 1);
                param_5 = local_1c20;
              } while (pqVar17 < local_1c68);
            }
            lVar23 = (long)local_1c48 + -1;
            local_1c60 = local_1c60 + 1;
            ___bzero(local_1c58 + 1,lVar23 * 4);
            lVar27 = local_1c98 + lVar23;
            lVar23 = local_1c60;
          }
        }
        local_1c60 = lVar23;
        lVar23 = lVar27 + 1;
      } while (lVar27 + 4U < local_1bf8);
      local_1c88 = CONCAT71((int7)((ulong)lVar23 >> 8),1);
      param_1 = local_1c40;
    }
  }
  local_1c10 = (qword *)*param_13;
  local_1be8 = *param_10;
  local_1bc8 = *param_9;
  uStack_1bc4 = param_9[1];
  uStack_1bc0 = param_9[2];
  uStack_1bbc = param_9[3];
  local_1bd8 = (qword *)*param_12;
  local_1c18 = (qword *)(local_1bf8 + 1);
  if (local_1c18 == (qword *)0x0) {
    local_1be0 = (undefined4 *)0x0;
  }
  else {
    local_1be0 = (undefined4 *)_BrotliAllocate(param_1,(long)local_1c18 * 0x10);
    param_1 = local_1c40;
  }
  if ((*local_1c90 == 0) &&
     (_InitZopfliCostModel(param_1,local_27f8,param_7 + 0x40,local_1bf8),
     *(int *)(local_1c40 + 0x18) == 0)) {
    local_1c30 = param_3 - local_1be8;
    local_1c38 = (qword *)(local_1be0 + 3);
    uVar19 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
    do {
      pqVar9 = local_1c38;
      for (pqVar17 = local_1c18; pqVar17 != (qword *)0x0; pqVar17 = (qword *)((long)pqVar17 + -1)) {
        pcVar22 = (char *)((long)pqVar9 + -0xc);
        pcVar22[0] = '\x01';
        pcVar22[1] = '\0';
        pcVar22[2] = '\0';
        pcVar22[3] = '\0';
        *(undefined4 *)(pqVar9 + -1) = 0;
        pcVar22 = (char *)((long)pqVar9 + -4);
        pcVar22[0] = '\0';
        pcVar22[1] = '\0';
        pcVar22[2] = '\0';
        pcVar22[3] = '\0';
        *(undefined4 *)pqVar9 = 0x7effc99e;
        pqVar9 = pqVar9 + 2;
      }
      local_1c00 = (qword *)CONCAT44(local_1c00._4_4_,(int)uVar19);
      if ((char)uVar19 == '\0') {
        pcVar22 = (char *)*param_12;
        ___bzero(local_438,0x400);
        ___bzero(local_f38,0xb00);
        ___bzero(local_17b8,0x880);
        if ((qword *)pcVar22 != local_1bd8) {
          lVar23 = 0;
          uVar18 = local_1c30;
          do {
            lVar27 = lVar23 * 0x10;
            uVar20 = (ulong)*(uint *)(param_11 + lVar27);
            uVar12 = *(uint *)(param_11 + 4 + lVar27);
            uVar4 = *(ushort *)(param_11 + 0xe + lVar27);
            uVar5 = *(ushort *)(param_11 + 0xc + lVar27);
            local_f38[uVar5] = local_f38[uVar5] + 1;
            uVar13 = uVar18;
            uVar14 = uVar20;
            if (0x7f < uVar5) {
              local_17b8[uVar4 & 0x3ff] = local_17b8[uVar4 & 0x3ff] + 1;
            }
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              local_438[*(byte *)(param_4 + (uVar13 & param_5))] =
                   local_438[*(byte *)(param_4 + (uVar13 & param_5))] + 1;
              uVar13 = uVar13 + 1;
            }
            uVar18 = uVar18 + uVar20 + (ulong)(uVar12 & 0x1ffffff);
            lVar23 = lVar23 + 1;
          } while (lVar23 != (long)pcVar22 - (long)local_1bd8);
        }
        _SetCost(local_438,0x100,1,local_1bb8);
        _SetCost(local_f38,0x2c0,0,local_27f8);
        _SetCost(local_17b8,local_1cf0,0,local_1cf8);
        local_1ce0 = 1.7e+38;
        lVar23 = 0;
        do {
          if (local_27f8[lVar23] <= local_1ce0) {
            local_1ce0 = local_27f8[lVar23];
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 != 0x2c0);
        *local_1ce8 = 0;
        if (local_1cd8 != 0) {
          fVar31 = 0.0;
          lVar23 = 0;
          fVar32 = 0.0;
          do {
            fVar2 = local_1bb8[*(byte *)(param_4 + (param_3 + lVar23 & param_5))];
            fVar33 = fVar32 + fVar31 + fVar2;
            local_1ce8[lVar23 + 1] = fVar33;
            lVar23 = lVar23 + 1;
            fVar31 = (fVar31 + fVar2) - (fVar33 - fVar32);
            fVar32 = fVar33;
          } while (local_1cd8 != lVar23);
        }
      }
      else {
        _ZopfliCostModelSetFromLiteralCosts(local_27f8,param_3,param_4,param_5);
      }
      *param_12 = (long)local_1bd8;
      *param_13 = local_1c10;
      *param_10 = local_1be8;
      *param_9 = local_1bc8;
      param_9[1] = uStack_1bc4;
      param_9[2] = uStack_1bc0;
      param_9[3] = uStack_1bbc;
      bVar3 = *(byte *)(param_7 + 8);
      local_1bd0 = *(qword **)(param_7 + 0x10);
      local_1c08 = (qword *)((long)&section_00000108.nrelocs + 1);
      if (*(int *)(param_7 + 4) < 0xb) {
        local_1c08 = (qword *)((long)&section_00000068.size + 6);
      }
      *local_1be0 = 0;
      local_1be0[3] = 0;
      local_e38 = 0;
      if ((char)local_1c88 != '\0') {
        lVar11 = (1L << (bVar3 & 0x3f)) + -0x10;
        local_1bd0 = (qword *)((long)local_1bd0 + param_3);
        lVar27 = 0;
        lVar23 = 0;
        do {
          lVar25 = local_1c50;
          uVar13 = _UpdateNodes(local_1bf8,param_3,lVar23,local_1bf0,local_1c20,param_7,lVar11,
                                param_9,*(undefined4 *)(local_1c50 + lVar23 * 4),
                                (void *)((long)local_1c28 + lVar27 * 8),local_27f8,local_f38,
                                local_1be0);
          uVar18 = 0;
          if (0x3fff < uVar13) {
            uVar18 = uVar13;
          }
          uVar13 = (ulong)*(uint *)(lVar25 + lVar23 * 4);
          lVar27 = lVar27 + uVar13;
          if (uVar13 == 1) {
            uVar12 = *(uint *)((long)local_1c28 + lVar27 * 8 + -4) >> 5;
            if (((uint)local_1c08 < uVar12) && (uVar18 < uVar12)) {
              uVar18 = (ulong)uVar12;
            }
          }
          if (1 < uVar18) {
            lVar25 = uVar18 - 1;
            uVar18 = lVar23 + 4;
            do {
              lVar23 = uVar18 - 3;
              if (local_1bf8 <= uVar18) break;
              _EvaluateNode(local_1bd0,lVar23,lVar11,param_9,local_27f8,local_f38,local_1be0);
              lVar27 = lVar27 + (ulong)*(uint *)(local_1c50 + -0xc + uVar18 * 4);
              uVar18 = uVar18 + 1;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          uVar18 = lVar23 + 4;
          param_3 = local_1c70;
          lVar23 = lVar23 + 1;
        } while (uVar18 < local_1bf8);
      }
      puVar1 = local_1be0;
      uVar18 = local_1bf8;
      lVar23 = _ComputeShortestPathFromNodes(local_1bf8,local_1be0);
      *param_12 = *param_12 + lVar23;
      _BrotliZopfliCreateCommands(uVar18,param_3,puVar1,param_9,param_10,param_7,param_11,param_13);
      lVar23 = local_1c40;
      uVar19 = 0;
      param_4 = local_1bf0;
      param_5 = local_1c20;
    } while (((ulong)local_1c00 & 1) != 0);
    _BrotliFree(local_1c40,local_1ce8);
    local_1ce8 = (undefined4 *)0x0;
    _BrotliFree(lVar23,local_1cf8);
    local_1cf8 = 0;
    _BrotliFree(lVar23,local_1be0);
    _BrotliFree(lVar23,local_1c28);
    _BrotliFree(lVar23,local_1c50);
  }
LAB_0004ef1d:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x0004de85:
  uVar20 = uVar20 + 1;
  lVar27 = lVar27 + -8;
  pqVar26 = (qword *)((ulong)local_1c08 & 0xfffffffffffffff8);
  pqVar28 = local_1c00;
  if ((ulong)local_1c08 >> 3 == uVar20) goto LAB_0004df08;
  goto LAB_0004de78;
code_r0x0004e090:
  uVar20 = uVar20 + 1;
  lVar27 = lVar27 + -8;
  if (uVar13 >> 3 == uVar20) goto code_r0x0004e09f;
  goto LAB_0004e080;
code_r0x0004e09f:
  pcVar22 = pcVar22 + -lVar27;
LAB_0004e1b2:
  uVar13 = uVar13 & 7;
  uVar20 = uVar14;
  if (uVar13 != 0) {
    local_1cb8 = uVar14 | uVar13;
    do {
      uVar20 = uVar14;
      if ((local_1c68 + (long)pqVar26)[uVar14] != *pcVar22) break;
      pcVar22 = pcVar22 + 1;
      uVar14 = uVar14 + 1;
      uVar13 = uVar13 - 1;
      uVar20 = local_1cb8;
    } while (uVar13 != 0);
  }
LAB_0004e0ec:
  pqVar26 = (qword *)((long)pqVar26 + uVar20);
  if (local_1bd0 == (qword *)0x0) {
    local_1bd0 = (qword *)0x0;
  }
  else if (pqVar9 < pqVar26) {
    *(int *)local_1bd0 = (int)(undefined4 *)((long)puVar1 - (long)puVar21);
    *(int *)((long)local_1bd0 + 4) = (int)pqVar26 << 5;
    local_1bd0 = local_1bd0 + 1;
    pqVar9 = pqVar26;
  }
  local_1c00 = pqVar17;
  if (local_1c38 <= pqVar26) {
    param_5 = local_1c20;
    if (local_1c08 < section_00000068.segname + 8) goto LAB_0004e226;
    *(undefined4 *)(uVar18 + (long)local_1c48 * 4) =
         *(undefined4 *)(uVar18 + ((ulong)puVar21 & local_1be8) * 8);
    uVar16 = *(undefined4 *)(uVar18 + 4 + ((ulong)puVar21 & local_1be8) * 8);
    goto LAB_0004e21b;
  }
  if (*(byte *)((long)pqVar26 + lVar23) < (byte)local_1c68[(long)pqVar26]) {
    if (section_00000068.segname + 7 < local_1c08) {
      *(int *)(uVar18 + (long)local_1c48 * 4) = (int)puVar21;
    }
    puVar21 = (undefined4 *)(((ulong)puVar21 & local_1be8) * 2 + 1);
    local_1c48 = puVar21;
    local_1bd8 = pqVar26;
  }
  else {
    if (section_00000068.segname + 7 < local_1c08) {
      *(int *)(uVar18 + (long)local_1c58 * 4) = (int)puVar21;
    }
    puVar21 = (undefined4 *)(((ulong)puVar21 & local_1be8) * 2);
    local_1c58 = puVar21;
    local_1c18 = pqVar26;
  }
  puVar21 = (undefined4 *)(ulong)*(uint *)(uVar18 + (long)puVar21 * 4);
  param_5 = local_1c20;
  if (puVar1 == puVar21) goto LAB_0004e1f9;
  goto LAB_0004dfff;
code_r0x0004e528:
  uVar14 = uVar14 + 1;
  lVar25 = lVar25 + -8;
  if (uVar18 >> 3 == uVar14) goto code_r0x0004e534;
  goto LAB_0004e51b;
code_r0x0004e534:
  pcVar15 = pcVar15 + -lVar25;
  param_4 = local_1bf0;
  param_5 = local_1c20;
LAB_0004e5fd:
  uVar18 = uVar18 & 7;
  uVar14 = uVar13;
  if (uVar18 != 0) {
    uVar20 = uVar13 | uVar18;
    do {
      uVar14 = uVar13;
      param_4 = local_1bf0;
      if (((char *)((long)local_1c38 + (long)pqVar28))[uVar13] != *pcVar15) break;
      pcVar15 = pcVar15 + 1;
      uVar13 = uVar13 + 1;
      uVar18 = uVar18 - 1;
      uVar14 = uVar20;
    } while (uVar18 != 0);
  }
LAB_0004e579:
  pqVar28 = (qword *)((long)pqVar28 + uVar14);
  local_1c08 = pqVar26;
  if (section_00000068.segname + 7 < pqVar28) {
    *(undefined4 *)(lVar23 + (long)local_1bd8 * 4) =
         *(undefined4 *)(lVar23 + ((ulong)pcVar22 & local_1be8) * 8);
    uVar16 = *(undefined4 *)(lVar23 + 4 + ((ulong)pcVar22 & local_1be8) * 8);
    goto LAB_0004e463;
  }
  pqVar29 = (qword *)(((ulong)pcVar22 & local_1be8) * 2);
  if ((byte)*(char *)((long)pqVar28 + lVar11) < (byte)*(char *)((long)local_1c38 + (long)pqVar28)) {
    *(undefined4 *)(lVar23 + (long)local_1bd8 * 4) = uVar16;
    pqVar29 = (qword *)((ulong)pqVar29 | 1);
    local_1bd8 = pqVar29;
    local_1bd0 = pqVar28;
  }
  else {
    *(undefined4 *)(lVar23 + (long)local_1c00 * 4) = uVar16;
    pqVar26 = pqVar28;
    local_1c00 = pqVar29;
  }
  pcVar22 = (char *)(ulong)*(uint *)(lVar23 + (long)pqVar29 * 4);
  if (pqVar9 == (qword *)pcVar22) goto LAB_0004e452;
  goto LAB_0004e4a9;
code_r0x0004e7c6:
  uVar14 = uVar14 + 1;
  lVar25 = lVar25 + -8;
  if (uVar18 >> 3 == uVar14) goto code_r0x0004e7d2;
  goto LAB_0004e7b9;
code_r0x0004e7d2:
  pcVar15 = pcVar15 + -lVar25;
  param_4 = local_1bf0;
LAB_0004e89a:
  uVar18 = uVar18 & 7;
  uVar14 = uVar13;
  if (uVar18 != 0) {
    uVar20 = uVar13 | uVar18;
    do {
      uVar14 = uVar13;
      if (((char *)((long)local_1c10 + (long)pqVar26))[uVar13] != *pcVar15) break;
      pcVar15 = pcVar15 + 1;
      uVar13 = uVar13 + 1;
      uVar18 = uVar18 - 1;
      uVar14 = uVar20;
    } while (uVar18 != 0);
  }
LAB_0004e809:
  pqVar26 = (qword *)((long)pqVar26 + uVar14);
  local_1c08 = pqVar9;
  local_1bd0 = pqVar28;
  if (section_00000068.segname + 7 < pqVar26) {
    *(undefined4 *)(lVar23 + (long)local_1bd8 * 4) =
         *(undefined4 *)(lVar23 + ((ulong)pcVar22 & local_1be8) * 8);
    uVar16 = *(undefined4 *)(lVar23 + 4 + ((ulong)pcVar22 & local_1be8) * 8);
    goto LAB_0004e6fd;
  }
  pqVar29 = (qword *)(((ulong)pcVar22 & local_1be8) * 2);
  if ((byte)*(char *)((long)pqVar26 + lVar11) < (byte)*(char *)((long)local_1c10 + (long)pqVar26)) {
    *(undefined4 *)(lVar23 + (long)local_1bd8 * 4) = uVar16;
    pqVar29 = (qword *)((ulong)pqVar29 | 1);
    pqVar9 = pqVar26;
    pqVar26 = pqVar28;
    local_1bd8 = pqVar29;
  }
  else {
    *(undefined4 *)(lVar23 + (long)local_1c00 * 4) = uVar16;
    local_1c00 = pqVar29;
  }
  pcVar22 = (char *)(ulong)*(uint *)(lVar23 + (long)pqVar29 * 4);
  if (pqVar17 == (qword *)pcVar22) goto LAB_0004e6eb;
  goto LAB_0004e745;
}

