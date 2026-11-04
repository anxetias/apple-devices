// rea decompile_all
// name: __MonitorResultDispatchFunction
// address: 0x97cc6
// body: available
// range: 0x97cc6-0x983ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __MonitorResultDispatchFunction(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  byte bVar13;
  long local_38;
  
  do {
    local_38 = 0;
    iVar3 = _AMDServiceConnectionReceiveMessage(*param_1,&local_38,0,0);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      *(int *)((long)param_1 + 0x14) = iVar3;
      bVar13 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar5 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar5 == 0) {
          bVar13 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                            "Failed to receive message from service: 0x%x",iVar3);
        }
      }
      if ((bVar13 != 0) && (4 < _gSZDefaultLogLevel)) {
        __SZLog(5,"_MonitorResultDispatchFunction",0x7b,&cf_Failedtoreceivemessagefromservice_0x_x,
                iVar3);
      }
LAB_0009819c:
      if (local_38 != 0) {
        _CFRelease();
      }
      local_38 = 0;
      _dispatch_semaphore_signal((dispatch_semaphore_t)param_1[6]);
      return;
    }
    if (local_38 == 0) {
LAB_00097ead:
      bVar13 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar3 == 0) {
          bVar13 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                            "AMDServiceConnectionReceiveMessage returned success but NULL message");
        }
      }
      if ((bVar13 != 0) && (4 < _gSZDefaultLogLevel)) {
        pcVar12 = &cf_AMDServiceConnectionReceiveMessagereturnedsuccessbutNULLmessage;
        uVar11 = 0x9d;
LAB_00098141:
        __SZLog(5,"_MonitorResultDispatchFunction",uVar11,pcVar12);
      }
LAB_00098148:
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined4 *)((long)param_1 + 0x14) = 0xe8000006;
      goto LAB_0009819c;
    }
    lVar6 = _CFGetTypeID();
    lVar7 = _CFDictionaryGetTypeID();
    if (lVar6 != lVar7) {
      if (local_38 == 0) goto LAB_00097ead;
      bVar13 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar3 == 0) {
          bVar13 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                            "Got non-dictionary response from service");
        }
      }
      if ((bVar13 != 0) && (4 < _gSZDefaultLogLevel)) {
        pcVar12 = &cf_Gotnon_dictionaryresponsefromservice;
        uVar11 = 0x9f;
        goto LAB_00098141;
      }
      goto LAB_00098148;
    }
    lVar6 = _CFDictionaryGetValue(local_38,&cf_Status);
    lVar7 = _CFDictionaryGetValue(local_38,&cf_Error);
    lVar8 = _CFDictionaryGetValue(local_38,&cf_InstallProgressDict);
    if (lVar8 != 0) {
      lVar9 = _CFDictionaryGetTypeID();
      lVar10 = _CFGetTypeID(lVar8);
      if (lVar9 == lVar10) {
        uVar4 = _AMDErrorForMobileInstallationCallbackDict(lVar8);
        *(undefined4 *)((long)param_1 + 0x14) = uVar4;
        if ((code *)param_1[5] != (code *)0x0) {
          (*(code *)param_1[5])(lVar8,param_1[3]);
        }
      }
    }
    if (lVar7 != 0) {
      bVar13 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar3 == 0) {
          bVar13 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,"Got error from service: %@",lVar7);
        }
      }
      if ((bVar13 != 0) && (4 < _gSZDefaultLogLevel)) {
        __SZLog(5,"_MonitorResultDispatchFunction",0x8d,&cf_Goterrorfromservice___,lVar7);
      }
      *(undefined1 *)(param_1 + 2) = 1;
      if (*(int *)((long)param_1 + 0x14) == 0) {
        cVar2 = _CFEqual(lVar7,&cf_InstallationFailed);
        if (cVar2 == '\0') {
          cVar2 = _CFEqual(lVar7,&cf_InstallationProhibited);
          uVar4 = 0xe8000097;
          if (cVar2 == '\0') {
            cVar2 = _CFEqual(lVar7,&cf_AppQuotaExceeded);
            uVar4 = 0xe80000db;
            if (cVar2 == '\0') {
              cVar2 = _CFEqual(lVar7,&cf_NoSocket);
              if (cVar2 == '\0') {
                cVar2 = _CFEqual(lVar7,&cf_SetupFailed);
                if (cVar2 == '\0') {
                  cVar2 = _CFEqual(lVar7,&cf_NoInitialMessage);
                  uVar4 = 0xe8000007;
                  if (cVar2 == '\0') {
                    cVar2 = _CFEqual(lVar7,&cf_MalformedSetupMessage);
                    uVar4 = 0xe8000006;
                    if (cVar2 == '\0') {
                      cVar2 = _CFEqual(lVar7,&cf_InvalidPath);
                      uVar4 = 0xe8000007;
                      if (cVar2 == '\0') {
                        cVar2 = _CFEqual(lVar7,&cf_DestinationExists);
                        uVar4 = 0xe8000010;
                        if (cVar2 == '\0') {
                          cVar2 = _CFEqual(lVar7,&cf_ExtractionFailed);
                          uVar4 = 0xe8000005;
                          if (cVar2 == '\0') {
                            cVar2 = _CFEqual(lVar7,&cf_NoSpace);
                            uVar4 = 0xe80000c0;
                            if (cVar2 == '\0') {
                              bVar13 = _gSZLogToSyslog ^ 1;
                              if (_gSZLogToSyslog == 1) {
                                iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
                                if (iVar3 == 0) {
                                  bVar13 = 1;
                                }
                                else {
                                  if (_SZGetLoggingHandle_onceToken != -1) {
                                    _dispatch_once(&_SZGetLoggingHandle_onceToken,
                                                   &___block_literal_global);
                                  }
                                  puVar1 = _SZGetLoggingHandle_logHandle;
                                  uVar11 = _CFStringGetCStringPtr(lVar7,0x8000100);
                                  __os_log_internal(0,puVar1,0,"Got unknown error: %s",uVar11);
                                }
                              }
                              if ((bVar13 != 0) && (4 < _gSZDefaultLogLevel)) {
                                uVar11 = _CFStringGetCStringPtr(lVar7,0x8000100);
                                __SZLog(5,"_OurErrorStringToAMDError",0x6d,&cf_Gotunknownerror__s,
                                        uVar11);
                              }
                              goto LAB_00098113;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_0009818e;
                }
              }
LAB_00098113:
              uVar4 = 0xe8000001;
            }
          }
        }
        else {
          bVar13 = _gSZLogToSyslog ^ 1;
          if (_gSZLogToSyslog == 1) {
            iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
            if (iVar3 == 0) {
              bVar13 = 1;
            }
            else {
              if (_SZGetLoggingHandle_onceToken != -1) {
                _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
              }
              __os_log_internal(0,_SZGetLoggingHandle_logHandle,0,
                                "Unexpectedly called from kErrorInstallationFailed; returning write error"
                               );
            }
          }
          uVar4 = 0xe8000005;
          if ((bVar13 != 0) && (4 < _gSZDefaultLogLevel)) {
            __SZLog(5,"_OurErrorStringToAMDError",0x56,
                    &cf_UnexpectedlycalledfromkErrorInstallationFailed_returningwriteerror);
          }
        }
LAB_0009818e:
        *(undefined4 *)((long)param_1 + 0x14) = uVar4;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_0009819c;
    }
    if (lVar6 != 0) {
      lVar6 = _CFStringCompare(lVar6,&cf_DataComplete,0);
      if (lVar6 == 0) {
        *(undefined1 *)(param_1 + 2) = 1;
        *(undefined4 *)((long)param_1 + 0x14) = 0;
        goto LAB_0009819c;
      }
    }
    if (local_38 != 0) {
      _CFRelease();
    }
  } while( true );
}

