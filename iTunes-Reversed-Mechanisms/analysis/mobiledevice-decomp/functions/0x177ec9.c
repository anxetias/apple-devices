// rea decompile_all
// name: __AMRHTTPDownloadFileAtURL
// address: 0x177ec9
// body: available
// range: 0x177ec9-0x178540 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRHTTPDownloadFileAtURL(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  void *context;
  long lVar8;
  undefined8 *puVar9;
  dispatch_queue_t queue;
  code *pcVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  long lVar13;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  code *local_40;
  undefined8 local_38;
  
  local_88 = 0;
  local_80 = 0;
  local_a8 = param_1;
  local_a0 = param_4;
  if (param_1 == 0) {
    pcVar6 = &cf_Can_tdownloadNULLURL;
LAB_00178405:
    lVar13 = 0;
    local_50 = 0;
    lVar7 = 0;
    context = (void *)0x0;
    local_68 = 0;
    local_48 = 0;
    pcVar10 = param_3;
    uVar11 = 0;
    lVar5 = 0;
LAB_001784d2:
    local_60 = lVar7;
    if (pcVar10 == (code *)0x0) {
      lVar7 = 0;
    }
    else {
      local_58 = lVar13;
      lVar7 = _AMRCreateErrorWithDomain
                        (pcVar6,0xfb4,&cf_com_apple_MobileDevice_MobileRestore,uVar11);
      (*pcVar10)(0x42c80000,local_a8,1,lVar7,local_a0);
      lVar13 = local_58;
    }
    _AMRSafeLogAndRelease(3,pcVar6);
    lVar8 = 0;
    if (lVar5 == 0) goto LAB_00178353;
  }
  else {
    if (param_2 == 0) {
      pcVar6 = &cf_Can_tdownloadtoNULLdestinationURL;
      goto LAB_00178405;
    }
    uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_60 = param_2;
    local_40 = param_3;
    local_68 = _CFHTTPMessageCreateRequest
                         (uVar11,&cf_GET,param_1,*(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8);
    local_d0 = 0;
    local_70 = 0;
    local_98 = 0;
    local_90 = 0;
    cVar3 = _AMAuthInstallSsoShouldUseStealthMode(0);
    if (__AMSSOCopyRestoreTicket_once != -1) {
      _dispatch_once_f(&__AMSSOCopyRestoreTicket_once,(void *)0x0,__AMSSOInit);
    }
    cVar2 = _ssoInitSuccessful;
    if (_ssoInitSuccessful == '\0') {
      pcVar6 = &cf_FailedtoloadSSOframeworksymbols;
      lVar5 = 0;
LAB_00178059:
      pcVar12 = &cf_FailedtocreateSSOticketforunknownreason;
      if (pcVar6 != (cfstringStruct *)0x0) {
        pcVar12 = pcVar6;
      }
      local_58 = 0;
      local_38 = _AMRCreateErrorWithDomain(pcVar12,0xfb3,&cf_com_apple_MobileDevice_MobileRestore,0)
      ;
      bVar1 = true;
      local_50 = 0;
    }
    else {
      _dispatch_semaphore_wait(_ssoSemaphore,0xffffffffffffffff);
      if (cVar3 == '\0') {
        lVar5 = 0;
      }
      else {
        lVar5 = _CFDictionaryCreateMutable
                          (uVar11,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _CFDictionaryAddValue
                  (lVar5,&cf_SSOKeyStealthMode,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        _AMRSafeLog(6,&cf_Usingstealthmode);
      }
      iVar4 = (*_symbolTable)(&cf_APPLECONNECT_APPLE_COM,&cf_INT,&cf_15862679297186363,
                              &cf_sso_corp_apple_com,0,0,lVar5,&local_d0,&local_70,&local_98,0,
                              &local_90);
      if (iVar4 != 0) {
        pcVar6 = (cfstringStruct *)_AMRMakeString(&cf_FailedtogetSSOserviceticket___,local_90);
        local_98 = 0;
        goto LAB_00178059;
      }
      _CFRetain(local_70);
      local_58 = local_70;
      _CFRetain(local_d0);
      local_38 = 0;
      local_50 = local_d0;
      bVar1 = false;
      pcVar12 = (cfstringStruct *)0x0;
    }
    _AMRSafeLogAndRelease(3,pcVar12);
    if (local_90 != 0) {
      _CFRelease();
    }
    lVar13 = local_58;
    if (local_98 != 0) {
      _CFRelease();
    }
    if (local_70 != 0) {
      _CFRelease();
    }
    if (local_d0 != 0) {
      _CFRelease();
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
    if (cVar2 != '\0') {
      _dispatch_semaphore_signal(_ssoSemaphore);
    }
    lVar5 = local_50;
    if (bVar1) {
      pcVar6 = &cf_FailedtogetSSOticketfordownload;
      lVar7 = 0;
LAB_00178488:
      lVar5 = 0;
LAB_0017848b:
      context = (void *)0x0;
      local_48 = 0;
      pcVar10 = local_40;
      uVar11 = local_38;
      goto LAB_001784d2;
    }
    lVar7 = _CFStringCreateExternalRepresentation(uVar11,local_50,0x8000100,0);
    if (lVar7 == 0) {
      pcVar6 = &cf_Failedtogetusernameasdata;
      lVar7 = 0;
      goto LAB_00178488;
    }
    _AMRSafeLog(6,&cf_DownloadingwithSSOauthheadersforuser___,lVar5);
    iVar4 = _AMAuthInstallSupportBase64Encode(uVar11,lVar13,&local_88);
    if (iVar4 != 0) {
      pcVar6 = &cf_Failedtobase64encodeSSOticket;
      goto LAB_00178488;
    }
    iVar4 = _AMAuthInstallSupportBase64Encode(uVar11,lVar7,&local_80);
    if (iVar4 != 0) {
      pcVar6 = &cf_Failedtobase64encodeSSOusername;
      goto LAB_00178488;
    }
    lVar5 = _CFStringCreateWithFormat(uVar11,0,&cf_x_appleconnectuser___token___,local_80,local_88);
    lVar8 = local_68;
    if (lVar5 == 0) {
      pcVar6 = &cf_Failedtocreateauthheader;
      goto LAB_00178488;
    }
    _CFHTTPMessageSetHeaderFieldValue(local_68,&cf_Authorization,lVar5);
    context = (void *)_CFReadStreamCreateForHTTPRequest(uVar11,lVar8);
    if (context == (void *)0x0) {
      pcVar6 = &cf_FailedtocreateHTTPreadstream;
      goto LAB_0017848b;
    }
    local_78 = lVar5;
    local_48 = _SCDynamicStoreCopyProxies(0);
    if (local_48 != 0) {
      _CFReadStreamSetProperty
                (context,*(undefined8 *)PTR__kCFStreamPropertyHTTPProxy_004413f0,local_48);
    }
    _CFReadStreamSetProperty
              (context,*(undefined8 *)PTR__kCFStreamPropertyHTTPShouldAutoredirect_00441400,
               *(undefined8 *)PTR__kCFBooleanTrue_00441110);
    cVar3 = _CFReadStreamOpen(context);
    if (cVar3 == '\0') {
      pcVar6 = &cf_FailedtoopenHTTPreadstream;
      pcVar10 = local_40;
      uVar11 = local_38;
      lVar5 = local_78;
      goto LAB_001784d2;
    }
    lVar8 = _CFWriteStreamCreateWithFile(uVar11,local_60);
    if (lVar8 == 0) {
      pcVar6 = &cf_Failedtocreatewritestreamfordownload;
      pcVar10 = local_40;
      uVar11 = local_38;
      lVar5 = local_78;
      goto LAB_001784d2;
    }
    local_60 = lVar7;
    _CFWriteStreamOpen(lVar8);
    puVar9 = _calloc(1,0x1050);
    *puVar9 = context;
    puVar9[1] = lVar8;
    puVar9[2] = local_a0;
    puVar9[3] = local_40;
    puVar9[4] = local_a8;
    *(undefined4 *)(puVar9 + 0x207) = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[0x208] = 0;
    puVar9[0x209] = 0;
    _CFRetain();
    _CFRetain(*puVar9);
    _CFRetain(puVar9[1]);
    lVar13 = local_58;
    lVar7 = 0;
    local_d0 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_c8 = puVar9;
    _CFReadStreamSetClient(context,0x1a,__AMRHTTPDownloadHandleStreamCallback);
    queue = _dispatch_get_global_queue(0,0);
    _dispatch_async_f(queue,context,__AMRHTTPDownloadStartRunloop);
    _AMRSafeLogAndRelease(3,0);
    lVar5 = local_78;
  }
  _CFRelease(lVar5);
LAB_00178353:
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  lVar5 = local_50;
  if (lVar13 != 0) {
    _CFRelease(lVar13);
  }
  lVar13 = local_60;
  if (local_88 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_80 != 0) {
    _CFRelease();
  }
  if (lVar13 != 0) {
    _CFRelease(lVar13);
  }
  if (local_68 != 0) {
    _CFRelease();
  }
  if (context != (void *)0x0) {
    _CFRelease(context);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  return;
}

