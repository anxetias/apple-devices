// rea decompile_all
// name: DataClassFilter::filterForDataClassName:fromFilters:
// address: 0x100008f27
// body: available
// range: 0x100008f27-0x100009004 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100009000 to 0x10000bbb1 _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID DataClassFilter::filterForDataClassName_fromFilters_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  
  lVar3 = (*(code *)PTR__objc_msgSend_100012170)(param_4,"count");
  puVar1 = PTR__objc_msgSend_100012170;
  if (lVar3 != 0) {
    lVar7 = 0;
    do {
      uVar4 = (*(code *)puVar1)(param_4,"objectAtIndex:",lVar7);
      uVar5 = (*(code *)puVar1)(&objc::class_t::DataClassFilter,"class");
      cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar5);
      if (cVar2 != '\0') {
        uVar5 = (*(code *)puVar1)(uVar4,"dataClassName");
        cVar2 = (*(code *)puVar1)(uVar5,"isEqualToString:",param_3);
        if (cVar2 != '\0') goto LAB_100008fe6;
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
  }
  uVar4 = 0;
LAB_100008fe6:
  uVar4 = (*(code *)PTR__objc_retain_100012180)(uVar4);
  IVar6 = _objc_autorelease(uVar4);
  return IVar6;
}

