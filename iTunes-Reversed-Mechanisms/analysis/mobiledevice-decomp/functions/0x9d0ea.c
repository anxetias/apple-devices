// rea decompile_all
// name: _ZipStreamWriteLocalFile
// address: 0x9d0ea
// body: available
// range: 0x9d0ea-0x9f968 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9f3d6 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x9f461 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x9f7be to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x9f885 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x9f8ec to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ZipStreamWriteLocalFile
                (undefined8 param_1,long *param_2,long *param_3,Bytef *param_4,int param_5,
                ushort param_6,ushort param_7,long param_8,long param_9)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  Bytef *pBVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  void *pvVar16;
  ulong uVar17;
  int *piVar18;
  char *pcVar19;
  ulong uVar20;
  cfstringStruct *pcVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  byte bVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  Bytef *pBVar33;
  undefined8 in_stack_fffffffffffffe98;
  ulong local_120;
  uLong local_e0;
  Bytef *local_d0;
  int local_bc;
  undefined8 *local_a0;
  long local_98;
  uint local_8c;
  ulong local_88;
  ulong local_80;
  uint local_74;
  long local_70;
  void *local_68;
  void *local_60;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pBVar11 = _malloc(0x20000);
  lVar12 = _CopyMutableLocalFileRecord(*param_3);
  local_98 = _CopyMutableCDRecord();
  uVar32 = *(ulong *)(lVar12 + 0x28);
  local_88 = *(ulong *)(lVar12 + 0x30);
  uVar9 = (uint)*(ushort *)(lVar12 + 4);
  iVar5 = *(int *)(lVar12 + 0x20);
  local_e0 = _crc32(0,(Bytef *)0x0,0);
  lVar13 = (**(code **)(*(long *)(param_9 + 8) + 0x48))
                     (*(undefined8 *)(*(long *)(param_9 + 8) + 0x50));
  if (lVar13 < 0) {
    piVar18 = ___error();
    iVar5 = *piVar18;
    bVar26 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar10 == 0) {
        bVar26 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar4 = _SZGetLoggingHandle_logHandle;
        pcVar19 = _strerror(iVar5);
        __os_log_internal(0,puVar4,0x10,"Failed to get offset before writing LF record: %s",pcVar19)
        ;
      }
    }
    if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
      pcVar19 = _strerror(iVar5);
      pvVar16 = (void *)0x0;
      __SZLog(3,"ZipStreamWriteLocalFile",0x115,&cf_FailedtogetoffsetbeforewritingLFrecord__s,
              pcVar19);
      uVar32 = 0;
      pvVar14 = (void *)0x0;
      goto LAB_0009ebb7;
    }
  }
  else {
    if (param_5 == 0) {
      if (((uVar9 == 8) || (uVar9 == 99)) || (uVar9 == 0xe)) {
        param_5 = 3;
        if (*(int *)(param_9 + 0x20) != 2) {
          lVar15 = uVar32 - local_88;
          param_5 = 1;
          if (((local_88 <= uVar32 && lVar15 != 0) & *(byte *)(param_9 + 0x2d)) == 1) {
            bVar26 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar10 == 0) {
                bVar26 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                  "%s is %llu bytes larger compressed than uncompressed; converting."
                                  ,*(undefined8 *)(local_98 + 0x48),uVar32 - local_88);
              }
            }
            if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
              lVar15 = uVar32 - local_88;
              __SZLog(7,"ZipStreamWriteLocalFile",0x11e,
                      &cf__sis_llubyteslargercompressedthanuncompressed_converting_,
                      *(undefined8 *)(local_98 + 0x48),lVar15);
            }
            *(long *)(param_8 + 0x28) = lVar15 + *(long *)(param_8 + 0x28);
            *(long *)(param_8 + 0x30) = *(long *)(param_8 + 0x30) + 1;
            param_5 = 2;
          }
        }
      }
      else {
        pcVar19 = *(char **)(local_98 + 0x48);
        iVar10 = _strcmp(pcVar19,"mimetype");
        if (iVar10 == 0) {
          param_5 = 2;
        }
        else {
          iVar10 = _strcmp(pcVar19,_kZipFixedMetadataFilePath);
          param_5 = 3 - (uint)(iVar10 == 0);
        }
      }
    }
    if (local_88 == 0) {
      param_5 = 2;
    }
    iVar10 = 4;
    if (param_5 == 2) {
      iVar10 = 2;
    }
    if (*(int *)(param_9 + 0x20) != 3) {
      iVar10 = param_5;
    }
    if (*(int *)(param_9 + 0x20) == 0) {
      iVar10 = 2;
    }
    uVar29 = iVar10 - 3;
    if (uVar29 < 2) {
      *(undefined2 *)(lVar12 + 4) = *(undefined2 *)(param_9 + 0x24);
      uVar20 = local_88;
    }
    else {
      uVar20 = uVar32;
      if (iVar10 != 1) {
        if (iVar10 != 2) {
                    /* WARNING: Subroutine does not return */
          ___assert_rtn("ZipStreamWriteLocalFile","ZipStream.c",0x14d,"false");
        }
        *(undefined2 *)(lVar12 + 4) = 0;
        *(ulong *)(lVar12 + 0x28) = local_88;
        uVar20 = local_88;
      }
    }
    uVar1 = *(ushort *)(local_98 + 0x18);
    if (*(char *)(local_98 + 0x1a) == '\x01') {
      if (uVar1 == param_7) goto LAB_0009d2cd;
LAB_0009d2da:
      *(ushort *)(lVar12 + 0x1c) = uVar1;
      uVar22 = 1;
    }
    else {
      if (uVar1 != param_6) goto LAB_0009d2da;
LAB_0009d2cd:
      uVar22 = 0;
    }
    if ((uVar20 == 0) || ((iVar5 != 0 && (1 < uVar29)))) {
      *(byte *)(lVar12 + 2) = *(byte *)(lVar12 + 2) & 0xf7;
      *(byte *)(local_98 + 4) = *(byte *)(local_98 + 4) & 0xf7;
      local_bc = 0;
    }
    else if (*(char *)(param_9 + 0x2f) == '\x01') {
      *(ushort *)(lVar12 + 2) = *(ushort *)(lVar12 + 2) | 8;
      *(byte *)(local_98 + 4) = *(byte *)(local_98 + 4) | 8;
      local_bc = 1;
    }
    else {
      *(ushort *)(lVar12 + 2) = *(ushort *)(lVar12 + 2) & 0xfff7;
      *(byte *)(local_98 + 4) = *(byte *)(local_98 + 4) & 0xf7;
      local_bc = 2;
    }
    lVar15 = *(long *)(param_9 + 8);
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))
                (0,*(undefined8 *)(lVar12 + 0x38),0,uVar20,*(undefined8 *)(lVar15 + 0x20));
      lVar15 = *(long *)(param_9 + 8);
    }
    pvVar14 = (void *)_CreateLocalFileRecordFromMutable(lVar12);
    lVar27 = (ulong)*(ushort *)((long)pvVar14 + 0x1a) + (ulong)*(ushort *)((long)pvVar14 + 0x1c) +
             0x1e;
    lVar15 = (**(code **)(lVar15 + 0x30))(*(undefined8 *)(lVar15 + 0x50),pvVar14,lVar27);
    pvVar16 = (void *)0x0;
    if (lVar15 != lVar27) {
      pvVar16 = pvVar14;
    }
    _free(pvVar16);
    if (lVar15 == lVar27 && pvVar14 != (void *)0x0) {
      uVar1 = *(ushort *)((long)pvVar14 + 0x1a);
      uVar2 = *(ushort *)((long)pvVar14 + 0x1c);
      local_60 = pvVar14;
      if (uVar20 == 0) {
        uVar31 = 0;
        pvVar16 = (void *)0x0;
        local_a0 = (undefined8 *)0x0;
        local_58 = lVar12;
        goto LAB_0009d5b8;
      }
      local_8c = 0;
      if (param_4 == (Bytef *)0x0) {
        local_70 = _OpenLocalFile(param_1,*param_2,*param_3,iVar10 == 1,&local_8c);
        if (local_8c == 0) goto LAB_0009d454;
        bVar26 = _gSZLogToSyslog ^ 1;
        pvVar14 = local_60;
        if (_gSZLogToSyslog == 1) {
          iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          pvVar14 = local_60;
          if (iVar5 == 0) {
            bVar26 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to open local file %s",
                              *(undefined8 *)(local_98 + 0x48));
          }
        }
        if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
          pvVar16 = (void *)0x0;
          __SZLog(3,"ZipStreamWriteLocalFile",0x183,&cf_Failedtoopenlocalfile_s,
                  *(undefined8 *)(local_98 + 0x48));
          local_a0 = (undefined8 *)0x0;
          goto LAB_0009e4d6;
        }
        local_a0 = (undefined8 *)0x0;
LAB_0009e4e9:
        pvVar16 = (void *)0x0;
        uVar32 = 0;
      }
      else {
        local_70 = 0;
LAB_0009d454:
        if (uVar29 < 2) {
          local_a0 = _calloc(1,0x28);
          iVar6 = *(int *)(param_9 + 0x24);
          if (iVar6 == 8) {
            uVar23 = 0x205;
          }
          else if (iVar6 == 0xe) {
            uVar23 = 0x306;
          }
          else if (iVar6 == 99) {
            uVar23 = 0x801;
          }
          else {
            uVar23 = 0;
          }
          iVar6 = _compression_stream_init(local_a0,0,uVar23);
          if (iVar6 != 0) {
            bVar26 = _gSZLogToSyslog ^ 1;
            pvVar14 = local_60;
            if (_gSZLogToSyslog == 1) {
              iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              pvVar14 = local_60;
              if (iVar5 == 0) {
                bVar26 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                  "Failed to initialize compression stream: %d",iVar6);
              }
            }
            if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
              pvVar16 = (void *)0x0;
              __SZLog(3,"ZipStreamWriteLocalFile",399,&cf_Failedtoinitializecompressionstream__d,
                      iVar6);
              goto LAB_0009e4d6;
            }
            goto LAB_0009e4e9;
          }
          local_58 = lVar12;
          local_68 = _malloc(0x20000);
        }
        else {
          local_68 = (void *)0x0;
          local_a0 = (undefined8 *)0x0;
          local_58 = lVar12;
        }
        local_d0 = param_4;
        if (param_4 == (Bytef *)0x0) {
          local_d0 = pBVar11;
        }
        local_80 = 0;
        uVar31 = 0;
        uVar7 = 0;
        do {
          local_50 = 0;
          uStack_4c = 0;
          if (param_4 == (Bytef *)0x0) {
            uVar7 = _ReadLocalFileData(local_70,local_d0,0x20000,&local_50);
            if ((uVar7 & 5) != 0) {
              bVar26 = _gSZLogToSyslog ^ 1;
              lVar12 = local_58;
              pvVar14 = local_60;
              local_8c = uVar7;
              if (_gSZLogToSyslog == 1) {
                local_74 = uVar7;
                iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                lVar12 = local_58;
                pvVar14 = local_60;
                if (iVar5 == 0) {
                  bVar26 = 1;
                  uVar7 = local_74;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  uVar7 = local_74;
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                    "ReadLocalFileData returned %d",local_74);
                }
              }
              if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
                __SZLog(3,"ZipStreamWriteLocalFile",0x1af,&cf_ReadLocalFileDatareturned_d,uVar7);
              }
              goto LAB_0009e488;
            }
            uVar28 = CONCAT44(uStack_4c,local_50);
            local_120 = 0;
          }
          else {
            uVar28 = uVar20 - local_80;
            if (0x1ffff < uVar28) {
              uVar28 = 0x20000;
            }
            local_120 = uVar28;
            if (uVar20 <= uVar28 + local_80) {
              uVar7 = 2;
            }
          }
          local_74 = uVar7;
          uVar24 = uVar28;
          pBVar33 = local_d0;
          if (iVar5 == 0) {
            for (; uVar24 != 0; uVar24 = uVar24 - uVar17) {
              uVar17 = 0x7fffffff;
              if (uVar24 < 0x7fffffff) {
                uVar17 = uVar24;
              }
              local_e0 = _crc32(local_e0,pBVar33,(uInt)uVar17);
              pBVar33 = pBVar33 + uVar17;
            }
          }
          pvVar16 = local_68;
          if (uVar28 != 0) {
            local_80 = local_80 + uVar28;
            lVar12 = *(long *)(param_9 + 8);
            uVar24 = uVar28;
            pBVar33 = local_d0;
            if (local_a0 != (undefined8 *)0x0) {
              do {
                uVar17 = 0x7fffffffffffffff;
                if (uVar24 < 0x7fffffffffffffff) {
                  uVar17 = uVar24;
                }
                local_a0[2] = pBVar33;
                local_a0[3] = uVar17;
                do {
                  *local_a0 = pvVar16;
                  local_a0[1] = 0x20000;
                  bVar26 = _gSZLogToSyslog ^ 1;
                  if (_gSZLogToSyslog == 1) {
                    iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                    if (iVar6 == 0) {
                      bVar26 = 1;
                    }
                    else {
                      if (_SZGetLoggingHandle_onceToken != -1) {
                        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                      }
                      in_stack_fffffffffffffe98 = *local_a0;
                      __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                        "Calling compression_stream_process with src_ptr: %p, src_size: %zu, dst_ptr: %p, dst_size: %zu"
                                        ,local_a0[2],local_a0[3],in_stack_fffffffffffffe98,
                                        local_a0[1]);
                    }
                  }
                  if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
                    in_stack_fffffffffffffe98 = *local_a0;
                    __SZLog(7,"_WriteLocalFileData",0x56,
                            &
                            cf_Callingcompression_stream_processwithsrc_ptr__p_src_size__zu_dst_ptr__p_dst_size__zu
                            ,local_a0[2],local_a0[3],in_stack_fffffffffffffe98,local_a0[1]);
                  }
                  iVar6 = _compression_stream_process(local_a0,0);
                  bVar26 = _gSZLogToSyslog ^ 1;
                  if (iVar6 != 0) {
                    local_8c = local_74;
                    lVar12 = local_58;
                    pvVar14 = local_60;
                    if (_gSZLogToSyslog != 0) {
                      iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                      lVar12 = local_58;
                      pvVar14 = local_60;
                      if (iVar5 == 0) {
                        bVar26 = 1;
                      }
                      else {
                        if (_SZGetLoggingHandle_onceToken != -1) {
                          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                        }
                        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                          "compression_stream_process returned error %d",iVar6);
                      }
                    }
                    if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
                      __SZLog(3,"_WriteLocalFileData",0x5a,
                              &cf_compression_stream_processreturnederror_d,iVar6);
                    }
                    goto LAB_0009e3f2;
                  }
                  if (_gSZLogToSyslog != 0) {
                    iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                    if (iVar6 == 0) {
                      bVar26 = 1;
                    }
                    else {
                      if (_SZGetLoggingHandle_onceToken != -1) {
                        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                      }
                      in_stack_fffffffffffffe98 = local_a0[3];
                      __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                        "After process ret %d: src_ptr: %p, src_size: %zu, dst_ptr: %p, dst_size: %zu"
                                        ,0,local_a0[2],in_stack_fffffffffffffe98,*local_a0,
                                        local_a0[1]);
                    }
                  }
                  if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
                    in_stack_fffffffffffffe98 = local_a0[3];
                    __SZLog(7,"_WriteLocalFileData",0x5e,
                            &cf_Afterprocessret_d_src_ptr__p_src_size__zu_dst_ptr__p_dst_size__zu,0,
                            local_a0[2],in_stack_fffffffffffffe98,*local_a0,local_a0[1]);
                  }
                  pvVar16 = local_68;
                  lVar15 = local_a0[1] + -0x20000;
                  if (lVar15 == 0) break;
                  lVar27 = (**(code **)(lVar12 + 0x30))
                                     (*(undefined8 *)(lVar12 + 0x50),local_68,-lVar15);
                  if (-lVar27 != lVar15) {
                    local_8c = local_74;
                    piVar18 = ___error();
                    iVar5 = *piVar18;
                    bVar26 = _gSZLogToSyslog ^ 1;
                    lVar12 = local_58;
                    if (_gSZLogToSyslog == 1) {
                      iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                      lVar12 = local_58;
                      if (iVar10 == 0) {
                        bVar26 = 1;
                      }
                      else {
                        if (_SZGetLoggingHandle_onceToken != -1) {
                          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                        }
                        puVar4 = _SZGetLoggingHandle_logHandle;
                        pcVar19 = _strerror(iVar5);
                        __os_log_internal(0,puVar4,0x10,
                                          "fwrite failed to write out entire compressed buffer: %s",
                                          pcVar19);
                      }
                    }
                    pvVar14 = local_60;
                    if ((bVar26 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009e3f2;
                    pcVar19 = _strerror(iVar5);
                    pcVar21 = &cf_fwritefailedtowriteoutentirecompressedbuffer__s;
                    uVar23 = 0x65;
                    goto LAB_0009e0db;
                  }
                  uVar31 = uVar31 + -lVar15;
                } while (local_a0[1] == 0);
                uVar24 = uVar24 - uVar17;
                pBVar33 = pBVar33 + uVar17;
              } while (uVar24 != 0);
              goto LAB_0009deb1;
            }
            uVar24 = (**(code **)(lVar12 + 0x30))(*(undefined8 *)(lVar12 + 0x50),local_d0);
            if (uVar24 == uVar28) {
              uVar31 = uVar31 + uVar28;
              goto LAB_0009deb1;
            }
            local_8c = local_74;
            piVar18 = ___error();
            iVar5 = *piVar18;
            bVar26 = _gSZLogToSyslog ^ 1;
            lVar12 = local_58;
            if (_gSZLogToSyslog == 1) {
              iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              lVar12 = local_58;
              if (iVar10 == 0) {
                bVar26 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                puVar4 = _SZGetLoggingHandle_logHandle;
                pcVar19 = _strerror(iVar5);
                __os_log_internal(0,puVar4,0x10,"fwrite failed to write out entire buffer: %s",
                                  pcVar19);
              }
            }
            pvVar14 = local_60;
            if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
              pcVar19 = _strerror(iVar5);
              pcVar21 = &cf_fwritefailedtowriteoutentirebuffer__s;
              uVar23 = 0x3f;
LAB_0009e0db:
              __SZLog(3,"_WriteLocalFileData",uVar23,pcVar21,pcVar19);
            }
LAB_0009e3f2:
            bVar26 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar5 == 0) {
                bVar26 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                  "Failed to write %ld bytes of local file data to output file",
                                  uVar28);
              }
            }
            if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
              pcVar21 = &cf_Failedtowrite_ldbytesoflocalfiledatatooutputfile;
              uVar23 = 0x1c9;
LAB_0009e481:
              __SZLog(3,"ZipStreamWriteLocalFile",uVar23,pcVar21,uVar28);
            }
            goto LAB_0009e488;
          }
LAB_0009deb1:
          pcVar3 = *(code **)(*(long *)(param_9 + 8) + 0x18);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(1,*(undefined8 *)(local_58 + 0x38),local_80);
          }
          uVar8 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
          pvVar14 = local_60;
          lVar12 = local_58;
          if (local_74 == 2) {
            local_8c = 2;
            uVar28 = uVar20 - local_80;
            if (uVar28 == 0) {
              if (local_a0 != (undefined8 *)0x0) goto LAB_0009e61d;
              goto LAB_0009ecbb;
            }
            bVar26 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              lVar12 = local_58;
              pvVar14 = local_60;
              if (iVar5 == 0) {
                bVar26 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                  "Breaking read/write loop with %llu bytes remaining",uVar28);
              }
            }
            if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
              pcVar21 = &cf_Breakingread_writeloopwith_llubytesremaining;
              uVar23 = 0x1d6;
              goto LAB_0009e481;
            }
            goto LAB_0009e488;
          }
          local_d0 = local_d0 + local_120;
          uVar7 = local_74;
        } while (local_80 < uVar20);
        local_8c = local_74;
        bVar26 = _gSZLogToSyslog ^ 1;
        uVar9 = local_74;
        if (_gSZLogToSyslog == 1) {
          iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          lVar12 = local_58;
          pvVar14 = local_60;
          if (iVar5 == 0) {
            bVar26 = 1;
            uVar9 = local_74;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            uVar9 = local_74;
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Consumed all data to copy without getting end of data signal; got status: %d"
                              ,local_74);
          }
        }
        uVar32 = 0;
        pvVar16 = local_68;
        if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
          pcVar21 = &cf_Consumedalldatatocopywithoutgettingendofdatasignal_gotstatus__d;
          uVar23 = 0x1de;
          goto LAB_0009ef1b;
        }
      }
      goto LAB_0009eb86;
    }
    bVar26 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar5 == 0) {
        bVar26 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "Failed to write local file record for file %s to output file",
                          *(undefined8 *)(local_98 + 0x48));
      }
    }
    if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
      pvVar16 = (void *)0x0;
      __SZLog(3,"ZipStreamWriteLocalFile",0x177,
              &cf_Failedtowritelocalfilerecordforfile_stooutputfile,*(undefined8 *)(local_98 + 0x48)
             );
      pvVar14 = (void *)0x0;
      uVar32 = 0;
      goto LAB_0009ebb7;
    }
  }
  uVar32 = 0;
  pvVar14 = (void *)0x0;
  pvVar16 = (void *)0x0;
  goto LAB_0009ebb7;
LAB_0009e61d:
  do {
    *local_a0 = pvVar16;
    local_a0[1] = 0x20000;
    bVar26 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar6 == 0) {
        bVar26 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        in_stack_fffffffffffffe98 = *local_a0;
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                          "Calling compression_stream_process with src_ptr: %p, src_size: %zu, dst_ptr: %p, dst_size: %zu"
                          ,local_a0[2],local_a0[3],in_stack_fffffffffffffe98,local_a0[1]);
      }
    }
    if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
      in_stack_fffffffffffffe98 = *local_a0;
      __SZLog(7,"ZipStreamWriteLocalFile",0x1ea,
              &
              cf_Callingcompression_stream_processwithsrc_ptr__p_src_size__zu_dst_ptr__p_dst_size__zu
              ,local_a0[2],local_a0[3],in_stack_fffffffffffffe98,local_a0[1]);
    }
    uVar8 = _compression_stream_process(local_a0,1);
    local_80 = CONCAT44(local_80._4_4_,uVar8);
    bVar26 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar6 == 0) {
        bVar26 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        in_stack_fffffffffffffe98 = local_a0[3];
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                          "After process ret %d: src_ptr: %p, src_size: %zu, dst_ptr: %p, dst_size: %zu"
                          ,local_80 & 0xffffffff,local_a0[2],in_stack_fffffffffffffe98,*local_a0,
                          local_a0[1]);
      }
    }
    if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
      in_stack_fffffffffffffe98 = local_a0[3];
      __SZLog(7,"ZipStreamWriteLocalFile",0x1ee,
              &cf_Afterprocessret_d_src_ptr__p_src_size__zu_dst_ptr__p_dst_size__zu,
              local_80 & 0xffffffff,local_a0[2],in_stack_fffffffffffffe98,*local_a0,local_a0[1]);
    }
    if ((ulong)local_a0[1] < 0x20000) {
      lVar15 = 0x20000 - local_a0[1];
      piVar18 = ___error();
      *piVar18 = 0;
      lVar12 = (**(code **)(*(long *)(param_9 + 8) + 0x30))
                         (*(undefined8 *)(*(long *)(param_9 + 8) + 0x50),local_68,lVar15);
      if (lVar15 != lVar12) {
        piVar18 = ___error();
        iVar5 = *piVar18;
        bVar26 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar10 == 0) {
            bVar26 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar4 = _SZGetLoggingHandle_logHandle;
            pcVar19 = _strerror(iVar5);
            __os_log_internal(0,puVar4,0x10,"Failed to write final compressed data: %s",pcVar19);
          }
        }
        lVar12 = local_58;
        pvVar16 = local_68;
        if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
          pcVar19 = _strerror(iVar5);
          __SZLog(3,"ZipStreamWriteLocalFile",0x1f6,&cf_Failedtowritefinalcompresseddata__s,pcVar19)
          ;
        }
        goto LAB_0009ea0e;
      }
      uVar31 = uVar31 + lVar15;
    }
    uVar8 = (undefined4)((ulong)in_stack_fffffffffffffe98 >> 0x20);
    pvVar16 = local_68;
  } while ((uint)local_80 == 0);
  if ((uint)local_80 == 1) {
LAB_0009ecbb:
    if ((local_70 == 0) || (iVar6 = _CloseLocalFile(), iVar6 == 0)) {
      if ((iVar10 != 4 && local_a0 != (undefined8 *)0x0) && (*(char *)(param_9 + 0x2f) == '\0')) {
        if ((((uVar9 == 8) || (uVar9 == 99)) || (uVar9 == 0xe)) &&
           ((lVar12 = uVar31 - uVar32, uVar32 < local_88 && (uVar32 <= uVar31 && lVar12 != 0) &&
            (*(uint *)(param_9 + 0x24) == uVar9)))) {
          bVar26 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar5 == 0) {
              bVar26 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                "%s is %llu bytes larger when we compressed it. Using original compressed data."
                                ,*(undefined8 *)(local_98 + 0x48),lVar12);
            }
          }
          uVar23 = 1;
          if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
            uVar30 = *(undefined8 *)(local_98 + 0x48);
            pcVar21 = &cf__sis_llubyteslargerwhenwecompressedit_Usingoriginalcompresseddata_;
            uVar25 = 0x232;
LAB_0009f61b:
            __SZLog(7,"ZipStreamWriteLocalFile",uVar25,pcVar21,uVar30,lVar12);
          }
        }
        else {
          lVar12 = uVar31 - local_88;
          if (uVar31 < local_88) goto LAB_0009d5b8;
          if (((uVar9 == 8) || (uVar9 == 99)) || (uVar9 == 0xe)) {
            bVar26 = _gSZLogToSyslog ^ 1;
            if (*(uint *)(param_9 + 0x24) == uVar9) {
              if (_gSZLogToSyslog != 0) {
                iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar5 == 0) {
                  bVar26 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                    "%s is %llu bytes larger compressed than uncompressed; converting."
                                    ,*(undefined8 *)(local_98 + 0x48),uVar31 - local_88);
                }
              }
              if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
                lVar12 = uVar31 - local_88;
                __SZLog(7,"ZipStreamWriteLocalFile",0x23f,
                        &cf__sis_llubyteslargercompressedthanuncompressed_converting_,
                        *(undefined8 *)(local_98 + 0x48),lVar12);
              }
              *(long *)(param_8 + 0x28) = lVar12 + *(long *)(param_8 + 0x28);
              *(long *)(param_8 + 0x30) = *(long *)(param_8 + 0x30) + 1;
            }
            else {
              if (_gSZLogToSyslog != 0) {
                iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar5 == 0) {
                  bVar26 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  lVar15 = lVar12;
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                    "%s is %llu bytes larger with the new compression method and is %llu bytes larger than uncompressed; storing uncompressed."
                                    ,*(undefined8 *)(local_98 + 0x48),uVar31 - uVar32,lVar12);
                  uVar8 = (undefined4)((ulong)lVar15 >> 0x20);
                }
              }
              if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
                __SZLog(7,"ZipStreamWriteLocalFile",0x23a,
                        &
                        cf__sis_llubyteslargerwiththenewcompressionmethodandis_llubyteslargerthanuncompressed_storinguncompressed_
                        ,*(undefined8 *)(local_98 + 0x48),uVar31 - uVar32,lVar12);
                uVar8 = (undefined4)((ulong)lVar12 >> 0x20);
              }
              *(long *)(param_8 + 0x38) = *(long *)(param_8 + 0x38) + 1;
            }
            uVar23 = 2;
          }
          else {
            bVar26 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar5 == 0) {
                bVar26 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                                  "%s was not compressed before, and was %llu bytes larger when compressed. Storing uncompressed."
                                  ,*(undefined8 *)(local_98 + 0x48),lVar12);
              }
            }
            uVar23 = 2;
            if ((bVar26 != 0) && (6 < _gSZDefaultLogLevel)) {
              uVar30 = *(undefined8 *)(local_98 + 0x48);
              pcVar21 = &
                        cf__swasnotcompressedbefore_andwas_llubyteslargerwhencompressed_Storinguncompressed_
              ;
              uVar25 = 0x245;
              goto LAB_0009f61b;
            }
          }
        }
        lVar12 = (**(code **)(*(long *)(param_9 + 8) + 0x40))
                           (*(undefined8 *)(*(long *)(param_9 + 8) + 0x50),lVar13,0);
        if (lVar13 == lVar12) {
          uVar9 = _ZipStreamWriteLocalFile
                            (param_1,param_2,param_3,param_4,uVar23,param_6,
                             CONCAT44(uVar8,(uint)param_7),param_8,param_9);
          uVar32 = (ulong)uVar9;
          local_70 = 0;
          pvVar16 = local_68;
          lVar12 = local_58;
          pvVar14 = local_60;
        }
        else {
          piVar18 = ___error();
          iVar5 = *piVar18;
          bVar26 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar10 == 0) {
              bVar26 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar4 = _SZGetLoggingHandle_logHandle;
              pcVar19 = _strerror(iVar5);
              __os_log_internal(0,puVar4,0x10,
                                "Failed to seek back to start of local file header: %s",pcVar19);
            }
          }
          local_70 = 0;
          uVar32 = 0;
          pvVar16 = local_68;
          lVar12 = local_58;
          pvVar14 = local_60;
          if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
            pcVar19 = _strerror(iVar5);
            local_70 = 0;
            __SZLog(3,"ZipStreamWriteLocalFile",0x24f,
                    &cf_Failedtoseekbacktostartoflocalfileheader__s,pcVar19);
            uVar32 = 0;
            pvVar16 = local_68;
            lVar12 = local_58;
            pvVar14 = local_60;
          }
        }
        goto LAB_0009eb86;
      }
LAB_0009d5b8:
      *(long *)(local_98 + 0x40) = lVar13;
      if (uVar29 < 2) {
        if (local_a0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          ___assert_rtn("ZipStreamWriteLocalFile","ZipStream.c",0x269,"cmpStreamPtr");
        }
        *(undefined2 *)(local_98 + 6) = *(undefined2 *)(local_58 + 4);
        *(ulong *)(local_98 + 0x20) = uVar31;
LAB_0009d759:
        if (iVar5 == 0) {
          *(int *)(local_98 + 0x1c) = (int)local_e0;
        }
      }
      else if (iVar10 != 1) {
        if (iVar10 != 2) {
                    /* WARNING: Subroutine does not return */
          ___assert_rtn("ZipStreamWriteLocalFile","ZipStream.c",0x273,"false");
        }
        *(undefined2 *)(local_98 + 6) = 0;
        *(undefined8 *)(local_98 + 0x20) = *(undefined8 *)(local_98 + 0x28);
        goto LAB_0009d759;
      }
      pvVar14 = local_60;
      if (local_bc == 0) {
LAB_0009d861:
        lVar12 = local_58;
        _ZipStreamAddStatisticsForCDRecord(local_98,uVar22,param_8);
        pcVar3 = *(code **)(*(long *)(param_9 + 8) + 0x18);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(2,*(undefined8 *)(lVar12 + 0x38),*(undefined8 *)(local_98 + 0x28),uVar20,
                    *(undefined8 *)(*(long *)(param_9 + 8) + 0x20));
        }
        _DestroyMutableCDRecord(*param_2);
        *param_2 = local_98;
        _DestroyMutableLocalFileRecord(*param_3);
        *param_3 = lVar12;
        local_70 = 0;
        local_98 = 0;
        lVar12 = 0;
        uVar32 = CONCAT71((int7)((ulong)param_3 >> 8),1);
      }
      else if (local_bc == 1) {
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        lVar12 = _GetExtraFieldWithSignatureFromLocalFileRecord
                           (local_60,&_kZip64ExtraFieldSignature,0x10);
        local_50 = *(undefined4 *)(local_98 + 0x1c);
        uStack_4c = (undefined4)*(undefined8 *)(local_98 + 0x20);
        if (lVar12 == 0) {
          uStack_48 = *(undefined4 *)(local_98 + 0x28);
          lVar12 = 0xc;
        }
        else {
          uStack_48 = (undefined4)((ulong)*(undefined8 *)(local_98 + 0x20) >> 0x20);
          uStack_44 = *(undefined8 *)(local_98 + 0x28);
          lVar12 = 0x14;
        }
        piVar18 = ___error();
        *piVar18 = 0;
        lVar13 = (**(code **)(*(long *)(param_9 + 8) + 0x30))
                           (*(undefined8 *)(*(long *)(param_9 + 8) + 0x50),
                            &_kDataDescriptorSignature,4);
        piVar18 = ___error();
        if (lVar13 == 4) {
          *piVar18 = 0;
          lVar13 = (**(code **)(*(long *)(param_9 + 8) + 0x30))
                             (*(undefined8 *)(*(long *)(param_9 + 8) + 0x50),&local_50,lVar12);
          pvVar14 = local_60;
          if (lVar12 == lVar13) goto LAB_0009d861;
          piVar18 = ___error();
          lVar12 = local_58;
          pvVar14 = local_60;
          iVar5 = *piVar18;
          bVar26 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar10 == 0) {
              bVar26 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar4 = _SZGetLoggingHandle_logHandle;
              pcVar19 = _strerror(iVar5);
              __os_log_internal(0,puVar4,0x10,"Failed to write data descriptor: %s",pcVar19);
              pvVar14 = local_60;
            }
          }
          if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
            pcVar19 = _strerror(iVar5);
            pcVar21 = &cf_Failedtowritedatadescriptor__s;
            uVar23 = 0x2cc;
            goto LAB_0009eb6e;
          }
        }
        else {
          iVar5 = *piVar18;
          bVar26 = _gSZLogToSyslog ^ 1;
          lVar12 = local_58;
          if (_gSZLogToSyslog == 1) {
            iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            lVar12 = local_58;
            if (iVar10 == 0) {
              bVar26 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar4 = _SZGetLoggingHandle_logHandle;
              pcVar19 = _strerror(iVar5);
              __os_log_internal(0,puVar4,0x10,"Failed to write data descriptor signature: %s",
                                pcVar19);
            }
          }
          pvVar14 = local_60;
          if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
            pcVar19 = _strerror(iVar5);
            pcVar21 = &cf_Failedtowritedatadescriptorsignature__s;
            uVar23 = 0x2c4;
LAB_0009eb6e:
            __SZLog(3,"ZipStreamWriteLocalFile",uVar23,pcVar21,pcVar19);
          }
        }
LAB_0009eb83:
        local_70 = 0;
        uVar32 = 0;
      }
      else {
        local_88 = (ulong)uVar1 + (ulong)uVar2 + 0x1e;
        if ((*(byte *)(local_58 + 2) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
          ___assert_rtn("ZipStreamWriteLocalFile","ZipStream.c",0x27e,
                        "!(newLFRecord->flags & ZIP_FLAGS_BIT_EXPECT_DATA_DESCRIPTOR)");
        }
        *(ulong *)(local_58 + 0x28) = uVar31;
        if (iVar5 == 0) {
          *(int *)(local_58 + 0x20) = (int)local_e0;
        }
        lVar12 = (**(code **)(*(long *)(param_9 + 8) + 0x48))
                           (*(undefined8 *)(*(long *)(param_9 + 8) + 0x50));
        if (lVar12 < 0) {
          piVar18 = ___error();
          iVar5 = *piVar18;
          bVar26 = _gSZLogToSyslog ^ 1;
          lVar12 = local_58;
          if (_gSZLogToSyslog == 1) {
            iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            lVar12 = local_58;
            if (iVar10 == 0) {
              bVar26 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar4 = _SZGetLoggingHandle_logHandle;
              pcVar19 = _strerror(iVar5);
              __os_log_internal(0,puVar4,0x10,
                                "Failed to get current offset to restore after writing local file record: %s"
                                ,pcVar19);
            }
          }
          local_70 = 0;
          pvVar14 = local_60;
          if (bVar26 == 0) goto LAB_0009eb83;
          if (2 < _gSZDefaultLogLevel) {
            pcVar19 = _strerror(iVar5);
            pcVar21 = &cf_Failedtogetcurrentoffsettorestoreafterwritinglocalfilerecord__s;
            uVar23 = 0x289;
LAB_0009ea01:
            local_70 = 0;
            __SZLog(3,"ZipStreamWriteLocalFile",uVar23,pcVar21,pcVar19);
          }
LAB_0009ea0e:
          uVar32 = 0;
          pvVar14 = local_60;
        }
        else {
          local_68 = pvVar16;
          lVar15 = (**(code **)(*(long *)(param_9 + 8) + 0x40))
                             (*(undefined8 *)(*(long *)(param_9 + 8) + 0x50),lVar13,0);
          if (lVar13 == lVar15) {
            _free(local_60);
            lVar13 = *(long *)(param_9 + 8);
            pvVar16 = (void *)_CreateLocalFileRecordFromMutable(local_58);
            lVar15 = (ulong)*(ushort *)((long)pvVar16 + 0x1a) +
                     (ulong)*(ushort *)((long)pvVar16 + 0x1c) + 0x1e;
            lVar13 = (**(code **)(lVar13 + 0x30))(*(undefined8 *)(lVar13 + 0x50),pvVar16,lVar15);
            pvVar14 = (void *)0x0;
            if (lVar13 == lVar15) {
              pvVar14 = pvVar16;
              pvVar16 = (void *)0x0;
            }
            _free(pvVar16);
            if (pvVar14 == (void *)0x0) {
              bVar26 = _gSZLogToSyslog ^ 1;
              lVar12 = local_58;
              if (_gSZLogToSyslog == 1) {
                iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                lVar12 = local_58;
                if (iVar5 == 0) {
                  bVar26 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                    "Failed to write local file record for file %s to output file",
                                    *(undefined8 *)(local_98 + 0x48));
                }
              }
              pvVar16 = local_68;
              uVar32 = 0;
              if (bVar26 == 0) {
                local_70 = 0;
                pvVar14 = (void *)0x0;
              }
              else {
                if (2 < _gSZDefaultLogLevel) {
                  local_70 = 0;
                  __SZLog(3,"ZipStreamWriteLocalFile",0x296,
                          &cf_Failedtowritelocalfilerecordforfile_stooutputfile,
                          *(undefined8 *)(local_98 + 0x48));
                  pvVar14 = (void *)0x0;
                  goto LAB_0009e4d6;
                }
                local_70 = 0;
                uVar32 = 0;
                pvVar14 = (void *)0x0;
              }
            }
            else {
              iVar5 = (uint)*(ushort *)((long)pvVar14 + 0x1a) +
                      (uint)*(ushort *)((long)pvVar14 + 0x1c) + 0x1e;
              if ((int)local_88 == iVar5) {
                lVar13 = (**(code **)(*(long *)(param_9 + 8) + 0x40))
                                   (*(undefined8 *)(*(long *)(param_9 + 8) + 0x50),lVar12,0);
                pvVar16 = local_68;
                if (lVar12 == lVar13) goto LAB_0009d861;
                piVar18 = ___error();
                lVar12 = local_58;
                iVar5 = *piVar18;
                bVar26 = _gSZLogToSyslog ^ 1;
                if (_gSZLogToSyslog == 1) {
                  iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                  if (iVar10 == 0) {
                    bVar26 = 1;
                  }
                  else {
                    if (_SZGetLoggingHandle_onceToken != -1) {
                      _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                    }
                    puVar4 = _SZGetLoggingHandle_logHandle;
                    pcVar19 = _strerror(iVar5);
                    __os_log_internal(0,puVar4,0x10,
                                      "Failed to seek to end of compressed data offset in local file header: %s"
                                      ,pcVar19);
                  }
                }
                pvVar16 = local_68;
                local_70 = 0;
                uVar32 = 0;
                if (bVar26 != 0) {
                  if (2 < _gSZDefaultLogLevel) {
                    pcVar19 = _strerror(iVar5);
                    local_70 = 0;
                    __SZLog(3,"ZipStreamWriteLocalFile",0x2a2,
                            &cf_Failedtoseektoendofcompresseddataoffsetinlocalfileheader__s,pcVar19)
                    ;
                  }
                  uVar32 = 0;
                }
              }
              else {
                bVar26 = _gSZLogToSyslog ^ 1;
                if (_gSZLogToSyslog == 1) {
                  iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                  if (iVar10 == 0) {
                    bVar26 = 1;
                  }
                  else {
                    if (_SZGetLoggingHandle_onceToken != -1) {
                      _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                    }
                    __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                      "LocalFileHeader for %s changed in size when we updated it! Originally wrote %zu bytes; it\'s now %zu bytes."
                                      ,*(undefined8 *)(local_98 + 0x48),local_88,iVar5);
                  }
                }
                lVar12 = local_58;
                local_70 = 0;
                uVar32 = 0;
                pvVar16 = local_68;
                if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
                  local_70 = 0;
                  __SZLog(3,"ZipStreamWriteLocalFile",0x29c,
                          &
                          cf_LocalFileHeaderfor_schangedinsizewhenweupdatedit_Originallywrote_zubytes_it_snow_zubytes_
                          ,*(undefined8 *)(local_98 + 0x48),local_88,iVar5);
LAB_0009e488:
                  uVar32 = 0;
                  pvVar16 = local_68;
                }
              }
            }
          }
          else {
            piVar18 = ___error();
            iVar5 = *piVar18;
            bVar26 = _gSZLogToSyslog ^ 1;
            lVar12 = local_58;
            if (_gSZLogToSyslog == 1) {
              iVar10 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              lVar12 = local_58;
              if (iVar10 == 0) {
                bVar26 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                puVar4 = _SZGetLoggingHandle_logHandle;
                pcVar19 = _strerror(iVar5);
                __os_log_internal(0,puVar4,0x10,
                                  "Failed to seek to local compressed size offset in local file header: %s"
                                  ,pcVar19);
              }
            }
            pvVar16 = local_68;
            uVar32 = 0;
            if (bVar26 != 0) {
              if (2 < _gSZDefaultLogLevel) {
                pcVar19 = _strerror(iVar5);
                pcVar21 = &cf_Failedtoseektolocalcompressedsizeoffsetinlocalfileheader__s;
                uVar23 = 0x28f;
                goto LAB_0009ea01;
              }
              local_70 = 0;
              goto LAB_0009ea0e;
            }
            local_70 = 0;
            pvVar14 = local_60;
          }
        }
      }
    }
    else {
      bVar26 = _gSZLogToSyslog ^ 1;
      local_80 = CONCAT44(local_80._4_4_,iVar6);
      lVar12 = local_58;
      pvVar14 = local_60;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        lVar12 = local_58;
        pvVar14 = local_60;
        if (iVar5 == 0) {
          bVar26 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to close local file %s: %d"
                            ,*(undefined8 *)(local_98 + 0x48),local_80 & 0xffffffff);
        }
      }
      pvVar16 = local_68;
      local_70 = 0;
      uVar32 = 0;
      if ((bVar26 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009eb86;
      local_70 = 0;
      __SZLog(3,"ZipStreamWriteLocalFile",0x221,&cf_Failedtocloselocalfile_s__d,
              *(undefined8 *)(local_98 + 0x48),local_80 & 0xffffffff);
LAB_0009e4d6:
      uVar32 = 0;
    }
  }
  else {
    bVar26 = _gSZLogToSyslog ^ 1;
    lVar12 = local_58;
    pvVar14 = local_60;
    if (_gSZLogToSyslog == 1) {
      iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      lVar12 = local_58;
      pvVar14 = local_60;
      if (iVar5 == 0) {
        bVar26 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "compression_stream_process with finalize did not return compression_status_end: %d"
                          ,local_80 & 0xffffffff);
      }
    }
    uVar32 = 0;
    pvVar16 = local_68;
    if ((bVar26 != 0) && (2 < _gSZDefaultLogLevel)) {
      pcVar21 = &cf_compression_stream_processwithfinalizedidnotreturncompression_status_end__d;
      uVar23 = 0x1fe;
      uVar9 = (uint)local_80;
LAB_0009ef1b:
      pvVar16 = local_68;
      __SZLog(3,"ZipStreamWriteLocalFile",uVar23,pcVar21,uVar9);
      uVar32 = 0;
    }
  }
LAB_0009eb86:
  if (local_a0 != (undefined8 *)0x0) {
    _compression_stream_destroy(local_a0);
    _free(local_a0);
  }
  if (local_70 != 0) {
    _CloseLocalFile();
  }
LAB_0009ebb7:
  _DestroyMutableCDRecord(local_98);
  _DestroyMutableLocalFileRecord(lVar12);
  _free(pvVar14);
  _free(pvVar16);
  _free(pBVar11);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar32 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

