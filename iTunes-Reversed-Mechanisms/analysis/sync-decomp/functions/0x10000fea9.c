// rea decompile_all
// name: MailAccountsDataClassHandler::setFilteringCriteria:
// address: 0x10000fea9
// body: available
// range: 0x10000fea9-0x10000ff8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000ff7e to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void MailAccountsDataClassHandler::setFilteringCriteria_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_msgSend_100020210;
  IVar4 = NSArray::class((ID)&_OBJC_CLASS___NSArray,"class");
  cVar3 = (*(code *)puVar1)(param_3,"isKindOfClass:",IVar4);
  lVar2 = _mailAccountIdentityStrings;
  if (cVar3 == '\0') {
    cVar3 = _DLShouldLog(3);
    if (cVar3 == '\0') {
      return;
    }
    pcVar5 = &cf_MailAccountsfilteringcriteriaisnotanarray___;
    uVar6 = 3;
  }
  else {
    (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _mailAccountIdentityStrings));
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSSet);
    IVar4 = NSSet::initWithArray_(IVar4,"initWithArray:",param_3);
    *(ID *)(param_1 + lVar2) = IVar4;
    cVar3 = _DLShouldLog(5);
    if (cVar3 == '\0') {
      return;
    }
    param_3 = *(ID *)(param_1 + lVar2);
    pcVar5 = &cf_SetMailfilteringcriteriato__;
    uVar6 = 5;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
          ,"-[MailAccountsDataClassHandler setFilteringCriteria:]",uVar6,pcVar5,param_3);
  return;
}

