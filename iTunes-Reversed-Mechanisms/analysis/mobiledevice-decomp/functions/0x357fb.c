// rea decompile_all
// name: _safeUSBDeviceReleaseNumber
// address: 0x357fb
// body: available
// range: 0x357fb-0x3586b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 _safeUSBDeviceReleaseNumber(undefined8 param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"objectForKeyedSubscript:",&cf_bcdDevice);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = _ensureNumber(uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar2 = (*(code *)puVar1)(uVar4,"unsignedShortValue");
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(uVar3);
  return uVar2;
}

