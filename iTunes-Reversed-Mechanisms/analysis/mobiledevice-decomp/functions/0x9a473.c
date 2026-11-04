// rea decompile_all
// name: _OpenZipFile
// address: 0x9a473
// body: available
// range: 0x9a473-0x9be89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _OpenZipFile(char *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  undefined8 *puVar5;
  FILE *pFVar6;
  int *piVar7;
  char *pcVar8;
  off_t oVar9;
  size_t sVar10;
  qword *pqVar11;
  int *piVar12;
  cfstringStruct *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  byte bVar20;
  qword *pqVar21;
  
  puVar5 = _calloc(1,0x60);
  pFVar6 = _fopen(param_1,"rb");
  *puVar5 = pFVar6;
  if (pFVar6 == (FILE *)0x0) goto LAB_0009ab76;
  if ((param_2 & 1) != 0) {
    iVar4 = _fileno(pFVar6);
    iVar4 = _fcntl(iVar4,0x30,1);
    if (iVar4 != 0) {
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar2 = _SZGetLoggingHandle_logHandle;
          piVar7 = ___error();
          pcVar8 = _strerror(*piVar7);
          __os_log_internal(0,puVar2,0x10,"Failed to set F_NOCACHE on zip file FD: %s",pcVar8);
        }
      }
      if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
        piVar7 = ___error();
        pcVar8 = _strerror(*piVar7);
        __SZLog(3,"OpenZipFile",0x2b0,&cf_FailedtosetF_NOCACHEonzipfileFD__s,pcVar8);
      }
    }
  }
  puVar5[6] = 0xffffffffffffffff;
  puVar5[3] = 0;
  iVar4 = _fseeko((FILE *)*puVar5,-0x16,2);
  if (iVar4 == 0) {
    oVar9 = _ftello((FILE *)*puVar5);
    puVar5[1] = oVar9 + 0x16;
    sVar10 = _fread(puVar5 + 7,1,0x16,(FILE *)*puVar5);
    if (sVar10 != 0x16) {
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Failed to read end record: expected to read %lu but actually read %lu",
                            0x16,sVar10);
        }
      }
      if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
        __SZLog(3,"_GetCDEndRecord",0x278,
                &cf_Failedtoreadendrecord_expectedtoread_lubutactuallyread_lu,0x16,sVar10);
      }
      goto LAB_0009aadd;
    }
    if (*(int *)(puVar5 + 7) != 0x6054b50) {
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to locate end record");
        }
      }
      if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
        pcVar13 = &cf_Failedtolocateendrecord;
        uVar15 = 0x27d;
LAB_0009aad6:
        __SZLog(3,"_GetCDEndRecord",uVar15,pcVar13);
      }
      goto LAB_0009aadd;
    }
    if ((((*(short *)(puVar5 + 8) == -1) ||
         (uVar3 = *(ushort *)((long)puVar5 + 0x42), uVar3 == 0xffff)) ||
        (*(int *)((long)puVar5 + 0x44) == -1)) || (*(int *)(puVar5 + 9) == -1)) {
      pFVar6 = (FILE *)*puVar5;
      iVar4 = _fseeko(pFVar6,-0x2a,2);
      if (iVar4 == 0) {
        piVar7 = _calloc(1,0x14);
        if (piVar7 == (int *)0x0) {
          bVar20 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar4 == 0) {
              bVar20 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar2 = _SZGetLoggingHandle_logHandle;
              piVar7 = ___error();
              pcVar8 = _strerror(*piVar7);
              __os_log_internal(0,puVar2,0x10,"Failed to allocate zip64 end record locator: %s",
                                pcVar8);
            }
          }
          piVar12 = (int *)0x0;
          if (bVar20 == 0) goto LAB_0009aa3e;
          piVar7 = (int *)0x0;
          if (2 < _gSZDefaultLogLevel) {
            piVar7 = ___error();
            pcVar8 = _strerror(*piVar7);
            pcVar13 = &cf_Failedtoallocatezip64endrecordlocator__s;
            uVar15 = 0x20f;
            goto LAB_0009aa34;
          }
        }
        else {
          pqVar11 = (qword *)_fread(piVar7,1,0x14,pFVar6);
          if (pqVar11 == (qword *)&MACH_HEADER.sizeofcmds) {
            if (*piVar7 != 0x7064b50) {
              bVar20 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar4 == 0) {
                  bVar20 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                    "Failed to locate zip64 end record locator; what we found doesn\'t have the right signature."
                                   );
                }
              }
              if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                __SZLog(3,"_ReadZip64Records",0x21c,
                        &
                        cf_Failedtolocatezip64endrecordlocator_whatwefounddoesn_thavetherightsignature_
                       );
              }
LAB_0009ade6:
              _free(piVar7);
              uVar3 = *(ushort *)((long)puVar5 + 0x42);
              goto LAB_0009adf2;
            }
            if (piVar7[1] == 0) {
              if (piVar7[4] == 1) {
                iVar4 = _fseeko(pFVar6,*(off_t *)(piVar7 + 2),0);
                if (iVar4 == 0) {
                  piVar12 = _calloc(1,0x38);
                  if (piVar12 == (int *)0x0) {
                    bVar20 = _gSZLogToSyslog ^ 1;
                    if (_gSZLogToSyslog == 1) {
                      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                      if (iVar4 == 0) {
                        bVar20 = 1;
                      }
                      else {
                        if (_SZGetLoggingHandle_onceToken != -1) {
                          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                        }
                        puVar2 = _SZGetLoggingHandle_logHandle;
                        piVar12 = ___error();
                        pcVar8 = _strerror(*piVar12);
                        __os_log_internal(0,puVar2,0x10,"Failed to allocate zip64 end record: %s",
                                          pcVar8);
                      }
                    }
                    piVar12 = (int *)0x0;
                    if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                      piVar12 = ___error();
                      pqVar21 = (qword *)_strerror(*piVar12);
                      pcVar13 = &cf_Failedtoallocatezip64endrecord__s;
                      piVar12 = (int *)0x0;
                      uVar15 = 0x233;
LAB_0009babd:
                      __SZLog(3,"_ReadZip64Records",uVar15,pcVar13,pqVar21);
                    }
                  }
                  else {
                    pqVar11 = (qword *)_fread(piVar12,1,0x38,pFVar6);
                    if (pqVar11 == &segment_command_00000020.vmaddr) {
                      if (*piVar12 == 0x6064b50) {
                        lVar1 = *(long *)(piVar12 + 1);
                        pqVar21 = (qword *)(lVar1 + 0xc);
                        if (pqVar21 < (undefined1 *)((long)&segment_command_00000020.vmaddr + 1)) {
                          if (pqVar21 == &segment_command_00000020.vmaddr) {
LAB_0009ba60:
                            puVar5[0xb] = piVar7;
                            puVar5[10] = piVar12;
                            piVar7 = (int *)0x0;
                            goto LAB_0009ade6;
                          }
                          bVar20 = _gSZLogToSyslog ^ 1;
                          if (_gSZLogToSyslog == 1) {
                            iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                            if (iVar4 == 0) {
                              bVar20 = 1;
                            }
                            else {
                              if (_SZGetLoggingHandle_onceToken != -1) {
                                _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                               &___block_literal_global);
                              }
                              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                "Zip64 end record said it was %zu bytes; we expect at least %zu bytes"
                                                ,pqVar21,0x38);
                            }
                          }
                          if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                            pcVar13 = &cf_Zip64endrecordsaiditwas_zubytes_weexpectatleast_zubytes;
                            pqVar11 = &segment_command_00000020.vmaddr;
                            uVar15 = 599;
                            goto LAB_0009ad09;
                          }
                        }
                        else {
                          piVar12 = _reallocf(piVar12,(size_t)pqVar21);
                          if (piVar12 == (int *)0x0) {
                            bVar20 = _gSZLogToSyslog ^ 1;
                            if (_gSZLogToSyslog == 1) {
                              iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                              if (iVar4 == 0) {
                                bVar20 = 1;
                              }
                              else {
                                if (_SZGetLoggingHandle_onceToken != -1) {
                                  _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                 &___block_literal_global);
                                }
                                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                  "Failed to grow zip64 end record allocation to %zu bytes"
                                                  ,pqVar21);
                              }
                            }
                            piVar12 = (int *)0x0;
                            if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                              pcVar13 = &cf_Failedtogrowzip64endrecordallocationto_zubytes;
                              piVar12 = (int *)0x0;
                              uVar15 = 0x24b;
                              goto LAB_0009babd;
                            }
                          }
                          else {
                            pqVar21 = (qword *)(lVar1 + -0x2c);
                            pqVar11 = (qword *)_fread(piVar12 + 0xe,1,(size_t)pqVar21,pFVar6);
                            if (pqVar21 == pqVar11) goto LAB_0009ba60;
                            bVar20 = _gSZLogToSyslog ^ 1;
                            if (_gSZLogToSyslog == 1) {
                              iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                              if (iVar4 == 0) {
                                bVar20 = 1;
                              }
                              else {
                                if (_SZGetLoggingHandle_onceToken != -1) {
                                  _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                 &___block_literal_global);
                                }
                                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                                  "Failed to read extensible data in zip64 end record: expected to read %lu but actually read %lu"
                                                  ,pqVar21,pqVar11);
                              }
                            }
                            if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                              pcVar13 = &
                                        cf_Failedtoreadextensibledatainzip64endrecord_expectedtoread_lubutactuallyread_lu
                              ;
                              uVar15 = 0x253;
                              goto LAB_0009ad09;
                            }
                          }
                        }
                      }
                      else {
                        bVar20 = _gSZLogToSyslog ^ 1;
                        if (_gSZLogToSyslog == 1) {
                          iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                          if (iVar4 == 0) {
                            bVar20 = 1;
                          }
                          else {
                            if (_SZGetLoggingHandle_onceToken != -1) {
                              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global
                                            );
                            }
                            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                              "Failed to locate zip64 end record; what we found at offset %lld doesn\'t have the right signature."
                                              ,*(undefined8 *)(piVar7 + 2));
                          }
                        }
                        if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                          pqVar21 = *(qword **)(piVar7 + 2);
                          pcVar13 = &
                                    cf_Failedtolocatezip64endrecord_whatwefoundatoffset_llddoesn_thavetherightsignature_
                          ;
                          uVar15 = 0x240;
                          goto LAB_0009babd;
                        }
                      }
                    }
                    else {
                      bVar20 = _gSZLogToSyslog ^ 1;
                      if (_gSZLogToSyslog == 1) {
                        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                        if (iVar4 == 0) {
                          bVar20 = 1;
                        }
                        else {
                          if (_SZGetLoggingHandle_onceToken != -1) {
                            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                          }
                          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                            "Failed to read zip64 end record: expected to read %lu but actually read %lu"
                                            ,0x38,pqVar11);
                        }
                      }
                      if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                        pcVar13 = &cf_Failedtoreadzip64endrecord_expectedtoread_lubutactuallyread_lu
                        ;
                        pqVar21 = &segment_command_00000020.vmaddr;
                        uVar15 = 0x23a;
                        goto LAB_0009ad09;
                      }
                    }
                  }
                }
                else {
                  bVar20 = _gSZLogToSyslog ^ 1;
                  if (_gSZLogToSyslog == 1) {
                    iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                    if (iVar4 == 0) {
                      bVar20 = 1;
                    }
                    else {
                      if (_SZGetLoggingHandle_onceToken != -1) {
                        _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                      }
                      puVar2 = _SZGetLoggingHandle_logHandle;
                      uVar15 = *(undefined8 *)(piVar7 + 2);
                      piVar12 = ___error();
                      pcVar8 = _strerror(*piVar12);
                      __os_log_internal(0,puVar2,0x10,
                                        "Failed to seek to zip64 end record at %lld: %s",uVar15,
                                        pcVar8);
                    }
                  }
                  piVar12 = (int *)0x0;
                  if ((bVar20 != 0) && (piVar12 = (int *)0x0, 2 < _gSZDefaultLogLevel)) {
                    pqVar21 = *(qword **)(piVar7 + 2);
                    piVar12 = ___error();
                    pqVar11 = (qword *)_strerror(*piVar12);
                    pcVar13 = &cf_Failedtoseektozip64endrecordat_lld__s;
                    piVar12 = (int *)0x0;
                    uVar15 = 0x22d;
LAB_0009ad09:
                    __SZLog(3,"_ReadZip64Records",uVar15,pcVar13,pqVar21,pqVar11);
                  }
                }
              }
              else {
                bVar20 = _gSZLogToSyslog ^ 1;
                if (_gSZLogToSyslog == 1) {
                  iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                  if (iVar4 == 0) {
                    bVar20 = 1;
                  }
                  else {
                    if (_SZGetLoggingHandle_onceToken != -1) {
                      _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                    }
                    __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                      "Expected total disks to be 1, but zip64 end record locator claimed %d disks"
                                      ,piVar7[4]);
                  }
                }
                piVar12 = (int *)0x0;
                if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                  iVar4 = piVar7[4];
                  pcVar13 = &cf_Expectedtotaldiskstobe1_butzip64endrecordlocatorclaimed_ddisks;
                  uVar15 = 0x227;
                  goto LAB_0009b623;
                }
              }
            }
            else {
              bVar20 = _gSZLogToSyslog ^ 1;
              if (_gSZLogToSyslog == 1) {
                iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                if (iVar4 == 0) {
                  bVar20 = 1;
                }
                else {
                  if (_SZGetLoggingHandle_onceToken != -1) {
                    _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                  }
                  __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                    "Expected for end record to be on disk 0, but zip64 end record locator claimed disk %d"
                                    ,piVar7[1]);
                }
              }
              piVar12 = (int *)0x0;
              if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
                iVar4 = piVar7[1];
                pcVar13 = &cf_Expectedforendrecordtobeondisk0_butzip64endrecordlocatorclaimeddisk_d;
                uVar15 = 0x222;
LAB_0009b623:
                __SZLog(3,"_ReadZip64Records",uVar15,pcVar13,iVar4);
                piVar12 = (int *)0x0;
              }
            }
          }
          else {
            bVar20 = _gSZLogToSyslog ^ 1;
            if (_gSZLogToSyslog == 1) {
              iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
              if (iVar4 == 0) {
                bVar20 = 1;
              }
              else {
                if (_SZGetLoggingHandle_onceToken != -1) {
                  _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
                }
                __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                  "Failed to read zip64 end record locator: expected to read %lu but actually read %lu"
                                  ,0x14,pqVar11);
              }
            }
            piVar12 = (int *)0x0;
            if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
              pcVar13 = &cf_Failedtoreadzip64endrecordlocator_expectedtoread_lubutactuallyread_lu;
              piVar12 = (int *)0x0;
              pqVar21 = (qword *)&MACH_HEADER.sizeofcmds;
              uVar15 = 0x216;
              goto LAB_0009ad09;
            }
          }
        }
      }
      else {
        bVar20 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar4 == 0) {
            bVar20 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            puVar2 = _SZGetLoggingHandle_logHandle;
            piVar7 = ___error();
            pcVar8 = _strerror(*piVar7);
            __os_log_internal(0,puVar2,0x10,"Failed to seek to zip64 end record locator: %s",pcVar8)
            ;
          }
        }
        if (bVar20 != 0) {
          piVar7 = (int *)0x0;
          piVar12 = (int *)0x0;
          if (_gSZDefaultLogLevel < 3) goto LAB_0009aa41;
          piVar7 = ___error();
          pcVar8 = _strerror(*piVar7);
          pcVar13 = &cf_Failedtoseektozip64endrecordlocator__s;
          uVar15 = 0x209;
LAB_0009aa34:
          __SZLog(3,"_ReadZip64Records",uVar15,pcVar13,pcVar8);
        }
LAB_0009aa3e:
        piVar7 = (int *)0x0;
        piVar12 = (int *)0x0;
      }
LAB_0009aa41:
      _free(piVar7);
      _free(piVar12);
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to read Zip64 end records")
          ;
        }
      }
      if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
        pcVar13 = &cf_FailedtoreadZip64endrecords;
        uVar15 = 0x288;
        goto LAB_0009aad6;
      }
      goto LAB_0009aadd;
    }
LAB_0009adf2:
    lVar1 = puVar5[10];
    if (lVar1 == 0) {
      puVar5[2] = (ulong)uVar3;
      uVar14 = (ulong)*(uint *)((long)puVar5 + 0x44);
      uVar17 = (ulong)*(uint *)(puVar5 + 9);
      puVar5[5] = uVar14;
      puVar5[4] = uVar17;
LAB_0009b1f9:
      if (*(short *)((long)puVar5 + 0x3c) != 0) {
        bVar20 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar4 == 0) {
            bVar20 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Archive says it\'s disk number %hd; must be 0",
                              *(undefined2 *)((long)puVar5 + 0x3c));
          }
        }
        if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
          uVar19 = (uint)*(ushort *)((long)puVar5 + 0x3c);
          pcVar13 = &cf_Archivesaysit_sdisknumber_hd_mustbe0;
          uVar15 = 0x2dd;
LAB_0009b43f:
          __SZLog(3,"OpenZipFile",uVar15,pcVar13,uVar19);
        }
        goto LAB_0009ab69;
      }
      if (*(short *)((long)puVar5 + 0x3e) != 0) {
        bVar20 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar4 == 0) {
            bVar20 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "Archive says central directory starts on disk disk number %d; must be 0"
                              ,*(undefined2 *)((long)puVar5 + 0x3e));
          }
        }
        if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
          uVar19 = (uint)*(ushort *)((long)puVar5 + 0x3e);
          pcVar13 = &cf_Archivesayscentraldirectorystartsondiskdisknumber_d_mustbe0;
          uVar15 = 0x2e2;
          goto LAB_0009b43f;
        }
        goto LAB_0009ab69;
      }
      if (*(ushort *)(puVar5 + 8) == uVar3) {
        if ((ulong)puVar5[1] < uVar14) {
          bVar20 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar4 == 0) {
              bVar20 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                "Central directory says it\'s %ld bytes long, which is longer than file length %ld"
                                ,*(undefined4 *)((long)puVar5 + 0x44),puVar5[1]);
            }
          }
          if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
            uVar14 = (ulong)*(uint *)((long)puVar5 + 0x44);
            uVar15 = puVar5[1];
            pcVar13 = &cf_Centraldirectorysaysit_s_ldbyteslong_whichislongerthanfilelength_ld;
            uVar16 = 0x2ec;
LAB_0009b9aa:
            __SZLog(3,"OpenZipFile",uVar16,pcVar13,uVar14,uVar15);
          }
        }
        else {
          if (uVar17 + uVar14 <= (ulong)puVar5[1]) {
            return puVar5;
          }
          bVar20 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar4 == 0) {
              bVar20 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                                "Central directory length (%u) + offset (%u) > file length %ld",
                                *(undefined4 *)((long)puVar5 + 0x44),*(undefined4 *)(puVar5 + 9),
                                puVar5[1]);
            }
          }
          if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
            __SZLog(3,"OpenZipFile",0x2f1,&cf_Centraldirectorylength__u__offset__u_>filelength_ld,
                    *(undefined4 *)((long)puVar5 + 0x44),*(undefined4 *)(puVar5 + 9),puVar5[1]);
          }
        }
        goto LAB_0009ab69;
      }
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Archive must only span a single disk, but this disk does not have all of the central directory records."
                           );
        }
      }
      if ((bVar20 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009ab69;
      pcVar13 = &
                cf_Archivemustonlyspanasingledisk_butthisdiskdoesnothaveallofthecentraldirectoryrecords_
      ;
      uVar15 = 0x2e7;
      goto LAB_0009ab62;
    }
    if (uVar3 == 0xffff) {
      uVar14 = *(ulong *)(lVar1 + 0x20);
    }
    else {
      uVar14 = (ulong)uVar3;
    }
    puVar5[2] = uVar14;
    uVar14 = (ulong)*(uint *)((long)puVar5 + 0x44);
    uVar17 = uVar14;
    if (uVar14 == 0xffffffff) {
      uVar17 = *(ulong *)(lVar1 + 0x28);
    }
    puVar5[5] = uVar17;
    uVar17 = (ulong)*(uint *)(puVar5 + 9);
    uVar18 = uVar17;
    if (uVar17 == 0xffffffff) {
      uVar17 = 0xffffffff;
      uVar18 = *(ulong *)(lVar1 + 0x30);
    }
    puVar5[4] = uVar18;
    if (puVar5[0xb] == 0) goto LAB_0009b1f9;
    if (*(int *)(lVar1 + 0x10) != 0) {
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Z64: Archive says it\'s disk number %d; must be 0",
                            *(undefined4 *)(puVar5[10] + 0x10));
        }
      }
      if ((bVar20 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009ab69;
      uVar19 = *(uint *)(puVar5[10] + 0x10);
      pcVar13 = &cf_Z64_Archivesaysit_sdisknumber_d_mustbe0;
      uVar15 = 0x2c3;
      goto LAB_0009b43f;
    }
    if (*(int *)(lVar1 + 0x14) != 0) {
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Z64: Archive says central directory starts on disk disk number %d; must be 0"
                            ,*(undefined4 *)(puVar5[10] + 0x14));
        }
      }
      if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
        uVar19 = *(uint *)(puVar5[10] + 0x14);
        pcVar13 = &cf_Z64_Archivesayscentraldirectorystartsondiskdisknumber_d_mustbe0;
        uVar15 = 0x2c8;
        goto LAB_0009b43f;
      }
      goto LAB_0009ab69;
    }
    if (*(long *)(lVar1 + 0x18) != *(long *)(lVar1 + 0x20)) {
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Z64: Archive must only span a single disk, but this disk does not have all of the central directory records."
                           );
        }
      }
      if ((bVar20 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009ab69;
      pcVar13 = &
                cf_Z64_Archivemustonlyspanasingledisk_butthisdiskdoesnothaveallofthecentraldirectoryrecords_
      ;
      uVar15 = 0x2cd;
      goto LAB_0009ab62;
    }
    if ((ulong)puVar5[1] < *(ulong *)(lVar1 + 0x28)) {
      bVar20 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar4 == 0) {
          bVar20 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Z64: Central directory says it\'s %ld bytes long, which is longer than file length %ld"
                            ,*(undefined8 *)(puVar5[10] + 0x28),puVar5[1]);
        }
      }
      if ((bVar20 == 0) || (_gSZDefaultLogLevel < 3)) goto LAB_0009ab69;
      uVar15 = puVar5[1];
      uVar14 = *(ulong *)(puVar5[10] + 0x28);
      pcVar13 = &cf_Z64_Centraldirectorysaysit_s_ldbyteslong_whichislongerthanfilelength_ld;
      uVar16 = 0x2d2;
      goto LAB_0009b9aa;
    }
    if (*(ulong *)(lVar1 + 0x28) + *(long *)(lVar1 + 0x30) <= (ulong)puVar5[1]) goto LAB_0009b1f9;
    bVar20 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar4 == 0) {
        bVar20 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                          "Z64: Central directory length (%ld) + offset (%ld) > file length %ld",
                          *(undefined8 *)(puVar5[10] + 0x28),*(undefined8 *)(puVar5[10] + 0x30),
                          puVar5[1]);
      }
    }
    if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
      uVar14 = *(ulong *)(puVar5[10] + 0x28);
      uVar15 = *(undefined8 *)(puVar5[10] + 0x30);
      pcVar13 = &cf_Z64_Centraldirectorylength__ld__offset__ld_>filelength_ld;
      uVar16 = 0x2d7;
      goto LAB_0009b9aa;
    }
  }
  else {
    bVar20 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar4 == 0) {
        bVar20 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        puVar2 = _SZGetLoggingHandle_logHandle;
        piVar7 = ___error();
        pcVar8 = _strerror(*piVar7);
        __os_log_internal(0,puVar2,0x10,"Failed to seek to end record: %s",pcVar8);
      }
    }
    if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
      piVar7 = ___error();
      pcVar8 = _strerror(*piVar7);
      __SZLog(3,"_GetCDEndRecord",0x26d,&cf_Failedtoseektoendrecord__s,pcVar8);
    }
LAB_0009aadd:
    bVar20 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar4 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar4 == 0) {
        bVar20 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Failed to get end record");
      }
    }
    if ((bVar20 != 0) && (2 < _gSZDefaultLogLevel)) {
      pcVar13 = &cf_Failedtogetendrecord;
      uVar15 = 0x2ba;
LAB_0009ab62:
      __SZLog(3,"OpenZipFile",uVar15,pcVar13);
    }
  }
LAB_0009ab69:
  if ((FILE *)*puVar5 != (FILE *)0x0) {
    _fclose((FILE *)*puVar5);
  }
LAB_0009ab76:
  _free(puVar5);
  return (undefined8 *)0x0;
}

