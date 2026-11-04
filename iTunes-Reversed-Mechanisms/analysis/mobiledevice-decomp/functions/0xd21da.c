// rea decompile_all
// name: __block_restoreLoop_MessageHandler
// address: 0xd21da
// body: available
// range: 0xd21da-0xd2aa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* __block_restoreLoop_MessageHandler(void*) */

void __block_restoreLoop_MessageHandler(void *param_1)

{
  char *pcVar1;
  __CFString *p_Var2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  __CFError *p_Var10;
  __CFDictionary *p_Var11;
  cfstringStruct *pcVar12;
  undefined8 uVar13;
  cfstringStruct *pcVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  AMRestoreMuxedDeviceMessage *pAVar17;
  dispatch_group_t group;
  __AMRestoreModeDevice *p_Var18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  bool bVar22;
  int local_80;
  int local_7c;
  char *local_78;
  __AMRestoreModeDevice *local_70;
  long local_68;
  __CFString *local_60;
  dispatch_group_t local_58;
  undefined8 *local_50;
  AMRestoreMuxedDeviceMessage *local_48;
  long local_40;
  uint local_34;
  
  local_34 = 0;
  pAVar17 = *(AMRestoreMuxedDeviceMessage **)((long)param_1 + 0x10);
  group = *(dispatch_group_t *)((long)param_1 + 0x20);
  pcVar1 = *(char **)((long)param_1 + 0x38);
  if (*pcVar1 == '\0') {
    p_Var18 = *(__AMRestoreModeDevice **)param_1;
    lVar8 = *(long *)((long)param_1 + 0x18);
    puVar16 = *(undefined8 **)((long)param_1 + 0x28);
    local_78 = pcVar1;
    local_70 = p_Var18;
    local_68 = lVar8;
    local_58 = group;
    local_48 = pAVar17;
    if (lVar8 == 0) {
      local_40 = 0;
      _AMRLog(3,&cf_nomessagetypeinmessagefromdevice);
      _AMRLog(5,&cf_message___,*(undefined8 *)(pAVar17 + 8));
      *puVar16 = &cf_Protocolerror_missingmessagetype;
      local_34 = 10;
      uVar20 = 10;
      group = local_58;
    }
    else {
      p_Var2 = *(__CFString **)((long)param_1 + 0x30);
      local_50 = puVar16;
      lVar7 = _CFStringCompare(lVar8,&cf_ProgressMsg,0);
      if (lVar7 == 0) {
        lVar8 = _CFDictionaryGetValue(*(undefined8 *)(pAVar17 + 8),&cf_Operation);
        if (lVar8 == 0) {
          pcVar12 = &cf_nooperationspecifiedinprogressmessage;
LAB_000d272a:
          _AMRLog(3,pcVar12);
          pcVar12 = &cf_Failedtohandleprogressmessage;
          uVar20 = 10;
        }
        else {
          local_40 = _CFDictionaryGetValue(*(undefined8 *)(pAVar17 + 8),&cf_Progress);
          if (local_40 == 0) {
            pcVar12 = &cf_noprogressvaluespecifiedinprogressmessage;
            goto LAB_000d272a;
          }
          lVar7 = *(long *)(*(long *)(pAVar17 + 0x10) + 0x10);
          if ((*(long *)(lVar7 + 0x30) == 0) &&
             (lVar9 = _CFDictionaryGetValue(*(undefined8 *)(pAVar17 + 8),&cf_OperationWeights),
             lVar9 != 0)) {
            uVar13 = _PRProgressDecodeWeights(lVar9);
            *(undefined8 *)(lVar7 + 0x30) = uVar13;
          }
          local_60 = (__CFString *)
                     _CFDictionaryGetValue(*(undefined8 *)(pAVar17 + 8),&cf_AsyncContextUUID);
          p_Var18 = *(__AMRestoreModeDevice **)(*(long *)(pAVar17 + 0x10) + 0x10);
          uVar20 = 0;
          local_7c = 0;
          _CFNumberGetValue(lVar8,9,&local_7c);
          iVar19 = local_7c;
          local_80 = 0;
          _CFNumberGetValue(local_40,9,&local_80);
          _AMRestoreModeDeviceProgressAsync(p_Var18,iVar19,local_80,local_60);
          pcVar12 = (cfstringStruct *)0x0;
          p_Var18 = local_70;
        }
        local_34 = (uint)uVar20;
        *local_50 = pcVar12;
        local_40 = 0;
        puVar16 = local_50;
        group = local_58;
      }
      else {
        local_60 = p_Var2;
        lVar7 = _CFStringCompare(lVar8,&cf_DataRequestMsg,0);
        if (lVar7 == 0) {
          local_34 = _handleDataRequestMessage(pAVar17,(__CFError **)local_60);
          uVar20 = (ulong)local_34;
          local_40 = 0;
          pcVar12 = (cfstringStruct *)0x0;
          if (local_34 != 0) {
            pcVar12 = &cf_Failedtohandledatarequestmessage;
          }
          *local_50 = pcVar12;
          puVar16 = local_50;
          group = local_58;
          goto LAB_000d275b;
        }
        lVar7 = _CFStringCompare(lVar8,&cf_AsyncDataRequestMsg,0);
        group = local_58;
        if (lVar7 == 0) {
          local_34 = _handleAsyncDataRequestMessage(pAVar17,(__CFError **)local_60);
          uVar20 = (ulong)local_34;
          bVar22 = local_34 == 0;
          pcVar12 = &cf_Failedtohandleasyncdatarequestmessage;
          goto LAB_000d293a;
        }
        lVar7 = _CFStringCompare(lVar8,&cf_BBUpdateStatusMsg,0);
        if (lVar7 == 0) {
          lVar8 = _CFDictionaryGetValue(*(undefined8 *)(pAVar17 + 8),&cf_Accepted);
          pcVar12 = &cf_missingorinvalidacceptedflag;
          if (lVar8 == 0) {
LAB_000d2a79:
            _AMRLog(3,pcVar12);
            local_34 = 10;
            pcVar12 = &cf_Failedtohandlebasebandupdatestatusmessage;
            uVar20 = 10;
            group = local_58;
          }
          else {
            lVar7 = _CFGetTypeID(lVar8);
            lVar9 = _CFBooleanGetTypeID();
            if (lVar7 != lVar9) goto LAB_000d2a79;
            uVar4 = _CFBooleanGetValue(lVar8);
            lVar8 = _CFDictionaryGetValue(*(undefined8 *)(local_48 + 8),&cf_Error);
            group = local_58;
            if (lVar8 != 0) {
              lVar7 = _CFGetTypeID(lVar8);
              lVar9 = _CFDictionaryGetTypeID();
              group = local_58;
              if (lVar7 == lVar9) {
                lVar8 = _copy_decoded_error(lVar8);
                if ((local_60 != (__CFString *)0x0) && (lVar8 != 0)) {
                  lVar7 = _CFErrorGetTypeID();
                  lVar9 = _CFGetTypeID(lVar8);
                  group = local_58;
                  if (lVar7 == lVar9) {
                    p_Var10 = (__CFError *)_CFRetain(lVar8);
                    *(__CFError **)local_60 = p_Var10;
                  }
                }
                _AMSupportSafeRelease(lVar8);
              }
            }
            lVar8 = _CFDictionaryGetValue(*(undefined8 *)(local_48 + 8),&cf_Output);
            if (lVar8 != 0) {
              lVar7 = _CFGetTypeID(lVar8);
              lVar9 = _CFDictionaryGetTypeID();
              group = local_58;
              if (lVar7 != lVar9) {
                pcVar12 = &cf_invalidcommandoutput;
                goto LAB_000d2a79;
              }
            }
            local_34 = _AMRAuthInstallBasebandUpdaterStatus
                                 (*(undefined8 *)
                                   (*(long *)(*(long *)(local_48 + 0x10) + 0x10) + 0x150),uVar4,
                                  lVar8);
            uVar20 = (ulong)local_34;
            pcVar12 = (cfstringStruct *)0x0;
            if (local_34 != 0) {
              pcVar12 = &cf_Failedtohandlebasebandupdatestatusmessage;
            }
          }
          *local_50 = pcVar12;
          local_40 = 0;
          puVar16 = local_50;
          p_Var18 = local_70;
          goto LAB_000d275b;
        }
        lVar7 = _CFStringCompare(lVar8,&cf_ProvisioningInfo,0);
        if (lVar7 == 0) {
          local_34 = _handleProvisioningInfoRequest(pAVar17,(__CFError **)local_60);
          uVar20 = (ulong)local_34;
          bVar22 = local_34 == 0;
          pcVar12 = &cf_FailedtohandleProvisioningInfomessage;
LAB_000d293a:
          pcVar14 = (cfstringStruct *)0x0;
          puVar16 = local_50;
          if (!bVar22) {
            pcVar14 = pcVar12;
          }
        }
        else {
          lVar7 = _CFStringCompare(lVar8,&cf_ProvisioningStatusMsg,0);
          if (lVar7 == 0) {
            local_34 = _handleProvisioningStatus(pAVar17);
            uVar20 = (ulong)local_34;
            bVar22 = local_34 == 0;
            pcVar12 = &cf_Failedtohandleprovisioningstatusmessage;
            goto LAB_000d293a;
          }
          lVar7 = _CFStringCompare(lVar8,&cf_FDRSubmit,0);
          if (lVar7 == 0) {
            local_34 = _handleFDRSubmit(pAVar17);
            uVar20 = (ulong)local_34;
            bVar22 = local_34 == 0;
            pcVar12 = &cf_Failedtohandlefdrsubmitmessage;
            goto LAB_000d293a;
          }
          uVar20 = 0;
          lVar8 = _CFStringCompare(lVar8,&cf_StatusMsg,0);
          if (lVar8 == 0) {
            cVar5 = _handleStatusMessage(local_48,(__CFError **)local_60);
            puVar16 = local_50;
            local_40 = 0;
            if (cVar5 == '\0') {
              uVar20 = _CFErrorGetCode(*(__CFError **)local_60);
              local_34 = (uint)uVar20;
              local_40 = CONCAT71((int7)(uVar20 >> 8),1);
            }
            goto LAB_000d275b;
          }
          lVar8 = _CFStringCompare(local_68,&cf_PreviousRestoreLogMsg,0);
          puVar16 = local_50;
          if (lVar8 == 0) {
            _handlePreviousLogMessage(local_48);
            local_34 = 0;
            *puVar16 = 0;
LAB_000d2a2d:
            uVar20 = 0;
            local_40 = 0;
            goto LAB_000d275b;
          }
          lVar8 = _CFStringCompare(local_68,&cf_CheckpointMsg,0);
          if (lVar8 == 0) {
            _handleCheckpointMessage(local_48);
            goto LAB_000d2a2d;
          }
          lVar8 = _CFStringCompare(local_68,&cf_RestoredCrash,0);
          if (lVar8 == 0) {
            uVar13 = _CFDictionaryGetValue(*(undefined8 *)(local_48 + 8),&cf_RestoredBacktrace);
            _AMRLog(6,&cf_Restoredcrashedwithbacktrace___,uVar13);
            goto LAB_000d2a2d;
          }
          lVar8 = _CFStringCompare(local_68,&cf_AsyncWait,0);
          if (lVar8 == 0) {
            _handleWaitMessage(local_48);
            local_34 = 0;
            goto LAB_000d2a2d;
          }
          lVar8 = _CFStringCompare(local_68,&cf_RestoreAttestation,0);
          if (lVar8 != 0) {
            lVar7 = _CFStringCompare(local_68,&cf_CrashLog,0);
            lVar8 = local_68;
            if (lVar7 != 0) {
              lVar7 = _CFStringCompare(local_68,&cf___Internal_DeviceDisconnect,0);
              if (lVar7 == 0) {
                local_34 = 9;
                *puVar16 = &cf_Failedtoreceivemessagefromdevice_mightbeconnectionproblemwithUSBhost_
                ;
                local_40 = 0;
                _AMRLog(3,&cf___);
                uVar20 = 9;
              }
              else {
                local_40 = 0;
                _AMRLog(3,&cf_unhandledmessagetype____,lVar8);
                local_34 = 10;
                *puVar16 = &cf_Failedtohandleunknownmessagetype;
                uVar20 = 10;
              }
              goto LAB_000d275b;
            }
            _handleCrashLogMessage(local_48);
            goto LAB_000d2a2d;
          }
          local_34 = _handleAttestationMessage(local_48);
          uVar20 = (ulong)local_34;
          pcVar14 = (cfstringStruct *)0x0;
          if (local_34 != 0) {
            pcVar14 = &cf_Failedtohandlerestoreattestationmessage;
          }
        }
        local_40 = 0;
        *puVar16 = pcVar14;
      }
    }
LAB_000d275b:
    iVar19 = (int)uVar20;
    if (p_Var18[0x1c0] != (__AMRestoreModeDevice)0x0) {
      local_34 = 99;
      *puVar16 = &cf_Restorecanceled_;
      _AMRLog(3,&cf___);
      iVar19 = 99;
    }
    pAVar17 = local_48;
    uVar6 = _restore_message_is_final(*(__CFDictionary **)(local_48 + 8));
    if (iVar19 != 0 || (uVar6 & 1) != 0) {
      *local_78 = '\x01';
      uVar13 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      local_50 = param_1;
      p_Var11 = (__CFDictionary *)
                _CFDictionaryCreateMutable
                          (uVar13,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      _CFDictionarySetValue(p_Var11,&cf_MsgType,&cf___Internal_RestoreResult);
      uVar21 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      uVar3 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
      uVar15 = uVar3;
      if ((uVar6 & 1) != 0) {
        uVar15 = uVar21;
      }
      _CFDictionarySetValue(p_Var11,&cf_Done,uVar15);
      if ((char)local_40 != '\0') {
        uVar21 = uVar3;
      }
      _CFDictionarySetValue(p_Var11,&cf_RestoreSucceeded,uVar21);
      lVar8 = _CFNumberCreate(uVar13,9,&local_34);
      if (lVar8 != 0) {
        _CFDictionarySetValue(p_Var11,&cf_Result,lVar8);
        _CFRelease(lVar8);
      }
      if (local_34 != 0) {
        _CFDictionarySetValue(p_Var11,&cf_FailedMessage,local_68);
      }
      _send_internal_message(local_70,p_Var11);
      _CFRelease(p_Var11);
      param_1 = local_50;
      pAVar17 = local_48;
      group = local_58;
    }
  }
  else if (pAVar17 == (AMRestoreMuxedDeviceMessage *)0x0) goto LAB_000d28b6;
  (**(code **)(*(long *)pAVar17 + 8))(pAVar17);
LAB_000d28b6:
  _dispatch_group_leave(group);
  _free(param_1);
  return;
}

