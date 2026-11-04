// rea decompile_all
// name: _aaDecompressionStreamRead
// address: 0x18ced9
// body: available
// range: 0x18ced9-0x18d6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18cf2f to 0x1919ce _IDecoderStreamRead (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18cf58 to 0x18cd77 _aaDecompressionStreamReadInput (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _aaDecompressionStreamRead(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  void *pvVar14;
  char *pcVar15;
  ulong uVar16;
  size_t sVar17;
  ulong uVar18;
  int local_34;
  
  if (*(int *)((long)param_1 + 0x44) == 0) {
    if (param_1[9] != 0) {
      uVar6 = _IDecoderStreamRead(param_1[9],param_2,param_3);
      return uVar6;
    }
    if (*(int *)(param_1 + 7) != -1) {
      if (*(int *)(param_1 + 7) == 0) {
        uVar6 = _aaDecompressionStreamReadInput(param_1,param_2,param_3);
        return uVar6;
      }
      if (param_3 == 0) {
        return 0;
      }
      puVar1 = param_1 + 1;
      local_34 = 0;
      uVar6 = 0;
      while (uVar11 = param_1[4], uVar11 != 0) {
        if (param_3 < uVar11) {
          uVar11 = param_3;
        }
        _memcpy((void *)(param_2 + uVar6),(void *)param_1[6],uVar11);
        if ((long)uVar11 < 0) {
          return uVar11;
        }
        sVar17 = param_1[4] - uVar11;
        if (uVar11 <= (ulong)param_1[4]) {
          if (sVar17 != 0) {
            _memmove((void *)param_1[6],(void *)((long)param_1[6] + uVar11),sVar17);
          }
          param_1[4] = sVar17;
        }
        uVar6 = uVar6 + uVar11;
        param_3 = param_3 - uVar11;
LAB_0018d492:
        if (param_3 == 0) {
          return uVar6;
        }
      }
      if (*(int *)(param_1 + 8) != 0) {
        return uVar6;
      }
      uVar11 = param_1[1];
      uVar18 = param_1[2];
      if (uVar18 != uVar11) {
        if (*(int *)((long)param_1 + 0x3c) == 0) {
          uVar16 = uVar18 - uVar11;
          if (uVar16 != 0) {
            uVar13 = *param_1;
            uVar10 = 0;
            do {
              if (uVar11 == uVar18) {
                uVar7 = uVar18 + 0x40000;
                uVar12 = 0xffffffffffffffff;
                if ((long)uVar7 < 0) goto LAB_0018d675;
                uVar11 = uVar18;
                if (uVar18 < 0xfffffffffffc0000) {
                  do {
                    while (uVar18 == 0) {
                      uVar18 = 0x4000;
                      if (uVar7 < 0x4001) goto LAB_0018d0ae;
                    }
                    uVar11 = uVar18 >> 1 & uVar18;
                    if (uVar11 == 0) {
                      uVar11 = uVar18 >> 1;
                    }
                    uVar18 = uVar18 + uVar11;
                  } while (uVar18 < uVar7);
                  if (uVar18 < 0x2000000001) {
LAB_0018d0ae:
                    pvVar14 = (void *)param_1[3];
                    pvVar8 = _realloc(pvVar14,uVar18);
                    if (pvVar8 != (void *)0x0) {
                      param_1[3] = pvVar8;
                      param_1[2] = uVar18;
                      uVar11 = param_1[1];
                      goto LAB_0018d0d2;
                    }
                    _free(pvVar14);
                  }
                  else {
                    piVar9 = ___error();
                    *piVar9 = 0xc;
                  }
                  *puVar1 = 0;
                  param_1[2] = 0;
                  param_1[3] = 0;
                  uVar12 = 0xffffffffffffffff;
                  goto LAB_0018d675;
                }
              }
LAB_0018d0d2:
              uVar12 = uVar18 - uVar11;
              if (uVar16 <= uVar18 - uVar11) {
                uVar12 = uVar16;
              }
              uVar7 = _AAByteStreamRead(uVar13,uVar11 + param_1[3],uVar12);
              uVar12 = 0xffffffffffffffff;
              if ((long)uVar7 < 0) goto LAB_0018d675;
              if (uVar7 == 0) break;
              uVar11 = *puVar1 + uVar7;
              if ((CARRY8(*puVar1,uVar7)) || (uVar18 = param_1[2], uVar18 < uVar11))
              goto LAB_0018d675;
              *puVar1 = uVar11;
              uVar10 = uVar10 + uVar7;
              uVar16 = uVar16 - uVar7;
            } while (uVar16 != 0);
            uVar12 = uVar10;
            if ((long)uVar10 < 0) {
LAB_0018d675:
              _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/AppleArchive/AASequentialDecompressionStream.c"
                            ,"aaDecompressionStreamRead",0x90,0x14,0,"stream read failed");
              return uVar12;
            }
            if (uVar10 != 0) goto LAB_0018d151;
          }
          *(undefined4 *)((long)param_1 + 0x3c) = 1;
        }
LAB_0018d151:
        uVar11 = *puVar1;
      }
      if (*(int *)(param_1 + 7) - 1U < 4) {
        puVar2 = (ulong *)param_1[3];
        uVar18 = param_1[5] - param_1[4];
        pvVar14 = (void *)(param_1[4] + param_1[6]);
        switch(*(int *)(param_1 + 7)) {
        case 1:
          if (uVar11 == 0) {
            if (*(int *)((long)param_1 + 0x3c) != 0) {
LAB_0018d478:
              *(undefined4 *)(param_1 + 8) = 1;
              goto LAB_0018d488;
            }
          }
          else if (0xf < uVar11) {
            uVar16 = *puVar2;
            uVar10 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                     (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                     (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                     (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
            if (uVar10 <= (ulong)param_1[10]) {
              uVar7 = puVar2[1];
              uVar12 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                       (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                       (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
                       (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
              if (uVar12 <= (ulong)param_1[10]) {
                uVar12 = uVar12 + 0x10;
                if (uVar11 < uVar12) {
                  pcVar15 = "truncated stream payload";
                  uVar13 = 0xda;
                }
                else {
                  if (uVar10 <= uVar18) {
                    if (uVar16 == uVar7) {
                      _memcpy(pvVar14,puVar2 + 2,uVar10);
                    }
                    else {
                      uVar11 = (*(code *)param_1[0xb])(pvVar14,uVar18);
                      if (uVar11 != uVar10) {
                        pcVar15 = "block decompression failed";
                        uVar13 = 0xe5;
                        break;
                      }
                    }
                    if (uVar12 != 0) {
                      sVar17 = *puVar1 - uVar12;
                      if (uVar12 <= *puVar1) {
                        if (sVar17 != 0) {
                          _memmove((void *)param_1[3],(void *)(uVar12 + (long)param_1[3]),sVar17);
                        }
                        *puVar1 = sVar17;
                      }
                    }
                    if (((uVar16 != 0) && (uVar11 = uVar10 + param_1[4], !CARRY8(uVar10,param_1[4]))
                        ) && (uVar11 <= (ulong)param_1[5])) {
                      param_1[4] = uVar11;
                    }
                    goto LAB_0018d488;
                  }
                  pcVar15 = "unexpected output buffer size";
                  uVar13 = 0xdb;
                }
                break;
              }
            }
            pcVar15 = "corrupted stream header";
            uVar13 = 0xd9;
            break;
          }
          pcVar15 = "truncated stream header";
          uVar13 = 0xd0;
          break;
        case 2:
          param_1[0x29] = puVar2;
          param_1[0x2a] = uVar11;
          param_1[0x27] = pvVar14;
          param_1[0x28] = uVar18;
          iVar5 = _compression_stream_process(param_1 + 0x27,*(int *)((long)param_1 + 0x3c) != 0);
          if (-1 < iVar5) {
            uVar16 = param_1[0x28];
            uVar10 = param_1[0x2a];
            uVar12 = uVar11 - uVar10;
            if (uVar12 != 0) {
              sVar17 = *puVar1 - uVar12;
              if (uVar12 <= *puVar1) {
                if (sVar17 != 0) {
                  _memmove((void *)param_1[3],(void *)(uVar12 + (long)param_1[3]),sVar17);
                }
                *puVar1 = sVar17;
              }
            }
            if (((uVar18 != uVar16) &&
                (uVar12 = (uVar18 - uVar16) + param_1[4], !CARRY8(uVar18 - uVar16,param_1[4]))) &&
               (uVar12 <= (ulong)param_1[5])) {
              param_1[4] = uVar12;
            }
            local_34 = local_34 + 1;
            if (uVar11 != uVar10 || uVar18 != uVar16) {
              local_34 = 0;
            }
            if (iVar5 == 1) goto LAB_0018d478;
            goto LAB_0018d488;
          }
          pcVar15 = "decoding compression payload";
          uVar13 = 0xa2;
          break;
        case 3:
          param_1[0x16] = puVar2;
          param_1[0x17] = uVar11;
          param_1[0x19] = pvVar14;
          param_1[0x1a] = uVar18;
          uVar4 = _lzma_code(param_1 + 0x16,0);
          if ((uVar4 < 0xb) && ((0x403U >> (uVar4 & 0x1f) & 1) != 0)) {
            puVar3 = (ulong *)param_1[0x16];
            pvVar8 = (void *)param_1[0x19];
            uVar11 = (long)puVar3 - (long)puVar2;
            if (uVar11 != 0) {
              sVar17 = *puVar1 - uVar11;
              if (uVar11 <= *puVar1) {
                if (sVar17 != 0) {
                  _memmove((void *)param_1[3],(void *)(uVar11 + (long)param_1[3]),sVar17);
                }
                *puVar1 = sVar17;
              }
            }
            if (((pvVar8 != pvVar14) &&
                (uVar11 = ((long)pvVar8 - (long)pvVar14) + param_1[4],
                !CARRY8((long)pvVar8 - (long)pvVar14,param_1[4]))) && (uVar11 <= (ulong)param_1[5]))
            {
              param_1[4] = uVar11;
            }
            local_34 = local_34 + 1;
            if (puVar3 != puVar2 || pvVar8 != pvVar14) {
              local_34 = 0;
            }
            if (uVar4 == 1) goto LAB_0018d478;
          }
          else {
            _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/AppleArchive/AASequentialDecompressionStream.c"
                          ,"aaDecompressionStreamRead",0xc2,0x14,0,"decoding lzma payload");
          }
          if (10 < uVar4) {
            return 0xffffffffffffffff;
          }
          if ((0x403U >> (uVar4 & 0x1f) & 1) == 0) {
            return 0xffffffffffffffff;
          }
LAB_0018d488:
          if (local_34 < 3) goto LAB_0018d492;
          pcVar15 = "truncated stream";
          uVar13 = 0xf0;
          break;
        case 4:
          param_1[0xc] = puVar2;
          *(int *)(param_1 + 0xd) = (int)uVar11;
          param_1[0xf] = pvVar14;
          *(int *)(param_1 + 0x10) = (int)uVar18;
          iVar5 = _BZ2_bzDecompress((bz_stream *)(param_1 + 0xc));
          if (-1 < iVar5) {
            puVar3 = (ulong *)param_1[0xc];
            pvVar8 = (void *)param_1[0xf];
            uVar11 = (long)puVar3 - (long)puVar2;
            if (uVar11 != 0) {
              sVar17 = *puVar1 - uVar11;
              if (uVar11 <= *puVar1) {
                if (sVar17 != 0) {
                  _memmove((void *)param_1[3],(void *)(uVar11 + (long)param_1[3]),sVar17);
                }
                *puVar1 = sVar17;
              }
            }
            if (((pvVar8 != pvVar14) &&
                (uVar11 = ((long)pvVar8 - (long)pvVar14) + param_1[4],
                !CARRY8((long)pvVar8 - (long)pvVar14,param_1[4]))) && (uVar11 <= (ulong)param_1[5]))
            {
              param_1[4] = uVar11;
            }
            local_34 = local_34 + 1;
            if (puVar3 != puVar2 || pvVar8 != pvVar14) {
              local_34 = 0;
            }
            if (iVar5 == 4) goto LAB_0018d478;
            goto LAB_0018d488;
          }
          pcVar15 = "decoding bzip2 payload";
          uVar13 = 0xb2;
        }
        _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/AppleArchive/AASequentialDecompressionStream.c"
                      ,"aaDecompressionStreamRead",uVar13,0x14,0,pcVar15);
      }
    }
  }
  return 0xffffffffffffffff;
}

