// rea decompile_all
// name: ConcreteSyncClient::_hostOSString
// address: 0x100003259
// body: available
// range: 0x100003259-0x1000032d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID ConcreteSyncClient::_hostOSString(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  
  lVar1 = __CFCopyServerVersionDictionary();
  if (lVar1 == 0) {
    lVar1 = __CFCopySystemVersionDictionary();
  }
  uVar2 = (*(code *)PTR__objc_msgSend_100020210)
                    (lVar1,"objectForKey:",
                     *(undefined8 *)PTR___kCFSystemVersionBuildVersionKey_1000201e8);
  IVar3 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_macos___,uVar2);
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  return IVar3;
}

