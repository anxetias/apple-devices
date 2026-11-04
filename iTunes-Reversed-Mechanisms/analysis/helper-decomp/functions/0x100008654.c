// rea decompile_all
// name: FUN_100008654
// address: 0x100008654
// body: available
// range: 0x100008654-0x100008707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_100008654(ID param_1)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__objc_msgSend_100012170;
  self = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  IVar2 = MSFileManager::defaultManager((ID)&objc::class_t::MSFileManager,"defaultManager");
  IVar2 = MSFileManager::directoryContentsAtPath_(IVar2,"directoryContentsAtPath:",param_1);
  lVar3 = (*(code *)puVar1)(IVar2,"count");
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      uVar4 = (*(code *)puVar1)(IVar2,"objectAtIndex:",lVar6);
      lVar5 = FUN_100008708(uVar4);
      if (lVar5 != 0) {
        NSMutableArray::addObject_(self,"addObject:",lVar5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
  }
  return self;
}

