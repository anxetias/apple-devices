// rea decompile_all
// name: FTABFileBackDeploy::writeToURL:
// address: 0x23951c
// body: available
// range: 0x23951c-0x2395ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char FTABFileBackDeploy::writeToURL_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  cVar1 = (*(code *)PTR__objc_msgSend_00441098)
                    (param_1,"configureFileHandleWriteDestinationForURL:",uVar2);
  if (cVar1 == '\0') {
    uVar3 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      __FTABFileBackDeploy_writeToURL___cold_1(uVar2,uVar3);
    }
    (*(code *)PTR__objc_release_004410a0)(uVar3);
    cVar1 = '\0';
  }
  else {
    cVar1 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"writeToDestination");
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    (*(code *)PTR__objc_release_004410a0)(uVar3);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return cVar1;
}

