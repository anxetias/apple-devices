// rea decompile_all
// name: _AMDeviceProxyCreateStashBagWithManifest
// address: 0x10acae
// body: available
// range: 0x10acae-0x10b6fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMDeviceProxyCreateStashBagWithManifest(AMDeviceProxy*, __CFData const*, __CFData const*, bool*,
   void (*)(AMDeviceProxy*, AMRestorableOperation, void*), void*) */

undefined8
_AMDeviceProxyCreateStashBagWithManifest
          (AMDeviceProxy *param_1,__CFData *param_2,__CFData *param_3,bool *param_4,
          _func_void_AMDeviceProxy_ptr_AMRestorableOperation_void_ptr *param_5,void *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  undefined7 uVar13;
  undefined7 extraout_var;
  undefined8 uVar12;
  _func_void_AMDeviceProxy_ptr_AMRestorableOperation_void_ptr *p_Var14;
  bool bVar15;
  ulong uVar16;
  uint uVar17;
  byte bVar18;
  long local_68;
  long local_60;
  ulong local_58;
  undefined8 local_50;
  _func_void_AMDeviceProxy_ptr_AMRestorableOperation_void_ptr *local_48;
  long local_40;
  byte local_31;
  
  local_60 = 0;
  local_40 = 0;
  if (param_1 == (AMDeviceProxy *)0x0) {
    pcVar5 = &cf_Can_tcreatestashbagwithaNULLproxy;
    iVar3 = -0x17fffff9;
LAB_0010b493:
    uVar16 = 0;
    local_68 = 0;
    bVar15 = false;
    local_50 = 0;
    bVar18 = 0;
LAB_0010b359:
    uVar12 = _AMRCreateErrorWithDomain
                       (pcVar5,(long)iVar3,&cf_com_apple_MobileDevice_MobileRestore,0);
    local_31 = bVar18;
LAB_0010b382:
    if (pcVar5 != (cfstringStruct *)0x0) {
LAB_0010b387:
      _AMRSafeLog(3,&cf___,pcVar5);
      _CFRelease(pcVar5);
    }
    if (local_60 != 0) {
      _CFRelease();
    }
    if ((local_31 & 1) != 0) {
      _AMDeviceStopSession(local_68);
    }
    if ((char)local_50 == '\0') goto LAB_0010b3d2;
  }
  else {
    iVar2 = __AMDeviceProxyGetState();
    iVar3 = 4000;
    if (iVar2 != 4) {
      pcVar5 = &cf_CannotcommitstashbagunlessthedeviceisinthebootedOS;
      goto LAB_0010b493;
    }
    local_68 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    if (local_68 == 0) {
      pcVar5 = &cf_FailedtogetAMDevice;
      uVar16 = 0;
      local_68 = 0;
      local_50 = 0;
      bVar18 = 0;
      goto LAB_0010b670;
    }
    local_48 = param_5;
    iVar3 = _AMDeviceConnect(local_68);
    if (iVar3 != 0) {
      lVar6 = _AMDCopyErrorText(iVar3);
      pcVar5 = (cfstringStruct *)
               _CFStringCreateWithFormat(0,0,&cf__________d_,&cf_AMDeviceConnectfailed,lVar6,iVar3);
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      local_50 = 0;
      uVar16 = 0;
      bVar18 = 0;
LAB_0010b474:
      bVar15 = false;
      goto LAB_0010b359;
    }
    uVar16 = 0;
    uVar4 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    local_50 = CONCAT71((int7)(uVar4 >> 8),1);
    if (uVar4 == 0) {
      pcVar5 = &cf_failedtoallocateoptions;
      bVar15 = false;
      iVar3 = 0xfa2;
      bVar18 = 0;
      goto LAB_0010b359;
    }
    _CFDictionarySetValue(uVar4,&cf_UnlockEscrowBag,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
    iVar3 = _AMDeviceSecureStartService(local_68,&cf_com_apple_preboardservice_v2,uVar4,&local_60);
    local_31 = iVar3 == -0x17ffffe6;
    uVar16 = uVar4;
    if ((bool)local_31) {
      uVar17 = 0;
      local_58 = uVar4;
      _AMRLog(6,&
                cf_Couldn_tstartpreboardservice_devicewasnotunlockedsinceboot_sendingunlockdevicenotificationandtryingagainfortwominutes_0x_x
              ,0xe800001a);
      if (local_48 != (_func_void_AMDeviceProxy_ptr_AMRestorableOperation_void_ptr *)0x0) {
        (*local_48)(param_1,0xd3,param_6);
      }
      bVar18 = 0;
      do {
        _AMDeviceDisconnect(local_68);
        _sleep(1);
        iVar3 = _AMDeviceConnect(local_68);
        if (iVar3 != 0) {
          lVar6 = _AMDCopyErrorText(iVar3);
          pcVar5 = &cf_AMDeviceConnectfailed;
LAB_0010b443:
          pcVar5 = (cfstringStruct *)
                   _CFStringCreateWithFormat(0,0,&cf__________d_,pcVar5,lVar6,iVar3);
          uVar16 = local_58;
          if (lVar6 != 0) {
            _CFRelease(lVar6);
            uVar16 = local_58;
          }
          goto LAB_0010b474;
        }
        iVar3 = _AMDeviceStartSession(local_68);
        if (iVar3 != 0) {
          lVar6 = _AMDCopyErrorText(iVar3);
          pcVar5 = &cf_AMDeviceStartSessionfailed;
          goto LAB_0010b443;
        }
        iVar3 = _AMDeviceSecureStartService
                          (local_68,&cf_com_apple_preboardservice_v2,local_58,&local_60);
        if (0x76 < uVar17) break;
        uVar17 = uVar17 + 1;
        bVar18 = 1;
      } while (iVar3 == -0x17ffffe6);
      uVar16 = local_58;
      if (local_48 != (_func_void_AMDeviceProxy_ptr_AMRestorableOperation_void_ptr *)0x0) {
        (*local_48)(param_1,0xd4,param_6);
        uVar16 = local_58;
      }
    }
    if (iVar3 == 0) {
      _AMRLog(6,&cf_ConnectedtoPreboardServicev2);
      lVar6 = _CFDictionaryCreateMutable
                        (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar6 != 0) {
        _CFDictionarySetValue(lVar6,&cf_Command,&cf_CreateStashbag);
        if (param_2 != (__CFData *)0x0) {
          _CFDictionarySetValue(lVar6,&cf_Manifest);
        }
        if (param_3 != (__CFData *)0x0) {
          _CFDictionarySetValue(lVar6,&cf_DevicePasscodeData,param_3);
        }
        iVar3 = _AMDServiceConnectionSendMessage(local_60,lVar6,100);
        if (iVar3 == 0) {
          _CFRelease(lVar6);
          goto LAB_0010afbf;
        }
        lVar6 = _AMDCopyErrorText(iVar3);
        pcVar5 = &cf_AMDServiceConnectionSendMessagefailed;
        goto LAB_0010b61f;
      }
      pcVar5 = &cf_failedtoallocatemessagedict;
      iVar3 = 0xfa2;
      bVar15 = false;
      bVar18 = local_31;
      goto LAB_0010b359;
    }
    _AMRLog(6,&cf_Couldn_tconnecttopreboardservicev2_deviceislikelyrunninganolderOS_0x_x,iVar3);
    iVar3 = _AMDeviceStartSession(local_68);
    if (iVar3 != 0) {
      lVar6 = _AMDCopyErrorText(iVar3);
      pcVar5 = &cf_AMDeviceStartSessionfailed;
LAB_0010b61f:
      pcVar5 = (cfstringStruct *)_CFStringCreateWithFormat(0,0,&cf__________d_,pcVar5,lVar6,iVar3);
      bVar18 = local_31;
      if (lVar6 != 0) {
        _CFRelease(lVar6);
        bVar18 = local_31;
      }
      goto LAB_0010b474;
    }
    _CFDictionarySetValue(uVar16,&cf_UnlockEscrowBag,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
    iVar3 = _AMDeviceSecureStartService(local_68,&cf_com_apple_preboardservice,uVar16,&local_60);
    _AMRLog(6,&cf_Got0x_xresultfromstartingv1service,iVar3);
    local_31 = 1;
    if (iVar3 != 0) {
      bVar15 = false;
      pcVar5 = (cfstringStruct *)
               _CFStringCreateWithFormat
                         (0,0,&cf__________d_,&cf_AMDeviceSecureStartServicefailed,0,0xfa3);
      iVar3 = 0xfa3;
      local_50 = CONCAT71((int7)((ulong)pcVar5 >> 8),1);
      bVar18 = 1;
      goto LAB_0010b359;
    }
LAB_0010afbf:
    iVar3 = _AMDServiceConnectionReceiveMessage(local_60,&local_40,0);
    if (iVar3 != 0) {
      lVar6 = _AMDCopyErrorText(iVar3);
      pcVar5 = &cf_failedtoreceivemessageafterservicestartup;
      goto LAB_0010b61f;
    }
    lVar6 = _CFDictionaryGetValue(local_40,&cf_Skip);
    if (lVar6 == 0) {
LAB_0010b048:
      lVar6 = _CFDictionaryGetValue(local_40,&cf_Error);
      if ((lVar6 != 0) && (cVar1 = _CFBooleanGetValue(lVar6), cVar1 != '\0')) {
        uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar9 = _CFDictionaryGetValue(local_40,&cf_ErrorString);
        bVar15 = false;
        pcVar5 = (cfstringStruct *)
                 _CFStringCreateWithFormat
                           (uVar12,0,&cf_Deviceerrorwhilestartingstashbagcreate___,uVar9);
        iVar3 = 0xfa3;
        bVar18 = local_31;
        goto LAB_0010b359;
      }
      lVar6 = _CFDictionaryGetValue(local_40,&cf_ShowDialog);
      if (lVar6 != 0) {
        lVar7 = _CFGetTypeID(lVar6);
        lVar8 = _CFBooleanGetTypeID();
        if (lVar7 == lVar8) {
          cVar1 = _CFBooleanGetValue(lVar6);
          if (cVar1 == '\x01') {
            if (local_48 != (_func_void_AMDeviceProxy_ptr_AMRestorableOperation_void_ptr *)0x0) {
              (*local_48)(param_1,0xd3,param_6);
            }
            _AMRSafeLog(5,&cf_Waitingfordevicetobeunlocked);
            goto LAB_0010b115;
          }
          pcVar5 = &cf_PreboardServicefailedtoinitiatethecreatestashbagoperation_noerrorreturned;
          bVar18 = local_31;
        }
        else {
          pcVar5 = &cf_ShowDialogkeyisofaninvalidtype;
          bVar18 = local_31;
        }
LAB_0010b670:
        bVar15 = false;
        iVar3 = 4000;
        goto LAB_0010b359;
      }
LAB_0010b115:
      lVar7 = _CFDictionaryGetValue(local_40,&cf_StashCreatingWithPasscode);
      if (lVar7 != 0) {
        pcVar5 = (cfstringStruct *)_CFGetTypeID(lVar7);
        pcVar10 = (cfstringStruct *)_CFBooleanGetTypeID();
        if (pcVar5 != pcVar10) {
          pcVar5 = &cf_StashCreatingWithPasscodekeyisofaninvalidtype;
LAB_0010b6a7:
          uVar4 = 4000;
          goto LAB_0010b1f6;
        }
        pcVar10 = (cfstringStruct *)_CFBooleanGetValue(lVar7);
        if ((char)pcVar10 == '\x01') {
          _AMRSafeLog(5,&cf_Creatingstashwithdevicepasscodefoundinrestoreoptions);
          goto LAB_0010b16e;
        }
        pcVar5 = &cf_PreboardServicefailedtoinitiatethecreatestashbagoperation_noerrorreturned;
        bVar15 = false;
        uVar4 = 4000;
        p_Var14 = local_48;
LAB_0010b309:
        iVar3 = (int)uVar4;
        uVar13 = (undefined7)((ulong)pcVar10 >> 8);
        if (p_Var14 != (_func_void_AMDeviceProxy_ptr_AMRestorableOperation_void_ptr *)0x0 &&
            lVar6 != 0) {
          (*p_Var14)(param_1,0xd4,param_6);
          uVar13 = extraout_var;
        }
        local_50 = CONCAT71(uVar13,1);
        bVar18 = local_31;
        if (iVar3 != 0) goto LAB_0010b359;
        uVar12 = 0;
        goto LAB_0010b382;
      }
LAB_0010b16e:
      if (local_40 != 0) {
        _CFRelease();
      }
      local_40 = 0;
      uVar17 = _AMDServiceConnectionReceiveMessage(local_60,&local_40,0);
      if (uVar17 != 0) {
        lVar7 = _AMDCopyErrorText(uVar17);
        local_58 = (ulong)uVar17;
        pcVar5 = (cfstringStruct *)
                 _CFStringCreateWithFormat
                           (0,0,&cf__________d_,&cf_failedtoreceivemessageafterdeviceunlock,lVar7,
                            (ulong)uVar17);
        if (lVar7 == 0) {
          bVar15 = false;
          pcVar10 = pcVar5;
          uVar4 = local_58;
          p_Var14 = local_48;
        }
        else {
          pcVar10 = (cfstringStruct *)_CFRelease(lVar7);
          bVar15 = false;
          uVar4 = local_58;
          p_Var14 = local_48;
        }
        goto LAB_0010b309;
      }
      lVar7 = _CFDictionaryGetValue(local_40,&cf_Error);
      if ((lVar7 != 0) && (cVar1 = _CFBooleanGetValue(lVar7), cVar1 != '\0')) {
        uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar9 = _CFDictionaryGetValue(local_40,&cf_ErrorString);
        pcVar10 = (cfstringStruct *)
                  _CFStringCreateWithFormat(uVar12,0,&cf_Deviceerrorwhilewaitingforunlock___,uVar9);
        uVar4 = 0xfa3;
        pcVar5 = pcVar10;
LAB_0010b1f6:
        bVar15 = false;
        p_Var14 = local_48;
        goto LAB_0010b309;
      }
      pcVar10 = (cfstringStruct *)_CFDictionaryGetValue(local_40,&cf_Timeout);
      if (pcVar10 == *(cfstringStruct **)PTR__kCFBooleanTrue_00441110) {
        pcVar5 = &cf_Devicetimedoutwaitingforunlock;
        goto LAB_0010b6a7;
      }
      if (lVar6 != 0) {
        lVar7 = _CFDictionaryGetValue(local_40,&cf_HideDialog);
        if (lVar7 == 0) {
          pcVar5 = &cf_responsedoesnotcontainHideDialogkey;
          pcVar10 = (cfstringStruct *)0x0;
        }
        else {
          pcVar5 = (cfstringStruct *)_CFGetTypeID(lVar7);
          pcVar10 = (cfstringStruct *)_CFBooleanGetTypeID();
          if (pcVar5 == pcVar10) {
            pcVar10 = (cfstringStruct *)_CFBooleanGetValue(lVar7);
            if ((char)pcVar10 == '\x01') goto LAB_0010b2b8;
            pcVar5 = &cf_PreboardServicefailedtocompletethehideoperationsuccessfully;
          }
          else {
            pcVar5 = &cf_HideDialogkeyisofaninvalidtype;
          }
        }
        uVar4 = 0;
        goto LAB_0010b1f6;
      }
      lVar7 = _CFDictionaryGetValue(local_40,&cf_StashCreatedWithPasscode);
      local_50 = CONCAT71((int7)((ulong)lVar7 >> 8),1);
      if (lVar7 == 0) {
        pcVar5 = &cf_responsedoesnotcontainStashCreatedWithPasscodekey;
      }
      else {
        lVar8 = _CFGetTypeID(lVar7);
        lVar11 = _CFBooleanGetTypeID();
        if (lVar8 == lVar11) {
          cVar1 = _CFBooleanGetValue(lVar7);
          if (cVar1 == '\x01') {
LAB_0010b2b8:
            lVar7 = _CFDictionaryGetValue(local_40,&cf_Version);
            p_Var14 = local_48;
            if (lVar7 == 0) {
              pcVar10 = (cfstringStruct *)_AMRSafeLog(6,&cf_Stashbagcreated_committed);
            }
            else {
              pcVar10 = (cfstringStruct *)
                        _AMRSafeLog(6,&cf_Stashbagcreated_PreboardServiceVersion____,lVar7);
            }
            bVar15 = lVar7 != 0;
            pcVar5 = (cfstringStruct *)0x0;
            uVar4 = 0;
            goto LAB_0010b309;
          }
          pcVar5 = &cf_PreboardServicefailedtosuccessfullycreatestashwithprovidedpasscode;
        }
        else {
          pcVar5 = &cf_StashCreatedWithPasscodekeyisofaninvalidtype;
        }
      }
      uVar12 = 0;
      bVar15 = false;
      goto LAB_0010b387;
    }
    lVar7 = _CFGetTypeID(lVar6);
    lVar8 = _CFBooleanGetTypeID();
    if ((lVar7 != lVar8) || (cVar1 = _CFBooleanGetValue(lVar6), cVar1 != '\x01')) goto LAB_0010b048;
    _AMRSafeLog(6,&cf_Devicedoesnothaveapasscode_skippingpreboardnotification);
    if (local_60 != 0) {
      _CFRelease();
    }
    if (local_31 != 0) {
      _AMDeviceStopSession(local_68);
    }
    uVar12 = 0;
    bVar15 = false;
  }
  _AMDeviceDisconnect(local_68);
LAB_0010b3d2:
  if (local_40 != 0) {
    _CFRelease();
  }
  if (uVar16 != 0) {
    _CFRelease(uVar16);
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return uVar12;
}

