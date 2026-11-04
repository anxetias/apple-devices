// rea decompile_all
// name: AMSupportStaticURLSession::URLSession:didReceiveChallenge:completionHandler:
// address: 0x79d7
// body: available
// range: 0x79d7-0x80a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x80a1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

void AMSupportStaticURLSession::URLSession_didReceiveChallenge_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  long lVar11;
  long lVar12;
  int local_fc;
  undefined1 local_f8 [128];
  undefined8 local_78;
  long lStack_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  puVar3 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"protectionSpace");
  uVar6 = (*(code *)puVar3)(uVar6,"authenticationMethod");
  _AMSupportLogInternal
            (7,"-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]",
             "Authentication challenge received.  Method: %@",uVar6);
  lVar7 = (*(code *)puVar3)(param_4,"previousFailureCount");
  if (0 < lVar7) {
    _AMSupportLogInternal
              (3,"-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]",
               "Multiple challenge failures. Request failed.");
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x10);
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      uVar6 = 2;
LAB_00007a89:
                    /* WARNING: Could not recover jumptable at 0x00007a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_5,uVar6,0);
      return;
    }
    goto LAB_000080a1;
  }
  cVar4 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar6,"isEqual:",
                     *(undefined8 *)PTR__NSURLAuthenticationMethodClientCertificate_00441078);
  if ((cVar4 == '\x01') &&
     (lVar7 = (*(code *)PTR__objc_msgSend_00441098)
                        (*(undefined8 *)(param_1 + 0x28),"objectForKey:",&cf_ClientIdentity),
     lVar7 != 0)) {
    _AMSupportLogInternal
              (6,"-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]",
               "Received client certificate challenge. Client SSL authentication failed.");
LAB_00007ff2:
    uVar6 = 2;
    IVar8 = 0;
  }
  else {
    cVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar6,"isEqual:",
                       *(undefined8 *)PTR__NSURLAuthenticationMethodServerTrust_00441080);
    puVar3 = PTR__objc_msgSend_00441098;
    if (cVar4 != '\x01') {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x10);
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
        uVar6 = 1;
        goto LAB_00007a89;
      }
      goto LAB_000080a1;
    }
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(param_1 + 0x28),"objectForKey:",&cf_DisableSSLValidation);
    IVar8 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    cVar4 = (*(code *)puVar3)(uVar6,"isEqual:",IVar8);
    if (cVar4 != '\0') {
      _AMSupportLogInternal
                (6,"-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]",
                 "SSL validation disabled.  Attempting to continue without authentication.");
      uVar6 = (*(code *)puVar3)(param_4,"protectionSpace");
      uVar6 = (*(code *)puVar3)(uVar6,"serverTrust");
      IVar8 = NSURLCredential::credentialForTrust_
                        ((ID)&_OBJC_CLASS___NSURLCredential,"credentialForTrust:",uVar6);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x10);
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
        uVar6 = 0;
LAB_00007be3:
                    /* WARNING: Could not recover jumptable at 0x00007bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_5,uVar6,IVar8,UNRECOVERED_JUMPTABLE_00);
        return;
      }
      goto LAB_000080a1;
    }
    uVar6 = (*(code *)puVar3)(*(undefined8 *)(param_1 + 0x28),"objectForKey:");
    IVar8 = NSArray::class((ID)&_OBJC_CLASS___NSArray,"class");
    UNRECOVERED_JUMPTABLE_00 = (code *)PTR__objc_msgSend_00441098;
    cVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"isKindOfClass:",IVar8);
    if (cVar4 == '\0') {
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)
                        (*(undefined8 *)(param_1 + 0x28),"objectForKey:",&cf_TrustedServerCAs);
      IVar8 = NSData::class((ID)&_OBJC_CLASS___NSData,"class");
      UNRECOVERED_JUMPTABLE_00 = (code *)PTR__objc_msgSend_00441098;
      cVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"isKindOfClass:",IVar8);
      if (cVar4 == '\0') {
        uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_4,"protectionSpace");
        uVar6 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,"serverTrust");
        IVar8 = NSURLCredential::credentialForTrust_
                          ((ID)&_OBJC_CLASS___NSURLCredential,"credentialForTrust:",uVar6);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x10);
        if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
          uVar6 = 1;
          goto LAB_00007be3;
        }
        goto LAB_000080a1;
      }
    }
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)
                      (*(undefined8 *)(param_1 + 0x28),"objectForKey:",&cf_TrustedServerCAs);
    IVar8 = NSArray::class((ID)&_OBJC_CLASS___NSArray,"class");
    cVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,"isKindOfClass:",IVar8);
    IVar8 = (*UNRECOVERED_JUMPTABLE_00)
                      (*(undefined8 *)(param_1 + 0x28),"objectForKey:",&cf_TrustedServerCAs);
    if (cVar4 == '\0') {
      IVar9 = NSData::class((ID)&_OBJC_CLASS___NSData,"class");
      cVar4 = (*UNRECOVERED_JUMPTABLE_00)(IVar8,"isKindOfClass:",IVar9);
      if (cVar4 == '\0') {
        IVar8 = 0;
      }
      else {
        uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                          (*(undefined8 *)(param_1 + 0x28),"objectForKey:",&cf_TrustedServerCAs);
        UNRECOVERED_JUMPTABLE_00 = (code *)PTR__objc_msgSend_00441098;
        IVar8 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",uVar6);
      }
    }
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(IVar8,"count");
    IVar9 = NSMutableArray::arrayWithCapacity_
                      ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",uVar6);
    local_78 = 0;
    lStack_70 = 0;
    local_68 = (long *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    lVar7 = (*UNRECOVERED_JUMPTABLE_00)
                      (IVar8,"countByEnumeratingWithState:objects:count:",&local_78,local_f8,0x10);
    if (lVar7 != 0) {
      lVar1 = *local_68;
      uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      do {
        lVar12 = 0;
        do {
          if (*local_68 != lVar1) {
            _objc_enumerationMutation(IVar8);
          }
          uVar2 = *(undefined8 *)(lStack_70 + lVar12 * 8);
          IVar10 = NSData::class((ID)&_OBJC_CLASS___NSData,"class");
          cVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar2,"isKindOfClass:",IVar10);
          if (cVar4 == '\x01') {
            lVar11 = _SecCertificateCreateWithData(uVar6,uVar2);
            UNRECOVERED_JUMPTABLE_00 = (code *)PTR__objc_msgSend_00441098;
            if (lVar11 == 0) {
              _AMSupportLogInternal
                        (4,
                         "-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]"
                         ,"trusted certificate could not be loaded %@",uVar2);
              UNRECOVERED_JUMPTABLE_00 = (code *)PTR__objc_msgSend_00441098;
            }
            else {
              NSMutableArray::addObject_(IVar9,"addObject:",lVar11);
              _CFRelease(lVar11);
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar7 != lVar12);
        lVar7 = (*UNRECOVERED_JUMPTABLE_00)
                          (IVar8,"countByEnumeratingWithState:objects:count:",&local_78,local_f8,
                           0x10);
      } while (lVar7 != 0);
    }
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_4,"protectionSpace");
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,"serverTrust");
    local_fc = 0;
    _AMSupportLogInternal
              (7,"-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]",
               "Attempting trust evaluate");
    iVar5 = _AMSupportX509ChainEvaluateTrust(uVar6,IVar9,&local_fc);
    if (iVar5 != 0) {
      _AMSupportLogInternal
                (3,"-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]",
                 "trust evaluation failed (OSStatus=%d)",iVar5);
LAB_00007fed:
      *(undefined1 *)(param_1 + 0x30) = 1;
      goto LAB_00007ff2;
    }
    if ((local_fc != 4) && (local_fc != 1)) {
      _AMSupportLogInternal
                (4,"-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]",
                 "trust evaluation did not result in okay to proceed (result=%d)");
      goto LAB_00007fed;
    }
    _AMSupportLogInternal
              (7,"-[AMSupportStaticURLSession URLSession:didReceiveChallenge:completionHandler:]",
               "Trust evaluation succeeded, proceeding..");
    IVar8 = NSURLCredential::credentialForTrust_
                      ((ID)&_OBJC_CLASS___NSURLCredential,"credentialForTrust:",uVar6);
    uVar6 = 0;
  }
  (**(code **)(param_5 + 0x10))(param_5,uVar6,IVar8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
LAB_000080a1:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

