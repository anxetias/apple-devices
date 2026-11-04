// rea decompile_all
// name: FUN_100007da1
// address: 0x100007da1
// body: available
// range: 0x100007da1-0x100007e10 inclusive
// range: 0x100007ea0-0x100007f42 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_100007da1(long param_1)

{
  char cVar1;
  ID IVar2;
  undefined8 uVar3;
  ID self;
  
  if ((param_1 != 0) &&
     (cVar1 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"isEqualToString:",&cf___),
     cVar1 == '\0')) {
    IVar2 = (*(code *)PTR__objc_msgSend_100012170)(DAT_100016680,"objectForKey:",param_1);
    if (IVar2 != 0) {
      (*(code *)PTR__objc_msgSend_100012170)(IVar2,"clientIdentifier");
      return IVar2;
    }
    uVar3 = _CFStringCreateWithFormat(0,0,&cf_com_apple_MobileSync___,param_1);
    uVar3 = _objc_autorelease(uVar3);
    IVar2 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
    IVar2 = ISyncManager::clientWithIdentifier_(IVar2,"clientWithIdentifier:",uVar3);
    if (IVar2 != 0) {
      if (DAT_100016680 == 0) {
        self = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
        DAT_100016680 = NSMutableDictionary::init(self,"init");
      }
      (*(code *)PTR__objc_msgSend_100012170)(DAT_100016680,"setObject:forKey:",IVar2,param_1);
      return IVar2;
    }
  }
  return 0;
}

