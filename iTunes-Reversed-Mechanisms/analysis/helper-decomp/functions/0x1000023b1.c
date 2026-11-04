// rea decompile_all
// name: FUN_1000023b1
// address: 0x1000023b1
// body: available
// range: 0x1000023b1-0x100002530 inclusive
// range: 0x1000025bd-0x1000025f8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000025f3 to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100025b01 NSDictionary::initWithObjectsAndKeys: (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000023b1(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  ID IVar4;
  ID self;
  cfstringStruct *pcVar5;
  
  cVar1 = (*(code *)PTR__objc_msgSend_100012170)
                    (param_2,"isEqual:",*(undefined8 *)PTR__ISyncDataClass_Bookmarks_100012068);
  plVar2 = (long *)PTR__ISyncEntity_Bookmarks_Bookmark_100012080;
  if (((cVar1 == '\0') &&
      (cVar1 = (*(code *)PTR__objc_msgSend_100012170)
                         (param_2,"isEqual:",*(undefined8 *)PTR__ISyncDataClass_Calendars_100012070)
      , plVar2 = (long *)PTR__ISyncEntity_Calendars_Event_1000120a8, cVar1 == '\0')) &&
     (cVar1 = (*(code *)PTR__objc_msgSend_100012170)
                        (param_2,"isEqual:",*(undefined8 *)PTR__ISyncDataClass_Contacts_100012078),
     plVar2 = (long *)PTR__ISyncEntity_Contacts_Contact_1000120c0, cVar1 == '\0')) {
    cVar1 = (*(code *)PTR__objc_msgSend_100012170)(param_2,"isEqual:",&cf_com_apple_MailAccounts);
    if (cVar1 == '\0') {
      cVar1 = (*(code *)PTR__objc_msgSend_100012170)(param_2,"isEqual:",&cf_com_apple_Notes);
      if (cVar1 == '\0') {
        cVar1 = _DLShouldLog(3);
        if (cVar1 != '\0') {
          IVar4 = 0;
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                  ,"_representativeEntityNameForDataClassName",3,&cf_UnknownDataClass___,param_2);
          goto LAB_1000025c0;
        }
        goto LAB_1000025bd;
      }
      pcVar5 = &cf_com_apple_notes_Note;
    }
    else {
      pcVar5 = &cf_com_apple_mail_Account;
    }
LAB_100002442:
    uVar3 = _CFStringCreateWithFormat(0,0,&cf_com_apple_MobileSync___,param_1);
    uVar3 = _objc_autorelease(uVar3);
    IVar4 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
    IVar4 = ISyncManager::clientWithIdentifier_(IVar4,"clientWithIdentifier:",uVar3);
    if (IVar4 != 0) {
      IVar4 = ISyncManager::lastSyncDateForEntityName_(IVar4,"lastSyncDateForEntityName:",pcVar5);
      goto LAB_1000025c0;
    }
  }
  else {
    pcVar5 = (cfstringStruct *)*plVar2;
    if (pcVar5 != (cfstringStruct *)0x0) goto LAB_100002442;
  }
LAB_1000025bd:
  IVar4 = 0;
LAB_1000025c0:
  self = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  NSDictionary::initWithObjectsAndKeys_
            (self,"initWithObjectsAndKeys:",IVar4,&cf_AMSLastSyncDateKey,0);
  return;
}

