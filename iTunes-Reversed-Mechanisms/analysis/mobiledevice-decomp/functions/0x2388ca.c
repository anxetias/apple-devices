// rea decompile_all
// name: FTABFileBackDeploy::addSubfileWithTagName:subfileData:
// address: 0x2388ca
// body: available
// range: 0x2388ca-0x2389ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char FTABFileBackDeploy::addSubfileWithTagName_subfileData_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_retain_004410a8;
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_4);
  uVar4 = (*(code *)puVar1)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  (*(code *)PTR__objc_msgSend_00441098)(param_1,"removeSubfileWithTag:",uVar4);
  uVar5 = _objc_alloc(&objc::class_t::FTABSubfileBackDeploy);
  uVar3 = _objc_retainAutorelease(uVar3);
  uVar6 = (*(code *)puVar1)(uVar3,"bytes");
  uVar2 = (*(code *)puVar1)(uVar3,"length");
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar5,"initWithTag:dataPointer:dataLength:",uVar4,uVar6,uVar2);
  (*(code *)puVar1)(uVar4);
  (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x10),"addObject:",uVar3);
  (*(code *)puVar1)(uVar3);
  return '\x01';
}

