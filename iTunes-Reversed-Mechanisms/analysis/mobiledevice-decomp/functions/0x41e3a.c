// rea decompile_all
// name: IXRemoteInstallDeltaHelper::removeStashedCopy
// address: 0x41e3a
// body: available
// range: 0x41e3a-0x41fee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void IXRemoteInstallDeltaHelper::removeStashedCopy(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"stashDirectoryURL");
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,"stashedAppMetadataURL");
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    uVar3 = 0;
LAB_00041ec2:
    uVar6 = uVar3;
    if (lVar5 == 0) goto LAB_00041fc7;
    local_40 = uVar3;
    cVar2 = _IXRemoveItemAtURL(lVar5,1,&local_40);
    uVar6 = (*(code *)PTR__objc_retain_004410a8)(local_40);
    (*(code *)PTR__objc_release_004410a0)(uVar3);
    if (cVar2 != '\0') goto LAB_00041fc7;
    uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"path");
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar3);
    pcVar9 = "%s: Failed to remove stashed bundle metadata file %@ : %@";
  }
  else {
    local_48 = 0;
    cVar2 = _IXRemoveItemAtURL(lVar4,1,&local_48);
    uVar3 = (*(code *)PTR__objc_retain_004410a8)(local_48);
    if (cVar2 != '\0') goto LAB_00041ec2;
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"path");
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    pcVar9 = "%s: Failed to remove stashed app bundle %@ : %@";
    uVar6 = uVar3;
  }
  local_38 = uVar7;
  __os_log_internal(0,uVar7,0x10,pcVar9,"-[IXRemoteInstallDeltaHelper removeStashedCopy]",uVar8,
                    uVar6);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar8);
  (*(code *)puVar1)(local_38);
LAB_00041fc7:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  (*(code *)puVar1)(lVar4);
  (*(code *)puVar1)(uVar6);
  return;
}

