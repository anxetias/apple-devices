// rea decompile_all
// name: IXRemoteInstallDeltaHelper::stageInstallableWithContentsAtURL:error:
// address: 0x4157d
// body: available
// range: 0x4157d-0x4167d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char IXRemoteInstallDeltaHelper::stageInstallableWithContentsAtURL_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  ID *pIVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  bool bVar9;
  bool bVar10;
  undefined8 local_48;
  undefined8 local_40;
  ID *local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = param_4;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"stashStagingDirectoryURL");
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_48 = 0;
  cVar3 = _IXRemoveItemAtURL(uVar6,1,&local_48);
  uVar5 = (*(code *)puVar1)(local_48);
  if (cVar3 == '\0') {
    bVar10 = true;
    bVar9 = false;
  }
  else {
    local_40 = uVar5;
    cVar3 = _IXCopyItemAtURL(uVar4,uVar6,1,&local_40);
    uVar7 = (*(code *)PTR__objc_retain_004410a8)(local_40);
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    bVar10 = cVar3 == '\0';
    bVar9 = !bVar10;
    uVar5 = uVar7;
  }
  pIVar2 = local_38;
  if (!(bool)(bVar10 ^ 1U | local_38 == (ID *)0x0)) {
    IVar8 = _objc_retainAutorelease(uVar5);
    *pIVar2 = IVar8;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  return bVar9;
}

