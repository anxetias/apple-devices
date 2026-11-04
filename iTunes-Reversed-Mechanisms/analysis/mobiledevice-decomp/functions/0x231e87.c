// rea decompile_all
// name: UARPAssetTagBackDeploy::decodeCharForKey:key:
// address: 0x231e87
// body: available
// range: 0x231e87-0x231ed0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

const_char__
UARPAssetTagBackDeploy::decodeCharForKey_key_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  const_char__ pcVar2;
  long local_20;
  
  local_20 = 0;
  uVar1 = _objc_retainAutorelease(param_3);
  pcVar2 = (const_char__)
           (*(code *)PTR__objc_msgSend_00441098)
                     (uVar1,"decodeBytesForKey:returnedLength:",param_4,&local_20);
  if (local_20 == 0) {
    pcVar2 = (const_char__)0x0;
  }
  return pcVar2;
}

