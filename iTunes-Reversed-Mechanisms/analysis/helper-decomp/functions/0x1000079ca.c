// rea decompile_all
// name: FUN_1000079ca
// address: 0x1000079ca
// body: available
// range: 0x1000079ca-0x100007a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_1000079ca(void)

{
  ID IVar1;
  ID IVar2;
  
  if (DAT_100016688 == '\0') {
    IVar1 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
    IVar1 = ISyncManager::attributeNamesOnEntityName_
                      (IVar1,"attributeNamesOnEntityName:",
                       *(undefined8 *)PTR__ISyncEntity_Contacts_IM_1000120e0);
    IVar1 = ISyncManager::objectEnumerator(IVar1,"objectEnumerator");
    do {
      IVar2 = ISyncManager::nextObject(IVar1,"nextObject");
      if (IVar2 == 0) goto LAB_100007a67;
      IVar2 = ISyncManager::isEqualToString_(IVar2,"isEqualToString:",&cf_extendedservicetype);
    } while ((char)IVar2 == '\0');
    DAT_100016689 = 1;
LAB_100007a67:
    DAT_100016688 = '\x01';
  }
  return DAT_100016689;
}

