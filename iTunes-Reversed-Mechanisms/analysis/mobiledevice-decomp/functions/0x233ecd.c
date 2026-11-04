// rea decompile_all
// name: UARPTLVPersonalizationManifestSuffixBackDeploy::setManifestSuffix:
// address: 0x233ecd
// body: available
// range: 0x233ecd-0x233f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x233f42 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void UARPTLVPersonalizationManifestSuffixBackDeploy::setManifestSuffix_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__objc_retain_004410a8;
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  lVar4 = (*(code *)puVar2)(param_1);
  _objc_sync_enter(lVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"copy");
  uVar1 = *(undefined8 *)(lVar4 + _manifestSuffix);
  *(undefined8 *)(lVar4 + _manifestSuffix) = uVar5;
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar1);
  _objc_sync_exit(lVar4);
  (*(code *)puVar2)(lVar4);
  (*(code *)puVar2)(uVar3);
  return;
}

