// rea decompile_all
// name: AMSupportStaticURLConnectionDelegate::connection:willSendRequestForAuthenticationChallenge:
// address: 0x20a9
// body: available
// range: 0x20a9-0x298f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2176 to 0x60ca _AMSupportLogInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x23fa to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x244e to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x298b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void AMSupportStaticURLConnectionDelegate::connection_willSendRequestForAuthenticationChallenge_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  long lVar14;
  char *pcVar15;
  ID IVar16;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [128];
  undefined8 local_98;
  long lStack_90;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"protectionSpace");
  uVar4 = (*(code *)puVar1)(uVar4,"authenticationMethod");
  _AMSupportLogInternal
            (7,
             "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
             ,"Authentication challenge received.  Method: %@",uVar4);
  lVar5 = (*(code *)puVar1)(param_4,"previousFailureCount");
  if (0 < lVar5) {
    uVar4 = (*(code *)puVar1)(param_4,"sender");
    (*(code *)puVar1)(uVar4,"cancelAuthenticationChallenge:",param_4);
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      _AMSupportLogInternal
                (3,
                 "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
                 ,"Multiple challenge failures.  Aborting.");
      return;
    }
    goto LAB_0000298b;
  }
  cVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar4,"isEqual:",
                     *(undefined8 *)PTR__NSURLAuthenticationMethodClientCertificate_00441078);
  if ((cVar2 == '\x01') &&
     (lVar5 = (*(code *)PTR__objc_msgSend_00441098)
                        (*(undefined8 *)(param_1 + 0x10),"objectForKey:",&cf_ClientIdentity),
     lVar5 != 0)) {
    _AMSupportLogInternal
              (7,
               "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
               ,"Received client certificate challenge.");
    puVar1 = PTR__objc_msgSend_00441098;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(param_1 + 0x10),"objectForKey:",&cf_ClientIdentity);
    local_120 = 0;
    pcVar6 = (cfstringStruct *)
             (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x10),"objectForKey:",
                               &cf_ClientIdentityPassphrase);
    local_48 = &cf___;
    if (pcVar6 != (cfstringStruct *)0x0) {
      local_48 = pcVar6;
    }
    local_40 = *(undefined8 *)PTR__kSecImportExportPassphrase_004411f8;
    uVar7 = _CFDictionaryCreate(0,&local_40,&local_48,1,0,0);
    uVar8 = _CFDataGetLength(uVar4);
    _AMSupportLogInternal
              (7,
               "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
               ,"P12 Identity data length=%d",uVar8);
    iVar3 = _SecPKCS12Import(uVar4,uVar7,&local_120);
    _CFRelease(uVar7);
    if (iVar3 == 0) {
      _AMSupportLogInternal
                (7,
                 "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
                 ,"Successfully imported PKCS12 identity");
      uVar4 = _CFArrayGetValueAtIndex(local_120,0);
      uVar4 = _CFDictionaryGetValue(uVar4,*(undefined8 *)PTR__kSecImportItemIdentity_00441200);
      local_128 = 0;
      _SecIdentityCopyCertificate(uVar4,&local_128);
      local_50 = local_128;
      uVar7 = _CFArrayCreate(0,&local_50,1,0);
      _CFRelease(local_128);
      IVar11 = NSURLCredential::credentialWithIdentity_certificates_persistence_
                         ((ID)&_OBJC_CLASS___NSURLCredential,
                          "credentialWithIdentity:certificates:persistence:",uVar4,uVar7,2);
      _CFRelease(uVar7);
      uVar4 = (*(code *)puVar1)(param_4,"sender");
      (*(code *)puVar1)(uVar4,"useCredential:forAuthenticationChallenge:",IVar11,param_4);
      _AMSupportLogInternal
                (7,
                 "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
                 ,"Returned credentials for challenge.");
    }
    else {
      _AMSupportLogInternal
                (3,
                 "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
                 ,"Unable to import client identity, aborting challenge.");
      uVar4 = (*(code *)puVar1)(param_4,"sender");
      (*(code *)puVar1)(uVar4,"cancelAuthenticationChallenge:",param_4);
    }
  }
  else {
    cVar2 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar4,"isEqual:",
                       *(undefined8 *)PTR__NSURLAuthenticationMethodServerTrust_00441080);
    pcVar9 = (code *)PTR__objc_msgSend_00441098;
    if (cVar2 != '\x01') {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"sender");
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
LAB_0000243d:
        (*pcVar9)(uVar4,"performDefaultHandlingForAuthenticationChallenge:",param_4);
        return;
      }
      goto LAB_0000298b;
    }
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(param_1 + 0x10),"objectForKey:",&cf_DisableSSLValidation);
    IVar11 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    cVar2 = (*pcVar9)(uVar4,"isEqual:",IVar11);
    puVar1 = PTR__objc_msgSend_00441098;
    if (cVar2 != '\0') {
      _AMSupportLogInternal
                (6,
                 "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
                 ,"SSL validation disabled.  Attempting to continue without authentication.");
      puVar1 = PTR__objc_msgSend_00441098;
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"sender");
      uVar7 = (*(code *)puVar1)(param_4,"protectionSpace");
      uVar7 = (*(code *)puVar1)(uVar7,"serverTrust");
      IVar11 = NSURLCredential::credentialForTrust_
                         ((ID)&_OBJC_CLASS___NSURLCredential,"credentialForTrust:",uVar7);
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
        (*(code *)PTR__objc_msgSend_00441098)
                  (uVar4,"useCredential:forAuthenticationChallenge:",IVar11,param_4);
        return;
      }
      goto LAB_0000298b;
    }
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(param_1 + 0x10),"objectForKey:",&cf_TrustedServerCAs);
    IVar11 = NSArray::class((ID)&_OBJC_CLASS___NSArray,"class");
    cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",IVar11);
    puVar1 = PTR__objc_msgSend_00441098;
    if (cVar2 == '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                        (*(undefined8 *)(param_1 + 0x10),"objectForKey:",&cf_TrustedServerCAs);
      IVar11 = NSData::class((ID)&_OBJC_CLASS___NSData,"class");
      cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",IVar11);
      if (cVar2 == '\0') {
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"sender");
        pcVar9 = (code *)PTR__objc_msgSend_00441098;
        if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) goto LAB_0000243d;
        goto LAB_0000298b;
      }
    }
    puVar1 = PTR__objc_msgSend_00441098;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(param_1 + 0x10),"objectForKey:",&cf_TrustedServerCAs);
    IVar11 = NSArray::class((ID)&_OBJC_CLASS___NSArray,"class");
    cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",IVar11);
    IVar11 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x10),"objectForKey:",&cf_TrustedServerCAs)
    ;
    puVar1 = PTR__objc_msgSend_00441098;
    if (cVar2 == '\0') {
      IVar10 = NSData::class((ID)&_OBJC_CLASS___NSData,"class");
      cVar2 = (*(code *)puVar1)(IVar11,"isKindOfClass:",IVar10);
      if (cVar2 == '\0') {
        IVar11 = 0;
      }
      else {
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                          (*(undefined8 *)(param_1 + 0x10),"objectForKey:",&cf_TrustedServerCAs);
        IVar11 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",uVar4);
      }
    }
    IVar10 = NSArray::count(IVar11,"count");
    IVar10 = NSMutableArray::arrayWithCapacity_
                       ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",IVar10);
    local_98 = 0;
    lStack_90 = 0;
    local_88 = (long *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    IVar12 = NSArray::countByEnumeratingWithState_objects_count_
                       (IVar11,"countByEnumeratingWithState:objects:count:",&local_98,local_118,0x10
                       );
    if (IVar12 != 0) {
      lVar5 = *local_88;
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      do {
        IVar16 = 0;
        do {
          if (*local_88 != lVar5) {
            _objc_enumerationMutation(IVar11);
          }
          puVar1 = PTR__objc_msgSend_00441098;
          uVar7 = *(undefined8 *)(lStack_90 + IVar16 * 8);
          IVar13 = NSData::class((ID)&_OBJC_CLASS___NSData,"class");
          cVar2 = (*(code *)puVar1)(uVar7,"isKindOfClass:",IVar13);
          if (cVar2 == '\x01') {
            lVar14 = _SecCertificateCreateWithData(uVar4,uVar7);
            if (lVar14 == 0) {
              _AMSupportLogInternal
                        (4,
                         "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
                         ,"trusted certificate could not be loaded %@",uVar7);
            }
            else {
              NSMutableArray::addObject_(IVar10,"addObject:",lVar14);
              _CFRelease(lVar14);
            }
          }
          IVar16 = IVar16 + 1;
        } while (IVar12 != IVar16);
        IVar12 = NSArray::countByEnumeratingWithState_objects_count_
                           (IVar11,"countByEnumeratingWithState:objects:count:",&local_98,local_118,
                            0x10);
      } while (IVar12 != 0);
    }
    puVar1 = PTR__objc_msgSend_00441098;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"protectionSpace");
    uVar4 = (*(code *)puVar1)(uVar4,"serverTrust");
    local_120 = (ulong)local_120._4_4_ << 0x20;
    _AMSupportLogInternal
              (7,
               "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
               ,"Attempting trust evaluate");
    iVar3 = _AMSupportX509ChainEvaluateTrust(uVar4,IVar10,&local_120);
    if (iVar3 == 0) {
      if (((int)local_120 == 4) || ((int)local_120 == 1)) {
        _AMSupportLogInternal
                  (7,
                   "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
                   ,"Trust evaluation succeeded, proceeding..");
        puVar1 = PTR__objc_msgSend_00441098;
        uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"sender");
        IVar11 = NSURLCredential::credentialForTrust_
                           ((ID)&_OBJC_CLASS___NSURLCredential,"credentialForTrust:",uVar4);
        (*(code *)puVar1)(uVar7,"useCredential:forAuthenticationChallenge:",IVar11,param_4);
        goto LAB_00002951;
      }
      pcVar15 = "trust evaluation did not result in okay to proceed (result=%d)";
      uVar4 = 4;
      iVar3 = (int)local_120;
    }
    else {
      pcVar15 = "trust evaluation failed (OSStatus=%d)";
      uVar4 = 3;
    }
    _AMSupportLogInternal
              (uVar4,
               "-[AMSupportStaticURLConnectionDelegate connection:willSendRequestForAuthenticationChallenge:]"
               ,pcVar15,iVar3);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"sender");
    (*(code *)puVar1)(uVar4,"cancelAuthenticationChallenge:",param_4);
  }
LAB_00002951:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
LAB_0000298b:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

