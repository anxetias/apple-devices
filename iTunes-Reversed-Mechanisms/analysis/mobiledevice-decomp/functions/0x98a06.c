// rea decompile_all
// name: _ReadLocalFileData
// address: 0x98a06
// body: available
// range: 0x98a06-0x995da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x994fe to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _ReadLocalFileData(undefined8 *param_1,Bytef *param_2,char *param_3,long *param_4)

{
  long *plVar1;
  short sVar2;
  Bytef *buf;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  size_t sVar10;
  uLong uVar11;
  cfstringStruct *pcVar12;
  undefined8 uVar13;
  long lVar14;
  byte bVar15;
  char cVar16;
  undefined8 uVar17;
  
  if ((ulong)param_3 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
    ___assert_rtn("ReadLocalFileData","ParseZipFile.c",0x81,"bufLen <= UINT32_MAX");
  }
  sVar2 = *(short *)(param_1 + 0xe);
  if ((sVar2 == 0) || (*(char *)((long)param_1 + 0x72) == '\x01')) {
    if (param_1[6] == 0) {
      bVar15 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar5 == 0) {
          bVar15 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"No data remaining!");
        }
      }
      if (bVar15 == 0) {
        return '\x02';
      }
      if (_gSZDefaultLogLevel < 3) {
        return '\x02';
      }
      __SZLog(3,"ReadLocalFileData",0x86,&cf_Nodataremaining_);
      return '\x02';
    }
    iVar5 = _fseeko(*(FILE **)param_1[9],param_1[5],0);
    if (iVar5 == 0) {
      if ((char *)param_1[6] < param_3) {
        param_3 = (char *)param_1[6];
      }
      pcVar8 = (char *)_fread(param_2,1,(size_t)param_3,*(FILE **)param_1[9]);
      if (param_3 == pcVar8) {
        if (*(short *)(param_1 + 0xe) == 0) {
          uVar11 = _crc32(param_1[0xc],param_2,(uInt)param_3);
          param_1[0xc] = uVar11;
        }
        *param_4 = (long)param_3;
        param_1[5] = param_3 + param_1[5];
        param_1[8] = param_3 + param_1[8];
        plVar1 = param_1 + 6;
        *plVar1 = *plVar1 - (long)param_3;
        return (*plVar1 == 0) * '\x02';
      }
      bVar15 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar5 == 0) {
          bVar15 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Failed to read %ld bytes of local file data",param_3);
        }
      }
      cVar16 = '\x04';
      if (bVar15 == 0) {
        return '\x04';
      }
      if (_gSZDefaultLogLevel < 3) {
        return '\x04';
      }
      pcVar12 = &cf_Failedtoread_ldbytesoflocalfiledata;
      uVar13 = 0x93;
    }
    else {
      bVar15 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar5 == 0) {
          bVar15 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          puVar4 = _SZGetLoggingHandle_logHandle;
          piVar7 = ___error();
          pcVar8 = _strerror(*piVar7);
          __os_log_internal(0,puVar4,0x10,"Failed to seek to local file data: %s",pcVar8);
        }
      }
      if (bVar15 == 0) {
        return '\x04';
      }
      if (_gSZDefaultLogLevel < 3) {
        return '\x04';
      }
      piVar7 = ___error();
      param_3 = _strerror(*piVar7);
      uVar13 = 0x8c;
LAB_000990e9:
      cVar16 = '\x04';
      pcVar12 = &cf_Failedtoseektolocalfiledata__s;
    }
  }
  else {
    if (((sVar2 != 8) && (sVar2 != 99)) && (sVar2 != 0xe)) {
      bVar15 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar5 == 0) {
          bVar15 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Unknown compression method: %d",
                            *(undefined2 *)(param_1 + 0xe));
        }
      }
      cVar16 = '\x05';
      if (bVar15 == 0) {
        return '\x05';
      }
      if (_gSZDefaultLogLevel < 3) {
        return '\x05';
      }
      uVar9 = (ulong)*(ushort *)(param_1 + 0xe);
      pcVar12 = &cf_Unknowncompressionmethod__d;
      uVar13 = 0x136;
LAB_00099385:
      __SZLog(3,"ReadLocalFileData",uVar13,pcVar12,uVar9);
      return cVar16;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    *param_4 = 0;
    do {
      lVar14 = param_1[1];
      if (lVar14 == 0) {
        return '\0';
      }
      if ((param_1[3] == 0) && (uVar9 = param_1[6], uVar9 != 0)) {
        param_1[2] = param_1[10];
        if (0xffff < uVar9) {
          uVar9 = 0x10000;
        }
        param_1[3] = uVar9;
        iVar5 = _fseeko(*(FILE **)param_1[9],param_1[5],0);
        if (iVar5 != 0) {
          bVar15 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar5 == 0) {
              bVar15 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar4 = _SZGetLoggingHandle_logHandle;
              piVar7 = ___error();
              pcVar8 = _strerror(*piVar7);
              __os_log_internal(0,puVar4,0x10,"Failed to seek to local file data: %s",pcVar8);
            }
          }
          if (bVar15 == 0) {
            return '\x04';
          }
          if (_gSZDefaultLogLevel < 3) {
            return '\x04';
          }
          piVar7 = ___error();
          param_3 = _strerror(*piVar7);
          uVar13 = 0xb8;
          goto LAB_000990e9;
        }
        sVar10 = _fread((void *)param_1[10],1,param_1[3],*(FILE **)param_1[9]);
        if (param_1[3] != sVar10) {
          bVar15 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar5 == 0) {
              bVar15 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              puVar4 = _SZGetLoggingHandle_logHandle;
              uVar13 = param_1[3];
              iVar5 = _feof(*(FILE **)param_1[9]);
              uVar17 = 0x79;
              if (iVar5 == 0) {
                uVar17 = 0x6e;
              }
              iVar5 = _ferror(*(FILE **)param_1[9]);
              __os_log_internal(0,puVar4,0x10,
                                "Failed to read %zu bytes of local file data; read %lu bytes; isEOF=%c; ferror=%d"
                                ,uVar13,sVar10,uVar17,iVar5);
            }
          }
          if (bVar15 == 0) {
            return '\x04';
          }
          if (_gSZDefaultLogLevel < 3) {
            return '\x04';
          }
          uVar13 = param_1[3];
          iVar5 = _feof(*(FILE **)param_1[9]);
          uVar17 = 0x79;
          if (iVar5 == 0) {
            uVar17 = 0x6e;
          }
          iVar5 = _ferror(*(FILE **)param_1[9]);
          __SZLog(3,"ReadLocalFileData",0xbe,
                  &cf_Failedtoread_zubytesoflocalfiledata_read_lubytes_isEOF__c_ferror__d,uVar13,
                  sVar10,uVar17,iVar5);
          return '\x04';
        }
        param_1[6] = param_1[6] - sVar10;
        param_1[5] = param_1[5] + sVar10;
        lVar14 = param_1[1];
      }
      buf = (Bytef *)*param_1;
      bVar15 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar5 == 0) {
          bVar15 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                            "Calling compression_stream_process with src_ptr: %p, src_size: %zu, dst_ptr: %p, dst_size: %zu"
                            ,param_1[2],param_1[3],*param_1,param_1[1]);
        }
      }
      if ((bVar15 != 0) && (6 < _gSZDefaultLogLevel)) {
        __SZLog(7,"ReadLocalFileData",0xc9,
                &
                cf_Callingcompression_stream_processwithsrc_ptr__p_src_size__zu_dst_ptr__p_dst_size__zu
                ,param_1[2],param_1[3],*param_1,param_1[1]);
      }
      iVar5 = _compression_stream_process(param_1,0);
      bVar15 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar6 == 0) {
          bVar15 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,
                            "After process ret %d: src_ptr: %p, src_size: %zu, dst_ptr: %p, dst_size: %zu"
                            ,iVar5,param_1[2],param_1[3],*param_1,param_1[1]);
        }
      }
      if ((bVar15 != 0) && (6 < _gSZDefaultLogLevel)) {
        __SZLog(7,"ReadLocalFileData",0xcd,
                &cf_Afterprocessret_d_src_ptr__p_src_size__zu_dst_ptr__p_dst_size__zu,iVar5,
                param_1[2],param_1[3],*param_1,param_1[1]);
      }
      if (iVar5 == -1) {
        bVar15 = _gSZLogToSyslog ^ 1;
        if (_gSZLogToSyslog == 1) {
          iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
          if (iVar5 == 0) {
            bVar15 = 1;
          }
          else {
            if (_SZGetLoggingHandle_onceToken != -1) {
              _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
            }
            __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                              "compression_stream_process returned %d",0xffffffff);
          }
        }
        cVar16 = '\x03';
        if (bVar15 == 0) {
          return '\x03';
        }
        if (_gSZDefaultLogLevel < 3) {
          return '\x03';
        }
        pcVar12 = &cf_compression_stream_processreturned_d;
        uVar13 = 0xd0;
        uVar9 = 0xffffffff;
        goto LAB_00099385;
      }
      lVar14 = lVar14 - param_1[1];
      bVar15 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar6 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar6 == 0) {
          bVar15 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Processed %zu bytes",lVar14);
        }
      }
      if ((bVar15 != 0) && (6 < _gSZDefaultLogLevel)) {
        __SZLog(7,"ReadLocalFileData",0xd7,&cf_Processed_zubytes,lVar14);
      }
      uVar11 = _crc32(param_1[0xc],buf,(uInt)lVar14);
      param_1[0xc] = uVar11;
      *param_4 = *param_4 + lVar14;
      lVar3 = param_1[8];
      param_1[8] = lVar14 + lVar3;
    } while (iVar5 != 1);
    if (param_1[6] == 0) {
      if (param_1[7] == lVar14 + lVar3) {
        return '\x02';
      }
      bVar15 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar5 == 0) {
          bVar15 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Hit end at %llu, before expected size %llu",param_1[8],param_1[7]);
        }
      }
      if (bVar15 == 0) {
        return '\x03';
      }
      if (_gSZDefaultLogLevel < 3) {
        return '\x03';
      }
      __SZLog(3,"ReadLocalFileData",0xe2,&cf_Hitendat_llu_beforeexpectedsize_llu,param_1[8],
              param_1[7]);
      return '\x03';
    }
    bVar15 = _gSZLogToSyslog ^ 1;
    if (_gSZLogToSyslog == 1) {
      iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
      if (iVar5 == 0) {
        bVar15 = 1;
      }
      else {
        if (_SZGetLoggingHandle_onceToken != -1) {
          _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
        }
        __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,"Hit end with %llu remaining",
                          param_1[6]);
      }
    }
    cVar16 = '\x03';
    if (bVar15 == 0) {
      return '\x03';
    }
    if (_gSZDefaultLogLevel < 3) {
      return '\x03';
    }
    param_3 = (char *)param_1[6];
    pcVar12 = &cf_Hitendwith_lluremaining;
    uVar13 = 0xdf;
  }
  __SZLog(3,"ReadLocalFileData",uVar13,pcVar12,param_3);
  return cVar16;
}

