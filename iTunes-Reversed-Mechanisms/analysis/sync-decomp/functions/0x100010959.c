// rea decompile_all
// name: DataClassFilter::encodeWithCoder:
// address: 0x100010959
// body: available
// range: 0x100010959-0x100010a0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000109d0 to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100010a0b to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void DataClassFilter::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  
  cVar2 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"allowsKeyedCoding");
  puVar1 = PTR__objc_msgSend_100020210;
  if (cVar2 != '\0') {
    (*(code *)PTR__objc_msgSend_100020210)
              (param_3,"encodeObject:forKey:",*(undefined8 *)(param_1 + 8),
               &cf_DataClassFilterDataClassName);
    (*(code *)puVar1)(param_3,"encodeObject:forKey:",*(undefined8 *)(param_1 + 0x10),
                      &cf_DataClassFilterEntityNames);
    (*(code *)puVar1)(param_3,"encodeObject:forKey:",*(undefined8 *)(param_1 + 0x18),
                      &cf_DataClassFilterCriteria);
    return;
  }
  (*(code *)PTR__objc_msgSend_100020210)(param_3,"encodeObject:",*(undefined8 *)(param_1 + 8));
  (*(code *)puVar1)(param_3,"encodeObject:",*(undefined8 *)(param_1 + 0x10));
  (*(code *)puVar1)(param_3,"encodeObject:",*(undefined8 *)(param_1 + 0x18));
  return;
}

