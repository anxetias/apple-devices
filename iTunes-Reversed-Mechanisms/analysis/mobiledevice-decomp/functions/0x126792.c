// rea decompile_all
// name: PersonalizedImage::mountRemoteImage:serverTicket:imageDigest:trustCacheURL:error:
// address: 0x126792
// body: available
// range: 0x126792-0x126cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x126cf3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

int PersonalizedImage::mountRemoteImage_serverTicket_imageDigest_trustCacheURL_error_
              (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID *param_7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID IVar10;
  cfstringStruct *pcVar11;
  int iVar12;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  ID local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_4 == 0 || param_3 == 0) || param_5 == 0) {
    local_70 = 0;
    iVar12 = 0xe8000007;
    uVar4 = _createAndLogError("-[PersonalizedImage mountRemoteImage:serverTicket:imageDigest:trustCacheURL:error:]"
                               ,0x69c,0xe8000007,1,0,&cf_Invalidinputs_);
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    goto LAB_00126bf8;
  }
  uVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  puVar1 = PTR__objc_msgSend_00441098;
  local_68 = &cf_ImageType;
  local_50 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageType");
  local_60 = &cf_ImageSignature;
  local_58 = &cf_ImageDigest;
  local_48 = param_4;
  local_40 = param_5;
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                            &local_50,&local_68,3);
  local_78 = (*(code *)puVar1)(uVar4,"initWithDictionary:",uVar5);
  if (param_6 == 0) {
    uVar4 = (*(code *)puVar1)(param_1,"imageType");
    cVar2 = (*(code *)puVar1)(uVar4,"isEqualToString:",&cf_Cryptex);
    if (cVar2 == '\0') {
      local_80 = 0;
      local_88 = 0;
      goto LAB_00126a38;
    }
    local_80 = _AMDeviceMountImageOnHost(param_3,0);
    if (local_80 == 0) {
      local_70 = 0;
      iVar12 = 0xe8000110;
      uVar4 = _createAndLogError("-[PersonalizedImage mountRemoteImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                 ,0x6ab,0xe8000110,1,0,&cf_Failedtomount___,param_3);
      local_88 = 0;
      goto LAB_00126bf5;
    }
    lVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_80,"objectForKey:",&cf_mount_point);
    if (lVar6 == 0) {
      iVar12 = 0xe8000110;
      uVar4 = _createAndLogError("-[PersonalizedImage mountRemoteImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                 ,0x6b2,0xe8000110,1,0,&cf_Invalidvolumeentry_);
    }
    else {
      uVar4 = (*(code *)puVar1)(lVar6,"stringByAppendingPathComponent:",&cf__TrustCache);
      param_6 = (*(code *)puVar1)(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar4);
      if (param_6 != 0) goto LAB_00126892;
      iVar12 = 0xe80000f1;
      uVar4 = _createAndLogError("-[PersonalizedImage mountRemoteImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                 ,0x6b9,0xe80000f1,1,0,&cf_FailedtocreateURL_);
    }
    local_70 = 0;
    local_88 = 0;
  }
  else {
    local_80 = 0;
LAB_00126892:
    uVar4 = _objc_alloc(&_OBJC_CLASS___NSData);
    local_88 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"initWithContentsOfURL:",param_6);
    if (local_88 == 0) {
      local_88 = 0;
      uVar4 = _createAndLogError("-[PersonalizedImage mountRemoteImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                 ,0x6c2,0xe8000077,1,0,&cf_Failedtoload___,param_6);
      local_70 = 0;
      iVar12 = 0xe8000077;
    }
    else {
      (*(code *)PTR__objc_msgSend_00441098)
                (local_78,"setObject:forKeyedSubscript:",local_88,&cf_ImageTrustCache);
LAB_00126a38:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar4 = _md_log_log;
      uVar5 = (*(code *)puVar1)(param_3,"path");
      uVar7 = (*(code *)puVar1)(param_1,"hardwareModel");
      uVar8 = (*(code *)puVar1)(param_1,"deviceClass");
      uVar9 = (*(code *)puVar1)(param_1,"ecid");
      pcVar11 = &cf_true;
      if (local_88 == 0) {
        pcVar11 = &cf_false;
      }
      iVar12 = 0;
      __os_log_internal(0,uVar4,1,
                        "Preparing to mount %@ on %@ (deviceClass: %@ ecid: %@ trustcache: %@)",
                        uVar5,uVar7,uVar8,uVar9,pcVar11);
      puVar1 = PTR__objc_msgSend_00441098;
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"remoteDevice");
      uVar5 = (*(code *)puVar1)(param_3,"path");
      iVar3 = _mountRemoteImage(0,uVar4,uVar5,local_78,_mount_callback,0);
      if (iVar3 == 0) {
        uVar4 = 0;
        local_70 = 0;
      }
      else {
        local_70 = _AMDCopyErrorText(iVar3);
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"path");
        uVar5 = _AMDErrorString(iVar3);
        uVar4 = _createAndLogError("-[PersonalizedImage mountRemoteImage:serverTicket:imageDigest:trustCacheURL:error:]"
                                   ,0x6d5,iVar3,1,0,&cf_Failedtomount___0x_08x__s____,uVar4,iVar3,
                                   uVar5,local_70);
        iVar12 = iVar3;
      }
    }
    if (local_80 == 0) {
LAB_00126bf5:
      local_80 = 0;
      goto LAB_00126bf8;
    }
  }
  _AMDeviceUnmountImageOnHost(local_80);
LAB_00126bf8:
  if ((param_7 != (ID *)0x0) && (iVar12 != 0)) {
    IVar10 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
    *param_7 = IVar10;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(local_78);
  (*(code *)puVar1)(local_88);
  (*(code *)puVar1)(local_80);
  (*(code *)puVar1)(local_70);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar12;
}

