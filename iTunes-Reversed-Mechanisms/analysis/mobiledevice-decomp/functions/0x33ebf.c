// rea decompile_all
// name: __findAstrisHubForDevice
// address: 0x33ebf
// body: available
// range: 0x33ebf-0x33fc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x33fbe to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __findAstrisHubForDevice(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  local_38 = &local_40;
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0;
  local_68 = &local_70;
  local_70 = 0;
  local_60 = 0x3032000000;
  local_58 = ___Block_byref_object_copy_;
  local_50 = ___Block_byref_object_dispose_;
  local_48 = 0;
  __walkUSBAncestors(uVar2);
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(local_68[5]);
  __Block_object_dispose(&local_70,8);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_48);
  __Block_object_dispose(&local_40,8);
  (*(code *)puVar1)(uVar2);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

