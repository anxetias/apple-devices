// rea decompile_all
// name: ConcreteDataClassHandler::canSyncWithVersion:
// address: 0x1000095c3
// body: available
// range: 0x1000095c3-0x100009610 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char ConcreteDataClassHandler::canSyncWithVersion_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_100012170;
  IVar4 = getVersion(param_1,"getVersion");
  iVar2 = (*(code *)puVar1)(IVar4,"intValue");
  iVar3 = (*(code *)puVar1)(param_3,"intValue");
  return iVar2 <= iVar3;
}

