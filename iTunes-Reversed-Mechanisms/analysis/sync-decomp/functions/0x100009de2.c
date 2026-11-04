// rea decompile_all
// name: CalendarsDataClassHandler::noteDeletedRecordFromSyncServices:
// address: 0x100009de2
// body: available
// range: 0x100009de2-0x100009ebe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID CalendarsDataClassHandler::noteDeletedRecordFromSyncServices_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler noteDeletedRecordFromSyncServices:]",6,
            &cf_Pulledadeleteforrecord__,param_3);
  }
  puVar1 = PTR__objc_msgSend_100020210;
  uVar4 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"componentsSeparatedByString:",&cf__);
  lVar5 = (*(code *)puVar1)(uVar4,"count");
  if (lVar5 == 2) {
    IVar6 = 0;
    uVar4 = (*(code *)puVar1)(uVar4,"objectAtIndex:",0);
    iVar3 = (*(code *)puVar1)(uVar4,"intValue");
    if (iVar3 == 8) {
      lVar5 = _DLCreateUUID();
      IVar6 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___,lVar5);
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
    }
  }
  else {
    IVar6 = 0;
  }
  return IVar6;
}

