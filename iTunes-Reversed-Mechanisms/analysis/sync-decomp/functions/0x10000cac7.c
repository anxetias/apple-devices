// rea decompile_all
// name: ContactsDataClassHandler::mutateRecordFromTargetForSyncServices:recordIdentifier:
// address: 0x10000cac7
// body: available
// range: 0x10000cac7-0x10000ce2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000cddc to 0x1000148ab _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID ContactsDataClassHandler::mutateRecordFromTargetForSyncServices_recordIdentifier_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  
  puVar1 = PTR__objc_msgSend_100020210;
  uVar4 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150;
  if (*(long *)(param_1 + _defaultGroupName) != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",uVar4);
    cVar2 = (*(code *)puVar1)(uVar3,"isEqualToString:",
                              *(undefined8 *)PTR__ISyncEntity_Contacts_Group_100020120);
    if (cVar2 != '\0') {
      uVar4 = (*(code *)puVar1)(param_3,"objectForKey:",
                                *(undefined8 *)PTR__ISyncAttribute_Contacts_Group_Name_100020078);
      cVar2 = (*(code *)puVar1)(uVar4,"isEqualToString:",
                                *(undefined8 *)(param_1 + _defaultGroupName));
      puVar1 = PTR__objc_retain_100020220;
      if (cVar2 != '\0') {
        uVar4 = (*(code *)PTR__objc_retain_100020220)(param_3);
        *(undefined8 *)(param_1 + _defaultGroupRecord) = uVar4;
        uVar4 = (*(code *)puVar1)(param_4);
        *(undefined8 *)(param_1 + _defaultGroupRecordIdentifier) = uVar4;
        return 0;
      }
      return param_3;
    }
  }
  puVar1 = PTR__objc_msgSend_100020210;
  uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",uVar4);
  cVar2 = (*(code *)puVar1)(uVar3,"isEqualToString:",
                            *(undefined8 *)PTR__ISyncEntity_Contacts_URL_100020148);
  if (cVar2 == '\0') {
    uVar4 = (*(code *)puVar1)(param_3,"objectForKey:",uVar4);
    cVar2 = (*(code *)puVar1)(uVar4,"isEqualToString:",
                              *(undefined8 *)PTR__ISyncEntity_Contacts_IM_100020128);
    if (cVar2 == '\0') {
      return param_3;
    }
    pcVar8 = *(cfstringStruct **)PTR__ISyncAttribute_Contacts_IM_Service_100020080;
    uVar4 = (*(code *)puVar1)(param_3,"objectForKey:",pcVar8);
    cVar2 = (*(code *)puVar1)(uVar4,"isEqualToString:",&cf_qq);
    if ((((cVar2 == '\0') &&
         (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(uVar4,"isEqualToString:",&cf_googletalk),
         cVar2 == '\0')) &&
        (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(uVar4,"isEqualToString:",&cf_skype),
        cVar2 == '\0')) &&
       ((cVar2 = (*(code *)PTR__objc_msgSend_100020210)(uVar4,"isEqualToString:",&cf_facebook),
        cVar2 == '\0' &&
        (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(uVar4,"isEqualToString:",&cf_gadugadu),
        cVar2 == '\0')))) {
      return param_3;
    }
    uVar3 = (*(code *)puVar1)(param_3,"mutableCopy");
    (*(code *)puVar1)(uVar3,"setObject:forKey:",uVar4,&cf_extendedservicetype);
    pcVar6 = &cf_icq;
  }
  else {
    lVar5 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_value);
    if (lVar5 == 0) {
      return param_3;
    }
    pcVar6 = (cfstringStruct *)
             NSURL::_web_URLWithUserTypedString_
                       ((ID)&_OBJC_CLASS___NSURL,"_web_URLWithUserTypedString:",lVar5);
    if (pcVar6 == (cfstringStruct *)0x0) {
      uVar4 = (*(code *)PTR__objc_msgSend_100020210)
                        (lVar5,"stringByAddingPercentEscapesUsingEncoding:",0x8000100);
      cVar2 = _DLShouldLog(6);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,
                "-[ContactsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
                ,6,&cf_Escapedbadurl____into____,0,uVar4);
      }
      pcVar6 = (cfstringStruct *)
               NSURL::_web_URLWithUserTypedString_
                         ((ID)&_OBJC_CLASS___NSURL,"_web_URLWithUserTypedString:",lVar5);
      if (pcVar6 == (cfstringStruct *)0x0) {
        cVar2 = _DLShouldLog(3);
        if (cVar2 == '\0') {
          return 0;
        }
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,
                "-[ContactsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
                ,3,&cf_Can_tconvert__toavalidURL_skippingrecordfromdevice,lVar5);
        return 0;
      }
    }
    uVar3 = (*(code *)puVar1)(param_3,"mutableCopy");
    pcVar8 = &cf_value;
  }
  (*(code *)puVar1)(uVar3,"setObject:forKey:",pcVar6,pcVar8);
  cVar2 = _DLShouldLog(7);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
            ,"-[ContactsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]",7
            ,&cf_Createdrecordforsyncservices___,uVar3);
  }
  IVar7 = _objc_autorelease(uVar3);
  return IVar7;
}

