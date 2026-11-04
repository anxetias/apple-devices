// rea decompile_all
// name: PersonalizedImage::deviceRequiresUIDMode
// address: 0x1233e9
// body: available
// range: 0x1233e9-0x1234bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

char PersonalizedImage::deviceRequiresUIDMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"chipID");
  uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithInt:",0x8006);
  cVar2 = (*(code *)puVar1)(uVar3,"isEqualToNumber:",uVar4);
  bVar5 = true;
  if (cVar2 != '\0') {
    uVar3 = (*(code *)puVar1)(param_1,"boardID");
    uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithInt:",4);
    cVar2 = (*(code *)puVar1)(uVar3,"isEqualToNumber:",uVar4);
    if (cVar2 != '\0') {
      uVar3 = (*(code *)puVar1)(param_1,"securityDomain");
      uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithInt:",0);
      cVar2 = (*(code *)puVar1)(uVar3,"isEqualToNumber:",uVar4);
      bVar5 = cVar2 == '\0';
    }
  }
  return bVar5;
}

