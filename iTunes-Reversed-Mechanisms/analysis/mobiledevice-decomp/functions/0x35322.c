// rea decompile_all
// name: __bsdSerialForUART
// address: 0x35322
// body: available
// range: 0x35322-0x35390 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3538c to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __bsdSerialForUART(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = __findAlternateProbeForProbe(param_1,_probeIsUSB);
  lVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = _probeDeviceForRegistryEntry(lVar2);
    uVar1 = 0;
    if ((*(short *)(lVar3 + 2) != 0x164c) && (*(short *)(lVar3 + 2) != 0x1699)) {
      uVar1 = __bsdSerialChildMatching(lVar2,0);
      uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    }
  }
  (*(code *)PTR__objc_release_004410a0)(lVar2);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

