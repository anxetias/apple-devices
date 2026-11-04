// rea decompile_all
// name: MailAccountsDataClassHandler::mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:
// address: 0x10000eece
// body: available
// range: 0x10000eece-0x10000fe20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID MailAccountsDataClassHandler::
   mutateRecordFromSyncServicesForTarget_change_recordIdentifier_sendNow_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,char *param_6)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  ID IVar16;
  ID IVar17;
  ID IVar18;
  ID IVar19;
  ID IVar20;
  ID IVar21;
  undefined8 uVar22;
  cfstringStruct *pcVar23;
  code *pcVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  unsigned_short local_50;
  
  pcVar24 = (code *)PTR__objc_msgSend_100020210;
  lVar4 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_accountType);
  pcVar5 = (cfstringStruct *)(*pcVar24)(param_3,"objectForKey:",&cf_hostname);
  lVar6 = (*pcVar24)(param_3,"objectForKey:",&cf_username);
  cVar2 = (*pcVar24)(lVar4,"isEqualToString:",&cf_SMTPAccount);
  if (cVar2 == '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar4,"isEqualToString:",&cf_iToolsAccount);
    pcVar23 = &cf_mac_com;
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar23 = pcVar5;
    }
    if (cVar2 == '\0') {
      pcVar23 = pcVar5;
    }
    if (((lVar4 == 0) || (pcVar23 == (cfstringStruct *)0x0)) || (lVar6 == 0)) {
      cVar2 = _DLShouldLog(5);
      if (cVar2 == '\0') {
        return 0;
      }
      pcVar5 = &cf_Accountisnotdeliveryaccountandhasnotype_hostname_orusername_rejecting___;
    }
    else {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar4,"isEqualToString:",&cf_EWSAccount);
      if (cVar2 == '\0') {
        cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar4,"isEqualToString:",&cf_HTTPMailAccount)
        ;
        puVar1 = PTR__objc_msgSend_100020210;
        if (cVar2 == '\0') {
          auVar25 = (*(code *)PTR__objc_msgSend_100020210)(pcVar23,"rangeOfString:",&cf__yahoo_com);
          auVar26 = (*(code *)puVar1)(pcVar23,"rangeOfString:",&cf__ymail_com);
          if (((auVar25._8_8_ == 0) ||
              (lVar4 = (*(code *)PTR__objc_msgSend_100020210)(pcVar23,"length"),
              auVar25._0_8_ + auVar25._8_8_ != lVar4)) &&
             ((auVar26._8_8_ == 0 ||
              (lVar4 = (*(code *)PTR__objc_msgSend_100020210)(pcVar23,"length"),
              auVar26._0_8_ + auVar26._8_8_ != lVar4)))) {
            cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                              (pcVar23,"isEqualToString:",&cf_pop_gmail_com);
            if ((cVar2 != '\0') ||
               (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                                  (pcVar23,"isEqualToString:",&cf_imap_gmail_com), cVar2 != '\0')) {
              lVar4 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_username);
              if (lVar4 == 0) {
                cVar2 = _DLShouldLog(3);
                pcVar24 = (code *)PTR__objc_msgSend_100020210;
                if (cVar2 == '\0') goto LAB_10000ef54;
                lVar4 = 0;
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                        ,
                        "-[MailAccountsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                        ,3,&
                           cf_ThereisnousernameforaGmailemailaccountpulledfromSyncServices_sosendingtodeviceasisandlettingtheusersortitoutonthedevice___
                        ,param_3);
              }
              else {
                cVar2 = _DLShouldLog(5);
                pcVar24 = (code *)PTR__objc_msgSend_100020210;
                if (cVar2 != '\0') {
                  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                          ,
                          "-[MailAccountsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                          ,5,&cf_Foundaspecialgmailaccount_transmutatingittoaGmailiPhoneaccount___,
                          param_3);
                }
                uVar22 = (*(code *)PTR__objc_msgSend_100020210)(lVar4,"copy");
                lVar4 = _objc_autorelease(uVar22);
              }
              goto LAB_10000ef57;
            }
          }
          else {
            puVar1 = PTR__objc_msgSend_100020210;
            lVar6 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_username);
            lVar4 = (*(code *)puVar1)(param_3,"objectForKey:",&cf_fullUserName);
            IVar7 = (*(code *)puVar1)(param_3,"objectForKey:",&cf_accountName);
            cVar2 = _DLShouldLog(5);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                      ,
                      "-[MailAccountsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                      ,5,&cf_FoundaYahooPopaccount_transmutatingittoaYahooiPhoneaccount___,param_3);
            }
            if (lVar6 != 0) {
              if (lVar4 == 0) {
                lVar4 = lVar6;
              }
              if (IVar7 == 0) {
                IVar7 = NSString::stringWithFormat_
                                  ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_Yahoo___,
                                   lVar4);
              }
              param_3 = NSMutableDictionary::dictionaryWithObjectsAndKeys_
                                  ((ID)&_OBJC_CLASS___NSMutableDictionary,
                                   "dictionaryWithObjectsAndKeys:",&cf_YahooAccount,&cf_AccountType,
                                   IVar7,&cf_AccountName,lVar6,&cf_Username,lVar4,&cf_FullUserName,0
                                  );
              _setUniqueIDInMailAccountRecord_forRecordIdentifier_
                        (param_1,"_setUniqueIDInMailAccountRecord:forRecordIdentifier:",param_3,
                         param_5);
              cVar2 = _DLShouldLog(5);
              if (cVar2 == '\0') {
                return param_3;
              }
              pcVar5 = &cf_CreatediPhoneYahooaccount___;
              IVar7 = param_3;
              goto LAB_10000f5ff;
            }
            cVar2 = _DLShouldLog(3);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                      ,
                      "-[MailAccountsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                      ,3,&
                         cf_ThereisnousernameforaYahooemailaccountpulledfromSyncServices_sosendingtodeviceasisandlettingtheusersortitoutonthedevice___
                      ,param_3);
            }
          }
          lVar4 = 0;
          pcVar24 = (code *)PTR__objc_msgSend_100020210;
          goto LAB_10000ef57;
        }
        cVar2 = _DLShouldLog(5);
        if (cVar2 == '\0') {
          return 0;
        }
        pcVar5 = &cf_IgnoringHTTPMailaccount__;
      }
      else {
        cVar2 = _DLShouldLog(5);
        if (cVar2 == '\0') {
          return 0;
        }
        pcVar5 = &cf_IgnoringExchangeaccount__;
      }
    }
    IVar7 = 0;
LAB_10000f5ff:
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
            ,
            "-[MailAccountsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
            ,5,pcVar5,param_3);
    return IVar7;
  }
LAB_10000ef54:
  lVar4 = 0;
LAB_10000ef57:
  if (DAT_100028e70 == 0) {
    IVar7 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
    DAT_100028e70 =
         NSDictionary::initWithObjectsAndKeys_
                   (IVar7,"initWithObjectsAndKeys:",&cf_Autofetch,&cf_shouldAutofetch,
                    &cf_BigMessageWarningSize,&cf_bigMessageWarningSize,&cf_PortNumber,
                    &cf_portNumber,&cf_SSLEnabled,&cf_isSSLEnabled,&cf_StoreJunkOnServer,
                    &cf_shouldStoreJunkOnServer,&cf_MaxMessageBytes,&cf_maximumMessageBytes,
                    &cf_AccountType,&cf_accountType,&cf_AccountName,&cf_accountName,&cf_Hostname,
                    &cf_hostname,&cf_DraftsMailboxName,&cf_draftsMailboxName,&cf_ServerPathPrefix,
                    &cf_serverPathPrefix,&cf_Domain,&cf_domain,&cf_NumberOfDaysToKeepTrash,
                    &cf_numberOfDaysToKeepTrash,&cf_TrashMailboxName,&cf_trashMailboxName,
                    &cf_CacheOveraggressively,&cf_shouldCacheOveraggressively,
                    &cf_NumberOfDaysToKeepJunk,&cf_numberOfDaysToKeepJunk,&cf_AuthenticationScheme,
                    &cf_authenticationScheme,&cf_ShouldUseAuthentication,&cf_shouldUseAuthentication
                    ,&cf_CompactWhenClosingMailboxes,&cf_shouldCompactWhenClosingMailboxes,
                    &cf_JunkMailboxName,&cf_junkMailboxName,&cf_SMTPIdentifier,&cf_smtpIdentifier,
                    &cf_Username,&cf_username,&cf_StoreDraftsOnServer,&cf_shouldStoreDraftsOnServer,
                    &cf_FullUserName,&cf_fullUserName,&cf_SentMessagesMailboxName,
                    &cf_sentMessagesMailboxName,&cf_NumberOfDaysToKeepSentMessages,
                    &cf_numberOfDaysToKeepSentMessages,&cf_StoreSentMessagesOnServer,
                    &cf_shouldStoreSentMessagesOnServer,&cf_MoveDeletedMessagesToTrash,
                    &cf_shouldMoveDeletedMessagesToTrash,&cf_EmailAddresses,&cf_addresses,
                    &cf_CachePolicy,&cf_cachePolicy,&cf_StoreTrashOnServer,
                    &cf_shouldStoreTrashOnServer,0);
  }
  if (DAT_100028e78 == 0) {
    IVar7 = _objc_alloc(&_OBJC_CLASS___NSDictionary,DAT_100028e70);
    IVar8 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",2);
    IVar9 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar10 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",2);
    IVar11 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",2);
    IVar12 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",2);
    IVar13 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar14 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar15 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar16 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar17 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar18 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar19 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar20 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    IVar21 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",3);
    DAT_100028e78 =
         NSDictionary::initWithObjectsAndKeys_
                   (IVar7,"initWithObjectsAndKeys:",IVar8,&cf_bigMessageWarningSize,IVar9,
                    &cf_isSSLEnabled,IVar10,&cf_numberOfDaysToKeepJunk,IVar11,
                    &cf_numberOfDaysToKeepSentMessages,IVar12,&cf_numberOfDaysToKeepTrash,IVar13,
                    &cf_shouldAutofetch,IVar14,&cf_shouldCacheOveraggressively,IVar15,
                    &cf_shouldCompactWhenClosingMailboxes,IVar16,
                    &cf_shouldMoveDeletedMessagesToTrash,IVar17,&cf_shouldStoreDraftsOnServer,IVar18
                    ,&cf_shouldStoreJunkOnServer,IVar19,&cf_shouldStoreSentMessagesOnServer,IVar20,
                    &cf_shouldStoreTrashOnServer,IVar21,&cf_shouldUseAuthentication,0);
  }
  IVar7 = FUN_10000eb2e(param_3,DAT_100028e70,DAT_100028e78);
  if (IVar7 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + _syncMailAccountPasswords) != '\x01') goto LAB_10000f7a4;
  lVar6 = (*pcVar24)(IVar7,"objectForKey:",&cf_AccountType);
  cVar2 = (*pcVar24)(lVar6,"isEqual:",&cf_iToolsAccount);
  IVar8 = (*pcVar24)(IVar7,"objectForKey:",&cf_Username);
  if (cVar2 == '\0') {
    IVar9 = (*pcVar24)(IVar7,"objectForKey:",&cf_Hostname);
    uVar22 = (*pcVar24)(IVar7,"objectForKey:",&cf_PortNumber);
    iVar3 = (*pcVar24)(uVar22,"intValue");
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
              ,"_setMailPassword",6,
              &cf_Attributestogetpasswordformailaccount_user____host____accountType____port___,IVar8
              ,IVar9,lVar6,uVar22);
    }
    if (((lVar6 == 0) || (IVar8 == 0)) || (IVar9 == 0)) {
      cVar2 = _DLShouldLog(6);
      if (cVar2 == '\0') goto LAB_10000f7a4;
      pcVar5 = &cf_Can_tgetallrequiredattributestogetpasswordformailaccount;
      goto LAB_10000f798;
    }
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)(IVar9,"isEqualToString:",&cf_smtp_mail_yahoo_com)
    ;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar6,"isEqualToString:",&cf_SMTPAccount);
      if ((cVar2 == '\0') ||
         ((cVar2 = (*(code *)PTR__objc_msgSend_100020210)(IVar9,"isEqualToString:",&cf_smtp_mac_com)
          , cVar2 == '\0' &&
          (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(IVar9,"isEqualToString:",&cf_smtp_me_com),
          cVar2 == '\0')))) {
        cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar6,"isEqualToString:",&cf_IMAPAccount);
        if (cVar2 == '\0') {
          cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar6,"isEqualToString:",&cf_POPAccount);
          if (cVar2 == '\0') {
            cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar6,"isEqualToString:",&cf_SMTPAccount)
            ;
            pcVar5 = &cf_SMTP;
            if (cVar2 == '\0') {
              pcVar5 = &cf___;
            }
          }
          else {
            pcVar5 = &cf_POP;
            if (iVar3 == 0x3e3) {
              cVar2 = _DLShouldLog(5);
              iVar3 = 0x6e;
              if (cVar2 != '\0') {
                pcVar23 = &cf_POPportis995_settingto110;
                goto LAB_10000fdc2;
              }
            }
          }
        }
        else {
          pcVar5 = &cf_IMAP;
          if (iVar3 == 0x3e1) {
            cVar2 = _DLShouldLog(5);
            iVar3 = 0x8f;
            if (cVar2 != '\0') {
              pcVar23 = &cf_IMAPportis993_settingto143;
LAB_10000fdc2:
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                      ,"_setMailPassword",5,pcVar23);
            }
          }
        }
        IVar8 = MailSyncKeychainManager::passwordForHost_username_port_protocol_
                          ((ID)&objc::class_t::MailSyncKeychainManager,
                           "passwordForHost:username:port:protocol:",IVar9,IVar8,
                           (unsigned_short)iVar3,(ID)pcVar5);
LAB_10000f4e9:
        if (IVar8 == 0) goto LAB_10000f7a4;
      }
      else {
        local_50 = (unsigned_short)iVar3;
        IVar8 = MailSyncKeychainManager::passwordForHost_username_port_protocol_
                          ((ID)&objc::class_t::MailSyncKeychainManager,
                           "passwordForHost:username:port:protocol:",IVar9,IVar8,local_50,
                           0x100023b78);
        if (IVar8 == 0) {
          IVar8 = (*pcVar24)(IVar7,"objectForKey:",&cf_Username);
          IVar8 = MailSyncKeychainManager::passwordForServiceName_accountName_
                            ((ID)&objc::class_t::MailSyncKeychainManager,
                             "passwordForServiceName:accountName:",0x100023a58,IVar8);
          goto LAB_10000f4e9;
        }
      }
      cVar2 = _DLShouldLog(6);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                ,"_setMailPassword",6,&cf_Passwordfoundfor__,IVar7);
      }
      uVar22 = (*pcVar24)(IVar8,"dataUsingEncoding:",4);
      (*pcVar24)(IVar7,"setValue:forKey:",uVar22,&cf___Password__);
      goto LAB_10000f7a4;
    }
    cVar2 = _DLShouldLog(5);
    if (cVar2 == '\0') goto LAB_10000f7a4;
    pcVar5 = &cf_SkippingpasswordforYahooSMTPserver;
    uVar22 = 5;
  }
  else {
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
              ,"_setMailPassword",6,
              &cf_AttributestogetpasswordforiToolsaccount_accountName____service___,IVar8,&cf_iTools
             );
    }
    if (IVar8 != 0) {
      IVar8 = MailSyncKeychainManager::passwordForServiceName_accountName_
                        ((ID)&objc::class_t::MailSyncKeychainManager,
                         "passwordForServiceName:accountName:",0x100023a58,IVar8);
      goto LAB_10000f4e9;
    }
    cVar2 = _DLShouldLog(6);
    if (cVar2 == '\0') goto LAB_10000f7a4;
    pcVar5 = &cf_Can_tgetallrequiredattributestogetpasswordforiToolsaccount;
LAB_10000f798:
    uVar22 = 6;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
          ,"_setMailPassword",uVar22,pcVar5);
LAB_10000f7a4:
  _setUniqueIDInMailAccountRecord_forRecordIdentifier_
            (param_1,"_setUniqueIDInMailAccountRecord:forRecordIdentifier:",IVar7,param_5);
  uVar22 = (*pcVar24)(param_3,"objectForKey:",&cf_authenticationScheme);
  cVar2 = (*pcVar24)(uVar22,"isEqualToString:",&cf_PLAIN);
  if (cVar2 != '\0') {
    (*(code *)PTR__objc_msgSend_100020210)
              (IVar7,"setObject:forKey:",&cf___,&cf_AuthenticationScheme);
  }
  if (lVar4 != 0) {
    lVar6 = (*(code *)PTR__objc_msgSend_100020210)(lVar4,"rangeOfString:",&cf__);
    if ((lVar6 == 0x7fffffffffffffff) &&
       (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar4,"hasSuffix:",&cf__gmail_com),
       cVar2 == '\0')) {
      IVar8 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______,lVar4,
                         &cf_gmail_com);
      (*pcVar24)(IVar7,"setObject:forKey:",IVar8,&cf_Username);
    }
    (*pcVar24)(IVar7,"setObject:forKey:",&cf_GmailAccount,&cf_AccountType);
    (*pcVar24)(IVar7,"setObject:forKey:",&cf_YES,&cf_SSLEnabled);
    (*pcVar24)(IVar7,"removeObjectForKey:",&cf_Hostname);
    (*pcVar24)(IVar7,"removeObjectForKey:",&cf_EmailAddresses);
    (*pcVar24)(IVar7,"removeObjectForKey:",&cf_SMTPIdentifier);
    (*pcVar24)(IVar7,"removeObjectForKey:",&cf_AuthenticationScheme);
    (*pcVar24)(IVar7,"removeObjectForKey:",&cf_BigMessageWarningSize);
    (*pcVar24)(IVar7,"removeObjectForKey:",&cf_PortNumber);
    return IVar7;
  }
  return IVar7;
}

