// rea decompile_all
// name: FUN_10000745f
// address: 0x10000745f
// body: available
// range: 0x10000745f-0x10000750d inclusive
// range: 0x100007596-0x1000075a4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000745f(void)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  ID IVar4;
  undefined8 in_R9;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar1 = PTR__objc_msgSend_100012170;
  pcVar5 = "isEnabled";
  pcVar6 = "name";
  pcVar8 = "r:";
  pcVar7 = "reason";
  IVar3 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
  cVar2 = (*(code *)puVar1)(IVar3,pcVar5);
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  IVar4 = NSNumber::numberWithBool_
                    ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",(ulong)(uint)(int)cVar2);
  NSDictionary::initWithObjectsAndKeys_
            (IVar3,"initWithObjectsAndKeys:",IVar4,&cf_AMSIsSyncEnabledKey,0,in_R9,pcVar5,pcVar6,
             pcVar7,pcVar8);
  return;
}

