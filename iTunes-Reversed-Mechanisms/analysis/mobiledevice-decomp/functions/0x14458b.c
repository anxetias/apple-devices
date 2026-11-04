// rea decompile_all
// name: _AMDeviceCopyFDRPreflightOptions
// address: 0x14458b
// body: available
// range: 0x14458b-0x145161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14515d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceCopyFDRPreflightOptions(undefined8 param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  CC_LONG len;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  void *data;
  uchar *puVar14;
  cfstringStruct *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  char local_5d;
  int local_5c;
  undefined4 local_58;
  uchar uStack_54;
  uchar uStack_53;
  uchar uStack_52;
  uchar uStack_51;
  uchar uStack_50;
  uchar uStack_4f;
  uchar uStack_4e;
  uchar uStack_4d;
  uchar uStack_4c;
  uchar uStack_4b;
  uchar uStack_4a;
  uchar uStack_49;
  uchar local_48;
  uchar uStack_47;
  uchar uStack_46;
  uchar uStack_45;
  uchar uStack_44;
  uchar uStack_43;
  uchar uStack_42;
  uchar uStack_41;
  uchar uStack_40;
  uchar uStack_3f;
  uchar uStack_3e;
  uchar uStack_3d;
  uchar uStack_3c;
  uchar uStack_3b;
  uchar uStack_3a;
  uchar uStack_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_b0 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_5d = '\0';
  if (param_3 == (undefined8 *)0x0) {
    _AMRLog(3,&cf__s_outPreflightOptionsisNULL,"AMDeviceCopyFDRPreflightOptions");
    local_5c = 1;
LAB_0014494f:
    bVar1 = false;
    lVar8 = 0;
    local_78 = 0;
    local_90 = 0;
    lVar5 = 0;
    lVar9 = 0;
    local_70 = 0;
    lVar6 = 0;
    local_68 = 0;
    goto LAB_0014497e;
  }
  if (param_2 == 0) {
    lVar5 = 0;
    goto LAB_001448bd;
  }
  uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar5 = _CFDictionaryCreateMutableCopy(uVar11,0,param_2);
  if (lVar5 == 0) {
    _AMRLog(3,&cf__s_failedtocopyoptions,"AMDeviceCopyFDRPreflightOptions");
    local_5c = 0x12;
    goto LAB_0014494f;
  }
  lVar6 = _CFDictionaryGetValue(lVar5,&cf_SkipFDRPreflight);
  if (lVar6 == 0) {
LAB_001448bd:
    local_68 = 0;
    _AMRLog(3,&cf__s_SkippingFDRpreflight,"AMDeviceCopyFDRPreflightOptions");
    local_5c = 0;
    local_70 = 0;
    lVar9 = 0;
    local_90 = 0;
    local_78 = 0;
    lVar6 = 0;
    lVar8 = 0;
LAB_0014490a:
    if (lVar5 == 0) {
      bVar1 = false;
      lVar5 = 0;
      goto LAB_0014497e;
    }
  }
  else {
    local_98 = uVar11;
    bVar2 = _CFBooleanGetValue(lVar6);
    uVar7 = _CFBooleanGetTypeID();
    if ((uVar7 == bVar2) && (cVar3 = _CFBooleanGetValue(lVar6), cVar3 == '\x01')) goto LAB_001448bd;
    lVar6 = _AMDeviceCreateCopy(param_1);
    local_5c = _AMDeviceConnect(lVar6);
    uVar11 = local_98;
    if (local_5c == 0) {
      iVar4 = _AMDeviceValidatePairing(lVar6);
      if (iVar4 != 0) {
        _AMRLog(5,&cf__s_Devicenotpaired_exit___,"AMDeviceCopyFDRPreflightOptions");
        iVar4 = _AMDevicePairWithCallback(lVar6,0,0,0);
        if (iVar4 != 0) {
          _AMRLog(5,&cf__s_Devicepairfailed_waitingforusertointeractwithdevice,
                  "AMDeviceCopyFDRPreflightOptions");
        }
        local_5c = _AMDeviceValidatePairing(lVar6);
        if (local_5c != 0) {
          pcVar15 = &cf__s_Failedtopairdevice;
          goto LAB_001450c9;
        }
      }
      local_90 = _AMAuthInstallCreate(uVar11);
      if (local_90 == 0) {
        local_5c = 0x12;
        _AMRLog(3,&cf_Cannotcreateamai);
        goto LAB_001450df;
      }
      local_78 = _CFDictionaryCreateMutable
                           (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (local_78 == 0) {
        local_5c = 0x12;
        _AMRLog(3,&cf_CannotcreateapInfo);
        local_78 = 0;
        goto LAB_001450f2;
      }
      lVar8 = _AMDeviceCopyValueWithError(lVar6,0,&cf_Image4Supported,&local_5c);
      if (lVar8 == 0) {
        _AMRLog(3,&cf_CannotgetImage4Supportedfromdevice);
        goto LAB_001450f2;
      }
      lVar9 = _CFGetTypeID(lVar8);
      lVar10 = _CFBooleanGetTypeID();
      if ((lVar9 == lVar10) && (cVar3 = _CFBooleanGetValue(lVar8), cVar3 != '\0')) {
        _CFDictionarySetValue(local_78,&cf_ApSupportsImg4,lVar8);
      }
      lVar9 = local_90;
      local_5c = _AMAuthInstallApSetParameters(local_90,local_78);
      if (local_5c != 0) {
        pcVar15 = &cf_Cannotinstallapparameter;
LAB_001450ae:
        _AMRLog(3,pcVar15);
        goto LAB_00144ae7;
      }
      local_5c = _AMRAuthInstallCopyTicketData(lVar9,lVar5,&local_b0);
      if ((local_5c != 0) || (local_b0 == 0)) {
        pcVar15 = &cf_CannotgetapTicket;
        goto LAB_001450ae;
      }
      lVar9 = _CFDictionaryGetValue(lVar5,&cf_PersonalizedRestoreBundlePath);
      uVar11 = local_98;
      if (lVar9 == 0) {
        _AMRLog(3,&cf__s_cannotfindPersonalizedRestoreBundlePath,"AMDeviceCopyFDRPreflightOptions");
        local_5c = 0x11;
        goto LAB_00144ae7;
      }
      local_70 = _CFURLCreateWithFileSystemPath(local_98,lVar9,0,1);
      local_5c = _AMSupportFileURLExists(local_70,&local_5d);
      if ((local_5c != 0) || (local_5d == '\0')) {
        pcVar15 = &cf__s_Failedtolocatepersonalizedbundlepath;
LAB_0014510a:
        _AMRLog(3,pcVar15,"AMDeviceCopyFDRPreflightOptions");
        goto LAB_00144aef;
      }
      local_5c = _AMDeviceStartSession(lVar6);
      if (local_5c != 0) {
        pcVar15 = &cf__s_FailedtostartsessiontobootedOSdevice;
        goto LAB_0014510a;
      }
      local_88 = lVar8;
      local_5c = _AMDeviceSecureStartService(lVar6,&cf_com_apple_fdrhelper,0,&local_a0);
      if (local_5c != 0) {
        pcVar15 = &cf__s_Failedconnecttofdrhelperservice;
LAB_00144ef8:
        lVar9 = 0;
        _AMRLog(3,pcVar15,"AMDeviceCopyFDRPreflightOptions");
        local_68 = 0;
        lVar8 = local_88;
        goto LAB_0014490f;
      }
      lVar8 = _RPCreateSocksProxyForDeviceRef(lVar6);
      if (lVar8 == 0) {
        _AMRLog(4,&cf_UnabletoconfigureSOCKSproxyfordevice);
      }
      else {
        _AMRLog(5,&cf_Establishedproxyfordevice);
        _RPSocksProxySetDoneCallback(lVar8,__AMRestoreTearDownReverseProxy,0);
        _RPSocksProxyStart(lVar8);
      }
      lVar8 = local_b0;
      lVar9 = _CFDictionaryCreateMutable
                        (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar9 == 0) {
        _AMRLog(3,&cf__s_CannotcreateCFDictionary,"createRequest");
        local_5c = 0x12;
        pcVar15 = &cf__s_Failedtosendmessage;
        goto LAB_00144ef8;
      }
      local_a8 = lVar6;
      _CFDictionarySetValue(lVar9,&cf_Operation,&cf_PerformFDRPreflight);
      _CFDictionarySetValue(lVar9,&cf_ApTicketData,lVar8);
      lVar6 = 0;
      do {
        uVar11 = *(undefined8 *)((long)&DAT_00449850 + lVar6);
        lVar8 = _CFDictionaryGetValue(lVar5,uVar11);
        if (lVar8 != 0) {
          _CFDictionarySetValue(lVar9,uVar11,lVar8);
        }
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x20);
      lVar6 = _CFRetain(lVar9);
      _CFRelease(lVar9);
      local_5c = 0;
      local_68 = lVar6;
      local_5c = _AMDServiceConnectionSendMessage(local_a0,lVar6,200);
      if (local_5c == 0) {
        lVar9 = 0;
        local_5c = 0;
        lVar6 = local_a8;
        lVar8 = local_88;
        do {
          uVar11 = local_98;
          local_5c = _AMDServiceConnectionReceiveMessage(local_a0,&local_80,0);
          if (local_5c != 0) {
            pcVar15 = &cf__s_Failedtoreceivemessage;
LAB_00144fbe:
            _AMRLog(3,pcVar15,"AMDeviceCopyFDRPreflightOptions");
            goto LAB_0014490a;
          }
          lVar9 = _CFURLCreateCopyAppendingPathComponent(uVar11,local_70,&cf_fdr_data_store,1);
          iVar4 = _AMSupportMakeDirectory(lVar9);
          if (iVar4 != 0) {
            pcVar15 = &cf__s_Failedtocreatedatastoredirectory;
            goto LAB_00144fbe;
          }
          if (local_80 == 0) {
LAB_00144e70:
            local_5c = 1;
LAB_00144e77:
            bVar1 = false;
          }
          else {
            lVar12 = _CFGetTypeID();
            lVar13 = _CFDictionaryGetTypeID();
            lVar10 = local_80;
            if (lVar12 != lVar13) goto LAB_00144e70;
            lVar8 = _CFDictionaryGetValue(local_80,&cf_Log);
            if (lVar8 != 0) {
              lVar10 = _CFDictionaryGetValue(lVar10,&cf_LogLevel);
              if (lVar10 == 0) {
                pcVar15 = &cf__s_logLevelisNULL;
              }
              else {
                cVar3 = _CFNumberGetValue(lVar10,9,&local_58);
                if (cVar3 != '\0') {
                  _AMRLog(local_58,&cf__s_<device>___,"handleMessageLog",lVar8);
                  goto LAB_00144cca;
                }
                pcVar15 = &cf__s_FailedtogetlogLevel;
              }
              lVar8 = local_88;
              _AMRLog(3,pcVar15,"handleMessageLog");
              local_5c = 1;
              pcVar15 = &cf__s_FailedinhandleMessageLog;
              goto LAB_00144fbe;
            }
LAB_00144cca:
            lVar6 = local_80;
            local_5c = 0;
            lVar8 = _CFDictionaryGetValue(local_80,&cf_Filename);
            if (lVar8 != 0) {
              lVar10 = _CFDataGetTypeID();
              lVar12 = _CFDictionaryGetValue(lVar6,&cf_Data);
              if ((lVar12 == 0) || (lVar13 = _CFGetTypeID(lVar12), lVar13 != lVar10)) {
                pcVar15 = &cf__s_Failedtogetfiledata;
LAB_00144f25:
                _AMRLog(3,pcVar15,"handleMessageSaveFile");
                iVar4 = 1;
              }
              else {
                lVar10 = _CFDataGetTypeID();
                lVar6 = _CFDictionaryGetValue(lVar6,&cf_Digest);
                if ((lVar6 == 0) || (lVar13 = _CFGetTypeID(lVar6), lVar13 != lVar10)) {
                  pcVar15 = &cf__s_Failedtogetdigest;
                  goto LAB_00144f25;
                }
                data = (void *)_CFDataGetBytePtr(lVar12);
                len = _CFDataGetLength(lVar12);
                _CC_SHA256(data,len,(uchar *)&local_58);
                puVar14 = (uchar *)_CFDataGetBytePtr(lVar6);
                uVar11 = local_98;
                auVar17[0] = -(puVar14[0x10] == local_48);
                auVar17[1] = -(puVar14[0x11] == uStack_47);
                auVar17[2] = -(puVar14[0x12] == uStack_46);
                auVar17[3] = -(puVar14[0x13] == uStack_45);
                auVar17[4] = -(puVar14[0x14] == uStack_44);
                auVar17[5] = -(puVar14[0x15] == uStack_43);
                auVar17[6] = -(puVar14[0x16] == uStack_42);
                auVar17[7] = -(puVar14[0x17] == uStack_41);
                auVar17[8] = -(puVar14[0x18] == uStack_40);
                auVar17[9] = -(puVar14[0x19] == uStack_3f);
                auVar17[10] = -(puVar14[0x1a] == uStack_3e);
                auVar17[0xb] = -(puVar14[0x1b] == uStack_3d);
                auVar17[0xc] = -(puVar14[0x1c] == uStack_3c);
                auVar17[0xd] = -(puVar14[0x1d] == uStack_3b);
                auVar17[0xe] = -(puVar14[0x1e] == uStack_3a);
                auVar17[0xf] = -(puVar14[0x1f] == uStack_39);
                auVar16[0] = -(*puVar14 == (uchar)local_58);
                auVar16[1] = -(puVar14[1] == local_58._1_1_);
                auVar16[2] = -(puVar14[2] == local_58._2_1_);
                auVar16[3] = -(puVar14[3] == local_58._3_1_);
                auVar16[4] = -(puVar14[4] == uStack_54);
                auVar16[5] = -(puVar14[5] == uStack_53);
                auVar16[6] = -(puVar14[6] == uStack_52);
                auVar16[7] = -(puVar14[7] == uStack_51);
                auVar16[8] = -(puVar14[8] == uStack_50);
                auVar16[9] = -(puVar14[9] == uStack_4f);
                auVar16[10] = -(puVar14[10] == uStack_4e);
                auVar16[0xb] = -(puVar14[0xb] == uStack_4d);
                auVar16[0xc] = -(puVar14[0xc] == uStack_4c);
                auVar16[0xd] = -(puVar14[0xd] == uStack_4b);
                auVar16[0xe] = -(puVar14[0xe] == uStack_4a);
                auVar16[0xf] = -(puVar14[0xf] == uStack_49);
                auVar16 = auVar16 & auVar17;
                if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
                  lVar6 = _CFURLCreateCopyAppendingPathComponent(local_98,lVar9,lVar8,0);
                  if (lVar6 == 0) {
                    pcVar15 = &cf__s_FailedtocreateURLforfile__;
                    goto LAB_00144fe6;
                  }
                  iVar4 = _AMSupportWriteDataToFileURL(uVar11,lVar12,lVar6,1);
                  if (iVar4 == 0) {
                    _AMRLog(3,&cf__s_File__saved,"handleMessageSaveFile",lVar8);
                    _CFRelease(lVar6);
                    goto LAB_00144e11;
                  }
                  _AMRLog(3,&cf__s_Failedtowritedatatofile,"handleMessageSaveFile");
                  _CFRelease(lVar6);
                }
                else {
                  pcVar15 = &cf__s_Failedtoverifydigestforfile__;
LAB_00144fe6:
                  _AMRLog(3,pcVar15,"handleMessageSaveFile",lVar8);
                  iVar4 = 0xb;
                }
              }
              local_5c = iVar4;
              _AMRLog(3,&cf__s_FailedinhandleMessageSaveFile,"AMDeviceCopyFDRPreflightOptions");
              lVar6 = local_a8;
              lVar8 = local_88;
              goto LAB_0014490a;
            }
LAB_00144e11:
            local_5c = 0;
            lVar10 = _CFDictionaryGetValue(local_80,&cf_Result);
            lVar8 = local_88;
            lVar6 = local_a8;
            if (lVar10 == 0) goto LAB_00144e77;
            _AMRLog(5,&cf__s_FDRpreflightresult___,"AMDeviceCopyFDRPreflightOptions",lVar10);
            cVar3 = _CFBooleanGetValue(lVar10);
            local_5c = -(uint)(cVar3 == '\0');
            bVar1 = true;
          }
          if (local_80 != 0) {
            _CFRelease();
            local_80 = 0;
          }
        } while (!bVar1);
        if (local_5c == 0) {
          _CFDictionarySetValue
                    (lVar5,&cf_FDRPreflightPassed,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        }
      }
      else {
        lVar9 = 0;
        _AMRLog(3,&cf__s_Failedtosendmessage,"AMDeviceCopyFDRPreflightOptions");
        lVar6 = local_a8;
        lVar8 = local_88;
      }
      goto LAB_0014490a;
    }
    pcVar15 = &cf__s_FailedtoconnecttobootedOSdevice;
LAB_001450c9:
    _AMRLog(3,pcVar15,"AMDeviceCopyFDRPreflightOptions");
LAB_001450df:
    local_78 = 0;
    local_90 = 0;
LAB_001450f2:
    lVar8 = 0;
LAB_00144ae7:
    local_70 = 0;
LAB_00144aef:
    lVar9 = 0;
    local_68 = 0;
  }
LAB_0014490f:
  uVar11 = _CFRetain(lVar5);
  *param_3 = uVar11;
  bVar1 = true;
LAB_0014497e:
  if (local_5c != 0) {
    lVar10 = _CFDictionaryGetValue(lVar5,&cf_RequireFDRPreflight);
    if ((lVar10 == 0) || (cVar3 = _CFBooleanGetValue(lVar10), cVar3 == '\0')) {
      _AMRLog(4,&cf__s_FDRpreflightfailedwitherror__dbutwecancontinue,
              "AMDeviceCopyFDRPreflightOptions",local_5c);
      local_5c = 0;
    }
    else {
      _AMRLog(3,&cf__s_FDRPreflightfailedwitherror__dandwerequiresuccessfulFDRpreflight,
              "AMDeviceCopyFDRPreflightOptions",local_5c);
    }
  }
  if (lVar6 != 0) {
    _AMDeviceStopSession(lVar6);
    _AMDeviceDisconnect(lVar6);
    _CFRelease(lVar6);
  }
  if (local_90 != 0) {
    _CFRelease();
  }
  if (local_78 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (bVar1) {
    _CFRelease(lVar5);
  }
  lVar5 = local_70;
  if (local_a0 != 0) {
    _CFRelease();
    local_a0 = 0;
  }
  if (local_68 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_80 != 0) {
    _CFRelease();
    local_80 = 0;
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

