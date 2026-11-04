// rea decompile_all
// name: FUN_1000075f4
// address: 0x1000075f4
// body: available
// range: 0x1000075f4-0x10000766e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000075f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  cfstringStruct *pcVar5;
  
  uVar1 = *(undefined8 *)PTR__ISyncDataClass_Bookmarks_100012068;
  uVar2 = *(undefined8 *)PTR__ISyncDataClass_Calendars_100012070;
  uVar3 = *(undefined8 *)PTR__ISyncDataClass_Contacts_100012078;
  cVar4 = FUN_10000766f();
  pcVar5 = (cfstringStruct *)0x0;
  if (cVar4 != '\0') {
    pcVar5 = &cf_com_apple_Notes;
  }
  NSArray::arrayWithObjects_
            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",uVar1,uVar2,uVar3,
             &cf_com_apple_MailAccounts,pcVar5,0);
  return;
}

