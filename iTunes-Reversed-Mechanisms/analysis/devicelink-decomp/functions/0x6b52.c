// rea decompile_all
// name: __DLHandleIncomingMessage
// address: 0x6b52
// body: available
// range: 0x6b52-0x7631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6e0d to 0x31ee _DLDisconnect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x6ed6 to 0x209c __DLRequestRead (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x715d to 0x78c1 __DLMoveItemsOnComputer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x71cb to 0x76c6 __DLUpdateProgress (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7291 to 0xecff _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7355 to 0x7711 __DLRemoveItemsOnComputer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b3 to 0x7a62 __DLUploadFilesToComputer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7540 to 0x7c9d __DLDownloadFilesFromComputer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7569 to 0x798f __DLCopyItemOnComputer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a4 to 0x7d4a __DLGetFreeDiskSpaceFromComputer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e1 to 0xa79e __DLLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x762d to 0x7eca __DLPurgeDiskSpaceOnComputer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable bod
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void __DLHandleIncomingMessage
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  cfstringStruct *pcVar11;
  undefined1 auVar12 [16];
  int local_44;
  long local_40;
  undefined8 local_38;
  
  uVar3 = _CFArrayGetCount(param_2);
  if ((long)uVar3 < 1) {
    return;
  }
  lVar4 = _CFArrayGetValueAtIndex(param_2,0);
  if (_sSaveCallHistory == '\x01') {
    __DLCallHistoryMain(&cf_HandleIncomingMessage,lVar4);
  }
  if ((lVar4 == 0) && (cVar1 = _DLShouldLog(4), cVar1 != '\0')) {
    param_4 = 0x16890;
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLHandleIncomingMessage",4);
  }
  lVar5 = _CFStringCompare(lVar4,&cf_DLMessageDeviceReady,0);
  if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00006e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x58))(param_1);
    return;
  }
  lVar5 = _CFStringCompare(lVar4,&cf_DLMessageDisconnect,0);
  if (lVar5 == 0) {
    __DLCleanupStreamHandler(param_1);
    if (uVar3 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 0x20);
LAB_00006e86:
                    /* WARNING: Could not recover jumptable at 0x00006e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar9);
    return;
  }
  lVar5 = _CFStringCompare(lVar4,&cf_DLMessageProcessMessage,0);
  if (lVar5 == 0) {
    if (uVar3 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 0x30);
    goto LAB_00006e86;
  }
  lVar5 = _CFStringCompare(lVar4,&cf_DLMessagePing,0);
  if (lVar5 == 0) {
    if (uVar3 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x38))(param_1,uVar9);
    __DLRequestRead(param_1);
    return;
  }
  lVar5 = _CFStringCompare(lVar4,&cf_DLRequestFile,0);
  if (lVar5 != 0) {
    lVar5 = _CFStringCompare(lVar4,&cf_DLSendFile,0);
    if (lVar5 == 0) {
      if (uVar3 == 1) {
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
        if (2 < uVar3) {
          uVar10 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
        }
      }
      (**(code **)(*(long *)(param_1 + 0x28) + 0x48))(param_1,uVar9,uVar10);
      local_44 = 0;
      uVar9 = _CFDictionaryGetValue(uVar10,&cf_DLFileStatusKey);
      _CFNumberGetValue(uVar9,9,&local_44);
      if (local_44 != 1) {
        return;
      }
      if (_sSaveCallHistory == '\x01') {
        __DLCallHistoryAddEntry(&cf_WaitForMessage);
      }
      __DLRequestRead(param_1);
      return;
    }
    lVar5 = _CFStringCompare(lVar4,&cf_DLMessageCreateDirectory,0);
    if (lVar5 == 0) {
      lVar4 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
      __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
      lVar5 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
      if (lVar5 != 0 && lVar4 != 0) {
        __DLCreateDirectoryOnComputer(param_1,lVar4);
LAB_000071b7:
        __DLUpdateProgress(param_1,lVar5);
        return;
      }
      cVar1 = _DLShouldLog(4);
      if (cVar1 == '\0') {
        return;
      }
      pcVar11 = &cf_CreateDirectorymessagereceivedwithtoofewcomponents;
    }
    else {
      lVar5 = _CFStringCompare(lVar4,&cf_DLMessageRemoveDirectory,0);
      if (lVar5 == 0) {
        lVar4 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
        local_40 = lVar4;
        uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
        lVar5 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
        if (lVar5 == 0 || lVar4 == 0) {
          cVar1 = _DLShouldLog(4);
          if (cVar1 == '\0') {
            return;
          }
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"_DLHandleIncomingMessage",4,
                  &cf_RemoveDirectorymessagereceivedwithtoofewcomponents);
          return;
        }
        lVar4 = _CFArrayCreate(0,&local_40,1,PTR__kCFTypeArrayCallBacks_00015048);
        __DLRemoveItemsOnComputer(param_1,lVar4,uVar9,*(undefined8 *)(param_1 + 0xa0),lVar5);
        if (lVar4 == 0) {
          return;
        }
        _CFRelease(lVar4);
        return;
      }
      lVar5 = _CFStringCompare(lVar4,&cf_DLContentsOfDirectory,0);
      if (lVar5 == 0) {
        lVar4 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
        __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
        lVar5 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
        if (lVar5 != 0 && lVar4 != 0) {
          __DLContentsOfDirectoryOnComputer(param_1,lVar4);
          goto LAB_000071b7;
        }
        cVar1 = _DLShouldLog(4);
        if (cVar1 == '\0') {
          return;
        }
        pcVar11 = &cf_ContentsOfDirectorymessagereceivedwithtoofewcomponents;
      }
      else {
        lVar5 = _CFStringCompare(lVar4,&cf_DLMessageMoveFiles,0);
        if ((lVar5 == 0) || (lVar5 = _CFStringCompare(lVar4,&cf_DLMessageMoveItems,0), lVar5 == 0))
        {
          lVar4 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
          uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
          lVar5 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
          if (lVar5 != 0 && lVar4 != 0) {
            __DLMoveItemsOnComputer(param_1,lVar4,uVar9,*(undefined8 *)(param_1 + 0xa0),lVar5);
            return;
          }
          cVar1 = _DLShouldLog(4);
          if (cVar1 == '\0') {
            return;
          }
          pcVar11 = &cf_MoveItemsmessagereceivedwithtoofewcomponents;
        }
        else {
          lVar5 = _CFStringCompare(lVar4,&cf_DLMessageRemoveFiles,0);
          if ((lVar5 == 0) ||
             (lVar5 = _CFStringCompare(lVar4,&cf_DLMessageRemoveItems,0), lVar5 == 0)) {
            lVar4 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
            uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
            lVar5 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
            if (lVar5 != 0 && lVar4 != 0) {
              __DLRemoveItemsOnComputer(param_1,lVar4,uVar9,*(undefined8 *)(param_1 + 0xa0),lVar5);
              return;
            }
            cVar1 = _DLShouldLog(4);
            if (cVar1 == '\0') {
              return;
            }
            pcVar11 = &cf_RemoveItemsmessagereceivedwithtoofewcomponents;
          }
          else {
            lVar5 = _CFStringCompare(lVar4,&cf_DLMessageCopyItem,0);
            if (lVar5 == 0) {
              uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
              uVar10 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
              __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
              uVar6 = __DLGetParameterAtIndexWithDefaultValue(param_2,4,0);
              uVar7 = __DLGetParameterAtIndexWithDefaultValue(param_2,5,0);
              auVar12._0_4_ = -(uint)((int)((ulong)uVar9 >> 0x20) == 0 && (int)uVar9 == 0);
              auVar12._4_4_ = -(uint)((int)uVar10 == 0 && (int)((ulong)uVar10 >> 0x20) == 0);
              auVar12._8_4_ = -(uint)((int)((ulong)uVar6 >> 0x20) == 0 && (int)uVar6 == 0);
              auVar12._12_4_ = -(uint)((int)uVar7 == 0 && (int)((ulong)uVar7 >> 0x20) == 0);
              iVar2 = movmskps(param_4,auVar12);
              if (iVar2 == 0) {
                __DLCopyItemOnComputer
                          (param_1,uVar9,uVar10,*(undefined8 *)(param_1 + 0xa0),uVar6,uVar7);
                return;
              }
              cVar1 = _DLShouldLog(4);
              if (cVar1 == '\0') {
                return;
              }
              pcVar11 = &cf_CopyItemmessagereceivedwithtoofewcomponents;
            }
            else {
              lVar5 = _CFStringCompare(lVar4,&cf_DLMessageUploadFiles,0);
              if (lVar5 == 0) {
                uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
                lVar4 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
                lVar5 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
                if (lVar5 != 0 && lVar4 != 0) {
                  __DLUploadFilesToComputer
                            (param_1,uVar9,*(undefined8 *)(param_1 + 0xa0),lVar4,lVar5);
                  return;
                }
                cVar1 = _DLShouldLog(4);
                if (cVar1 == '\0') {
                  return;
                }
                pcVar11 = &cf_UploadFilesmessagereceivedwithtoofewcomponents;
              }
              else {
                lVar5 = _CFStringCompare(lVar4,&cf_DLMessageDownloadFiles,0);
                if (lVar5 != 0) {
                  lVar5 = _CFStringCompare(lVar4,&cf_DLMessageGetFreeDiskSpace,0);
                  if (lVar5 == 0) {
                    __DLGetFreeDiskSpaceFromComputer(param_1);
                    return;
                  }
                  lVar4 = _CFStringCompare(lVar4,&cf_DLMessagePurgeDiskSpace,0);
                  if (lVar4 != 0) {
                    if ((*(code **)(param_1 + 0x18) != (code *)0x0) &&
                       (iVar2 = (**(code **)(param_1 + 0x18))(param_1,param_2), iVar2 == 0)) {
                      return;
                    }
                    cVar1 = _DLShouldLog(4);
                    if (cVar1 != '\0') {
                      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                              ,"_DLHandleIncomingMessage",4,
                              &cf_HandleIncomingMessagecalledwithunknownmessage___,param_2);
                    }
                    _DLDisconnect(param_1,&cf_UnknownMessageReceived);
                    return;
                  }
                  uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
                  uVar10 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
                  __DLPurgeDiskSpaceOnComputer(param_1,uVar9,uVar10);
                  return;
                }
                lVar4 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
                uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
                lVar5 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
                lVar8 = __DLGetParameterAtIndexWithDefaultValue(param_2,4,0);
                if (lVar8 != 0 && (lVar5 != 0 && lVar4 != 0)) {
                  __DLDownloadFilesFromComputer
                            (param_1,lVar4,uVar9,*(undefined8 *)(param_1 + 0xa0),lVar5,lVar8);
                  return;
                }
                cVar1 = _DLShouldLog(4);
                if (cVar1 == '\0') {
                  return;
                }
                pcVar11 = &cf_DownloadFilesmessagereceivedwithtoofewcomponents;
              }
            }
          }
        }
      }
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLHandleIncomingMessage",4,pcVar11);
    return;
  }
  if (uVar3 == 1) {
    lVar4 = 0;
    uVar9 = 0;
    goto LAB_0000726a;
  }
  lVar4 = 0;
  uVar9 = __DLGetParameterAtIndexWithDefaultValue(param_2,1,0);
  if (uVar3 < 3) goto LAB_0000726a;
  local_38 = uVar9;
  lVar5 = __DLGetParameterAtIndexWithDefaultValue(param_2,2,0);
  if (uVar3 == 3) {
    if (lVar5 == 0) {
      lVar4 = 0;
      uVar9 = local_38;
      goto LAB_0000726a;
    }
LAB_00007232:
    lVar4 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                       PTR__kCFTypeDictionaryValueCallBacks_00015058);
  }
  else {
    lVar4 = 0;
    lVar8 = __DLGetParameterAtIndexWithDefaultValue(param_2,3,0);
    uVar9 = local_38;
    if (lVar5 == 0) goto LAB_0000726a;
    if (lVar8 == 0) goto LAB_00007232;
    lVar4 = _CFDictionaryCreateMutableCopy(0,0,lVar8);
  }
  _CFDictionarySetValue(lVar4,&cf_DLFileDest,lVar5);
  uVar9 = local_38;
LAB_0000726a:
  (**(code **)(*(long *)(param_1 + 0x28) + 0x40))(param_1,uVar9,lVar4);
  if (lVar4 == 0) {
    return;
  }
  _CFRelease(lVar4);
  return;
}

