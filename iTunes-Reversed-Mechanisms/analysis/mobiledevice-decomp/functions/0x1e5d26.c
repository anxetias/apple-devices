// rea decompile_all
// name: _BrotliSplitBlock
// address: 0x1e5d26
// body: available
// range: 0x1e5d26-0x1ea3a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ea336 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _BrotliSplitBlock(long param_1,uint *param_2,undefined1 *param_3,double param_4,ulong param_5,
                      double param_6,long param_7,long *param_8,long *param_9,long *param_10)

{
  int *piVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  qword *pqVar8;
  ulong uVar9;
  void *pvVar10;
  qword *pqVar11;
  undefined1 *puVar12;
  ulong uVar13;
  qword *pqVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  qword *pqVar18;
  uint *puVar19;
  long lVar20;
  int iVar21;
  byte *pbVar22;
  ulong uVar23;
  ushort *puVar24;
  long lVar25;
  byte bVar26;
  uint uVar27;
  byte bVar28;
  ulong uVar29;
  uint uVar30;
  size_t sVar31;
  undefined1 *puVar32;
  long lVar33;
  ulong uVar34;
  qword *pqVar35;
  double dVar36;
  size_t sVar37;
  undefined8 uVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int local_1018 [256];
  ulong local_c18;
  undefined8 local_c10;
  ulong local_798;
  undefined8 local_790;
  ulong local_518;
  undefined8 local_510;
  undefined1 *local_508;
  qword *local_500;
  qword *local_4f8;
  qword *local_4f0;
  qword *local_4e8;
  qword *local_4e0;
  uint *local_4d8;
  qword *local_4d0;
  qword *local_4c8;
  qword *local_4c0;
  qword *local_4b8;
  int *local_4b0;
  undefined1 *local_4a8;
  uint *local_4a0;
  undefined1 *local_498;
  uint *local_490;
  qword *local_488;
  qword *local_480;
  qword *local_478;
  qword *local_470;
  qword *local_468;
  double local_460;
  double local_458;
  qword *local_450;
  qword *local_448;
  long local_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_498 = param_3;
  local_4d8 = param_2;
  local_460 = param_6;
  local_458 = param_4;
  if (param_3 == (undefined1 *)0x0) {
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_001e6821;
    local_4b0 = (int *)(param_1 + 0x18);
    local_440 = param_1;
LAB_001e602f:
    *param_8 = 1;
  }
  else {
    local_450 = (qword *)0x0;
    do {
      local_4c0 = local_450;
      local_4a8 = (undefined1 *)(ulong)*param_2;
      local_450 = (qword *)((long)local_4c0 + (long)local_4a8);
      param_2 = param_2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != (undefined1 *)0x0);
    if (local_450 == (qword *)0x0) {
      pqVar8 = (qword *)0x0;
    }
    else {
      pqVar8 = (qword *)_BrotliAllocate(param_1,local_450);
    }
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_001e6821;
    local_4b0 = (int *)(param_1 + 0x18);
    local_480 = (qword *)((long)local_460 + 1);
    puVar19 = local_4d8 + 1;
    lVar17 = 0;
    puVar32 = local_498;
    local_468 = pqVar8;
    local_440 = param_1;
    do {
      param_5 = param_5 & (ulong)local_460;
      sVar31 = (size_t)puVar19[-1];
      if ((ulong)local_460 < param_5 + sVar31) {
        sVar37 = (long)local_480 - param_5;
        _memcpy((void *)((long)local_468 + lVar17),(void *)(param_5 + (long)local_458),sVar37);
        lVar17 = lVar17 + sVar37;
        sVar31 = sVar31 - sVar37;
        param_5 = 0;
      }
      if (sVar31 != 0) {
        _memcpy((void *)((long)local_468 + lVar17),(void *)((long)local_458 + param_5),sVar31);
        lVar17 = lVar17 + sVar31;
      }
      lVar33 = local_440;
      param_5 = (ulong)(*puVar19 & 0x1ffffff) + sVar31 + param_5;
      puVar19 = puVar19 + 4;
      puVar32 = puVar32 + -1;
    } while (puVar32 != (undefined1 *)0x0);
    uVar15 = 100;
    if (local_450 < (qword *)0xd480) {
      uVar15 = (ulong)(((uint)local_450 & 0xffff) / 0x220 + 1);
    }
    if (local_450 == (qword *)0x0) goto LAB_001e602f;
    if (local_450 < section_00000068.segname + 8) {
      uVar15 = param_8[4];
      uVar9 = param_8[1] + 1;
      if (uVar15 < uVar9) {
        if (uVar15 == 0) {
          uVar15 = uVar9;
        }
        do {
          uVar29 = uVar15;
          uVar15 = uVar29 * 2;
        } while (uVar29 < uVar9);
        pvVar10 = (void *)_BrotliAllocate(local_440,uVar29);
        if ((*(int *)(lVar33 + 0x18) == 0) && (param_8[4] != 0)) {
          _memcpy(pvVar10,(void *)param_8[2],param_8[4]);
        }
        _BrotliFree(local_440,param_8[2]);
        param_8[2] = (long)pvVar10;
        param_8[4] = uVar29;
        uVar9 = param_8[1] + 1;
      }
      lVar17 = local_440;
      uVar15 = param_8[5];
      if (uVar15 < uVar9) {
        if (uVar15 == 0) {
          uVar15 = uVar9;
        }
        do {
          uVar29 = uVar15;
          uVar15 = uVar29 * 2;
        } while (uVar29 < uVar9);
        pvVar10 = (void *)_BrotliAllocate(local_440,uVar29 * 4);
        if ((*(int *)(lVar17 + 0x18) == 0) && (param_8[5] != 0)) {
          _memcpy(pvVar10,(void *)param_8[3],param_8[5] << 2);
        }
        _BrotliFree(local_440,param_8[3]);
        param_8[3] = (long)pvVar10;
        param_8[5] = uVar29;
      }
      if (*local_4b0 != 0) goto LAB_001e6821;
      *param_8 = 1;
      *(undefined1 *)(param_8[2] + param_8[1]) = 0;
      lVar17 = param_8[1];
      *(int *)(param_8[3] + lVar17 * 4) = (int)local_450;
      param_8[1] = lVar17 + 1;
      goto LAB_001e603a;
    }
    pqVar8 = (qword *)_BrotliAllocate(local_440,uVar15 * 0x410);
    local_470 = pqVar8;
    if (*(int *)(lVar33 + 0x18) != 0) goto LAB_001e6821;
    lVar17 = 0;
    do {
      ___bzero((long)pqVar8 + lVar17,0x408);
      *(undefined8 *)((long)pqVar8 + lVar17 + 0x408) = 0x7ff0000000000000;
      lVar17 = lVar17 + 0x410;
    } while (uVar15 * 0x410 - lVar17 != 0);
    uVar29 = 0;
    uVar9 = 7;
    do {
      uVar13 = (uVar29 * (long)local_450) / uVar15;
      if (uVar29 != 0) {
        uVar9 = (ulong)(uint)((int)uVar9 * 0x41a7);
        uVar13 = uVar13 + uVar9 % ((ulong)local_450 / uVar15);
      }
      if (local_450 <= (uint *)(uVar13 + 0x46)) {
        uVar13 = (long)local_450 - 0x47;
      }
      pqVar8[uVar29 * 0x82 + 0x80] = pqVar8[uVar29 * 0x82 + 0x80] + 0x46;
      lVar17 = -0x46;
      do {
        puVar19 = (uint *)((long)pqVar8 +
                          (uVar29 * 0x104 +
                          (ulong)*(byte *)((long)local_468 + lVar17 + uVar13 + 0x46)) * 4);
        *puVar19 = *puVar19 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0);
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar15);
    uVar9 = (ulong)((long)local_450 * 2) / 0x46 + uVar15 + 99;
    if (uVar9 != uVar9 % uVar15) {
      uVar29 = (long)local_450 - 0x45;
      uVar13 = 7;
      uVar34 = 0;
      do {
        ___bzero(local_1018,0x408);
        uVar13 = (ulong)(uint)((int)uVar13 * 0x41a7);
        pbVar22 = (byte *)(uVar13 % uVar29 + (long)local_468);
        lVar17 = -0x46;
        do {
          bVar26 = *pbVar22;
          pbVar22 = pbVar22 + 1;
          local_1018[bVar26] = local_1018[bVar26] + 1;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0);
        uVar23 = uVar34 % uVar15;
        local_470[uVar23 * 0x82 + 0x80] = local_470[uVar23 * 0x82 + 0x80] + 0x46;
        lVar17 = 0;
        do {
          auVar3 = *(undefined1 (*) [16])(local_1018 + lVar17);
          puVar19 = (uint *)((long)local_470 + (uVar23 * 0x104 + lVar17) * 4);
          uVar30 = puVar19[1];
          uVar4 = puVar19[2];
          uVar27 = puVar19[3];
          puVar16 = (uint *)((long)local_470 + (uVar23 * 0x104 + lVar17) * 4);
          *puVar16 = *puVar19 + auVar3._0_4_;
          puVar16[1] = uVar30 + auVar3._4_4_;
          puVar16[2] = uVar4 + auVar3._8_4_;
          puVar16[3] = uVar27 + auVar3._12_4_;
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0x100);
        uVar34 = uVar34 + 1;
      } while (uVar34 < uVar9 - uVar9 % uVar15);
    }
    lVar17 = local_440;
    pqVar8 = local_450;
    pqVar11 = (qword *)_BrotliAllocate(local_440,local_450);
    iVar21 = (int)uVar15;
    local_460 = (double)_BrotliAllocate(lVar17,iVar21 << 0xb);
    lVar33 = _BrotliAllocate(lVar17,iVar21 * 8);
    if ((ulong)(iVar21 + 7U >> 3) * (long)pqVar8 == 0) {
      local_500 = (qword *)0x0;
    }
    else {
      local_500 = (qword *)_BrotliAllocate(lVar17);
    }
    puVar19 = (uint *)_BrotliAllocate(lVar17,iVar21 * 2);
    pqVar8 = (qword *)((long)&MACH_HEADER.magic + 3);
    if (10 < *(int *)(param_7 + 4)) {
      pqVar8 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
    }
    if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e6821;
    local_4e0 = local_470 + 0x80;
    local_4f0 = (qword *)((long)local_470 + 0x3fc);
    local_508 = (undefined1 *)((long)local_4c0 + (long)local_4a8) + -2;
    local_4c8 = (qword *)((long)local_4c0 + (long)local_4a8);
    puVar16 = (uint *)0x0;
    local_4e8 = pqVar11;
    local_4b8 = pqVar8;
    local_490 = puVar19;
    do {
      pqVar8 = local_4e8;
      local_488 = (qword *)puVar16;
      if (uVar15 < 2) {
        ___bzero(local_4e8,local_450);
        pqVar35 = (qword *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        local_448 = (qword *)(uVar15 + 7 >> 3);
        ___bzero(local_460,uVar15 << 0xb);
        uVar9 = 0;
        dVar36 = local_460;
        pqVar8 = local_4e0;
        do {
          uVar29 = (ulong)(uint)*pqVar8;
          if (uVar29 < 0x100) {
            uVar38 = (&_kBrotliLog2Table)[uVar29];
          }
          else {
            uVar38 = _log2((double)uVar29);
            dVar36 = local_460;
          }
          *(undefined8 *)((long)dVar36 + uVar9 * 8) = uVar38;
          uVar9 = uVar9 + 1;
          pqVar8 = pqVar8 + 0x82;
        } while (uVar15 != uVar9);
        lVar17 = uVar15 * 0x7f8 + (long)dVar36;
        local_4f8 = (qword *)(uVar15 * 8);
        local_478 = (qword *)(uVar15 * -8);
        local_480 = (qword *)&section_000000b8.reserved2;
        pqVar8 = local_4f0;
        do {
          local_480 = (qword *)((long)local_480 + -1);
          uVar9 = 0;
          local_4a0 = (uint *)pqVar8;
          do {
            dVar44 = -2.0;
            dVar39 = *(double *)((long)dVar36 + uVar9 * 8);
            uVar29 = (ulong)*(uint *)pqVar8;
            if (uVar29 != 0) {
              if (*(uint *)pqVar8 < 0x100) {
                dVar44 = (double)(&_kBrotliLog2Table)[uVar29];
              }
              else {
                local_458 = dVar39;
                dVar44 = (double)_log2((double)uVar29);
                dVar36 = local_460;
                dVar39 = local_458;
              }
            }
            *(double *)(lVar17 + uVar9 * 8) = dVar39 - dVar44;
            uVar9 = uVar9 + 1;
            pqVar8 = (qword *)((long)pqVar8 + 0x410);
          } while (uVar15 != uVar9);
          lVar17 = lVar17 + (long)local_478;
          pqVar8 = (qword *)(local_4a0 + -1);
        } while (local_480 != (qword *)0x0);
        ___bzero(lVar33,local_4f8);
        pqVar18 = local_448;
        pqVar11 = local_500;
        ___bzero(local_500);
        puVar19 = (uint *)0x0;
        do {
          bVar26 = *(byte *)((long)local_468 + (long)puVar19);
          uVar9 = 0;
          dVar36 = 1e+99;
          do {
            dVar39 = *(double *)((long)local_460 + bVar26 * uVar15 * 8 + uVar9 * 8) +
                     *(double *)(lVar33 + uVar9 * 8);
            *(double *)(lVar33 + uVar9 * 8) = dVar39;
            if (dVar39 < dVar36) {
              *(char *)((long)local_4e8 + (long)puVar19) = (char)uVar9;
              dVar36 = dVar39;
            }
            uVar9 = uVar9 + 1;
          } while (uVar15 != uVar9);
          dVar39 = 28.1;
          if (puVar19 < &section_00000790.flags) {
            dVar39 = (((double)(long)puVar19 * 0.07) / 2000.0 + 0.77) * 28.1;
          }
          uVar9 = 0;
          do {
            dVar44 = *(double *)(lVar33 + uVar9 * 8) - dVar36;
            *(double *)(lVar33 + uVar9 * 8) = dVar44;
            if (dVar39 <= dVar44) {
              *(double *)(lVar33 + uVar9 * 8) = dVar39;
              pbVar22 = (byte *)((long)pqVar11 + (uVar9 >> 3) + (long)puVar19 * (long)pqVar18);
              *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar9 & 7);
            }
            uVar9 = uVar9 + 1;
          } while (uVar15 != uVar9);
          puVar19 = (uint *)((long)puVar19 + 1);
        } while ((qword *)puVar19 != local_450);
        bVar26 = ((undefined1 *)((long)local_4e8 + -1))[(long)local_450];
        pqVar11 = (qword *)((long)local_508 * (long)pqVar18 + (long)pqVar11);
        pqVar35 = (qword *)((long)&MACH_HEADER.magic + 1);
        pqVar14 = local_4c8;
        do {
          if ((*(byte *)((long)pqVar11 + (ulong)(bVar26 >> 3)) >> (bVar26 & 7) & 1) != 0) {
            pqVar35 = (qword *)((long)pqVar35 +
                               (ulong)(bVar26 !=
                                      ((undefined1 *)((long)local_4e8 + -2))[(long)pqVar14]));
            bVar26 = ((undefined1 *)((long)local_4e8 + -2))[(long)pqVar14];
          }
          ((undefined1 *)((long)local_4e8 + -2))[(long)pqVar14] = bVar26;
          pqVar11 = (qword *)((long)pqVar11 - (long)pqVar18);
          pqVar14 = (qword *)((long)pqVar14 + -1);
          pqVar8 = local_4e8;
        } while (pqVar14 != (qword *)((long)&MACH_HEADER.magic + 1));
      }
      if (uVar15 != 0) {
        _memset_pattern16(local_490,&DAT_0032b1b0,uVar15 * 2);
      }
      pqVar11 = local_470;
      puVar19 = (uint *)0x0;
      uVar7 = 0;
      do {
        if (*(short *)((long)local_490 + (ulong)*(byte *)((long)pqVar8 + (long)puVar19) * 2) ==
            0x100) {
          *(ushort *)((long)local_490 + (ulong)*(byte *)((long)pqVar8 + (long)puVar19) * 2) = uVar7;
          uVar7 = uVar7 + 1;
        }
        puVar19 = (uint *)((long)puVar19 + 1);
      } while (local_4c8 != (qword *)puVar19);
      puVar19 = (uint *)0x0;
      do {
        *(undefined1 *)((long)pqVar8 + (long)puVar19) =
             *(undefined1 *)((long)local_490 + (ulong)*(byte *)((long)pqVar8 + (long)puVar19) * 2);
        puVar19 = (uint *)((long)puVar19 + 1);
      } while (local_4c8 != (qword *)puVar19);
      uVar15 = (ulong)uVar7;
      local_448 = pqVar35;
      if (uVar7 != 0) {
        local_458 = (double)(uVar15 * 0x410);
        dVar36 = 0.0;
        do {
          ___bzero((long)dVar36 + (long)pqVar11,0x408);
          *(undefined8 *)((long)pqVar11 + (long)dVar36 + 0x408) = 0x7ff0000000000000;
          dVar36 = (double)((long)dVar36 + 0x410);
        } while (local_458 != dVar36);
      }
      lVar17 = local_440;
      pqVar18 = local_448;
      pqVar8 = local_468;
      puVar19 = (uint *)0x0;
      do {
        bVar26 = *(byte *)((long)local_4e8 + (long)puVar19);
        puVar16 = (uint *)((long)pqVar11 +
                          ((ulong)bVar26 * 0x104 + (ulong)*(byte *)((long)local_468 + (long)puVar19)
                          ) * 4);
        *puVar16 = *puVar16 + 1;
        pqVar11[(ulong)bVar26 * 0x82 + 0x80] = pqVar11[(ulong)bVar26 * 0x82 + 0x80] + 1;
        puVar19 = (uint *)((long)puVar19 + 1);
      } while (local_4c8 != (qword *)puVar19);
      puVar16 = (uint *)((long)local_488 + 1);
    } while ((qword *)puVar16 != local_4b8);
    _BrotliFree(local_440,local_460);
    _BrotliFree(lVar17,lVar33);
    _BrotliFree(lVar17,local_500);
    _BrotliFree(lVar17,local_490);
    _BrotliFree(lVar17,local_470);
    if (pqVar18 == (qword *)0x0) {
      pqVar11 = (qword *)_BrotliAllocate(lVar17,0x3cf0);
      local_4f0 = (qword *)_BrotliAllocate(lVar17,0x3c);
      local_488 = (qword *)((long)&MACH_HEADER.filetype + 3);
      lVar33 = 0;
      local_4d0 = (qword *)0x0;
      local_458 = 0.0;
    }
    else {
      local_4d0 = (qword *)_BrotliAllocate(lVar17,(long)pqVar18 * 4);
      lVar33 = _BrotliAllocate(lVar17,(long)pqVar18 * 4);
      uVar15 = (long)pqVar18 * 0x10 + 0x3f0;
      pqVar18 = (qword *)(uVar15 >> 6);
      local_488 = pqVar18;
      if (uVar15 < 0x40) {
        local_4f0 = (qword *)0x0;
        pqVar11 = (qword *)0x0;
      }
      else {
        pqVar11 = (qword *)_BrotliAllocate(lVar17,(long)pqVar18 * 0x410);
        local_4f0 = (qword *)_BrotliAllocate(lVar17,(long)pqVar18 * 4);
      }
      pqVar18 = &segment_command_00000020.vmsize;
      if (local_448 < &segment_command_00000020.vmsize) {
        pqVar18 = local_448;
      }
      local_458 = (double)_BrotliAllocate(lVar17,(long)pqVar18 * 0x410);
    }
    local_508 = (undefined1 *)_BrotliAllocate(lVar17,0xc018);
    local_48 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    local_148 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    local_168 = (undefined1  [16])0x0;
    local_178 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    local_1b8 = (undefined1  [16])0x0;
    local_1c8 = (undefined1  [16])0x0;
    local_1d8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    local_1f8 = (undefined1  [16])0x0;
    local_208 = (undefined1  [16])0x0;
    local_218 = (undefined1  [16])0x0;
    local_228 = (undefined1  [16])0x0;
    local_238 = (undefined1  [16])0x0;
    local_248 = (undefined1  [16])0x0;
    local_258 = (undefined1  [16])0x0;
    local_268 = (undefined1  [16])0x0;
    local_278 = (undefined1  [16])0x0;
    local_288 = (undefined1  [16])0x0;
    local_298 = (undefined1  [16])0x0;
    local_2a8 = (undefined1  [16])0x0;
    local_2b8 = (undefined1  [16])0x0;
    local_2c8 = (undefined1  [16])0x0;
    local_2d8 = (undefined1  [16])0x0;
    local_2e8 = (undefined1  [16])0x0;
    local_2f8 = (undefined1  [16])0x0;
    local_308 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    local_328 = (undefined1  [16])0x0;
    local_338 = (undefined1  [16])0x0;
    local_348 = (undefined1  [16])0x0;
    local_358 = (undefined1  [16])0x0;
    local_368 = (undefined1  [16])0x0;
    local_378 = (undefined1  [16])0x0;
    local_388 = (undefined1  [16])0x0;
    local_398 = (undefined1  [16])0x0;
    local_3a8 = (undefined1  [16])0x0;
    local_3b8 = (undefined1  [16])0x0;
    local_3c8 = (undefined1  [16])0x0;
    local_3d8 = (undefined1  [16])0x0;
    local_3e8 = (undefined1  [16])0x0;
    local_3f8 = (undefined1  [16])0x0;
    local_408 = (undefined1  [16])0x0;
    local_418 = (undefined1  [16])0x0;
    local_428 = (undefined1  [16])0x0;
    local_438 = (undefined1  [16])0x0;
    if (*(int *)(lVar17 + 0x18) == 0) {
      ___bzero();
      lVar17 = 0;
      puVar32 = (undefined1 *)0x0;
      do {
        piVar1 = (int *)(lVar33 + lVar17 * 4);
        *piVar1 = *piVar1 + 1;
        if (((undefined1 *)((long)local_4c0 + (long)local_4a8) + -1 == puVar32) ||
           (*(char *)((long)local_4e8 + (long)puVar32) !=
            *(char *)((long)local_4e8 + (long)(puVar32 + 1)))) {
          lVar17 = lVar17 + 1;
        }
        puVar32 = puVar32 + 1;
      } while ((undefined1 *)((long)local_4c0 + (long)local_4a8) != puVar32);
      if (local_448 == (qword *)0x0) {
        local_4b8 = (qword *)0x0;
        local_470 = pqVar11;
        pqVar11 = local_4f0;
      }
      else {
        local_4a8 = (undefined1 *)0x0;
        local_490 = (uint *)0x0;
        local_4c0 = local_4f0;
        local_480 = (qword *)0x0;
        local_4b8 = (qword *)0x0;
        local_460 = 0.0;
        pqVar18 = local_448;
        pqVar14 = local_4d0;
        pqVar35 = local_488;
        local_4f8 = pqVar11;
        do {
          pqVar8 = &segment_command_00000020.vmsize;
          if (pqVar18 < &segment_command_00000020.vmsize) {
            pqVar8 = pqVar18;
          }
          local_4a0 = (uint *)((long)pqVar8 + (ulong)(pqVar8 == (qword *)0x0));
          puVar19 = (uint *)0x0;
          local_500 = pqVar18;
          local_4c8 = pqVar14;
          local_478 = pqVar35;
          do {
            dVar36 = local_458;
            lVar17 = (long)local_458 + (long)puVar19 * 0x410;
            ___bzero(lVar17,0x408);
            pqVar8 = local_468;
            puVar16 = local_4a0;
            *(undefined8 *)((long)dVar36 + 0x408 + (long)puVar19 * 0x410) = 0x7ff0000000000000;
            if (*(int *)(lVar33 + ((long)local_480 + (long)puVar19) * 4) != 0) {
              uVar15 = 0;
              do {
                piVar1 = (int *)(lVar17 + (ulong)*(byte *)((long)local_468 +
                                                          uVar15 + (long)local_460) * 4);
                *piVar1 = *piVar1 + 1;
                uVar15 = uVar15 + 1;
                *(ulong *)(lVar17 + 0x400) = uVar15;
              } while (uVar15 < *(uint *)(lVar33 + ((long)local_480 + (long)puVar19) * 4));
              local_460 = (double)((long)local_460 + uVar15);
            }
            uVar38 = _BrotliPopulationCostLiteral(lVar17);
            *(undefined8 *)(lVar17 + 0x408) = uVar38;
            *(int *)(local_238 + (long)puVar19 * 4) = (int)puVar19;
            *(int *)(local_338 + (long)puVar19 * 4) = (int)puVar19;
            *(undefined4 *)(local_138 + (long)puVar19 * 4) = 1;
            puVar19 = (uint *)((long)puVar19 + 1);
          } while (puVar19 != puVar16);
          uVar15 = (long)local_448 - (long)local_480;
          if (0x3f < uVar15) {
            uVar15 = 0x40;
          }
          local_450 = (qword *)_BrotliHistogramCombineLiteral
                                         (local_458,local_138,local_338,local_238,local_508,uVar15,
                                          uVar15,0x40,0x800);
          lVar17 = local_440;
          pqVar18 = local_488;
          pqVar11 = local_4f8;
          pqVar14 = (qword *)(local_4a8 + (long)local_450);
          if (local_488 < pqVar14) {
            pqVar35 = local_488;
            if (local_488 == (qword *)0x0) {
              pqVar35 = pqVar14;
            }
            do {
              local_4e0 = pqVar35;
              pqVar35 = (qword *)((long)local_4e0 * 2);
            } while (local_4e0 < pqVar14);
            pqVar14 = (qword *)_BrotliAllocate(local_440,(long)local_4e0 * 0x410);
            if ((*(int *)(lVar17 + 0x18) == 0) && (pqVar18 != (qword *)0x0)) {
              _memcpy(pqVar14,pqVar11,(long)pqVar18 * 0x410);
            }
            lVar17 = local_440;
            _BrotliFree(local_440,pqVar11);
          }
          else {
            local_4e0 = local_488;
            pqVar14 = local_4f8;
          }
          pqVar18 = (qword *)((long)local_490 + (long)local_450);
          local_470 = pqVar14;
          pqVar35 = local_478;
          pqVar11 = local_4c0;
          if (local_478 < pqVar18) {
            pqVar11 = local_478;
            if (local_478 == (qword *)0x0) {
              pqVar11 = pqVar18;
            }
            do {
              pqVar35 = pqVar11;
              pqVar11 = (qword *)((long)pqVar35 * 2);
            } while (pqVar35 < pqVar18);
            pqVar11 = (qword *)_BrotliAllocate(lVar17,(long)pqVar35 * 4);
            if ((*(int *)(lVar17 + 0x18) == 0) && (local_478 != (qword *)0x0)) {
              _memcpy(pqVar11,local_4c0,(long)local_478 << 2);
            }
            _BrotliFree(lVar17,local_4c0);
          }
          if (*local_4b0 != 0) goto LAB_001e603a;
          if (local_450 != (qword *)0x0) {
            pqVar8 = local_470 + (long)local_4a8 * 0x82;
            local_4f0 = pqVar11;
            local_478 = (qword *)((long)pqVar11 + (long)local_490 * 4);
            puVar19 = (uint *)0x0;
            do {
              uVar30 = *(uint *)(local_238 + (long)puVar19 * 4);
              _memcpy(pqVar8,(void *)((ulong)uVar30 * 0x410 + (long)local_458),0x410);
              *(uint *)((long)local_478 + (long)puVar19 * 4) =
                   *(uint *)(local_138 + (ulong)uVar30 * 4);
              *(int *)(local_438 + (ulong)*(uint *)(local_238 + (long)puVar19 * 4) * 4) =
                   (int)puVar19;
              puVar19 = (uint *)((long)puVar19 + 1);
              pqVar8 = pqVar8 + 0x82;
            } while (local_450 != (qword *)puVar19);
            local_4a8 = local_4a8 + (long)puVar19;
            local_490 = (uint *)((long)local_490 + (long)puVar19);
            pqVar8 = local_468;
            pqVar11 = local_4f0;
          }
          puVar19 = (uint *)0x0;
          do {
            *(int *)((long)local_4c8 + (long)puVar19 * 4) =
                 *(int *)(local_438 + (ulong)*(uint *)(local_338 + (long)puVar19 * 4) * 4) +
                 (int)local_4b8;
            puVar19 = (uint *)((long)puVar19 + 1);
          } while (local_4a0 != puVar19);
          local_4b8 = (qword *)((long)local_4b8 + (long)local_450);
          local_480 = local_480 + 8;
          pqVar18 = local_500 + -8;
          pqVar14 = local_4c8 + 0x20;
          local_488 = local_4e0;
          local_4f8 = local_470;
          local_4c0 = pqVar11;
        } while (local_480 < local_448);
      }
      lVar17 = local_440;
      _BrotliFree(local_440,local_458);
      uVar15 = ((ulong)local_4b8 >> 1) * (long)local_4b8;
      if ((ulong)((long)local_4b8 << 6) < uVar15) {
        uVar15 = (long)local_4b8 << 6;
      }
      if (0x800 < uVar15) {
        _BrotliFree(lVar17,local_508);
        local_508 = (undefined1 *)_BrotliAllocate(lVar17,uVar15 * 0x18 + 0x18);
        if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e603a;
      }
      lVar17 = local_440;
      if (local_4b8 == (qword *)0x0) {
        if (*local_4b0 == 0) {
          lVar25 = 0;
          goto LAB_001e7e58;
        }
      }
      else {
        lVar25 = _BrotliAllocate(local_440,(long)local_4b8 * 4);
        auVar3 = _DAT_0032b310;
        if (*(int *)(lVar17 + 0x18) == 0) {
          puVar32 = (undefined1 *)((long)local_4b8 + -1);
          auVar40._8_4_ = (int)puVar32;
          auVar40._0_8_ = puVar32;
          auVar40._12_4_ = (int)((ulong)puVar32 >> 0x20);
          uVar9 = 0;
          auVar40 = auVar40 ^ _DAT_0032b310;
          auVar46 = _DAT_0032b300;
          do {
            auVar45 = auVar46 ^ auVar3;
            if ((bool)(~(auVar40._4_4_ < auVar45._4_4_ ||
                        auVar40._0_4_ < auVar45._0_4_ && auVar45._4_4_ == auVar40._4_4_) & 1)) {
              *(int *)(lVar25 + uVar9 * 4) = (int)uVar9;
            }
            if (auVar45._12_4_ <= auVar40._12_4_ &&
                (auVar45._8_4_ <= auVar40._8_4_ || auVar45._12_4_ != auVar40._12_4_)) {
              *(int *)(lVar25 + 4 + uVar9 * 4) = (int)uVar9 + 1;
            }
            uVar9 = uVar9 + 2;
            lVar17 = auVar46._8_8_;
            auVar46._0_8_ = auVar46._0_8_ + 2;
            auVar46._8_8_ = lVar17 + 2;
          } while (((ulong)((long)local_4b8 + 1U) & 0xfffffffffffffffe) != uVar9);
LAB_001e7e58:
          puVar32 = local_508;
          local_4f0 = pqVar11;
          local_460 = (double)_BrotliHistogramCombineLiteral
                                        (local_470,pqVar11,local_4d0,lVar25,local_508,local_4b8,
                                         local_448,0x100,uVar15);
          lVar17 = local_440;
          _BrotliFree(local_440,puVar32);
          _BrotliFree(lVar17,local_4f0);
          if (local_4b8 == (qword *)0x0) {
            if (*local_4b0 == 0) {
              pqVar11 = (qword *)0x0;
              goto LAB_001e8765;
            }
          }
          else {
            sVar31 = (long)local_4b8 << 2;
            pqVar11 = (qword *)_BrotliAllocate(lVar17);
            if (*(int *)(lVar17 + 0x18) == 0) {
              _memset(pqVar11,0xff,sVar31);
LAB_001e8765:
              local_450 = pqVar11;
              if (local_448 != (qword *)0x0) {
                local_4a0 = (uint *)0x0;
                puVar19 = (uint *)0x0;
                local_480 = (qword *)0x0;
                do {
                  ___bzero(local_1018,0x408);
                  local_c10 = 0x7ff0000000000000;
                  if (*(int *)(lVar33 + (long)puVar19 * 4) != 0) {
                    uVar15 = 0;
                    do {
                      local_1018[*(byte *)((long)local_480 + (long)pqVar8 + uVar15)] =
                           local_1018[*(byte *)((long)local_480 + (long)pqVar8 + uVar15)] + 1;
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < *(uint *)(lVar33 + (long)puVar19 * 4));
                    local_480 = (qword *)((long)local_480 + uVar15);
                    local_c18 = uVar15;
                  }
                  lVar17 = 0;
                  if (puVar19 != (uint *)0x0) {
                    lVar17 = (long)puVar19 + -1;
                  }
                  uVar30 = *(uint *)((long)local_4d0 + lVar17 * 4);
                  uVar15 = (ulong)uVar30;
                  local_458 = (double)_BrotliHistogramBitCostDistanceLiteral
                                                (local_1018,local_470 + uVar15 * 0x82);
                  if (local_460 != 0.0) {
                    dVar36 = 0.0;
                    do {
                      dVar39 = (double)_BrotliHistogramBitCostDistanceLiteral
                                                 (local_1018,
                                                  local_470 +
                                                  (ulong)*(uint *)(lVar25 + (long)dVar36 * 4) * 0x82
                                                 );
                      if (dVar39 < local_458) {
                        uVar15 = (ulong)*(uint *)(lVar25 + (long)dVar36 * 4);
                        local_458 = dVar39;
                      }
                      uVar30 = (uint)uVar15;
                      dVar36 = (double)((long)dVar36 + 1);
                      pqVar11 = local_450;
                    } while (local_460 != dVar36);
                  }
                  *(uint *)((long)local_4d0 + (long)puVar19 * 4) = uVar30;
                  if (*(uint *)((long)pqVar11 + uVar15 * 4) == 0xffffffff) {
                    *(uint *)((long)pqVar11 + uVar15 * 4) = (uint)local_4a0;
                    local_4a0 = (uint *)(ulong)((uint)local_4a0 + 1);
                  }
                  puVar19 = (uint *)((long)puVar19 + 1);
                  pqVar8 = local_468;
                } while ((qword *)puVar19 != local_448);
              }
              lVar17 = local_440;
              _BrotliFree(local_440,lVar25);
              _BrotliFree(lVar17,local_470);
              lVar17 = local_440;
              pqVar8 = (qword *)param_8[4];
              if (pqVar8 < local_448) {
                if (pqVar8 == (qword *)0x0) {
                  pqVar8 = local_448;
                }
                do {
                  pqVar11 = pqVar8;
                  pqVar8 = (qword *)((long)pqVar11 * 2);
                } while (pqVar11 < local_448);
                pvVar10 = (void *)_BrotliAllocate(local_440,pqVar11);
                if ((*(int *)(lVar17 + 0x18) == 0) && (param_8[4] != 0)) {
                  _memcpy(pvVar10,(void *)param_8[2],param_8[4]);
                }
                _BrotliFree(local_440,param_8[2]);
                param_8[2] = (long)pvVar10;
                param_8[4] = (long)pqVar11;
              }
              lVar17 = local_440;
              pqVar8 = (qword *)param_8[5];
              if (pqVar8 < local_448) {
                if (pqVar8 == (qword *)0x0) {
                  pqVar8 = local_448;
                }
                do {
                  pqVar11 = pqVar8;
                  pqVar8 = (qword *)((long)pqVar11 * 2);
                } while (pqVar11 < local_448);
                pvVar10 = (void *)_BrotliAllocate(local_440,(long)pqVar11 * 4);
                if ((*(int *)(lVar17 + 0x18) == 0) && (param_8[5] != 0)) {
                  _memcpy(pvVar10,(void *)param_8[3],param_8[5] << 2);
                }
                _BrotliFree(local_440,param_8[3]);
                param_8[3] = (long)pvVar10;
                param_8[5] = (long)pqVar11;
              }
              lVar17 = local_440;
              if (*local_4b0 == 0) {
                iVar21 = 0;
                if (local_448 == (qword *)0x0) {
                  lVar20 = 1;
                  lVar25 = 0;
                }
                else {
                  uVar30 = 0;
                  lVar25 = 0;
                  puVar19 = (uint *)0x0;
                  do {
                    iVar21 = iVar21 + *(int *)(lVar33 + (long)puVar19 * 4);
                    uVar4 = *(uint *)((long)local_4d0 + (long)puVar19 * 4);
                    if (((uint *)((long)local_448 + -1) == puVar19) ||
                       (uVar4 != *(uint *)((long)local_4d0 + ((long)puVar19 + 1) * 4))) {
                      uVar27 = uVar30 & 0xff;
                      uVar4 = *(uint *)((long)local_450 + (ulong)uVar4 * 4);
                      bVar28 = (byte)uVar4;
                      *(byte *)(param_8[2] + lVar25) = bVar28;
                      bVar26 = (byte)uVar30;
                      uVar30 = uVar4;
                      if (bVar28 < bVar26) {
                        uVar30 = uVar27;
                      }
                      *(int *)(param_8[3] + lVar25 * 4) = iVar21;
                      lVar25 = lVar25 + 1;
                      iVar21 = 0;
                    }
                    puVar19 = (uint *)((long)puVar19 + 1);
                  } while (local_448 != (qword *)puVar19);
                  lVar20 = (ulong)(uVar30 & 0xff) + 1;
                }
                param_8[1] = lVar25;
                *param_8 = lVar20;
                _BrotliFree(local_440,local_450);
                _BrotliFree(lVar17,lVar33);
                _BrotliFree(lVar17,local_4d0);
                if (*(int *)(lVar17 + 0x18) == 0) {
                  _BrotliFree(local_440,local_4e8);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001e603a:
  lVar17 = local_440;
  if (*local_4b0 != 0) goto LAB_001e6821;
  _BrotliFree(local_440);
  if (local_498 == (undefined1 *)0x0) {
    if (*local_4b0 != 0) goto LAB_001e6821;
    *param_9 = 1;
    pqVar8 = (qword *)0x0;
    local_440 = lVar17;
    _BrotliFree(lVar17);
  }
  else {
    pqVar8 = (qword *)((long)local_498 * 2);
    pqVar11 = (qword *)_BrotliAllocate(lVar17,pqVar8);
    if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e6821;
    puVar19 = local_4d8 + 3;
    puVar32 = (undefined1 *)0x0;
    do {
      *(short *)((long)pqVar11 + (long)puVar32 * 2) = (short)*puVar19;
      puVar32 = puVar32 + 1;
      puVar19 = puVar19 + 4;
    } while (local_498 != puVar32);
    uVar15 = 0x32;
    if (local_498 < (undefined1 *)0x6784) {
      uVar15 = (ulong)(((uint)local_498 & 0xffff) / 0x212 + 1);
    }
    local_450 = pqVar11;
    if (local_498 <= section_00000068.segname + 7) {
      uVar15 = param_9[4];
      uVar9 = param_9[1] + 1;
      local_440 = lVar17;
      if (uVar15 < uVar9) {
        if (uVar15 == 0) {
          uVar15 = uVar9;
        }
        do {
          uVar29 = uVar15;
          uVar15 = uVar29 * 2;
        } while (uVar29 < uVar9);
        pvVar10 = (void *)_BrotliAllocate(lVar17,uVar29);
        if ((*(int *)(lVar17 + 0x18) == 0) && (param_9[4] != 0)) {
          _memcpy(pvVar10,(void *)param_9[2],param_9[4]);
        }
        _BrotliFree(local_440,param_9[2]);
        param_9[2] = (long)pvVar10;
        param_9[4] = uVar29;
        uVar9 = param_9[1] + 1;
      }
      lVar17 = local_440;
      uVar15 = param_9[5];
      if (uVar15 < uVar9) {
        if (uVar15 == 0) {
          uVar15 = uVar9;
        }
        do {
          uVar29 = uVar15;
          uVar15 = uVar29 * 2;
        } while (uVar29 < uVar9);
        pvVar10 = (void *)_BrotliAllocate(local_440,uVar29 * 4);
        if ((*(int *)(lVar17 + 0x18) == 0) && (param_9[5] != 0)) {
          _memcpy(pvVar10,(void *)param_9[3],param_9[5] << 2);
        }
        _BrotliFree(local_440,param_9[3]);
        param_9[3] = (long)pvVar10;
        param_9[5] = uVar29;
      }
      if (*local_4b0 != 0) goto LAB_001e6821;
      *param_9 = 1;
      *(undefined1 *)(param_9[2] + param_9[1]) = 0;
      lVar17 = param_9[1];
      *(int *)(param_9[3] + lVar17 * 4) = (int)local_498;
      param_9[1] = lVar17 + 1;
      pqVar18 = local_450;
      goto LAB_001e826e;
    }
    local_440 = lVar17;
    pqVar11 = (qword *)_BrotliAllocate(lVar17,uVar15 * 0xb10);
    local_478 = pqVar11;
    if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e6821;
    lVar17 = 0;
    local_4f0 = pqVar8;
    do {
      ___bzero((long)pqVar11 + lVar17,0xb08);
      *(undefined8 *)((long)pqVar11 + lVar17 + 0xb08) = 0x7ff0000000000000;
      lVar17 = lVar17 + 0xb10;
    } while (uVar15 * 0xb10 - lVar17 != 0);
    uVar29 = 0;
    uVar9 = 7;
    do {
      puVar32 = (undefined1 *)((uVar29 * (long)local_498) / uVar15);
      if (uVar29 != 0) {
        uVar9 = (ulong)(uint)((int)uVar9 * 0x41a7);
        puVar32 = puVar32 + uVar9 % ((ulong)local_498 / uVar15);
      }
      if (local_498 <= puVar32 + 0x28) {
        puVar32 = local_498 + -0x29;
      }
      pqVar11[uVar29 * 0x162 + 0x160] = pqVar11[uVar29 * 0x162 + 0x160] + 0x28;
      lVar17 = 0;
      do {
        puVar19 = (uint *)((long)pqVar11 +
                          (uVar29 * 0x2c4 +
                          (ulong)*(ushort *)((long)local_450 + lVar17 * 2 + (long)puVar32 * 2)) * 4)
        ;
        *puVar19 = *puVar19 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x28);
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar15);
    uVar9 = (ulong)local_4f0 / 0x28 + uVar15 + 99;
    if (uVar9 != uVar9 % uVar15) {
      puVar32 = local_498 + -0x27;
      uVar13 = 7;
      uVar29 = 0;
      do {
        ___bzero(local_1018,0xb08);
        uVar13 = (ulong)(uint)((int)uVar13 * 0x41a7);
        puVar24 = (ushort *)((long)local_450 + (uVar13 % (ulong)puVar32) * 2);
        lVar17 = -0x28;
        do {
          uVar7 = *puVar24;
          puVar24 = puVar24 + 1;
          local_1018[uVar7] = local_1018[uVar7] + 1;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0);
        uVar34 = uVar29 % uVar15;
        local_478[uVar34 * 0x162 + 0x160] = local_478[uVar34 * 0x162 + 0x160] + 0x28;
        lVar17 = 0;
        do {
          auVar3 = *(undefined1 (*) [16])(local_1018 + lVar17);
          puVar19 = (uint *)((long)local_478 + (uVar34 * 0x2c4 + lVar17) * 4);
          uVar30 = puVar19[1];
          uVar4 = puVar19[2];
          uVar27 = puVar19[3];
          puVar16 = (uint *)((long)local_478 + (uVar34 * 0x2c4 + lVar17) * 4);
          *puVar16 = *puVar19 + auVar3._0_4_;
          puVar16[1] = uVar30 + auVar3._4_4_;
          puVar16[2] = uVar4 + auVar3._8_4_;
          puVar16[3] = uVar27 + auVar3._12_4_;
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0x2c0);
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar9 - uVar9 % uVar15);
    }
    lVar17 = local_440;
    puVar32 = local_498;
    local_4c8 = (qword *)_BrotliAllocate(local_440,local_498);
    iVar21 = (int)uVar15;
    local_460 = (double)_BrotliAllocate(lVar17,uVar15 * 0x1600);
    lVar33 = _BrotliAllocate(lVar17,iVar21 * 8);
    lVar25 = (ulong)(iVar21 + 7U >> 3) * (long)puVar32;
    if (lVar25 == 0) {
      local_490 = (uint *)0x0;
    }
    else {
      local_490 = (uint *)_BrotliAllocate(lVar17,lVar25);
    }
    pqVar8 = (qword *)_BrotliAllocate(lVar17,iVar21 * 2);
    pqVar11 = (qword *)((long)&MACH_HEADER.magic + 3);
    if (10 < *(int *)(param_7 + 4)) {
      pqVar11 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
    }
    if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e6821;
    local_4e8 = local_478 + 0x160;
    local_4b8 = (qword *)((long)local_478 + 0xafc);
    local_4f8 = (qword *)(local_498 + -2);
    puVar19 = (uint *)0x0;
    local_4c0 = pqVar11;
    local_488 = pqVar8;
    do {
      pqVar8 = local_4c8;
      local_470 = (qword *)puVar19;
      if (uVar15 < 2) {
        ___bzero(local_4c8);
        pqVar18 = (qword *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        local_448 = (qword *)(uVar15 + 7 >> 3);
        ___bzero(local_460,uVar15 * 0x1600);
        uVar9 = 0;
        dVar36 = local_460;
        pqVar8 = local_4e8;
        do {
          uVar29 = (ulong)(uint)*pqVar8;
          if (uVar29 < 0x100) {
            uVar38 = (&_kBrotliLog2Table)[uVar29];
          }
          else {
            uVar38 = _log2((double)uVar29);
            dVar36 = local_460;
          }
          *(undefined8 *)((long)dVar36 + uVar9 * 8) = uVar38;
          uVar9 = uVar9 + 1;
          pqVar8 = pqVar8 + 0x162;
        } while (uVar15 != uVar9);
        lVar17 = uVar15 * 0x15f8 + (long)dVar36;
        local_4a8 = (undefined1 *)(uVar15 * 8);
        local_4a0 = (uint *)(uVar15 * -8);
        local_468 = &section_00000298.size;
        pqVar8 = local_4b8;
        do {
          local_468 = (qword *)((long)local_468 + -1);
          uVar9 = 0;
          local_480 = pqVar8;
          do {
            dVar44 = -2.0;
            dVar39 = *(double *)((long)dVar36 + uVar9 * 8);
            uVar29 = (ulong)(uint)*pqVar8;
            if (uVar29 != 0) {
              if ((uint)*pqVar8 < 0x100) {
                dVar44 = (double)(&_kBrotliLog2Table)[uVar29];
              }
              else {
                local_458 = dVar39;
                dVar44 = (double)_log2((double)uVar29);
                dVar36 = local_460;
                dVar39 = local_458;
              }
            }
            *(double *)(lVar17 + uVar9 * 8) = dVar39 - dVar44;
            uVar9 = uVar9 + 1;
            pqVar8 = pqVar8 + 0x162;
          } while (uVar15 != uVar9);
          lVar17 = lVar17 + (long)local_4a0;
          pqVar8 = (qword *)((long)local_480 + -4);
        } while (local_468 != (qword *)0x0);
        ___bzero(lVar33,local_4a8);
        pqVar11 = local_448;
        puVar19 = local_490;
        puVar32 = local_498;
        ___bzero(local_490);
        puVar12 = (undefined1 *)0x0;
        do {
          uVar7 = *(ushort *)((long)local_450 + (long)puVar12 * 2);
          uVar9 = 0;
          dVar36 = 1e+99;
          do {
            dVar39 = *(double *)((long)local_460 + uVar7 * uVar15 * 8 + uVar9 * 8) +
                     *(double *)(lVar33 + uVar9 * 8);
            *(double *)(lVar33 + uVar9 * 8) = dVar39;
            if (dVar39 < dVar36) {
              *(char *)((long)local_4c8 + (long)puVar12) = (char)uVar9;
              dVar36 = dVar39;
            }
            uVar9 = uVar9 + 1;
          } while (uVar15 != uVar9);
          dVar39 = 13.5;
          if (puVar12 < &section_00000790.flags) {
            dVar39 = (((double)(long)puVar12 * 0.07) / 2000.0 + 0.77) * 13.5;
          }
          uVar9 = 0;
          do {
            dVar44 = *(double *)(lVar33 + uVar9 * 8) - dVar36;
            *(double *)(lVar33 + uVar9 * 8) = dVar44;
            if (dVar39 <= dVar44) {
              *(double *)(lVar33 + uVar9 * 8) = dVar39;
              pbVar22 = (byte *)((long)puVar19 + (uVar9 >> 3) + (long)puVar12 * (long)pqVar11);
              *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar9 & 7);
            }
            uVar9 = uVar9 + 1;
          } while (uVar15 != uVar9);
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar32);
        bVar26 = ((undefined1 *)((long)local_4c8 + -1))[(long)puVar32];
        puVar19 = (uint *)((long)local_4f8 * (long)pqVar11 + (long)puVar19);
        pqVar18 = (qword *)((long)&MACH_HEADER.magic + 1);
        do {
          if ((*(byte *)((long)puVar19 + (ulong)(bVar26 >> 3)) >> (bVar26 & 7) & 1) != 0) {
            pqVar18 = (qword *)((long)pqVar18 +
                               (ulong)(bVar26 !=
                                      ((undefined1 *)((long)local_4c8 + -2))[(long)puVar32]));
            bVar26 = ((undefined1 *)((long)local_4c8 + -2))[(long)puVar32];
          }
          ((undefined1 *)((long)local_4c8 + -2))[(long)puVar32] = bVar26;
          puVar19 = (uint *)((long)puVar19 - (long)pqVar11);
          puVar32 = puVar32 + -1;
          pqVar8 = local_4c8;
        } while (puVar32 != (undefined1 *)((long)&MACH_HEADER.magic + 1));
      }
      pqVar11 = local_488;
      if (uVar15 != 0) {
        _memset_pattern16(local_488,&DAT_0032b1b0,uVar15 * 2);
      }
      pqVar14 = local_478;
      puVar32 = (undefined1 *)0x0;
      uVar7 = 0;
      do {
        if (*(short *)((long)pqVar11 + (ulong)*(byte *)((long)pqVar8 + (long)puVar32) * 2) == 0x100)
        {
          *(ushort *)((long)pqVar11 + (ulong)*(byte *)((long)pqVar8 + (long)puVar32) * 2) = uVar7;
          uVar7 = uVar7 + 1;
        }
        puVar32 = puVar32 + 1;
      } while (local_498 != puVar32);
      puVar32 = (undefined1 *)0x0;
      do {
        *(undefined1 *)((long)pqVar8 + (long)puVar32) =
             *(undefined1 *)((long)pqVar11 + (ulong)*(byte *)((long)pqVar8 + (long)puVar32) * 2);
        puVar32 = puVar32 + 1;
      } while (local_498 != puVar32);
      uVar15 = (ulong)uVar7;
      local_448 = pqVar18;
      if (uVar7 != 0) {
        local_458 = (double)(uVar15 * 0xb10);
        dVar36 = 0.0;
        do {
          ___bzero((long)pqVar14 + (long)dVar36,0xb08);
          *(undefined8 *)((long)pqVar14 + (long)dVar36 + 0xb08) = 0x7ff0000000000000;
          dVar36 = (double)((long)dVar36 + 0xb10);
        } while (local_458 != dVar36);
      }
      lVar17 = local_440;
      puVar32 = (undefined1 *)0x0;
      do {
        bVar26 = *(byte *)((long)local_4c8 + (long)puVar32);
        puVar19 = (uint *)((long)pqVar14 +
                          ((ulong)bVar26 * 0x2c4 +
                          (ulong)*(ushort *)((long)local_450 + (long)puVar32 * 2)) * 4);
        *puVar19 = *puVar19 + 1;
        pqVar14[(ulong)bVar26 * 0x162 + 0x160] = pqVar14[(ulong)bVar26 * 0x162 + 0x160] + 1;
        puVar32 = puVar32 + 1;
      } while (local_498 != puVar32);
      puVar19 = (uint *)((long)local_470 + 1);
    } while ((qword *)puVar19 != local_4c0);
    _BrotliFree(local_440,local_460);
    _BrotliFree(lVar17,lVar33);
    _BrotliFree(lVar17,local_490);
    _BrotliFree(lVar17,local_488);
    _BrotliFree(lVar17,pqVar14);
    pqVar8 = local_448;
    if (local_448 == (qword *)0x0) {
      local_470 = (qword *)_BrotliAllocate(lVar17,0xa5f0);
      pqVar8 = (qword *)_BrotliAllocate(lVar17,0x3c);
      pqVar11 = (qword *)((long)&MACH_HEADER.filetype + 3);
      lVar33 = 0;
      local_4d0 = (qword *)0x0;
      local_458 = 0.0;
    }
    else {
      lVar33 = (long)local_448 * 4;
      local_4d0 = (qword *)_BrotliAllocate(lVar17,lVar33);
      lVar33 = _BrotliAllocate(lVar17,lVar33);
      uVar15 = (long)pqVar8 * 0x10 + 0x3f0;
      pqVar11 = (qword *)(uVar15 >> 6);
      if (uVar15 < 0x40) {
        pqVar8 = (qword *)0x0;
        local_470 = (qword *)0x0;
      }
      else {
        local_470 = (qword *)_BrotliAllocate(lVar17,(long)pqVar11 * 0xb10);
        pqVar8 = (qword *)_BrotliAllocate(lVar17,(long)pqVar11 * 4);
      }
      pqVar18 = &segment_command_00000020.vmsize;
      if (local_448 < &segment_command_00000020.vmsize) {
        pqVar18 = local_448;
      }
      local_458 = (double)_BrotliAllocate(lVar17,(long)pqVar18 * 0xb10);
    }
    local_508 = (undefined1 *)_BrotliAllocate(lVar17,0xc018);
    pqVar14 = local_448;
    local_48 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    local_148 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    local_168 = (undefined1  [16])0x0;
    local_178 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    local_1b8 = (undefined1  [16])0x0;
    local_1c8 = (undefined1  [16])0x0;
    local_1d8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    local_1f8 = (undefined1  [16])0x0;
    local_208 = (undefined1  [16])0x0;
    local_218 = (undefined1  [16])0x0;
    local_228 = (undefined1  [16])0x0;
    local_238 = (undefined1  [16])0x0;
    local_248 = (undefined1  [16])0x0;
    local_258 = (undefined1  [16])0x0;
    local_268 = (undefined1  [16])0x0;
    local_278 = (undefined1  [16])0x0;
    local_288 = (undefined1  [16])0x0;
    local_298 = (undefined1  [16])0x0;
    local_2a8 = (undefined1  [16])0x0;
    local_2b8 = (undefined1  [16])0x0;
    local_2c8 = (undefined1  [16])0x0;
    local_2d8 = (undefined1  [16])0x0;
    local_2e8 = (undefined1  [16])0x0;
    local_2f8 = (undefined1  [16])0x0;
    local_308 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    local_328 = (undefined1  [16])0x0;
    local_338 = (undefined1  [16])0x0;
    local_348 = (undefined1  [16])0x0;
    local_358 = (undefined1  [16])0x0;
    local_368 = (undefined1  [16])0x0;
    local_378 = (undefined1  [16])0x0;
    local_388 = (undefined1  [16])0x0;
    local_398 = (undefined1  [16])0x0;
    local_3a8 = (undefined1  [16])0x0;
    local_3b8 = (undefined1  [16])0x0;
    local_3c8 = (undefined1  [16])0x0;
    local_3d8 = (undefined1  [16])0x0;
    local_3e8 = (undefined1  [16])0x0;
    local_3f8 = (undefined1  [16])0x0;
    local_408 = (undefined1  [16])0x0;
    local_418 = (undefined1  [16])0x0;
    local_428 = (undefined1  [16])0x0;
    local_438 = (undefined1  [16])0x0;
    pqVar18 = local_450;
    if (*(int *)(lVar17 + 0x18) == 0) {
      ___bzero(lVar33,(long)local_448 * 4);
      lVar17 = 0;
      puVar32 = (undefined1 *)0x0;
      do {
        piVar1 = (int *)(lVar33 + lVar17 * 4);
        *piVar1 = *piVar1 + 1;
        if ((local_498 + -1 == puVar32) ||
           (*(char *)((long)local_4c8 + (long)puVar32) !=
            ((undefined1 *)((long)local_4c8 + 1))[(long)puVar32])) {
          lVar17 = lVar17 + 1;
        }
        puVar32 = puVar32 + 1;
      } while (local_498 != puVar32);
      if (pqVar14 == (qword *)0x0) {
        local_490 = (uint *)0x0;
      }
      else {
        local_4c0 = (qword *)0x0;
        local_4f8 = local_4d0;
        local_4a8 = (undefined1 *)0x0;
        local_468 = (qword *)0x0;
        local_490 = (uint *)0x0;
        local_460 = 0.0;
        local_4e8 = pqVar11;
        local_488 = pqVar8;
        do {
          local_480 = &segment_command_00000020.vmsize;
          if (pqVar14 < &segment_command_00000020.vmsize) {
            local_480 = pqVar14;
          }
          local_480 = (qword *)((long)local_480 + (ulong)(local_480 == (qword *)0x0));
          puVar19 = (uint *)0x0;
          local_500 = pqVar14;
          local_4b8 = local_470;
          local_478 = pqVar11;
          do {
            dVar36 = local_458;
            lVar17 = (long)local_458 + (long)puVar19 * 0xb10;
            ___bzero(lVar17,0xb08);
            *(undefined8 *)((long)dVar36 + 0xb08 + (long)puVar19 * 0xb10) = 0x7ff0000000000000;
            if (*(int *)(lVar33 + ((long)local_468 + (long)puVar19) * 4) != 0) {
              uVar15 = 0;
              do {
                piVar1 = (int *)(lVar17 + (ulong)*(ushort *)
                                                  ((long)local_450 +
                                                  uVar15 * 2 + (long)local_460 * 2) * 4);
                *piVar1 = *piVar1 + 1;
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(uint *)(lVar33 + ((long)local_468 + (long)puVar19) * 4));
              *(ulong *)(lVar17 + 0xb00) = uVar15;
              local_460 = (double)((long)local_460 + uVar15);
            }
            uVar38 = _BrotliPopulationCostCommand(lVar17);
            *(undefined8 *)(lVar17 + 0xb08) = uVar38;
            *(int *)(local_238 + (long)puVar19 * 4) = (int)puVar19;
            *(int *)(local_338 + (long)puVar19 * 4) = (int)puVar19;
            *(undefined4 *)(local_138 + (long)puVar19 * 4) = 1;
            puVar19 = (uint *)((long)puVar19 + 1);
          } while ((qword *)puVar19 != local_480);
          uVar15 = (long)local_448 - (long)local_468;
          if (0x3f < uVar15) {
            uVar15 = 0x40;
          }
          local_4a0 = (uint *)_BrotliHistogramCombineCommand
                                        (local_458,local_138,local_338,local_238,local_508,uVar15,
                                         uVar15,0x40,0x800);
          lVar17 = local_440;
          pqVar8 = local_4e8;
          pqVar11 = (qword *)((long)local_4c0 + (long)local_4a0);
          if (local_4e8 < pqVar11) {
            pqVar18 = local_4e8;
            if (local_4e8 == (qword *)0x0) {
              pqVar18 = pqVar11;
            }
            do {
              local_4e0 = pqVar18;
              pqVar18 = (qword *)((long)local_4e0 * 2);
            } while (local_4e0 < pqVar11);
            local_470 = (qword *)_BrotliAllocate(local_440,(long)local_4e0 * 0xb10);
            pqVar11 = local_4b8;
            if ((*(int *)(lVar17 + 0x18) == 0) && (pqVar8 != (qword *)0x0)) {
              _memcpy(local_470,local_4b8,(long)pqVar8 * 0xb10);
            }
            lVar17 = local_440;
            _BrotliFree(local_440,pqVar11);
          }
          else {
            local_470 = local_4b8;
            local_4e0 = local_4e8;
          }
          pqVar18 = local_450;
          pqVar14 = (qword *)(local_4a8 + (long)local_4a0);
          pqVar8 = local_488;
          pqVar11 = local_478;
          if (local_478 < pqVar14) {
            pqVar8 = local_478;
            if (local_478 == (qword *)0x0) {
              pqVar8 = pqVar14;
            }
            do {
              pqVar11 = pqVar8;
              pqVar8 = (qword *)((long)pqVar11 * 2);
            } while (pqVar11 < pqVar14);
            pqVar8 = (qword *)_BrotliAllocate(lVar17,(long)pqVar11 * 4);
            if ((*(int *)(lVar17 + 0x18) == 0) && (local_478 != (qword *)0x0)) {
              _memcpy(pqVar8,local_488,(long)local_478 << 2);
            }
            _BrotliFree(lVar17,local_488);
          }
          if (*local_4b0 != 0) goto LAB_001e826e;
          if (local_4a0 != (uint *)0x0) {
            pqVar18 = local_470 + (long)local_4c0 * 0x162;
            local_488 = pqVar8;
            local_478 = (qword *)((long)pqVar8 + (long)local_4a8 * 4);
            puVar19 = (uint *)0x0;
            do {
              uVar30 = *(uint *)(local_238 + (long)puVar19 * 4);
              _memcpy(pqVar18,(void *)((ulong)uVar30 * 0xb10 + (long)local_458),0xb10);
              *(uint *)((long)local_478 + (long)puVar19 * 4) =
                   *(uint *)(local_138 + (ulong)uVar30 * 4);
              *(int *)(local_438 + (ulong)*(uint *)(local_238 + (long)puVar19 * 4) * 4) =
                   (int)puVar19;
              puVar19 = (uint *)((long)puVar19 + 1);
              pqVar18 = pqVar18 + 0x162;
            } while (local_4a0 != puVar19);
            local_4c0 = (qword *)((long)local_4c0 + (long)puVar19);
            local_4a8 = local_4a8 + (long)puVar19;
            pqVar8 = local_488;
          }
          puVar19 = (uint *)0x0;
          do {
            *(int *)((long)local_4f8 + (long)puVar19 * 4) =
                 *(int *)(local_438 + (ulong)*(uint *)(local_338 + (long)puVar19 * 4) * 4) +
                 (int)local_490;
            puVar19 = (uint *)((long)puVar19 + 1);
          } while (local_480 != (qword *)puVar19);
          local_490 = (uint *)((long)local_490 + (long)local_4a0);
          local_468 = local_468 + 8;
          pqVar14 = local_500 + -8;
          local_4f8 = local_4f8 + 0x20;
          local_4e8 = local_4e0;
          local_4b8 = local_470;
          local_488 = pqVar8;
        } while (local_468 < local_448);
      }
      lVar17 = local_440;
      _BrotliFree(local_440,local_458);
      uVar15 = ((ulong)local_490 >> 1) * (long)local_490;
      if ((ulong)((long)local_490 << 6) < uVar15) {
        uVar15 = (long)local_490 << 6;
      }
      if (0x800 < uVar15) {
        _BrotliFree(lVar17,local_508);
        local_508 = (undefined1 *)_BrotliAllocate(lVar17,uVar15 * 0x18 + 0x18);
        pqVar18 = local_450;
        if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e826e;
      }
      lVar17 = local_440;
      if (local_490 == (uint *)0x0) {
        pqVar18 = local_450;
        if (*local_4b0 == 0) {
          local_458 = 0.0;
          goto LAB_001e915d;
        }
      }
      else {
        local_458 = (double)_BrotliAllocate(local_440,(long)local_490 * 4);
        auVar3 = _DAT_0032b310;
        pqVar18 = local_450;
        if (*(int *)(lVar17 + 0x18) == 0) {
          lVar17 = (long)local_490 + -1;
          auVar41._8_4_ = (int)lVar17;
          auVar41._0_8_ = lVar17;
          auVar41._12_4_ = (int)((ulong)lVar17 >> 0x20);
          uVar9 = 0;
          auVar41 = auVar41 ^ _DAT_0032b310;
          auVar45 = _DAT_0032b300;
          do {
            auVar46 = auVar45 ^ auVar3;
            if ((bool)(~(auVar41._4_4_ < auVar46._4_4_ ||
                        auVar41._0_4_ < auVar46._0_4_ && auVar46._4_4_ == auVar41._4_4_) & 1)) {
              *(int *)((long)local_458 + uVar9 * 4) = (int)uVar9;
            }
            if (auVar46._12_4_ <= auVar41._12_4_ &&
                (auVar46._8_4_ <= auVar41._8_4_ || auVar46._12_4_ != auVar41._12_4_)) {
              *(int *)((long)local_458 + 4 + uVar9 * 4) = (int)uVar9 + 1;
            }
            uVar9 = uVar9 + 2;
            lVar17 = auVar45._8_8_;
            auVar45._0_8_ = auVar45._0_8_ + 2;
            auVar45._8_8_ = lVar17 + 2;
          } while (((long)local_490 + 1U & 0xfffffffffffffffe) != uVar9);
LAB_001e915d:
          puVar19 = local_490;
          puVar32 = local_508;
          local_468 = (qword *)_BrotliHistogramCombineCommand
                                         (local_470,pqVar8,local_4d0,local_458,local_508,local_490,
                                          local_448,0x100,uVar15);
          lVar17 = local_440;
          _BrotliFree(local_440,puVar32);
          _BrotliFree(lVar17,pqVar8);
          if (puVar19 == (uint *)0x0) {
            pqVar18 = local_450;
            if (*local_4b0 == 0) {
              local_480 = (qword *)0x0;
              pqVar8 = local_470;
              goto LAB_001e99b2;
            }
          }
          else {
            local_490 = (uint *)((long)puVar19 << 2);
            local_480 = (qword *)_BrotliAllocate(lVar17,local_490);
            pqVar8 = local_470;
            pqVar18 = local_450;
            if (*(int *)(lVar17 + 0x18) == 0) {
              _memset(local_480,0xff,(size_t)local_490);
LAB_001e99b2:
              if (local_448 != (qword *)0x0) {
                local_478 = (qword *)0x0;
                puVar19 = (uint *)0x0;
                local_4a0 = (uint *)0x0;
                pqVar11 = local_450;
                do {
                  ___bzero(local_1018,0xb08);
                  local_510 = 0x7ff0000000000000;
                  if (*(int *)(lVar33 + (long)puVar19 * 4) != 0) {
                    uVar15 = 0;
                    do {
                      local_1018[*(ushort *)((long)pqVar11 + uVar15 * 2 + (long)local_4a0 * 2)] =
                           local_1018[*(ushort *)((long)pqVar11 + uVar15 * 2 + (long)local_4a0 * 2)]
                           + 1;
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < *(uint *)(lVar33 + (long)puVar19 * 4));
                    local_4a0 = (uint *)((long)local_4a0 + uVar15);
                    local_518 = uVar15;
                  }
                  lVar17 = 0;
                  if (puVar19 != (uint *)0x0) {
                    lVar17 = (long)puVar19 + -1;
                  }
                  uVar30 = *(uint *)((long)local_4d0 + lVar17 * 4);
                  uVar15 = (ulong)uVar30;
                  local_460 = (double)_BrotliHistogramBitCostDistanceCommand
                                                (local_1018,pqVar8 + uVar15 * 0x162);
                  if (local_468 != (qword *)0x0) {
                    puVar16 = (uint *)0x0;
                    do {
                      dVar36 = (double)_BrotliHistogramBitCostDistanceCommand
                                                 (local_1018,
                                                  pqVar8 + (ulong)*(uint *)((long)local_458 +
                                                                           (long)puVar16 * 4) *
                                                           0x162);
                      if (dVar36 < local_460) {
                        uVar15 = (ulong)*(uint *)((long)local_458 + (long)puVar16 * 4);
                        local_460 = dVar36;
                      }
                      uVar30 = (uint)uVar15;
                      puVar16 = (uint *)((long)puVar16 + 1);
                      pqVar11 = local_450;
                    } while (local_468 != (qword *)puVar16);
                  }
                  *(uint *)((long)local_4d0 + (long)puVar19 * 4) = uVar30;
                  if (*(uint *)((long)local_480 + uVar15 * 4) == 0xffffffff) {
                    *(uint *)((long)local_480 + uVar15 * 4) = (uint)local_478;
                    local_478 = (qword *)(ulong)((uint)local_478 + 1);
                  }
                  puVar19 = (uint *)((long)puVar19 + 1);
                } while ((qword *)puVar19 != local_448);
              }
              _BrotliFree(local_440,local_458);
              _BrotliFree();
              lVar17 = local_440;
              pqVar8 = (qword *)param_9[4];
              if (pqVar8 < local_448) {
                if (pqVar8 == (qword *)0x0) {
                  pqVar8 = local_448;
                }
                do {
                  pqVar11 = pqVar8;
                  pqVar8 = (qword *)((long)pqVar11 * 2);
                } while (pqVar11 < local_448);
                pvVar10 = (void *)_BrotliAllocate(local_440,pqVar11);
                if ((*(int *)(lVar17 + 0x18) == 0) && (param_9[4] != 0)) {
                  _memcpy(pvVar10,(void *)param_9[2],param_9[4]);
                }
                _BrotliFree();
                param_9[2] = (long)pvVar10;
                param_9[4] = (long)pqVar11;
              }
              lVar17 = local_440;
              pqVar8 = (qword *)param_9[5];
              if (pqVar8 < local_448) {
                if (pqVar8 == (qword *)0x0) {
                  pqVar8 = local_448;
                }
                do {
                  pqVar11 = pqVar8;
                  pqVar8 = (qword *)((long)pqVar11 * 2);
                } while (pqVar11 < local_448);
                pvVar10 = (void *)_BrotliAllocate(local_440,(long)pqVar11 * 4);
                if ((*(int *)(lVar17 + 0x18) == 0) && (param_9[5] != 0)) {
                  _memcpy(pvVar10,(void *)param_9[3],param_9[5] << 2);
                }
                _BrotliFree();
                param_9[3] = (long)pvVar10;
                param_9[5] = (long)pqVar11;
              }
              lVar17 = local_440;
              pqVar18 = local_450;
              if (*local_4b0 == 0) {
                iVar21 = 0;
                if (local_448 == (qword *)0x0) {
                  lVar20 = 1;
                  lVar25 = 0;
                }
                else {
                  uVar30 = 0;
                  lVar25 = 0;
                  puVar19 = (uint *)0x0;
                  do {
                    iVar21 = iVar21 + *(int *)(lVar33 + (long)puVar19 * 4);
                    uVar4 = *(uint *)((long)local_4d0 + (long)puVar19 * 4);
                    if (((uint *)((long)local_448 + -1) == puVar19) ||
                       (uVar4 != *(uint *)((long)local_4d0 + ((long)puVar19 + 1) * 4))) {
                      uVar27 = uVar30 & 0xff;
                      uVar4 = *(uint *)((long)local_480 + (ulong)uVar4 * 4);
                      bVar28 = (byte)uVar4;
                      *(byte *)(param_9[2] + lVar25) = bVar28;
                      bVar26 = (byte)uVar30;
                      uVar30 = uVar4;
                      if (bVar28 < bVar26) {
                        uVar30 = uVar27;
                      }
                      *(int *)(param_9[3] + lVar25 * 4) = iVar21;
                      lVar25 = lVar25 + 1;
                      iVar21 = 0;
                    }
                    puVar19 = (uint *)((long)puVar19 + 1);
                  } while (local_448 != (qword *)puVar19);
                  lVar20 = (ulong)(uVar30 & 0xff) + 1;
                }
                param_9[1] = lVar25;
                *param_9 = lVar20;
                _BrotliFree(local_440,local_480);
                _BrotliFree(lVar17,lVar33);
                _BrotliFree(lVar17,local_4d0);
                pqVar18 = local_450;
                if (*(int *)(lVar17 + 0x18) == 0) {
                  _BrotliFree(local_440,local_4c8);
                }
              }
            }
          }
        }
      }
    }
LAB_001e826e:
    lVar17 = local_440;
    if (*local_4b0 != 0) goto LAB_001e6821;
    _BrotliFree(local_440,pqVar18);
    pqVar8 = (qword *)_BrotliAllocate(lVar17);
  }
  lVar17 = local_440;
  if (*local_4b0 != 0) goto LAB_001e6821;
  if (local_498 == (undefined1 *)0x0) {
LAB_001e6ddb:
    *param_10 = 1;
    local_440 = lVar17;
  }
  else {
    puVar24 = (ushort *)((long)local_4d8 + 0xe);
    pqVar11 = (qword *)0x0;
    puVar32 = local_498;
    do {
      if (((*(uint *)(puVar24 + -5) & 0x1ffffff) != 0) && (0x7f < puVar24[-1])) {
        *(ushort *)((long)pqVar8 + (long)pqVar11 * 2) = *puVar24 & 0x3ff;
        pqVar11 = (qword *)((long)pqVar11 + 1);
      }
      puVar24 = puVar24 + 8;
      puVar32 = puVar32 + -1;
    } while (puVar32 != (undefined1 *)0x0);
    uVar15 = 0x32;
    if (pqVar11 < (qword *)0x6a40) {
      uVar15 = (ulong)(((uint)pqVar11 & 0xffff) / 0x220 + 1);
    }
    if (pqVar11 == (qword *)0x0) goto LAB_001e6ddb;
    local_450 = pqVar8;
    local_478 = pqVar11;
    if (pqVar11 <= section_00000068.segname + 7) {
      uVar15 = param_10[4];
      uVar9 = param_10[1] + 1;
      if (uVar15 < uVar9) {
        if (uVar15 == 0) {
          uVar15 = uVar9;
        }
        do {
          uVar29 = uVar15;
          uVar15 = uVar29 * 2;
        } while (uVar29 < uVar9);
        pvVar10 = (void *)_BrotliAllocate(local_440,uVar29);
        if ((*(int *)(lVar17 + 0x18) == 0) && (param_10[4] != 0)) {
          _memcpy(pvVar10,(void *)param_10[2],param_10[4]);
        }
        _BrotliFree(lVar17,param_10[2]);
        param_10[2] = (long)pvVar10;
        param_10[4] = uVar29;
        uVar9 = param_10[1] + 1;
      }
      uVar15 = param_10[5];
      if (uVar15 < uVar9) {
        if (uVar15 == 0) {
          uVar15 = uVar9;
        }
        do {
          uVar29 = uVar15;
          uVar15 = uVar29 * 2;
        } while (uVar29 < uVar9);
        pvVar10 = (void *)_BrotliAllocate(lVar17,uVar29 * 4);
        if ((*(int *)(lVar17 + 0x18) == 0) && (param_10[5] != 0)) {
          _memcpy(pvVar10,(void *)param_10[3],param_10[5] << 2);
        }
        _BrotliFree(lVar17,param_10[3]);
        param_10[3] = (long)pvVar10;
        param_10[5] = uVar29;
        pqVar8 = local_450;
      }
      if (*local_4b0 != 0) goto LAB_001e6821;
      *param_10 = 1;
      *(undefined1 *)(param_10[2] + param_10[1]) = 0;
      lVar33 = param_10[1];
      *(int *)(param_10[3] + lVar33 * 4) = (int)local_478;
      param_10[1] = lVar33 + 1;
      local_440 = lVar17;
      goto LAB_001e6dea;
    }
    puVar32 = (undefined1 *)_BrotliAllocate(local_440,uVar15 * 0x890);
    local_498 = puVar32;
    if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e6821;
    lVar33 = 0;
    local_440 = lVar17;
    do {
      ___bzero(puVar32 + lVar33,0x888);
      *(undefined8 *)(puVar32 + lVar33 + 0x888) = 0x7ff0000000000000;
      lVar33 = lVar33 + 0x890;
    } while (uVar15 * 0x890 - lVar33 != 0);
    uVar29 = 0;
    uVar9 = 7;
    do {
      uVar13 = (uVar29 * (long)local_478) / uVar15;
      if (uVar29 != 0) {
        uVar9 = (ulong)(uint)((int)uVar9 * 0x41a7);
        uVar13 = uVar13 + uVar9 % ((ulong)local_478 / uVar15);
      }
      if (local_478 <= (uint *)(uVar13 + 0x28)) {
        uVar13 = (long)local_478 - 0x29;
      }
      *(long *)(puVar32 + uVar29 * 0x890 + 0x880) =
           *(long *)(puVar32 + uVar29 * 0x890 + 0x880) + 0x28;
      lVar17 = 0;
      do {
        *(int *)(puVar32 +
                (ulong)*(ushort *)((long)pqVar8 + lVar17 * 2 + uVar13 * 2) * 4 + uVar29 * 0x890) =
             *(int *)(puVar32 +
                     (ulong)*(ushort *)((long)pqVar8 + lVar17 * 2 + uVar13 * 2) * 4 + uVar29 * 0x890
                     ) + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x28);
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar15);
    uVar9 = (ulong)((long)local_478 * 2) / 0x28 + uVar15 + 99;
    if (uVar9 != uVar9 % uVar15) {
      uVar29 = (long)local_478 - 0x27;
      uVar34 = 7;
      uVar13 = 0;
      do {
        ___bzero(local_1018,0x888);
        uVar34 = (ulong)(uint)((int)uVar34 * 0x41a7);
        puVar24 = (ushort *)((long)local_450 + (uVar34 % uVar29) * 2);
        lVar17 = -0x28;
        do {
          uVar7 = *puVar24;
          puVar24 = puVar24 + 1;
          local_1018[uVar7] = local_1018[uVar7] + 1;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0);
        lVar17 = (uVar13 % uVar15) * 0x890;
        *(long *)(local_498 + lVar17 + 0x880) = *(long *)(local_498 + lVar17 + 0x880) + 0x28;
        lVar33 = 0;
        do {
          auVar3 = *(undefined1 (*) [16])(local_1018 + lVar33);
          piVar1 = (int *)(local_498 + lVar33 * 4 + lVar17);
          iVar21 = piVar1[1];
          iVar5 = piVar1[2];
          iVar6 = piVar1[3];
          piVar2 = (int *)(local_498 + lVar33 * 4 + lVar17);
          *piVar2 = *piVar1 + auVar3._0_4_;
          piVar2[1] = iVar21 + auVar3._4_4_;
          piVar2[2] = iVar5 + auVar3._8_4_;
          piVar2[3] = iVar6 + auVar3._12_4_;
          lVar33 = lVar33 + 4;
        } while (lVar33 != 0x220);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar9 - uVar9 % uVar15);
    }
    lVar17 = local_440;
    pqVar8 = local_478;
    local_470 = (qword *)_BrotliAllocate(local_440,local_478);
    iVar21 = (int)uVar15;
    local_460 = (double)_BrotliAllocate(lVar17,uVar15 * 0x1100);
    lVar33 = _BrotliAllocate(lVar17,iVar21 * 8);
    lVar25 = (ulong)(iVar21 + 7U >> 3) * (long)pqVar8;
    if (lVar25 == 0) {
      local_4a8 = (undefined1 *)0x0;
    }
    else {
      local_4a8 = (undefined1 *)_BrotliAllocate(lVar17,lVar25);
    }
    pqVar8 = (qword *)_BrotliAllocate(lVar17,iVar21 * 2);
    local_488 = (qword *)((long)&MACH_HEADER.magic + 3);
    if (10 < *(int *)(param_7 + 4)) {
      local_488 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
    }
    if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e6821;
    local_490 = (uint *)(local_498 + 0x880);
    local_4e8 = (qword *)(local_498 + 0x87c);
    local_4b8 = (qword *)((long)local_478 + -2);
    puVar19 = (uint *)0x0;
    local_4c8 = pqVar8;
    do {
      pqVar11 = local_470;
      pqVar8 = local_4c8;
      local_4d8 = puVar19;
      if (uVar15 < 2) {
        ___bzero(local_470);
        pqVar35 = (qword *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        local_448 = (qword *)(uVar15 + 7 >> 3);
        ___bzero(local_460,uVar15 * 0x1100);
        uVar9 = 0;
        dVar36 = local_460;
        puVar19 = local_490;
        do {
          uVar29 = (ulong)*puVar19;
          if (uVar29 < 0x100) {
            uVar38 = (&_kBrotliLog2Table)[uVar29];
          }
          else {
            uVar38 = _log2((double)uVar29);
            dVar36 = local_460;
          }
          *(undefined8 *)((long)dVar36 + uVar9 * 8) = uVar38;
          uVar9 = uVar9 + 1;
          puVar19 = puVar19 + 0x224;
        } while (uVar15 != uVar9);
        lVar17 = uVar15 * 0x10f8 + (long)dVar36;
        local_4c0 = (qword *)(uVar15 * 8);
        local_4a0 = (uint *)(uVar15 * -8);
        local_468 = &section_000001f8.size;
        pqVar8 = local_4e8;
        do {
          local_468 = (qword *)((long)local_468 + -1);
          uVar9 = 0;
          local_480 = pqVar8;
          do {
            dVar44 = -2.0;
            dVar39 = *(double *)((long)dVar36 + uVar9 * 8);
            uVar29 = (ulong)(uint)*pqVar8;
            if (uVar29 != 0) {
              if ((uint)*pqVar8 < 0x100) {
                dVar44 = (double)(&_kBrotliLog2Table)[uVar29];
              }
              else {
                local_458 = dVar39;
                dVar44 = (double)_log2((double)uVar29);
                dVar36 = local_460;
                dVar39 = local_458;
              }
            }
            *(double *)(lVar17 + uVar9 * 8) = dVar39 - dVar44;
            uVar9 = uVar9 + 1;
            pqVar8 = pqVar8 + 0x112;
          } while (uVar15 != uVar9);
          lVar17 = lVar17 + (long)local_4a0;
          pqVar8 = (qword *)((long)local_480 + -4);
        } while (local_468 != (qword *)0x0);
        ___bzero(lVar33,local_4c0);
        pqVar14 = local_448;
        pqVar18 = local_478;
        puVar32 = local_4a8;
        ___bzero(local_4a8);
        puVar19 = (uint *)0x0;
        do {
          uVar7 = *(ushort *)((long)local_450 + (long)puVar19 * 2);
          uVar9 = 0;
          dVar36 = 1e+99;
          do {
            dVar39 = *(double *)((long)local_460 + uVar7 * uVar15 * 8 + uVar9 * 8) +
                     *(double *)(lVar33 + uVar9 * 8);
            *(double *)(lVar33 + uVar9 * 8) = dVar39;
            if (dVar39 < dVar36) {
              *(char *)((long)local_470 + (long)puVar19) = (char)uVar9;
              dVar36 = dVar39;
            }
            uVar9 = uVar9 + 1;
          } while (uVar15 != uVar9);
          dVar39 = 14.6;
          if (puVar19 < &section_00000790.flags) {
            dVar39 = (((double)(long)puVar19 * 0.07) / 2000.0 + 0.77) * 14.6;
          }
          uVar9 = 0;
          do {
            dVar44 = *(double *)(lVar33 + uVar9 * 8) - dVar36;
            *(double *)(lVar33 + uVar9 * 8) = dVar44;
            if (dVar39 <= dVar44) {
              *(double *)(lVar33 + uVar9 * 8) = dVar39;
              pbVar22 = puVar32 + (uVar9 >> 3) + (long)puVar19 * (long)pqVar14;
              *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar9 & 7);
            }
            uVar9 = uVar9 + 1;
          } while (uVar15 != uVar9);
          puVar19 = (uint *)((long)puVar19 + 1);
        } while ((qword *)puVar19 != pqVar18);
        bVar26 = ((undefined1 *)((long)local_470 + -1))[(long)pqVar18];
        puVar32 = puVar32 + (long)local_4b8 * (long)pqVar14;
        pqVar35 = (qword *)((long)&MACH_HEADER.magic + 1);
        do {
          if (((byte)puVar32[bVar26 >> 3] >> (bVar26 & 7) & 1) != 0) {
            pqVar35 = (qword *)((long)pqVar35 +
                               (ulong)(bVar26 !=
                                      ((undefined1 *)((long)local_470 + -2))[(long)pqVar18]));
            bVar26 = ((undefined1 *)((long)local_470 + -2))[(long)pqVar18];
          }
          ((undefined1 *)((long)local_470 + -2))[(long)pqVar18] = bVar26;
          puVar32 = puVar32 + -(long)pqVar14;
          pqVar18 = (qword *)((long)pqVar18 + -1);
          pqVar11 = local_470;
          pqVar8 = local_4c8;
        } while (pqVar18 != (qword *)((long)&MACH_HEADER.magic + 1));
      }
      if (uVar15 != 0) {
        _memset_pattern16(pqVar8,&DAT_0032b1b0,uVar15 * 2);
      }
      puVar32 = local_498;
      puVar19 = (uint *)0x0;
      uVar7 = 0;
      do {
        if (*(short *)((long)pqVar8 + (ulong)*(byte *)((long)pqVar11 + (long)puVar19) * 2) == 0x100)
        {
          *(ushort *)((long)pqVar8 + (ulong)*(byte *)((long)pqVar11 + (long)puVar19) * 2) = uVar7;
          uVar7 = uVar7 + 1;
        }
        puVar19 = (uint *)((long)puVar19 + 1);
      } while (local_478 != (qword *)puVar19);
      puVar19 = (uint *)0x0;
      do {
        *(undefined1 *)((long)pqVar11 + (long)puVar19) =
             *(undefined1 *)((long)pqVar8 + (ulong)*(byte *)((long)pqVar11 + (long)puVar19) * 2);
        puVar19 = (uint *)((long)puVar19 + 1);
      } while (local_478 != (qword *)puVar19);
      uVar15 = (ulong)uVar7;
      local_448 = pqVar35;
      if (uVar7 != 0) {
        local_458 = (double)(uVar15 * 0x890);
        dVar36 = 0.0;
        do {
          ___bzero(puVar32 + (long)dVar36,0x888);
          *(undefined8 *)(puVar32 + (long)dVar36 + 0x888) = 0x7ff0000000000000;
          dVar36 = (double)((long)dVar36 + 0x890);
        } while (local_458 != dVar36);
      }
      lVar17 = local_440;
      pqVar8 = local_4c8;
      puVar19 = (uint *)0x0;
      do {
        lVar25 = (ulong)*(byte *)((long)local_470 + (long)puVar19) * 0x890;
        *(int *)(puVar32 + (ulong)*(ushort *)((long)local_450 + (long)puVar19 * 2) * 4 + lVar25) =
             *(int *)(puVar32 + (ulong)*(ushort *)((long)local_450 + (long)puVar19 * 2) * 4 + lVar25
                     ) + 1;
        *(long *)(puVar32 + lVar25 + 0x880) = *(long *)(puVar32 + lVar25 + 0x880) + 1;
        puVar19 = (uint *)((long)puVar19 + 1);
      } while (local_478 != (qword *)puVar19);
      puVar19 = (uint *)((long)local_4d8 + 1);
    } while ((qword *)puVar19 != local_488);
    _BrotliFree(local_440,local_460);
    _BrotliFree(lVar17,lVar33);
    _BrotliFree(lVar17,local_4a8);
    _BrotliFree(lVar17,pqVar8);
    _BrotliFree(lVar17,local_498);
    pqVar8 = local_448;
    if (local_448 == (qword *)0x0) {
      puVar32 = (undefined1 *)_BrotliAllocate(lVar17,0x8070);
      pqVar11 = (qword *)_BrotliAllocate(lVar17,0x3c);
      local_488 = (qword *)((long)&MACH_HEADER.filetype + 3);
      lVar33 = 0;
      local_4e0 = (qword *)0x0;
      local_458 = 0.0;
    }
    else {
      lVar33 = (long)local_448 * 4;
      local_4e0 = (qword *)_BrotliAllocate(lVar17,lVar33);
      lVar33 = _BrotliAllocate(lVar17,lVar33);
      uVar15 = (long)pqVar8 * 0x10 + 0x3f0;
      pqVar8 = (qword *)(uVar15 >> 6);
      local_488 = pqVar8;
      if (uVar15 < 0x40) {
        pqVar11 = (qword *)0x0;
        puVar32 = (undefined1 *)0x0;
      }
      else {
        puVar32 = (undefined1 *)_BrotliAllocate(lVar17,(long)pqVar8 * 0x890);
        pqVar11 = (qword *)_BrotliAllocate(lVar17,(long)pqVar8 * 4);
      }
      pqVar8 = &segment_command_00000020.vmsize;
      if (local_448 < &segment_command_00000020.vmsize) {
        pqVar8 = local_448;
      }
      local_458 = (double)_BrotliAllocate(lVar17,(long)pqVar8 * 0x890);
    }
    local_500 = (qword *)_BrotliAllocate(lVar17,0xc018);
    pqVar18 = local_448;
    local_48 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    local_148 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    local_168 = (undefined1  [16])0x0;
    local_178 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    local_1b8 = (undefined1  [16])0x0;
    local_1c8 = (undefined1  [16])0x0;
    local_1d8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    local_1f8 = (undefined1  [16])0x0;
    local_208 = (undefined1  [16])0x0;
    local_218 = (undefined1  [16])0x0;
    local_228 = (undefined1  [16])0x0;
    local_238 = (undefined1  [16])0x0;
    local_248 = (undefined1  [16])0x0;
    local_258 = (undefined1  [16])0x0;
    local_268 = (undefined1  [16])0x0;
    local_278 = (undefined1  [16])0x0;
    local_288 = (undefined1  [16])0x0;
    local_298 = (undefined1  [16])0x0;
    local_2a8 = (undefined1  [16])0x0;
    local_2b8 = (undefined1  [16])0x0;
    local_2c8 = (undefined1  [16])0x0;
    local_2d8 = (undefined1  [16])0x0;
    local_2e8 = (undefined1  [16])0x0;
    local_2f8 = (undefined1  [16])0x0;
    local_308 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    local_328 = (undefined1  [16])0x0;
    local_338 = (undefined1  [16])0x0;
    local_348 = (undefined1  [16])0x0;
    local_358 = (undefined1  [16])0x0;
    local_368 = (undefined1  [16])0x0;
    local_378 = (undefined1  [16])0x0;
    local_388 = (undefined1  [16])0x0;
    local_398 = (undefined1  [16])0x0;
    local_3a8 = (undefined1  [16])0x0;
    local_3b8 = (undefined1  [16])0x0;
    local_3c8 = (undefined1  [16])0x0;
    local_3d8 = (undefined1  [16])0x0;
    local_3e8 = (undefined1  [16])0x0;
    local_3f8 = (undefined1  [16])0x0;
    local_408 = (undefined1  [16])0x0;
    local_418 = (undefined1  [16])0x0;
    local_428 = (undefined1  [16])0x0;
    local_438 = (undefined1  [16])0x0;
    pqVar8 = local_450;
    if (*(int *)(lVar17 + 0x18) == 0) {
      ___bzero(lVar33,(long)local_448 * 4);
      lVar17 = 0;
      puVar19 = (uint *)0x0;
      do {
        piVar1 = (int *)(lVar33 + lVar17 * 4);
        *piVar1 = *piVar1 + 1;
        if (((uint *)((long)local_478 + -1) == puVar19) ||
           (*(char *)((long)local_470 + (long)puVar19) !=
            ((undefined1 *)((long)local_470 + 1))[(long)puVar19])) {
          lVar17 = lVar17 + 1;
        }
        puVar19 = (uint *)((long)puVar19 + 1);
      } while (local_478 != (qword *)puVar19);
      if (pqVar18 == (qword *)0x0) {
        local_4d8 = (uint *)0x0;
        local_498 = puVar32;
      }
      else {
        local_490 = (uint *)0x0;
        local_4c8 = local_4e0;
        local_4e8 = (qword *)0x0;
        local_478 = local_488;
        local_468 = (qword *)0x0;
        local_4d8 = (uint *)0x0;
        local_460 = 0.0;
        pqVar8 = local_448;
        local_4c0 = pqVar11;
        local_4a8 = puVar32;
        do {
          local_480 = &segment_command_00000020.vmsize;
          if (pqVar8 < &segment_command_00000020.vmsize) {
            local_480 = pqVar8;
          }
          local_480 = (qword *)((long)local_480 + (ulong)(local_480 == (qword *)0x0));
          puVar19 = (uint *)0x0;
          local_4b8 = pqVar8;
          do {
            dVar36 = local_458;
            lVar17 = (long)local_458 + (long)puVar19 * 0x890;
            ___bzero(lVar17,0x888);
            *(undefined8 *)((long)dVar36 + 0x888 + (long)puVar19 * 0x890) = 0x7ff0000000000000;
            if (*(int *)(lVar33 + ((long)local_468 + (long)puVar19) * 4) != 0) {
              uVar15 = 0;
              do {
                piVar1 = (int *)(lVar17 + (ulong)*(ushort *)
                                                  ((long)local_450 +
                                                  uVar15 * 2 + (long)local_460 * 2) * 4);
                *piVar1 = *piVar1 + 1;
                uVar15 = uVar15 + 1;
              } while (uVar15 < *(uint *)(lVar33 + ((long)local_468 + (long)puVar19) * 4));
              *(ulong *)(lVar17 + 0x880) = uVar15;
              local_460 = (double)((long)local_460 + uVar15);
            }
            uVar38 = _BrotliPopulationCostDistance(lVar17);
            *(undefined8 *)(lVar17 + 0x888) = uVar38;
            *(int *)(local_238 + (long)puVar19 * 4) = (int)puVar19;
            *(int *)(local_338 + (long)puVar19 * 4) = (int)puVar19;
            *(undefined4 *)(local_138 + (long)puVar19 * 4) = 1;
            puVar19 = (uint *)((long)puVar19 + 1);
          } while ((qword *)puVar19 != local_480);
          uVar15 = (long)local_448 - (long)local_468;
          if (0x3f < uVar15) {
            uVar15 = 0x40;
          }
          local_4a0 = (uint *)_BrotliHistogramCombineDistance
                                        (local_458,local_138,local_338,local_238,local_500,uVar15,
                                         uVar15,0x40,0x800);
          lVar17 = local_440;
          pqVar8 = local_488;
          pqVar11 = (qword *)((long)local_490 + (long)local_4a0);
          if (local_488 < pqVar11) {
            pqVar18 = local_488;
            if (local_488 == (qword *)0x0) {
              pqVar18 = pqVar11;
            }
            do {
              local_4f8 = pqVar18;
              pqVar18 = (qword *)((long)local_4f8 * 2);
            } while (local_4f8 < pqVar11);
            puVar32 = (undefined1 *)_BrotliAllocate(local_440,(long)local_4f8 * 0x890);
            if ((*(int *)(lVar17 + 0x18) == 0) && (pqVar8 != (qword *)0x0)) {
              _memcpy(puVar32,local_4a8,(long)pqVar8 * 0x890);
            }
            _BrotliFree(lVar17,local_4a8);
          }
          else {
            local_4f8 = local_488;
            puVar32 = local_4a8;
          }
          puVar19 = local_4d8;
          pqVar8 = (qword *)((long)local_4e8 + (long)local_4a0);
          local_498 = puVar32;
          pqVar11 = local_4c0;
          pqVar18 = local_478;
          if (local_478 < pqVar8) {
            pqVar11 = local_478;
            if (local_478 == (qword *)0x0) {
              pqVar11 = pqVar8;
            }
            do {
              pqVar18 = pqVar11;
              pqVar11 = (qword *)((long)pqVar18 * 2);
            } while (pqVar18 < pqVar8);
            pqVar11 = (qword *)_BrotliAllocate(lVar17,(long)pqVar18 * 4);
            if ((*(int *)(lVar17 + 0x18) == 0) && (local_478 != (qword *)0x0)) {
              _memcpy(pqVar11,local_4c0,(long)local_478 << 2);
            }
            _BrotliFree(lVar17,local_4c0);
          }
          pqVar8 = local_450;
          if (*local_4b0 != 0) goto LAB_001e6dea;
          if (local_4a0 != (uint *)0x0) {
            puVar32 = local_498 + (long)local_490 * 0x890;
            local_488 = pqVar11;
            local_478 = (qword *)((long)pqVar11 + (long)local_4e8 * 4);
            puVar19 = (uint *)0x0;
            do {
              uVar30 = *(uint *)(local_238 + (long)puVar19 * 4);
              _memcpy(puVar32,(void *)((ulong)uVar30 * 0x890 + (long)local_458),0x890);
              *(uint *)((long)local_478 + puVar19 * 4) = *(uint *)(local_138 + (ulong)uVar30 * 4);
              *(int *)(local_438 + (ulong)*(uint *)(local_238 + (long)puVar19 * 4) * 4) =
                   (int)puVar19;
              puVar19 = (uint *)((long)puVar19 + 1);
              puVar32 = puVar32 + 0x890;
            } while (local_4a0 != puVar19);
            local_490 = (uint *)((long)local_490 + (long)puVar19);
            local_4e8 = (qword *)((long)local_4e8 + (long)puVar19);
            pqVar11 = local_488;
            puVar19 = local_4d8;
          }
          puVar16 = (uint *)0x0;
          do {
            *(int *)((long)local_4c8 + (long)puVar16 * 4) =
                 *(int *)(local_438 + (ulong)*(uint *)(local_338 + (long)puVar16 * 4) * 4) +
                 (int)puVar19;
            puVar16 = (uint *)((long)puVar16 + 1);
          } while (local_480 != (qword *)puVar16);
          local_4d8 = (uint *)((long)puVar19 + (long)local_4a0);
          local_468 = local_468 + 8;
          pqVar8 = local_4b8 + -8;
          local_4c8 = local_4c8 + 0x20;
          local_488 = local_4f8;
          local_4a8 = local_498;
          local_4c0 = pqVar11;
          local_478 = pqVar18;
        } while (local_468 < local_448);
      }
      local_488 = pqVar11;
      _BrotliFree(local_440,local_458);
      lVar17 = local_440;
      uVar15 = ((ulong)local_4d8 >> 1) * (long)local_4d8;
      if ((ulong)((long)local_4d8 << 6) < uVar15) {
        uVar15 = (long)local_4d8 << 6;
      }
      if (0x800 < uVar15) {
        _BrotliFree(local_440,local_500);
        local_500 = (qword *)_BrotliAllocate(lVar17,uVar15 * 0x18 + 0x18);
        pqVar8 = local_450;
        if (*(int *)(lVar17 + 0x18) != 0) goto LAB_001e6dea;
      }
      lVar17 = local_440;
      puVar19 = local_4d8;
      if (local_4d8 == (uint *)0x0) {
        pqVar8 = local_450;
        if (*local_4b0 == 0) {
          lVar25 = 0;
          goto LAB_001e9ec4;
        }
      }
      else {
        lVar25 = _BrotliAllocate(local_440,(long)local_4d8 * 4);
        auVar3 = _DAT_0032b310;
        pqVar8 = local_450;
        if (*(int *)(lVar17 + 0x18) == 0) {
          lVar17 = (long)puVar19 + -1;
          auVar42._8_4_ = (int)lVar17;
          auVar42._0_8_ = lVar17;
          auVar42._12_4_ = (int)((ulong)lVar17 >> 0x20);
          uVar9 = 0;
          auVar42 = auVar42 ^ _DAT_0032b310;
          auVar43 = _DAT_0032b300;
          do {
            auVar46 = auVar43 ^ auVar3;
            if ((bool)(~(auVar46._4_4_ == auVar42._4_4_ && auVar42._0_4_ < auVar46._0_4_ ||
                        auVar42._4_4_ < auVar46._4_4_) & 1)) {
              *(int *)(lVar25 + uVar9 * 4) = (int)uVar9;
            }
            if ((auVar46._12_4_ != auVar42._12_4_ || auVar46._8_4_ <= auVar42._8_4_) &&
                auVar46._12_4_ <= auVar42._12_4_) {
              *(int *)(lVar25 + 4 + uVar9 * 4) = (int)uVar9 + 1;
            }
            uVar9 = uVar9 + 2;
            lVar17 = auVar43._8_8_;
            auVar43._0_8_ = auVar43._0_8_ + 2;
            auVar43._8_8_ = lVar17 + 2;
          } while (((long)puVar19 + 1U & 0xfffffffffffffffe) != uVar9);
LAB_001e9ec4:
          pqVar8 = local_500;
          local_460 = (double)_BrotliHistogramCombineDistance
                                        (local_498,local_488,local_4e0,lVar25,local_500,local_4d8,
                                         local_448,0x100,uVar15);
          lVar17 = local_440;
          _BrotliFree(local_440,pqVar8);
          _BrotliFree(lVar17,local_488);
          lVar17 = local_440;
          if (local_4d8 == (uint *)0x0) {
            pqVar8 = local_450;
            if (*local_4b0 == 0) {
              local_468 = (qword *)0x0;
              goto LAB_001ea01a;
            }
          }
          else {
            sVar31 = (long)local_4d8 << 2;
            local_468 = (qword *)_BrotliAllocate(local_440,sVar31);
            pqVar8 = local_450;
            if (*(int *)(lVar17 + 0x18) == 0) {
              _memset(local_468,0xff,sVar31);
LAB_001ea01a:
              if (local_448 != (qword *)0x0) {
                local_4a0 = (uint *)0x0;
                puVar19 = (uint *)0x0;
                local_480 = (qword *)0x0;
                do {
                  ___bzero(local_1018,0x888);
                  pqVar8 = local_450;
                  local_790 = 0x7ff0000000000000;
                  if (*(int *)(lVar33 + (long)puVar19 * 4) != 0) {
                    lVar17 = (long)local_480 * 2;
                    uVar15 = 0;
                    do {
                      local_1018[*(ushort *)((long)pqVar8 + uVar15 * 2 + lVar17)] =
                           local_1018[*(ushort *)((long)pqVar8 + uVar15 * 2 + lVar17)] + 1;
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < *(uint *)(lVar33 + (long)puVar19 * 4));
                    local_480 = (qword *)((long)local_480 + uVar15);
                    local_798 = uVar15;
                  }
                  lVar17 = 0;
                  if (puVar19 != (uint *)0x0) {
                    lVar17 = (long)puVar19 + -1;
                  }
                  uVar30 = *(uint *)((long)local_4e0 + lVar17 * 4);
                  uVar15 = (ulong)uVar30;
                  local_458 = (double)_BrotliHistogramBitCostDistanceDistance
                                                (local_1018,local_498 + uVar15 * 0x890);
                  if (local_460 != 0.0) {
                    dVar36 = 0.0;
                    do {
                      dVar39 = (double)_BrotliHistogramBitCostDistanceDistance
                                                 (local_1018,
                                                  local_498 +
                                                  (ulong)*(uint *)(lVar25 + (long)dVar36 * 4) *
                                                  0x890);
                      if (dVar39 < local_458) {
                        uVar15 = (ulong)*(uint *)(lVar25 + (long)dVar36 * 4);
                        local_458 = dVar39;
                      }
                      uVar30 = (uint)uVar15;
                      dVar36 = (double)((long)dVar36 + 1);
                    } while (local_460 != dVar36);
                  }
                  *(uint *)((long)local_4e0 + (long)puVar19 * 4) = uVar30;
                  if (*(uint *)((long)local_468 + uVar15 * 4) == 0xffffffff) {
                    *(uint *)((long)local_468 + uVar15 * 4) = (uint)local_4a0;
                    local_4a0 = (uint *)(ulong)((uint)local_4a0 + 1);
                  }
                  puVar19 = (uint *)((long)puVar19 + 1);
                } while ((qword *)puVar19 != local_448);
              }
              _BrotliFree(local_440,lVar25);
              _BrotliFree();
              lVar17 = local_440;
              pqVar8 = (qword *)param_10[4];
              if (pqVar8 < local_448) {
                if (pqVar8 == (qword *)0x0) {
                  pqVar8 = local_448;
                }
                do {
                  pqVar11 = pqVar8;
                  pqVar8 = (qword *)((long)pqVar11 * 2);
                } while (pqVar11 < local_448);
                pvVar10 = (void *)_BrotliAllocate(local_440,pqVar11);
                if ((*(int *)(lVar17 + 0x18) == 0) && (param_10[4] != 0)) {
                  _memcpy(pvVar10,(void *)param_10[2],param_10[4]);
                }
                _BrotliFree();
                param_10[2] = (long)pvVar10;
                param_10[4] = (long)pqVar11;
              }
              lVar17 = local_440;
              pqVar8 = (qword *)param_10[5];
              if (pqVar8 < local_448) {
                if (pqVar8 == (qword *)0x0) {
                  pqVar8 = local_448;
                }
                do {
                  pqVar11 = pqVar8;
                  pqVar8 = (qword *)((long)pqVar11 * 2);
                } while (pqVar11 < local_448);
                pvVar10 = (void *)_BrotliAllocate(local_440,(long)pqVar11 * 4);
                if ((*(int *)(lVar17 + 0x18) == 0) && (param_10[5] != 0)) {
                  _memcpy(pvVar10,(void *)param_10[3],param_10[5] << 2);
                }
                _BrotliFree();
                param_10[3] = (long)pvVar10;
                param_10[5] = (long)pqVar11;
              }
              lVar17 = local_440;
              pqVar8 = local_450;
              if (*local_4b0 == 0) {
                iVar21 = 0;
                if (local_448 == (qword *)0x0) {
                  lVar20 = 1;
                  lVar25 = 0;
                }
                else {
                  uVar30 = 0;
                  lVar25 = 0;
                  puVar19 = (uint *)0x0;
                  do {
                    iVar21 = iVar21 + *(int *)(lVar33 + (long)puVar19 * 4);
                    uVar4 = *(uint *)((long)local_4e0 + (long)puVar19 * 4);
                    if (((uint *)((long)local_448 + -1) == puVar19) ||
                       (uVar4 != *(uint *)((long)local_4e0 + ((long)puVar19 + 1) * 4))) {
                      uVar27 = uVar30 & 0xff;
                      uVar4 = *(uint *)((long)local_468 + (ulong)uVar4 * 4);
                      bVar28 = (byte)uVar4;
                      *(byte *)(param_10[2] + lVar25) = bVar28;
                      bVar26 = (byte)uVar30;
                      uVar30 = uVar4;
                      if (bVar28 < bVar26) {
                        uVar30 = uVar27;
                      }
                      *(int *)(param_10[3] + lVar25 * 4) = iVar21;
                      lVar25 = lVar25 + 1;
                      iVar21 = 0;
                    }
                    puVar19 = (uint *)((long)puVar19 + 1);
                  } while (local_448 != (qword *)puVar19);
                  lVar20 = (ulong)(uVar30 & 0xff) + 1;
                }
                param_10[1] = lVar25;
                *param_10 = lVar20;
                _BrotliFree(local_440,local_468);
                _BrotliFree(lVar17,lVar33);
                _BrotliFree(lVar17,local_4e0);
                pqVar8 = local_450;
                if (*(int *)(lVar17 + 0x18) == 0) {
                  _BrotliFree(local_440,local_470);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001e6dea:
  if (*local_4b0 == 0) {
    _BrotliFree(local_440,pqVar8);
  }
LAB_001e6821:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

