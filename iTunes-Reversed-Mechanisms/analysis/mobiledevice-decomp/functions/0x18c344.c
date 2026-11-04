// rea decompile_all
// name: _aaSequentialDecompressionIStreamOpen
// address: 0x18c344
// body: available
// range: 0x18c344-0x18cc07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18cc03 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _aaSequentialDecompressionIStreamOpen(undefined8 param_1,int param_2)

{
  size_t *psVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  code *pcVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  void *pvVar16;
  ulong uVar17;
  size_t *psVar18;
  size_t sVar19;
  char local_48;
  byte bStack_47;
  char cStack_46;
  byte bStack_45;
  short sStack_44;
  undefined2 uStack_42;
  uint local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_2 == 0) {
    param_2 = _getDefaultNThreads();
  }
  puVar5 = _calloc(1,0x68);
  puVar6 = _malloc(0x160);
  if ((puVar6 == (undefined8 *)0x0) ||
     (_memset_s(puVar6,0x160,0,0x160), puVar5 == (undefined8 *)0x0)) {
    piVar10 = ___error();
    iVar4 = *piVar10;
    pcVar15 = "malloc";
    uVar12 = 0x10a;
  }
  else {
    *puVar6 = param_1;
    *(undefined4 *)(puVar6 + 7) = 0xffffffff;
    psVar1 = puVar6 + 1;
    uVar17 = puVar6[2];
    if (uVar17 < 0x10000) {
      do {
        if (uVar17 == 0) {
          uVar17 = 0x4000;
        }
        else {
          uVar11 = uVar17 >> 1 & uVar17;
          if (uVar11 == 0) {
            uVar17 = uVar17 + (uVar17 >> 1);
          }
          else {
            uVar17 = uVar17 + uVar11;
          }
        }
      } while (uVar17 < 0x10000);
      pvVar16 = (void *)puVar6[3];
      pvVar7 = _realloc(pvVar16,uVar17);
      psVar18 = psVar1;
      if (pvVar7 != (void *)0x0) {
        puVar6[3] = pvVar7;
        puVar6[2] = uVar17;
        goto LAB_0018c426;
      }
LAB_0018c5e0:
      _free(pvVar16);
      *psVar18 = 0;
      psVar18[1] = 0;
      psVar18[2] = 0;
      pcVar15 = "allocating buffer";
      uVar12 = 0x111;
    }
    else {
LAB_0018c426:
      psVar18 = puVar6 + 4;
      uVar17 = puVar6[5];
      if (uVar17 < 0x10000) {
        do {
          if (uVar17 == 0) {
            uVar17 = 0x4000;
          }
          else {
            uVar11 = uVar17 >> 1 & uVar17;
            if (uVar11 == 0) {
              uVar17 = uVar17 + (uVar17 >> 1);
            }
            else {
              uVar17 = uVar17 + uVar11;
            }
          }
        } while (uVar17 < 0x10000);
        pvVar16 = (void *)puVar6[6];
        pvVar7 = _realloc(pvVar16,uVar17);
        if (pvVar7 == (void *)0x0) goto LAB_0018c5e0;
        puVar6[6] = pvVar7;
        puVar6[5] = uVar17;
      }
      lVar8 = _aaDecompressionStreamRefill(puVar6,0xc);
      if (lVar8 < 0) {
        pcVar15 = "reading magic";
        uVar12 = 0x114;
      }
      else {
        uVar17 = puVar6[1];
        local_40 = 0;
        local_48 = '\0';
        bStack_47 = 0;
        cStack_46 = '\0';
        bStack_45 = 0;
        sStack_44 = 0;
        uStack_42 = 0;
        pvVar16 = (void *)puVar6[3];
        ___memcpy_chk(&local_48,pvVar16,uVar17,0xc);
        if (*(int *)(puVar6 + 7) != -1) {
LAB_0018caf0:
          *puVar5 = puVar6;
          puVar5[1] = _aaDecompressionStreamClose;
          puVar5[2] = _aaDecompressionStreamRead;
          puVar5[7] = _aaDecompressionStreamAbort;
          goto LAB_0018c632;
        }
        if ((uVar17 < 0xc) || (cStack_46 != 'z' || CONCAT11(bStack_47,local_48) != 0x6270)) {
LAB_0018c4f0:
          uVar3 = 0;
          if ((CONCAT13(bStack_45,CONCAT12(cStack_46,CONCAT11(bStack_47,local_48))) == 0x31304141)
             || (CONCAT13(bStack_45,CONCAT12(cStack_46,CONCAT11(bStack_47,local_48))) == 0x31414159)
             ) {
LAB_0018caec:
            *(undefined4 *)(puVar6 + 7) = uVar3;
            goto LAB_0018caf0;
          }
          if ((uVar17 < 6) ||
             (sStack_44 != 0x5a ||
              CONCAT13(bStack_45,CONCAT12(cStack_46,CONCAT11(bStack_47,local_48))) != 0x587a37fd)) {
            if (((uVar17 < 4) || (cStack_46 != 'h' || CONCAT11(bStack_47,local_48) != 0x5a42)) ||
               (8 < (byte)(bStack_45 - 0x31))) {
              if (((uVar17 < 10) || (local_48 != '\x1f')) ||
                 ((bStack_47 != 0x8b || (cStack_46 != '\b')))) {
                if ((local_48 != 'x' || uVar17 < 2) ||
                   (0x842 < (ushort)((bStack_47 | 0x7800) * 0x7bdf))) goto LAB_0018caec;
                iVar4 = _compression_stream_init(puVar6 + 0x27,1,0x505);
                if (iVar4 != 0) {
                  pcVar15 = "compression_stream_init";
                  uVar12 = 0x19b;
                  goto LAB_0018c611;
                }
LAB_0018cae7:
                uVar3 = 2;
                goto LAB_0018caec;
              }
              lVar8 = _aaDecompressionStreamRefill(puVar6,0x1000);
              if (lVar8 < 0) {
                pcVar15 = "reading gzip header data";
                uVar12 = 0x16a;
              }
              else {
                uVar17 = puVar6[1];
                pvVar16 = (void *)puVar6[3];
                uVar11 = 10;
                if ((bStack_45 & 4) == 0) {
LAB_0018c6b3:
                  if ((bStack_45 & 8) != 0) {
                    uVar14 = uVar11 + 2;
                    if (uVar17 < uVar14) {
                      pcVar15 = "parsing gzip header";
                      uVar12 = 0x17a;
                      goto LAB_0018c611;
                    }
                    uVar11 = uVar14;
                    if (uVar14 < uVar17) {
                      do {
                        uVar11 = uVar14;
                        if (*(char *)((long)pvVar16 + (uVar14 - 1)) == '\0') break;
                        uVar14 = uVar14 + 1;
                        uVar11 = uVar17;
                      } while (uVar17 != uVar14);
                    }
                  }
                  if ((bStack_45 & 0x10) != 0) {
                    uVar14 = uVar11 + 2;
                    if (uVar17 < uVar14) {
                      pcVar15 = "parsing gzip header";
                      uVar12 = 0x180;
                      goto LAB_0018c611;
                    }
                    uVar11 = uVar14;
                    if (uVar14 < uVar17) {
                      do {
                        uVar11 = uVar14;
                        if (*(char *)((long)pvVar16 + (uVar14 - 1)) == '\0') break;
                        uVar14 = uVar14 + 1;
                        uVar11 = uVar17;
                      } while (uVar17 != uVar14);
                    }
                  }
                  if (((bStack_45 & 2) == 0) || (uVar11 = uVar11 + 2, uVar11 <= uVar17)) {
                    if (uVar11 - 1 < uVar17) {
                      sVar19 = uVar17 - uVar11;
                      if (sVar19 != 0) {
                        _memmove(pvVar16,(void *)(uVar11 + (long)pvVar16),sVar19);
                      }
                      *psVar1 = sVar19;
                    }
                    iVar4 = _compression_stream_init(puVar6 + 0x27,1,0x205);
                    if (iVar4 == 0) goto LAB_0018cae7;
                    pcVar15 = "compression_stream_init";
                    uVar12 = 0x18c;
                  }
                  else {
                    pcVar15 = "parsing gzip header";
                    uVar12 = 0x186;
                  }
                }
                else if (uVar17 < 0xc) {
                  pcVar15 = "parsing gzip header";
                  uVar12 = 0x172;
                }
                else {
                  uVar11 = (ulong)*(ushort *)((long)pvVar16 + 10) + 0xc;
                  if (uVar11 <= uVar17) goto LAB_0018c6b3;
                  pcVar15 = "parsing gzip header";
                  uVar12 = 0x175;
                }
              }
            }
            else {
              iVar4 = _BZ2_bzDecompressInit((bz_stream *)(puVar6 + 0xc),0,0);
              if (iVar4 == 0) {
                uVar3 = 4;
                goto LAB_0018caec;
              }
              pcVar15 = "BZ2_bzDecompressInit";
              uVar12 = 0x15f;
            }
          }
          else {
            iVar4 = _lzma_stream_decoder(puVar6 + 0x16,0xffffffffffffffff,1);
            if (iVar4 == 0) {
              uVar3 = 3;
              goto LAB_0018caec;
            }
            pcVar15 = "lzma_stream_decoder";
            uVar12 = 0x154;
          }
        }
        else {
          if (bStack_45 < 0x65) {
            if (bStack_45 == 0x2d) {
              pcVar9 = _PCompressCopyDecode;
            }
            else if (bStack_45 == 0x34) {
              pcVar9 = _PCompressLZ4Decode;
            }
            else {
              if (bStack_45 != 0x62) goto LAB_0018c4f0;
              pcVar9 = _PCompressLZBITMAPDecode;
            }
          }
          else if (bStack_45 < 0x78) {
            if (bStack_45 == 0x65) {
              pcVar9 = _PCompressLZFSEDecode;
            }
            else {
              if (bStack_45 != 0x66) goto LAB_0018c4f0;
              pcVar9 = _PCompressLZVNDecode;
            }
          }
          else if (bStack_45 == 0x7a) {
            pcVar9 = _PCompressZLIBDecode;
          }
          else {
            if (bStack_45 != 0x78) goto LAB_0018c4f0;
            pcVar9 = _PCompressLZMADecode;
          }
          uVar2 = CONCAT22(uStack_42,sStack_44);
          puVar6[10] = (ulong)(local_40 >> 0x18) | ((ulong)local_40 & 0xff0000) >> 8 |
                       ((ulong)local_40 & 0xff00) << 8 | ((ulong)local_40 & 0xff) << 0x18 |
                       ((ulong)uVar2 & 0xff000000) << 8 | ((ulong)uVar2 & 0xff0000) << 0x18 |
                       ((ulong)uVar2 & 0xff00) << 0x28 | CONCAT44(local_40,uVar2) << 0x38;
          puVar6[0xb] = pcVar9;
          *(undefined4 *)(puVar6 + 7) = 1;
          if (1 < param_2) {
            lVar8 = _IDecoderStreamCreate
                              (_aaDecompressionStreamReadInput,0,puVar6,puVar6[10],param_2);
            puVar6[9] = lVar8;
            if (lVar8 == 0) {
              pcVar15 = "IDecoderStreamCreate";
              uVar12 = 0x13a;
              goto LAB_0018c611;
            }
            goto LAB_0018cb5c;
          }
          if (uVar17 != 0xc) {
            _memmove(pvVar16,(void *)((long)pvVar16 + 0xc),uVar17 - 0xc);
          }
          puVar6[1] = uVar17 - 0xc;
          uVar11 = puVar6[10] + 0x10;
          if (-1 < (long)uVar11) {
            uVar14 = puVar6[2];
            if (uVar14 < uVar11) {
              do {
                while (uVar14 == 0) {
                  uVar14 = 0x4000;
                  if (uVar11 < 0x4001) goto LAB_0018c9bb;
                }
                uVar13 = uVar14 >> 1 & uVar14;
                if (uVar13 == 0) {
                  uVar13 = uVar14 >> 1;
                }
                uVar14 = uVar14 + uVar13;
              } while (uVar14 < uVar11);
              if (uVar14 < 0x2000000001) {
LAB_0018c9bb:
                pvVar16 = (void *)puVar6[3];
                pvVar7 = _realloc(pvVar16,uVar14);
                if (pvVar7 != (void *)0x0) {
                  puVar6[3] = pvVar7;
                  puVar6[2] = uVar14;
                  uVar11 = puVar6[10] + 0x10;
                  if ((long)uVar11 < 0) goto LAB_0018cbe4;
                  goto LAB_0018c9e9;
                }
                _free(pvVar16);
              }
              else {
                piVar10 = ___error();
                *piVar10 = 0xc;
              }
              *psVar1 = 0;
              puVar6[2] = 0;
              puVar6[3] = 0;
            }
            else {
LAB_0018c9e9:
              uVar14 = puVar6[5];
              if (uVar11 <= uVar14) {
LAB_0018cb5c:
                if (*(int *)(puVar6 + 7) != -1) goto LAB_0018caf0;
                goto LAB_0018c4f0;
              }
              do {
                while (uVar14 == 0) {
                  uVar14 = 0x4000;
                  if (uVar11 < 0x4001) goto LAB_0018cb3c;
                }
                uVar13 = uVar14 >> 1 & uVar14;
                if (uVar13 == 0) {
                  uVar13 = uVar14 >> 1;
                }
                uVar14 = uVar14 + uVar13;
              } while (uVar14 < uVar11);
              if (uVar14 < 0x2000000001) {
LAB_0018cb3c:
                pvVar16 = (void *)puVar6[6];
                pvVar7 = _realloc(pvVar16,uVar14);
                if (pvVar7 != (void *)0x0) {
                  puVar6[6] = pvVar7;
                  puVar6[5] = uVar14;
                  goto LAB_0018cb5c;
                }
                _free(pvVar16);
              }
              else {
                piVar10 = ___error();
                *piVar10 = 0xc;
              }
              puVar6[6] = 0;
              *psVar18 = 0;
              puVar6[5] = 0;
            }
          }
LAB_0018cbe4:
          pcVar15 = "allocating buffers";
          uVar12 = 0x142;
        }
      }
    }
LAB_0018c611:
    iVar4 = 0;
  }
  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/AppleArchive/AASequentialDecompressionStream.c"
                ,"aaSequentialDecompressionIStreamOpen",uVar12,0x14,iVar4,pcVar15);
  _free(puVar5);
  _aaDecompressionStreamClose(puVar6);
  puVar5 = (undefined8 *)0x0;
LAB_0018c632:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar5;
}

