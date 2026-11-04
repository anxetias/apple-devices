// rea decompile_all
// name: FTABFileBackDeploy::writeSubfileToURL:tag:
// address: 0x239631
// body: available
// range: 0x239631-0x239761 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char FTABFileBackDeploy::writeSubfileToURL_tag_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR__objc_retain_004410a8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar5 = (*(code *)puVar1)(param_4);
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"subfileWithTag:",uVar5);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  if (lVar7 == 0) {
    uVar6 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      __FTABFileBackDeploy_writeSubfileToURL_tag___cold_1(uVar5,uVar6);
    }
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    cVar2 = '\0';
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"createFileHandleForWritingToURL:",uVar4);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar8 == 0) {
      cVar2 = '\0';
    }
    else {
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(lVar7,"dataPointer");
      uVar3 = (*(code *)puVar1)(lVar7,"dataLength");
      cVar2 = (*(code *)puVar1)(lVar8,"writeBytes:length:",uVar6,uVar3);
    }
    (*(code *)PTR__objc_release_004410a0)(lVar8);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar7);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  return cVar2;
}

