// rea decompile_all
// name: __DLHandlerThreadMessagePortCallback
// address: 0xf5c
// body: available
// range: 0xf5c-0x205d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12f4 to 0x25cf __DLHandlerThreadReadMessage (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2054 to 0xee67 _abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2059 to 0xead7 __DLHandlerThreadMessagePortCallback.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__DLHandlerThreadMessagePortCallback
          (undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  char cVar2;
  CCCryptorStatus CVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  void *key;
  void *iv;
  char *pcVar13;
  cfstringStruct *pcVar14;
  undefined8 uVar15;
  size_t dataOutAvailable;
  size_t sVar16;
  ulong uVar17;
  undefined1 local_d8 [8];
  long local_d0;
  void *local_c8;
  ulong local_c0;
  size_t local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  size_t local_98;
  long local_90;
  size_t local_88;
  FILE *local_80;
  long local_78;
  CCCryptorRef local_70;
  void *local_68;
  char local_5d;
  int local_5c;
  long local_58;
  ulong local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  char local_31;
  
  uVar17 = (ulong)param_2;
  local_40 = (cfstringStruct *)0x0;
  local_48 = (cfstringStruct *)0x0;
  if ((0xf < (int)param_2) && (cVar2 = _DLShouldLog(4), cVar2 != '\0')) {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLHandlerThreadMessagePortCallback",4,
            &cf_Handlerthreadinvokedwithunknownmsgid_dforconnection_p,uVar17,param_4);
  }
  if (param_4 == 0) {
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return 0;
    }
    pcVar14 = &cf_Handlerthreadcan_tgetconnectionfrominfoparameter_justreturning;
    uVar15 = 3;
    goto LAB_00001006;
  }
  if (_sSaveCallHistory == '\x01') {
    if (param_2 < 0x10) {
      pcVar13 = *(char **)(&_sDLMessageStrings + uVar17 * 8);
    }
    else {
      pcVar13 = "(Invalid Message Code)";
    }
    lVar6 = _CFStringCreateWithFormat(0,0,&cf__>Handling_s,pcVar13);
    __DLCallHistoryAddEntry(lVar6);
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
  }
  switch(param_2) {
  case 1:
  case 3:
    _sHandlerThreadConnectionSessionNumber = *(uint *)(param_4 + 4);
    if (*(long *)(param_4 + 0x40) == 0) {
      uVar15 = _CFDictionaryGetValue(*(undefined8 *)(param_4 + 0x78),&cf_DLInfoStreamTypeKey);
      _StreamHandlerForType(uVar15,param_4 + 0x40,&local_40);
    }
    if (param_2 == 1) {
      iVar5 = _StreamHandlerAccept
                        (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x78),&local_40);
      if (iVar5 == 0) {
        cVar2 = __DLCheckVersionForAccept(param_4,&local_48);
        if (cVar2 == '\0') {
          if (local_48 == (cfstringStruct *)0x0) {
            local_48 = (cfstringStruct *)_CFRetain(&cf_Unknownerror);
          }
          uVar7 = __DLCreateMessageDataV(&cf_DLAcceptMessage,1,local_48);
          param_2 = 2;
        }
        else {
          param_2 = 1;
LAB_000013da:
          uVar7 = 0;
        }
LAB_000017a8:
        if (local_48 != (cfstringStruct *)0x0) {
          _CFRelease();
          local_48 = (cfstringStruct *)0x0;
        }
      }
      else {
        cVar2 = _DLShouldLog(3);
        param_2 = 2;
        if (cVar2 == '\0') {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"_DLHandlerThreadMessagePortCallback",3,&cf_Errorcallingaccept___,local_40);
        }
      }
    }
    else {
      if (local_40 != (cfstringStruct *)0x0) {
        _CFRelease();
        local_40 = (cfstringStruct *)0x0;
      }
      iVar5 = _StreamHandlerConnect
                        (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x78),&local_40);
      if (iVar5 == 0) {
        cVar2 = __DLCheckVersionForConnect(param_4,&local_48);
        if (cVar2 != '\0') goto LAB_000013da;
        if (local_48 == (cfstringStruct *)0x0) {
          local_48 = (cfstringStruct *)_CFRetain(&cf_Unknownerror);
        }
        uVar7 = __DLCreateMessageDataV(&cf_DLConnectMessage,1,local_48);
        param_2 = 4;
        goto LAB_000017a8;
      }
      cVar2 = _DLShouldLog(3);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLHandlerThreadMessagePortCallback",3,&cf_Errorcallingconnect___,local_40);
      }
      local_48 = local_40;
      if (iVar5 == -5) {
        local_48 = &cf_DLErrorConnectingLocked;
      }
      uVar7 = __DLCreateMessageDataV(&cf_DLConnectMessage,1);
      param_2 = 4;
    }
    if (local_40 != (cfstringStruct *)0x0) {
      _CFRelease();
      local_40 = (cfstringStruct *)0x0;
    }
    uVar15 = *(undefined8 *)(param_4 + 0x60);
    param_2 = param_2 | _sHandlerThreadConnectionSessionNumber;
    goto LAB_000017ef;
  default:
    cVar2 = _DLShouldLog(3);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLHandlerThreadMessagePortCallback",3,
              &cf_DLHandlerThreadMessagePortCallbackcalledwithanunknownmessage__d,uVar17);
    }
    break;
  case 5:
    uVar7 = __DLHandlerThreadReadMessage(param_4);
    uVar15 = *(undefined8 *)(param_4 + 0x60);
    param_2 = _sHandlerThreadConnectionSessionNumber | 5;
LAB_000017ef:
    __SendMessage(param_4,uVar15,__DLMainThreadMessagePortCallback,param_2,uVar7);
    break;
  case 6:
    __DLHandlerThreadWriteMessage(param_4,param_3);
    break;
  case 7:
  case 8:
    if (*(long *)(param_4 + 0x40) != 0) {
      iVar5 = __DLSendData(*(long *)(param_4 + 0x40),param_3,&local_40);
      if ((iVar5 != 0) && (cVar2 = _DLShouldLog(3), cVar2 != '\0')) {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLHandlerThreadMessagePortCallback",3,&cf_Couldnotsenddisconnectmessage_____,
                local_40);
      }
      if (local_40 != (cfstringStruct *)0x0) {
        _CFRelease();
        local_40 = (cfstringStruct *)0x0;
      }
      __DLCleanupStreamHandler(param_4);
    }
    if (param_2 == 8) {
      if (*(long *)(param_4 + 0x58) != 0) {
        _DLThreadDeleteReceivePort();
      }
      if (*(long *)(param_4 + 0x68) != 0) {
        _DLThreadDeleteSendPort();
      }
      uVar15 = _CFRunLoopGetCurrent();
      _CFRunLoopStop(uVar15);
    }
    if (*(long *)(param_4 + 0x60) == 0) {
      __DLMainThreadMessagePortCallback
                (0,param_2 | _sHandlerThreadConnectionSessionNumber,0,param_4);
    }
    else {
      _DLThreadSendMessage();
    }
    break;
  case 9:
    __DLCleanupStreamHandler(param_4);
    break;
  case 10:
    if (*(long *)(param_4 + 0x40) == 0) {
      cVar2 = _DLShouldLog(4);
      if (cVar2 == '\0') {
        return 0;
      }
      pcVar14 = &cf_RequestFileMessagecalledinHandlerThread_butStreamHandlerisNULL;
LAB_00001432:
      uVar15 = 4;
LAB_00001006:
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLHandlerThreadMessagePortCallback",uVar15,pcVar14);
      return 0;
    }
    lVar10 = _CFPropertyListCreateFromXMLData(0,param_3,0,&local_40);
    uVar15 = __DLGetParameterAtIndexWithDefaultValue(lVar10,1,0);
    uVar7 = __DLGetParameterAtIndexWithDefaultValue(lVar10,2,0);
    lVar6 = __DLGetParameterAtIndexWithDefaultValue(lVar10,3,0);
    if (lVar6 == 0) {
      uVar8 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                         PTR__kCFTypeDictionaryValueCallBacks_00015058);
    }
    else {
      uVar8 = _CFDictionaryCreateMutableCopy(0,0,lVar6);
    }
    _CFDictionarySetValue(uVar8,&cf_DLFileSource,uVar15);
    _CFDictionarySetValue(uVar8,&cf_DLFileDest,uVar7);
    uVar15 = __DLCreateMessageDataV(&cf_DLRequestFile,3,uVar15,uVar7,uVar8);
    __DLSendDataAndDisconnectOnError(param_4,uVar15);
    _CFRelease(uVar15);
    _CFRelease(uVar8);
    goto joined_r0x00002036;
  case 0xb:
    if (*(long *)(param_4 + 0x40) == 0) {
      cVar2 = _DLShouldLog(4);
      if (cVar2 == '\0') {
        return 0;
      }
      pcVar14 = &cf_SendFileMessagecalledinHandlerThread_butStreamHandlerisNULL;
      goto LAB_00001432;
    }
    lVar6 = _CFPropertyListCreateFromXMLData(0,param_3,0,&local_40);
    lVar9 = __DLGetParameterAtIndexWithDefaultValue(lVar6,1,0);
    lVar10 = __DLGetParameterAtIndexWithDefaultValue(lVar6,2,0);
    if (lVar10 == 0) {
      lVar10 = _CFDictionaryCreateMutable
                         (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                          PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                          PTR__kCFTypeDictionaryValueCallBacks_00015058);
    }
    else {
      lVar10 = _CFDictionaryCreateMutableCopy(0,0,lVar10);
    }
    if (lVar9 != 0) {
      _CFDictionarySetValue(lVar10,&cf_DLFileSource,lVar9);
    }
    pcVar13 = (char *)_DLCreateCStringFromCFString(lVar9);
    if (pcVar13 == (char *)0x0) {
      cVar2 = _DLShouldLog(3);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLWriteFile",3,&cf_CouldnotgetfilesystemfilenamefromCFString____,lVar9);
      }
      pcVar14 = &cf_Couldnotgetafilesystemnamefor__;
LAB_00001832:
      bVar1 = false;
      local_40 = (cfstringStruct *)_CFStringCreateWithFormat(0,0,pcVar14,lVar9);
    }
    else {
      local_80 = _fopen(pcVar13,"r");
      if (local_80 == (FILE *)0x0) {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"_DLWriteFile",3,&cf_Couldnotopenfilestreamfromfileat____,lVar9);
        }
        pcVar14 = &cf_Couldnotopenthefilestreamat__;
        goto LAB_00001832;
      }
      _free(pcVar13);
      lVar9 = _DLCopyFileAttributes(lVar9);
      _CFDictionarySetValue(lVar10,&cf_DLFileAttributesKey,lVar9);
      lVar11 = _CFDictionaryGetValue(lVar9,&cf_FileSize);
      if (lVar9 != 0) {
        _CFRelease(lVar9);
      }
      if (lVar11 == 0) {
        bVar1 = false;
      }
      else {
        _CFNumberGetValue(lVar11,9,local_d8);
        piVar12 = ___error();
        *piVar12 = 0;
        local_70 = (CCCryptorRef)0x0;
        local_78 = 0;
        local_a0 = 0;
        local_31 = '\0';
        lVar9 = _CFDictionaryGetValue(lVar10,&cf_DLFileEncryptionKey);
        if (lVar9 == 0) {
LAB_000018cc:
          lVar9 = _CFNumberCreate(0,7,&local_31);
          _CFDictionarySetValue(lVar10,&cf_DLFileIsEncrypted,lVar9);
          if (lVar9 != 0) {
            _CFRelease(lVar9);
          }
          _CFDictionaryRemoveValue(lVar10,&cf_DLFileEncryptionKey);
          local_50 = 0xffffffffffffffff;
          lVar9 = _CFDictionaryGetValue(lVar10,&cf_DLFileAttributesKey);
          if ((lVar9 != 0) && (lVar9 = _CFDictionaryGetValue(lVar9,&cf_FileSize), lVar9 != 0)) {
            _CFNumberGetValue(lVar9,0xb,&local_50);
          }
          if (local_50 == 0xffffffffffffffff) {
            cVar2 = _DLShouldLog(3);
            if (cVar2 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = false;
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                      ,"_DLWriteFileBytes",3,
                      &cf_Couldnotgetthefilesizefromthefileinfodictionary_Refusingtosendthisfile);
            }
          }
          else {
            local_5d = '\0';
            uVar4 = _CFPreferencesGetAppIntegerValue
                              (&cf_ChunkSize,&cf_com_apple_DeviceLink,&local_5d);
            uVar17 = (ulong)(uVar4 & 0x7fffffff);
            if ((int)uVar4 < 1) {
              uVar17 = 0x2000;
            }
            if (local_5d == '\0') {
              uVar17 = 0x2000;
            }
            sVar16 = uVar17 + 0x10;
            if (local_78 != 0) {
              lVar9 = _CFDataGetLength();
              sVar16 = sVar16 + lVar9;
            }
            local_68 = _calloc(1,sVar16);
            if (local_68 == (void *)0x0) {
              cVar2 = _DLShouldLog(3);
              if (cVar2 != '\0') {
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                        ,"_DLWriteFileBytes",3,&cf_Couldnotmalloc_outofmemory_);
              }
              local_40 = (cfstringStruct *)
                         _CFStringCreateWithFormat(0,0,&cf_Couldnotmalloc_outofmemory_);
              goto LAB_00001e44;
            }
            local_58 = 0;
            local_a8 = *(undefined8 *)PTR__kCFAllocatorNull_00015018;
            local_c0 = uVar17;
            local_b8 = sVar16;
            local_b0 = lVar6;
            local_90 = lVar10;
            do {
              uVar17 = local_c0;
              ___bzero(local_68,local_b8);
              lVar6 = local_78;
              if (local_31 == '\x01') {
                lVar9 = 0;
                if (local_58 == 0) {
                  lVar9 = _CFDataGetLength(local_78);
                  uVar17 = local_c0;
                  _CFDataGetBytes(lVar6,0,lVar9,local_68);
                }
              }
              else {
                lVar9 = 0;
              }
              local_c8 = (void *)((long)local_68 + lVar9);
              sVar16 = _fread(local_c8,1,uVar17,local_80);
              if ((sVar16 == 0) && (iVar5 = _feof(local_80), iVar5 == 0)) {
                cVar2 = _DLShouldLog(3);
                if (cVar2 != '\0') {
                  iVar5 = _ferror(local_80);
                  piVar12 = ___error();
                  pcVar13 = _strerror(*piVar12);
                  __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                          ,"_DLWriteFileBytes",3,&cf_Errorwhilereadingfromfile___d__s,iVar5,pcVar13)
                  ;
                }
                lVar6 = local_58;
                piVar12 = ___error();
                pcVar13 = _strerror(*piVar12);
                bVar1 = false;
                local_40 = (cfstringStruct *)
                           _CFStringCreateWithFormat
                                     (0,0,&cf_Couldnotreadfilebytesatoffset_lld__s,lVar6,pcVar13);
                lVar6 = local_b0;
                lVar10 = local_90;
                goto LAB_00001f33;
              }
              local_d0 = lVar9;
              uVar15 = _CFNumberCreate(0,0xb,&local_58);
              lVar6 = local_90;
              _CFDictionarySetValue(local_90,&cf_DLFileOffsetKey,uVar15);
              _CFRelease(uVar15);
              local_5c = (local_50 <= local_58 + sVar16 || sVar16 < uVar17) + 1;
              lVar9 = _CFNumberCreate(0,9,&local_5c);
              _CFDictionarySetValue(lVar6,&cf_DLFileStatusKey,lVar9);
              if (lVar9 != 0) {
                _CFRelease(lVar9);
              }
              lVar6 = local_d0;
              if (local_31 == '\x01') {
                local_88 = 0;
                local_98 = 0;
                dataOutAvailable = local_b8 - local_d0;
                CVar3 = _CCCryptorUpdate(local_70,local_c8,sVar16,local_c8,dataOutAvailable,
                                         &local_88);
                if (CVar3 == 0) {
                  cVar2 = _DLShouldLog(6);
                  if (cVar2 != '\0') {
                    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                            ,"_DLWriteFileBytes",6,&cf__dbytesofdatasuccessfullyencrypted,local_88);
                  }
                }
                else {
                  cVar2 = _DLShouldLog(3);
                  if (cVar2 != '\0') {
                    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                            ,"_DLWriteFileBytes",3,&cf_Therewasanerrorwhileencryptingthefiledata__d,
                            CVar3);
                  }
                }
                if (local_5c == 2) {
                  cVar2 = _DLShouldLog(6);
                  if (cVar2 != '\0') {
                    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                            ,"_DLWriteFileBytes",6,&cf_Finalizingbytes);
                  }
                  CVar3 = _CCCryptorFinal(local_70,(void *)((long)local_c8 + local_88),
                                          dataOutAvailable - local_88,&local_98);
                  if (CVar3 == 0) {
                    cVar2 = _DLShouldLog(6);
                    if (cVar2 != '\0') {
                      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                              ,"_DLWriteFileBytes",6,&cf_Finalized_dbytesofdata,local_98);
                    }
                  }
                  else {
                    if (CVar3 == -0x10cd) {
                    /* WARNING: Subroutine does not return */
                      __DLHandlerThreadMessagePortCallback_cold_1();
                    }
                    cVar2 = _DLShouldLog(3);
                    if (cVar2 != '\0') {
                      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                              ,"_DLWriteFileBytes",3,
                              &cf_Therewasanerrorfinalizingtheencryptedbytes__d,CVar3);
                    }
                  }
                }
                sVar16 = lVar6 + local_88 + local_98;
              }
              lVar6 = _CFDataCreateWithBytesNoCopy(0,local_68,sVar16,local_a8);
              lVar10 = local_90;
              lVar9 = __DLCreateMessageDataV(&cf_DLSendFile,2,lVar6,local_90);
              iVar5 = __DLSendData(*(undefined8 *)(param_4 + 0x40),lVar9,&local_40);
              if (lVar9 != 0) {
                _CFRelease(lVar9);
              }
              if (lVar6 != 0) {
                _CFRelease(lVar6);
              }
              lVar6 = local_b0;
              if (iVar5 != 0) {
                cVar2 = _DLShouldLog(3);
                if (cVar2 != '\0') {
                  __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                          ,"_DLWriteFileBytes",3,&cf_Couldnotsenddata_____,local_40);
                }
                bVar1 = false;
                local_40 = (cfstringStruct *)
                           _CFStringCreateWithFormat(0,0,&cf_Couldnotsenddata___,local_40);
                goto LAB_00001f33;
              }
              uVar17 = local_58 * -0x3333333333333333 + 0x1999999999999998;
              if (((uVar17 >> 1 | (ulong)((uVar17 & 1) != 0) << 0x3f) < 0x1999999999999999) ||
                 (local_5c == 2)) {
                uVar15 = __DLCreateMessageDataV(&cf_DLSendFile,2,0,lVar10);
                __SendMessage(param_4,*(undefined8 *)(param_4 + 0x60),
                              __DLMainThreadMessagePortCallback,
                              _sHandlerThreadConnectionSessionNumber | 0xb,uVar15);
              }
              local_58 = local_58 + local_c0;
            } while ((local_58 == 0) || (local_58 < (long)local_50));
            bVar1 = true;
LAB_00001f33:
            _free(local_68);
          }
        }
        else {
          cVar2 = _DLShouldLog(6);
          if (cVar2 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                    ,"_DLWriteFileBytes",6,
                    &
                    cf_Thecallerhasrequestedthatthisfilebeencryptedbeforesendingit_Startinguptheencryptionengine
                   );
          }
          local_31 = '\x01';
          local_50 = 0;
          local_78 = _createFileAuthBlob(lVar9);
          if (local_78 == 0) {
            cVar2 = _DLShouldLog(3);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                      ,"_DLWriteFileBytes",3,&cf_Couldnotcreateencryptedauthdata);
            }
            if (local_50 != 0) {
              _CFRelease();
            }
          }
          else {
            key = (void *)_CFDataGetBytePtr(local_a0);
            iv = (void *)_CFDataGetBytePtr();
            CVar3 = _CCCryptorCreate(0,0,1,key,0x20,iv,&local_70);
            if (local_50 != 0) {
              _CFRelease();
              local_50 = 0;
            }
            if (CVar3 == 0) {
              cVar2 = _DLShouldLog(6);
              if (cVar2 != '\0') {
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                        ,"_DLWriteFileBytes",6,
                        &
                        cf_Successfullycreatedanencryptor_Hangontoyourinitializationvectors_it_sgoingtobeawildride_
                       );
              }
              goto LAB_000018cc;
            }
            cVar2 = _DLShouldLog(3);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                      ,"_DLWriteFileBytes",3,&cf_Couldnotcreateanencryptor_Refusingtosendthefile);
            }
          }
LAB_00001e44:
          bVar1 = true;
        }
        if (local_70 != (CCCryptorRef)0x0) {
          _CCCryptorRelease(local_70);
        }
        if (local_78 != 0) {
          _CFRelease();
        }
        if (local_a0 != 0) {
          _CFRelease();
        }
      }
      _fclose(local_80);
    }
    if (local_40 != (cfstringStruct *)0x0) {
      _CFDictionarySetValue(lVar10,&cf_DLFileErrorString);
      _CFRelease(local_40);
    }
    if (!bVar1) {
      local_70 = (CCCryptorRef)CONCAT44(local_70._4_4_,3);
      lVar9 = _CFNumberCreate(0,9);
      _CFDictionarySetValue(lVar10,&cf_DLFileStatusKey,lVar9);
      if (lVar9 != 0) {
        _CFRelease(lVar9);
      }
      lVar9 = __DLCreateMessageDataV(&cf_DLSendFile,2,0,lVar10);
      if (lVar9 != 0) {
        _CFRetain(lVar9);
      }
      __SendMessage(param_4,*(undefined8 *)(param_4 + 0x60),__DLMainThreadMessagePortCallback,
                    _sHandlerThreadConnectionSessionNumber | 0xb,lVar9);
      __DLSendDataAndDisconnectOnError(param_4,lVar9);
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
joined_r0x00002036:
    if (lVar10 != 0) {
      _CFRelease(lVar10);
    }
    break;
  case 0xd:
    __DLHandlerThreadWriteMessage(param_4,param_3);
    uVar15 = __DLHandlerThreadReadMessage(param_4);
    return uVar15;
  case 0xe:
  case 0xf:
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  return 0;
}

