// rea decompile_all
// name: BookmarksDataClassHandler::mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:
// address: 0x100006e14
// body: available
// range: 0x100006e14-0x100006ebe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100006eac to 0x1000148ab _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID BookmarksDataClassHandler::mutateRecordFromSyncServicesForTarget_change_recordIdentifier_sendNow_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,char *param_6)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  
  lVar2 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_url);
  if (lVar2 != 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSString);
    puVar1 = PTR__objc_msgSend_100020210;
    IVar3 = NSString::initWithFormat_(IVar3,"initWithFormat:",&cf___,lVar2);
    uVar4 = (*(code *)puVar1)(param_3,"mutableCopy");
    (*(code *)puVar1)(uVar4,"setObject:forKey:",IVar3,&cf_url);
    (*(code *)PTR__objc_release_100020218)(IVar3);
    IVar3 = _objc_autorelease(uVar4);
    return IVar3;
  }
  return param_3;
}

