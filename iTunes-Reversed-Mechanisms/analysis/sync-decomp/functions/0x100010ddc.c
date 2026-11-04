// rea decompile_all
// name: FUN_100010ddc
// address: 0x100010ddc
// body: available
// range: 0x100010ddc-0x100010f05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100010eae to 0x100039404 NSMutableSet::allObjects (external=false, thunk=true, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100010ddc(long param_1)

{
  undefined *puVar1;
  ID self;
  undefined8 uVar2;
  ID self_00;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  
  puVar1 = PTR__objc_msgSend_100020210;
  if (param_1 != 0) {
    self = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
    uVar2 = (*(code *)puVar1)(param_1,"enabledEntityNames");
    self_00 = NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
    lVar3 = (*(code *)puVar1)(uVar2,"count");
    if (0 < lVar3) {
      lVar6 = 0;
      do {
        uVar4 = (*(code *)puVar1)(uVar2,"objectAtIndex:",lVar6);
        IVar5 = ISyncManager::dataClassNameForEntityName_(self,"dataClassNameForEntityName:",uVar4);
        if (IVar5 != 0) {
          NSMutableSet::addObject_(self_00,"addObject:",IVar5);
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
    }
    NSMutableSet::allObjects(self_00,"allObjects");
    return;
  }
  NSArray::arrayWithObjects_
            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
             *(undefined8 *)PTR__ISyncDataClass_Calendars_100020098,
             *(undefined8 *)PTR__ISyncDataClass_Contacts_1000200a0,
             *(undefined8 *)PTR__ISyncDataClass_Bookmarks_100020090,&cf_com_apple_MailAccounts,0);
  return;
}

