// rea decompile_all
// name: __findAlternateProbeForProbe
// address: 0x36321
// body: available
// range: 0x36321-0x363b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x363ae to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __findAlternateProbeForProbe(undefined8 param_1,code *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  lVar3 = _probeDeviceForRegistryEntry(uVar2);
  if (lVar3 != 0) {
    cVar1 = (*param_2)(lVar3);
    if (cVar1 != '\0') {
      uVar4 = (*(code *)PTR__objc_retain_004410a8)(uVar2);
      goto LAB_00036398;
    }
  }
  uVar4 = __findAstrisHubForDevice(uVar2);
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = __findProbeAttachedToAstrisHub(lVar3,param_2);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar3);
LAB_00036398:
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

