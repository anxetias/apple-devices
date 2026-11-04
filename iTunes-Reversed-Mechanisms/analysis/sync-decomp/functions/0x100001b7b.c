// rea decompile_all
// name: SyncClient::postNotificationForTargetId:dataClassName:notificationName:message:errorCode:
// address: 0x100001b7b
// body: available
// range: 0x100001b7b-0x100001d1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100001d1b to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100039002 NSDistributedNotificationCenter::postNotificationName:object:userInfo: (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x34 bytes */

void SyncClient::postNotificationForTargetId_dataClassName_notificationName_message_errorCode_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,int param_7)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID self;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  
  pcVar7 = &cf___;
  if (param_4 != 0) {
    pcVar7 = (cfstringStruct *)param_4;
  }
  IVar3 = getSyncClient_((ID)&objc::class_t::SyncClient,"getSyncClient:",param_3);
  puVar1 = PTR__objc_msgSend_100020210;
  if (IVar3 == 0) {
    pcVar6 = &cf_device;
  }
  else {
    pcVar4 = (cfstringStruct *)(*(code *)PTR__objc_msgSend_100020210)(IVar3,"displayName");
    pcVar5 = (cfstringStruct *)(*(code *)puVar1)(IVar3,"clientIdentifier");
    pcVar6 = &cf_device;
    if (pcVar4 != (cfstringStruct *)0x0) {
      pcVar6 = pcVar4;
    }
    if (pcVar5 != (cfstringStruct *)0x0) goto LAB_100001c32;
  }
  if (param_3 == 0) {
    pcVar5 = &cf_unknown;
  }
  else {
    pcVar5 = (cfstringStruct *)
             clientIdForTarget_((ID)&objc::class_t::SyncClient,"clientIdForTarget:",param_3);
  }
LAB_100001c32:
  IVar3 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",(ulong)param_7);
  IVar3 = NSDictionary::dictionaryWithObjectsAndKeys_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",pcVar6,
                     &cf_clientDisplayName,pcVar5,&cf_clientIdentifier,pcVar7,&cf_dataClassName,
                     IVar3,&cf_errorCode,0);
  cVar2 = _DLShouldLog(5);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,
            "+[SyncClient postNotificationForTargetId:dataClassName:notificationName:message:errorCode:]"
            ,5,&cf_Postingnotification_______infodict___,param_5,param_6,IVar3);
  }
  self = NSDistributedNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
  NSDistributedNotificationCenter::postNotificationName_object_userInfo_
            (self,"postNotificationName:object:userInfo:",param_5,param_6,IVar3);
  return;
}

