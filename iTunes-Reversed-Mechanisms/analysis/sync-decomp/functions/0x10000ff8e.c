// rea decompile_all
// name: MailAccountsDataClassHandler::shouldApplyRecord:withRecordIdentifier:
// address: 0x10000ff8e
// body: available
// range: 0x10000ff8e-0x10001025f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char MailAccountsDataClassHandler::shouldApplyRecord_withRecordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
            ,"-[MailAccountsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",6,
            &cf_MailAccountsDataClassHandler0x_08xshouldApplyRecordcalled,param_1);
  }
  puVar1 = PTR__objc_msgSend_100020210;
  if (*(long *)(param_1 + _mailAccountIdentityStrings) == 0) {
    cVar2 = _DLShouldLog(4);
    if (cVar2 == '\0') {
      return '\x01';
    }
    pcVar4 = &cf_Odd_nofilteringconfigured_justreturningarousingYES;
    uVar8 = 4;
  }
  else {
    pcVar4 = (cfstringStruct *)
             (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_accountType);
    pcVar5 = (cfstringStruct *)(*(code *)puVar1)(param_3,"objectForKey:",&cf_hostname);
    IVar6 = (*(code *)puVar1)(param_3,"objectForKey:",&cf_username);
    cVar2 = (*(code *)puVar1)(pcVar4,"isEqual:",&cf_SMTPAccount);
    if (cVar2 == '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)(pcVar4,"isEqual:",&cf_iToolsAccount);
      pcVar9 = &cf_mac_com;
      if (cVar2 == '\0') {
        pcVar9 = pcVar5;
      }
      pcVar5 = &cf__Mac;
      if (cVar2 == '\0') {
        pcVar5 = pcVar4;
      }
      if (IVar6 == 0 || (pcVar9 == (cfstringStruct *)0x0 || pcVar5 == (cfstringStruct *)0x0)) {
        cVar2 = _DLShouldLog(5);
        if (cVar2 == '\0') {
          return '\0';
        }
        pcVar4 = &cf_Accountisnotdeliveryaccountandhasnotype_hostname_orusername_filteringitout___;
        cVar2 = '\0';
      }
      else {
        cVar2 = (*(code *)PTR__objc_msgSend_100020210)(pcVar5,"hasSuffix:",&cf_Account);
        puVar1 = PTR__objc_msgSend_100020210;
        if (cVar2 != '\0') {
          lVar7 = (*(code *)PTR__objc_msgSend_100020210)(pcVar5,"length");
          pcVar5 = (cfstringStruct *)(*(code *)puVar1)(pcVar5,"substringToIndex:",lVar7 + -7);
        }
        IVar6 = MailAccountState::identityStringForType_username_hostname_
                          ((ID)&objc::class_t::MailAccountState,
                           "identityStringForType:username:hostname:",(ID)pcVar5,IVar6,(ID)pcVar9);
        cVar2 = _DLShouldLog(5);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                  ,"-[MailAccountsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",5,
                  &cf_Checkingrecordwithidentitystring__,IVar6);
        }
        cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                          (*(undefined8 *)(param_1 + _mailAccountIdentityStrings),"containsObject:",
                           IVar6);
        cVar3 = _DLShouldLog(5);
        if (cVar2 == '\0') {
          if (cVar3 == '\0') {
            return '\0';
          }
          pcVar4 = &cf_Filteringoutrecordbecausethereisnogoodreasontoletitthrough___;
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x01';
          if (cVar3 == '\0') {
            return '\x01';
          }
          pcVar4 = &cf_Passingrecordwithidentitythroughfilter___;
        }
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
              ,"-[MailAccountsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",5,pcVar4,
              param_3);
      return cVar2;
    }
    cVar2 = _DLShouldLog(5);
    if (cVar2 == '\0') {
      return '\x01';
    }
    pcVar4 = &cf_Lettingsmtpaccountthroughfiltering;
    uVar8 = 5;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
          ,"-[MailAccountsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",uVar8,pcVar4);
  return '\x01';
}

