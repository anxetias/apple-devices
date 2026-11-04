// rea decompile_all
// name: ContactsDataClassHandler::entityNamesInOrderToPull
// address: 0x10000c0f4
// body: available
// range: 0x10000c0f4-0x10000c24d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID ContactsDataClassHandler::entityNamesInOrderToPull(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  
  IVar1 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Contacts_Contact_100020100,
                     *(undefined8 *)PTR__ISyncEntity_Contacts_Group_100020120,0);
  IVar2 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Contacts_EmailAddress_100020118,0);
  IVar3 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Contacts_PhoneNumber_100020130,0);
  IVar4 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Contacts_StreetAddress_100020140,0);
  IVar5 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Contacts_URL_100020148,0);
  IVar6 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Contacts_RelatedName_100020138,0);
  IVar7 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Contacts_IM_100020128,0);
  IVar8 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Contacts_Date_100020110,0);
  IVar1 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar1,IVar2,IVar3,IVar4,IVar5,
                     IVar6,IVar7,IVar8,0);
  return IVar1;
}

