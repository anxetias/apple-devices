// rea decompile_all
// name: MailAccountsDataClassHandler::mutateRecordFromTargetForSyncServices:recordIdentifier:
// address: 0x10000e637
// body: available
// range: 0x10000e637-0x10000eb2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID MailAccountsDataClassHandler::mutateRecordFromTargetForSyncServices_recordIdentifier_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  
  if (DAT_100028e60 == 0) {
    IVar1 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
    DAT_100028e60 =
         NSDictionary::initWithObjectsAndKeys_
                   (IVar1,"initWithObjectsAndKeys:",&cf_accountName,&cf_AccountName,&cf_accountType,
                    &cf_AccountType,&cf_addresses,&cf_EmailAddresses,&cf_authenticationScheme,
                    &cf_AuthenticationScheme,&cf_bigMessageWarningSize,&cf_BigMessageWarningSize,
                    &cf_cachePolicy,&cf_CachePolicy,&cf_domain,&cf_Domain,&cf_draftsMailboxName,
                    &cf_DraftsMailboxName,&cf_fullUserName,&cf_FullUserName,&cf_hostname,
                    &cf_Hostname,&cf_isSSLEnabled,&cf_SSLEnabled,&cf_junkMailboxName,
                    &cf_JunkMailboxName,&cf_maximumMessageBytes,&cf_MaxMessageBytes,
                    &cf_numberOfDaysToKeepJunk,&cf_NumberOfDaysToKeepJunk,
                    &cf_numberOfDaysToKeepTrash,&cf_NumberOfDaysToKeepTrash,
                    &cf_numberOfDaysToKeepSentMessages,&cf_NumberOfDaysToKeepSentMessages,
                    &cf_portNumber,&cf_PortNumber,&cf_sentMessagesMailboxName,
                    &cf_SentMessagesMailboxName,&cf_serverPathPrefix,&cf_ServerPathPrefix,
                    &cf_shouldStoreSentMessagesOnServer,&cf_StoreSentMessagesOnServer,
                    &cf_shouldStoreTrashOnServer,&cf_StoreTrashOnServer,
                    &cf_shouldCacheOveraggressively,&cf_CacheOveraggressively,
                    &cf_shouldCompactWhenClosingMailboxes,&cf_CompactWhenClosingMailboxes,
                    &cf_shouldMoveDeletedMessagesToTrash,&cf_MoveDeletedMessagesToTrash,
                    &cf_shouldAutofetch,&cf_Autofetch,&cf_shouldStoreDraftsOnServer,
                    &cf_StoreDraftsOnServer,&cf_shouldStoreJunkOnServer,&cf_StoreJunkOnServer,
                    &cf_shouldPreventPartialDownloads,&cf_PreventDismemberment,
                    &cf_shouldUseAuthentication,&cf_ShouldUseAuthentication,&cf_smtpIdentifier,
                    &cf_SMTPIdentifier,&cf_trashMailboxName,&cf_TrashMailboxName,&cf_username,
                    &cf_Username,0);
  }
  if (DAT_100028e68 == 0) {
    IVar1 = _objc_alloc(&_OBJC_CLASS___NSDictionary,DAT_100028e60);
    IVar2 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar3 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
    IVar4 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar5 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar6 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar7 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
    IVar8 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
    IVar9 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
    IVar10 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar11 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar12 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar13 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar14 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    IVar15 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
    DAT_100028e68 =
         NSDictionary::initWithObjectsAndKeys_
                   (IVar1,"initWithObjectsAndKeys:",IVar2,&cf_Autofetch,IVar3,
                    &cf_BigMessageWarningSize,IVar4,&cf_CacheOveraggressively,IVar5,
                    &cf_CompactWhenClosingMailboxes,IVar6,&cf_MoveDeletedMessagesToTrash,IVar7,
                    &cf_NumberOfDaysToKeepJunk,IVar8,&cf_NumberOfDaysToKeepSentMessages,IVar9,
                    &cf_NumberOfDaysToKeepTrash,IVar10,&cf_ShouldUseAuthentication,IVar11,
                    &cf_SSLEnabled,IVar12,&cf_StoreDraftsOnServer,IVar13,&cf_StoreJunkOnServer,
                    IVar14,&cf_StoreSentMessagesOnServer,IVar15,&cf_StoreTrashOnServer,0);
  }
  IVar1 = FUN_10000eb2e(param_3,DAT_100028e60,DAT_100028e68);
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_100020210)
              (IVar1,"setObject:forKey:",&cf_com_apple_mail_Account,
               *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150);
  }
  return IVar1;
}

