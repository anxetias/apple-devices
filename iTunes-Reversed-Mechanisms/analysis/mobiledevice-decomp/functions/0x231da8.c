// rea decompile_all
// name: UARPAssetTagBackDeploy::initWithString:
// address: 0x231da8
// body: available
// range: 0x231da8-0x231e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID UARPAssetTagBackDeploy::initWithString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ID IVar6;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"length");
  if (lVar3 == 4) {
    uVar4 = _objc_retainAutorelease(uVar2);
    puVar1 = PTR__objc_msgSend_00441098;
    pcVar5 = (char *)(*(code *)PTR__objc_msgSend_00441098)(uVar4,"UTF8String");
    uVar4 = (*(code *)puVar1)(param_1,"initWithChar1:char2:char3:char4:",(int)*pcVar5,(int)pcVar5[1]
                              ,(int)pcVar5[2],(int)pcVar5[3]);
    param_1 = _objc_retainAutoreleasedReturnValue(uVar4);
    IVar6 = param_1;
  }
  else {
    IVar6 = 0;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  (*(code *)puVar1)(param_1);
  return IVar6;
}

