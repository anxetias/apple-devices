// rea decompile_all
// name: AMSupportStaticURLSession::_urlRequestForHTTPMessage:
// address: 0x7679
// body: available
// range: 0x7679-0x7754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID AMSupportStaticURLSession::_urlRequestForHTTPMessage_
             (ID param_1,SEL param_2,__CFHTTPMessage *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  
  if (param_3 != (__CFHTTPMessage *)0x0) {
    uVar1 = _CFHTTPMessageCopyRequestURL(param_3);
    lVar2 = _objc_autorelease(uVar1);
    if ((lVar2 != 0) &&
       (IVar3 = (*(code *)PTR__objc_msgSend_00441098)
                          (*(undefined8 *)(param_1 + 0x10),&_OBJC_CLASS___NSMutableURLRequest,
                           "requestWithURL:cachePolicy:timeoutInterval:",lVar2,1), IVar3 != 0)) {
      uVar1 = _CFHTTPMessageCopyRequestMethod(param_3);
      lVar2 = _objc_autorelease(uVar1);
      if (lVar2 != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(IVar3,"setHTTPMethod:",lVar2);
        uVar1 = _CFHTTPMessageCopyAllHeaderFields(param_3);
        lVar2 = _objc_autorelease(uVar1);
        if (lVar2 != 0) {
          (*(code *)PTR__objc_msgSend_00441098)(IVar3,"setAllHTTPHeaderFields:",lVar2);
        }
        uVar1 = _CFHTTPMessageCopyBody(param_3);
        lVar2 = _objc_autorelease(uVar1);
        if (lVar2 == 0) {
          return IVar3;
        }
        (*(code *)PTR__objc_msgSend_00441098)(IVar3,"setHTTPBody:",lVar2);
        return IVar3;
      }
    }
  }
  return 0;
}

