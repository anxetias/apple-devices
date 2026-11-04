// rea decompile_all
// name: FTABFileBackDeploy::addSubfileWithTagName:contentsOfURL:
// address: 0x2387c9
// body: available
// range: 0x2387c9-0x2388c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char FTABFileBackDeploy::addSubfileWithTagName_contentsOfURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  local_40 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSData,"dataWithContentsOfURL:options:error:",uVar3,1,&local_40)
  ;
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = (*(code *)puVar1)(local_40);
  if (lVar5 == 0) {
    uVar6 = _os_log_create("com.apple.accessoryupdater.ftab","parsing");
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      __FTABFileBackDeploy_addSubfileWithTagName_contentsOfURL___cold_1(uVar3,uVar4,uVar6);
    }
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    cVar2 = '\0';
  }
  else {
    cVar2 = (*(code *)PTR__objc_msgSend_00441098)
                      (param_1,"addSubfileWithTagName:subfileData:",local_38,lVar5);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(local_38);
  return cVar2;
}

