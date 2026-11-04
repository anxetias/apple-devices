// rea decompile_all
// name: DataClassFilter::initWithCoder:
// address: 0x100008c5d
// body: available
// range: 0x100008c5d-0x100008d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID DataClassFilter::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_3,"allowsKeyedCoding");
  puVar1 = PTR__objc_msgSend_100012170;
  if (cVar2 == '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_100012170)(param_3,"decodeObject");
    uVar3 = (*(code *)puVar1)(uVar3,"copy");
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar3 = (*(code *)puVar1)(param_3,"decodeObject");
    uVar3 = (*(code *)PTR__objc_retain_100012180)(uVar3);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = (*(code *)puVar1)(param_3,"decodeObject");
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_100012170)
                      (param_3,"decodeObjectForKey:",&cf_DataClassFilterDataClassName);
    uVar3 = (*(code *)puVar1)(uVar3,"copy");
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar3 = (*(code *)puVar1)(param_3,"decodeObjectForKey:",&cf_DataClassFilterEntityNames);
    uVar3 = (*(code *)PTR__objc_retain_100012180)(uVar3);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = (*(code *)puVar1)(param_3,"decodeObjectForKey:",&cf_DataClassFilterCriteria);
  }
  uVar3 = (*(code *)PTR__objc_retain_100012180)(uVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  return param_1;
}

