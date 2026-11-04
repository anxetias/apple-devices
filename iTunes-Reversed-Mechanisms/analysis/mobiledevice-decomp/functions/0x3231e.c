// rea decompile_all
// name: _PSDNormalizeUSBDevice
// address: 0x3231e
// body: available
// range: 0x3231e-0x3239b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _PSDNormalizeUSBDevice(unsigned_int param_1)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__objc_msgSend_00441098;
  IVar3 = PSIORegistryEntry::entryWithNativeHandle_
                    ((ID)&objc::class_t::PSIORegistryEntry,"entryWithNativeHandle:",param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar5 = _PSProbeNormalizeUSBDevice(uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  iVar2 = (*(code *)puVar1)(uVar5,"nativeHandle");
  if (iVar2 != 0) {
    _IOObjectRetain(iVar2);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar4);
  return iVar2;
}

