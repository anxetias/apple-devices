// rea decompile_all
// name: __AMSupportHttpMessageSendSyncNoRetry
// address: 0x5bc8
// body: available
// range: 0x5bc8-0x5fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMSupportHttpMessageSendSyncNoRetry
               (long param_1,ID param_2,ID param_3,long *param_4,undefined8 *param_5,ID *param_6)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  long lStack_80;
  long local_38;
  
  uVar3 = _objc_autoreleasePoolPush();
  if (param_1 == 0) {
    _AMSupportLogInternal(3,"_AMSupportHttpMessageSendSyncNoRetry","httpRequest is NULL");
    lStack_80 = 1;
  }
  else {
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableURLRequest);
    IVar4 = NSMutableURLRequest::init(IVar4,"init");
    uVar5 = _CFHTTPMessageCopyRequestURL(param_1);
    uVar6 = _CFHTTPMessageCopyRequestMethod(param_1);
    uVar7 = _CFHTTPMessageCopyAllHeaderFields(param_1);
    uVar8 = _CFHTTPMessageCopyBody(param_1);
    NSMutableURLRequest::setURL_(IVar4,"setURL:",uVar5);
    NSMutableURLRequest::setHTTPMethod_(IVar4,"setHTTPMethod:",uVar6);
    NSMutableURLRequest::setAllHTTPHeaderFields_(IVar4,"setAllHTTPHeaderFields:",uVar7);
    NSMutableURLRequest::setHTTPBody_(IVar4,"setHTTPBody:",uVar8);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar1)(uVar8);
    if (IVar4 != 0) {
      lVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"objectForKey:",&cf_SocksProxySettings);
      puVar1 = PTR__objc_msgSend_00441098;
      if (lVar9 == 0) {
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                          (param_2,"objectForKey:",&cf_UsePurpleReverseProxy);
        cVar2 = (*(code *)puVar1)(uVar5,"boolValue");
        local_38 = 0;
        if ((cVar2 != '\0') && (lVar9 = _AMSupportHttpCopyProxySettings(0,0), lVar9 != 0))
        goto LAB_00005cff;
      }
      else {
        (*(code *)PTR__objc_retain_004410a8)(lVar9);
LAB_00005cff:
        local_38 = lVar9;
        IVar10 = NSMutableURLRequest::_CFURLRequest(IVar4,"_CFURLRequest");
        if (IVar10 == 0) {
          IVar10 = 0;
          _AMSupportLogInternal
                    (4,"_AMSupportHttpMessageSendSyncNoRetry",
                     "CFMutableRequestRef could not be retrieved to set proxy settings");
          lStack_80 = 0x10;
          IVar11 = 0;
          goto LAB_00005ed0;
        }
        _CFURLRequestSetProxySettings(IVar10,local_38);
      }
      lVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"objectForKey:",&cf_Timeout);
      puVar1 = PTR__objc_msgSend_00441098;
      if (lVar9 != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(lVar9,"doubleValue");
        NSMutableURLRequest::setTimeoutInterval_(IVar4,"setTimeoutInterval:");
      }
      IVar10 = _objc_alloc(&objc::class_t::AMSupportStaticURLConnectionDelegate);
      IVar10 = AMSupportStaticURLConnectionDelegate::initWithData_Options_
                         (IVar10,"initWithData:Options:",param_3,param_2);
      IVar11 = _objc_alloc(&_OBJC_CLASS___NSURLConnection);
      IVar11 = NSURLConnection::initWithRequest_delegate_startImmediately_
                         (IVar11,"initWithRequest:delegate:startImmediately:",IVar4,IVar10,1);
      IVar12 = AMSupportStaticURLConnectionDelegate::waitForResponseOrError_
                         (IVar10,"waitForResponseOrError:",param_6);
      if (IVar12 == 0) {
        lStack_80 = 0x10;
      }
      else {
        IVar13 = NSHTTPURLResponse::class((ID)&_OBJC_CLASS___NSHTTPURLResponse,"class");
        cVar2 = (*(code *)puVar1)(IVar12,"isKindOfClass:",IVar13);
        if (cVar2 != '\0') {
          if (param_5 != (undefined8 *)0x0) {
            uVar5 = (*(code *)PTR__objc_msgSend_00441098)(IVar12,"statusCode");
            *param_5 = uVar5;
          }
          if (param_4 != (long *)0x0) {
            IVar13 = AMSupportStaticURLConnectionDelegate::data(IVar10,"data");
            uVar6 = (*(code *)puVar1)(IVar12,"statusCode");
            uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            IVar14 = NSHTTPURLResponse::localizedStringForStatusCode_
                               ((ID)&_OBJC_CLASS___NSHTTPURLResponse,"localizedStringForStatusCode:"
                                ,uVar6,puVar1);
            lVar9 = _CFHTTPMessageCreateResponse(uVar5,uVar6,IVar14,&cf_HTTP_1_1);
            if (lVar9 != 0) {
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(IVar12,"allHeaderFields");
              _CFDictionaryApplyFunction(uVar5,__CFHTTPMessageSetHeader,lVar9);
              _CFHTTPMessageSetBody(lVar9,IVar13);
            }
            *param_4 = lVar9;
          }
        }
        IVar12 = AMSupportStaticURLConnectionDelegate::error(IVar10,"error");
        lStack_80 = (ulong)(IVar12 != 0) << 4;
      }
      goto LAB_00005ed0;
    }
    lStack_80 = 3;
    _AMSupportLogInternal(3,"_AMSupportHttpMessageSendSyncNoRetry","request is nil");
  }
  local_38 = 0;
  IVar10 = 0;
  IVar11 = 0;
  IVar4 = 0;
LAB_00005ed0:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar11);
  (*(code *)puVar1)(IVar10);
  (*(code *)puVar1)(IVar4);
  (*(code *)puVar1)(local_38);
  _objc_autoreleasePoolPop(uVar3);
  return lStack_80;
}

