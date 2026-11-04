// rea decompile_all
// name: __fastsimControllerNameForPort
// address: 0x35d9e
// body: available
// range: 0x35d9e-0x35e08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * __fastsimControllerNameForPort(void)

{
  char cVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  cVar1 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"conformsTo:",&cf_AppleUSBUserHCIPort);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"conformsTo:",&cf_RUSBHostPort);
    pcVar3 = (cfstringStruct *)0x0;
    if (cVar1 != '\0') {
      pcVar3 = &cf_RUSBHost;
    }
  }
  else {
    pcVar3 = &cf_AppleUSBUserHCI;
  }
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return pcVar3;
}

