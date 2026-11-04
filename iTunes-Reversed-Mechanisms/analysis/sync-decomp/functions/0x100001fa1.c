// rea decompile_all
// name: ConcreteSyncClient::initWithSyncWireTalker:dataClassNames:suppressNotifications:clearDataClasses:
// address: 0x100001fa1
// body: available
// range: 0x100001fa1-0x10000206b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID ConcreteSyncClient::initWithSyncWireTalker_dataClassNames_suppressNotifications_clearDataClasses_
             (ID param_1,SEL param_2,ID param_3,ID param_4,char param_5,char param_6)

{
  ID IVar1;
  undefined8 uVar2;
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::ConcreteSyncClient;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    uVar2 = (*(code *)PTR__objc_retain_100020220)(param_3);
    *(undefined8 *)(IVar1 + _talker) = uVar2;
    *(char *)(IVar1 + _quiet) = param_5;
    *(char *)(IVar1 + _clear) = param_6;
    SyncClient::setDataClassNames_(IVar1,"setDataClassNames:",param_4);
    self = NSDistributedNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
    NSDistributedNotificationCenter::addObserver_selector_name_object_
              (self,"addObserver:selector:name:object:",IVar1,"handleSyncCancelNotification:",
               &cf_com_apple_SyncServices_iPodSync_Cancel,0);
  }
  return IVar1;
}

