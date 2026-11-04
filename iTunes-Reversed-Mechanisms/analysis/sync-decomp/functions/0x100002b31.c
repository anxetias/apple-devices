// rea decompile_all
// name: ConcreteSyncClient::_postNotification:message:errorCode:
// address: 0x100002b31
// body: available
// range: 0x100002b31-0x100002d2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100002d23 to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100039002 NSDistributedNotificationCenter::postNotificationName:object:userInfo: (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

void ConcreteSyncClient::_postNotification_message_errorCode_
               (ID param_1,SEL param_2,ID param_3,ID param_4,int param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  ID self;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  
  lVar4 = _dataClassIndex;
  lVar3 = _dataClassNames;
  if (*(char *)(param_1 + _quiet) != '\0') {
    return;
  }
  uVar1 = *(ulong *)(param_1 + _dataClassIndex);
  if (uVar1 == 0) {
LAB_100002b8c:
    pcVar8 = (cfstringStruct *)0x0;
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _dataClassNames),"count");
    if (uVar6 < uVar1) goto LAB_100002b8c;
    pcVar8 = (cfstringStruct *)
             (*(code *)PTR__objc_msgSend_100020210)
                       (*(undefined8 *)(param_1 + lVar3),"objectAtIndex:",
                        *(long *)(param_1 + lVar4) + -1);
  }
  pcVar11 = &cf___;
  if (pcVar8 != (cfstringStruct *)0x0) {
    pcVar11 = pcVar8;
  }
  IVar7 = *(ID *)(param_1 + _client);
  if (IVar7 == 0) {
    IVar7 = getTarget(param_1,"getTarget");
    IVar7 = SyncClient::getSyncClient_((ID)&objc::class_t::SyncClient,"getSyncClient:",IVar7);
    if (IVar7 == 0) {
      pcVar8 = (cfstringStruct *)0x0;
      pcVar9 = (cfstringStruct *)0x0;
      goto LAB_100002c1d;
    }
  }
  puVar2 = PTR__objc_msgSend_100020210;
  pcVar8 = (cfstringStruct *)(*(code *)PTR__objc_msgSend_100020210)(IVar7,"displayName");
  pcVar9 = (cfstringStruct *)(*(code *)puVar2)(IVar7,"clientIdentifier");
LAB_100002c1d:
  pcVar10 = &cf_device;
  if (pcVar8 != (cfstringStruct *)0x0) {
    pcVar10 = pcVar8;
  }
  pcVar8 = &cf_unknown;
  if (pcVar9 != (cfstringStruct *)0x0) {
    pcVar8 = pcVar9;
  }
  IVar7 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",(ulong)param_5);
  IVar7 = NSDictionary::dictionaryWithObjectsAndKeys_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",pcVar10,
                     &cf_clientDisplayName,pcVar8,&cf_clientIdentifier,pcVar11,&cf_dataClassName,
                     IVar7,&cf_errorCode,0);
  cVar5 = _DLShouldLog(5);
  if (cVar5 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient _postNotification:message:errorCode:]",5,
            &cf_Postingnotification_______infodict___,param_3,param_4,IVar7);
  }
  self = NSDistributedNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
  NSDistributedNotificationCenter::postNotificationName_object_userInfo_
            (self,"postNotificationName:object:userInfo:",param_3,param_4,IVar7);
  return;
}

