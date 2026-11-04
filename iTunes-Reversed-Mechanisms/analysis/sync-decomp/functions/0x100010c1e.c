// rea decompile_all
// name: DataClassFilter::arrayWithFilterFromExistingFiltersArray:
// address: 0x100010c1e
// body: available
// range: 0x100010c1e-0x100010cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100010ca7 to 0x1000148ab _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID DataClassFilter::arrayWithFilterFromExistingFiltersArray_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"mutableCopy");
  IVar2 = filterForDataClassName_fromFilters_
                    ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                     *(ID *)(param_1 + 8),param_3);
  if (IVar2 != param_1 && IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_100020210)(uVar1,"removeObject:",IVar2);
  }
  if (IVar2 != param_1) {
    (*(code *)PTR__objc_msgSend_100020210)(uVar1,"addObject:",param_1);
  }
  IVar2 = _objc_autorelease(uVar1);
  return IVar2;
}

