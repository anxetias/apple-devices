// rea decompile_all
// name: UARPSuperBinaryPayloadBackDeploy::personalizedData
// address: 0x2344f7
// body: available
// range: 0x2344f7-0x234581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23457d to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID UARPSuperBinaryPayloadBackDeploy::personalizedData(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar2 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x88));
  }
  else {
    lVar1 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x60),"count");
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_00441098)
                (*(undefined8 *)(param_1 + 0x18),"addSubfiles:",*(undefined8 *)(param_1 + 0x60));
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x18),"setManifest:");
    }
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x18),"writeToData");
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

