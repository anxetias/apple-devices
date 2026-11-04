// rea decompile_all
// name: PersonalizedImage::mountImage:serverTicket:imageDigest:trustCacheURL:error:
// address: 0x12609c
// body: available
// range: 0x12609c-0x126791 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12678d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

int PersonalizedImage::mountImage_serverTicket_imageDigest_trustCacheURL_error_
              (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID *param_7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  cfstringStruct *pcVar14;
  ulong uVar15;
  code *pcVar16;
  ID local_80;
  undefined8 local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  ID local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_4 == 0 || param_3 == 0) || param_5 == 0) {
    iVar3 = 0xe8000007;
    uVar5 = _createAndLogError("-[PersonalizedImage mountImage:serverTicket:imageDigest:trustCacheURL:error:]"
                               ,0x61e,0xe8000007,1,0,&cf_Invalidinputs_);
    uVar6 = 0;
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
    iVar3 = _AMDeviceConnect(uVar5);
    if (iVar3 == 0) {
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
      iVar4 = _AMDeviceStartSession(uVar5);
      if (iVar4 == 0) {
LAB_00126318:
        uVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
        pcVar16 = (code *)PTR__objc_msgSend_00441098;
        local_68 = &cf_ImageType;
        local_50 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageType");
        local_60 = &cf_ImageSignature;
        local_58 = &cf_ImageDigest;
        local_48 = param_4;
        local_40 = param_5;
        uVar6 = (*pcVar16)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                           &local_50,&local_68,3);
        local_78 = (*pcVar16)(uVar5,"initWithDictionary:",uVar6);
        if (param_6 == 0) {
          uVar5 = (*pcVar16)(param_1,"imageType");
          cVar2 = (*pcVar16)(uVar5,"isEqualToString:",&cf_Cryptex);
          if (cVar2 != '\0') {
            lVar8 = _AMDeviceMountImageOnHost(param_3,0);
            if (lVar8 == 0) {
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"path");
              iVar3 = 0xe8000110;
              uVar5 = _createAndLogError("-[PersonalizedImage mountImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                         ,0x64b,0xe8000110,1,0,&cf_Failedtomount___,uVar5);
              lVar8 = 0;
            }
            else {
              lVar9 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"objectForKey:",&cf_mount_point);
              if (lVar9 == 0) {
                pcVar14 = &cf_Invalidvolumeentry_;
                iVar3 = 0xe8000110;
                uVar6 = 0x652;
                uVar5 = 0xe8000110;
              }
              else {
                uVar5 = (*pcVar16)(lVar9,"stringByAppendingPathComponent:",&cf__TrustCache);
                local_80 = (*pcVar16)(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar5);
                if (local_80 != 0) goto LAB_001263b3;
                pcVar14 = &cf_FailedtocreateURL_;
                iVar3 = 0xe80000f1;
                uVar6 = 0x659;
                uVar5 = 0xe80000f1;
              }
              uVar5 = _createAndLogError("-[PersonalizedImage mountImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                         ,uVar6,uVar5,1,0,pcVar14);
            }
            goto LAB_00126740;
          }
          lVar8 = 0;
          local_70 = 0;
        }
        else {
          lVar8 = 0;
          local_80 = param_6;
LAB_001263b3:
          uVar5 = _objc_alloc(&_OBJC_CLASS___NSData);
          local_70 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"initWithContentsOfURL:",local_80);
          if (local_70 == 0) {
            iVar3 = 0xe8000077;
            uVar5 = _createAndLogError("-[PersonalizedImage mountImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                       ,0x662,0xe8000077,1,0,&cf_Failedtoload___,local_80);
LAB_00126740:
            local_70 = 0;
            uVar6 = 0;
            goto LAB_00126742;
          }
          (*(code *)PTR__objc_msgSend_00441098)
                    (local_78,"setObject:forKeyedSubscript:",local_70,&cf_ImageTrustCache);
          pcVar16 = (code *)PTR__objc_msgSend_00441098;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = _md_log_log;
        uVar6 = (*pcVar16)(param_3,"path");
        uVar13 = (*pcVar16)(param_1,"hardwareModel");
        uVar10 = (*pcVar16)(param_1,"deviceClass");
        uVar11 = (*pcVar16)(param_1,"ecid");
        pcVar14 = &cf_true;
        if (local_70 == 0) {
          pcVar14 = &cf_false;
        }
        uVar15 = 0;
        __os_log_internal(0,uVar5,1,
                          "Preparing to mount %@ on %@ (deviceClass: %@ ecid: %@ trustcache: %@)",
                          uVar6,uVar13,uVar10,uVar11,pcVar14);
        uVar5 = (*pcVar16)(param_1,"device");
        uVar6 = (*pcVar16)(param_3,"path");
        uVar12 = _AMDeviceMountImage(uVar5,uVar6,local_78,_mount_callback,0);
        if ((int)uVar12 == 0) {
          uVar5 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = _AMDCopyErrorText(uVar12 & 0xffffffff);
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"path");
          uVar13 = _AMDErrorString(uVar12 & 0xffffffff);
          uVar5 = _createAndLogError("-[PersonalizedImage mountImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                     ,0x675,uVar12 & 0xffffffff,1,0,
                                     &cf_Failedtomount___0x_08x__s____,uVar5,uVar12,uVar13,uVar6);
          uVar15 = uVar12;
        }
        iVar3 = (int)uVar15;
      }
      else {
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
        iVar3 = _AMDevicePairWithCallback(uVar5,0,0,0);
        if (iVar3 == 0) {
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
          iVar3 = _AMDeviceStartSession(uVar5);
          if (iVar3 == 0) goto LAB_00126318;
          uVar6 = _AMDCopyErrorText(iVar3);
          uVar5 = _AMDErrorString(iVar3);
          pcVar14 = &cf_Failedtostartsession_0x_08x__s____;
          uVar13 = 0x63b;
        }
        else {
          uVar6 = _AMDCopyErrorText(iVar3);
          uVar5 = _AMDErrorString(iVar3);
          pcVar14 = &cf_Failedtopairwithdevice_0x_08x__s____;
          uVar13 = 0x634;
        }
        local_78 = 0;
        uVar5 = _createAndLogError("-[PersonalizedImage mountImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                   ,uVar13,iVar3,1,0,pcVar14,iVar3,uVar5,uVar6);
        local_70 = 0;
        lVar8 = 0;
      }
LAB_00126742:
      uVar13 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
      _AMDeviceDisconnect(uVar13);
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        _AMDeviceUnmountImageOnHost(lVar8);
      }
      goto LAB_001261b9;
    }
    uVar6 = _AMDCopyErrorText(iVar3);
    uVar5 = _AMDErrorString(iVar3);
    uVar5 = _createAndLogError("-[PersonalizedImage mountImage:serverTicket:imageDigest:trustCacheURL:error:]"
                               ,0x627,iVar3,1,0,&cf_Failedtoconnecttodevice_0x_08x__s____,iVar3,
                               uVar5,uVar6);
  }
  local_70 = 0;
  local_78 = 0;
  lVar8 = 0;
LAB_001261b9:
  if ((param_7 != (ID *)0x0) && (iVar3 != 0)) {
    IVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
    *param_7 = IVar7;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(local_78);
  (*(code *)puVar1)(local_70);
  (*(code *)puVar1)(lVar8);
  (*(code *)puVar1)(uVar6);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

