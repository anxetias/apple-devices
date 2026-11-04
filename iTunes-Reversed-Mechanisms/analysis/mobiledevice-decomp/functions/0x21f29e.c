// rea decompile_all
// name: ACFUFirmware::hashData
// address: 0x21f29e
// body: available
// range: 0x21f29e-0x21f2ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFirmware::hashData(__CFData const*) const [clone .cold.1] */

void ACFUFirmware::hashData(__CFData *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ACFULogging::getLogInstance();
  ACFULogging::handleMessage(uVar1,2,"%s::%s: SHA512 failed\n","ACFUFirmware","hashData");
  return;
}

