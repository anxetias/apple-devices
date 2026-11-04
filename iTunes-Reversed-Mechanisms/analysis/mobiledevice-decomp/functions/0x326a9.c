// rea decompile_all
// name: PSIORegistryEntry::finder
// address: 0x326a9
// body: available
// range: 0x326a9-0x326d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x326d2 to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID PSIORegistryEntry::finder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"class");
  IVar3 = (*(code *)puVar1)(uVar2,"finder");
  return IVar3;
}

