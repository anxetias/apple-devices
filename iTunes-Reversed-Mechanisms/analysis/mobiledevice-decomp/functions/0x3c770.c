// rea decompile_all
// name: IXRemoteInstallResult::hash
// address: 0x3c770
// body: available
// range: 0x3c770-0x3c864 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

unsigned_long_long IXRemoteInstallResult::hash(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar1 = PTR__objc_msgSend_00441098;
  IVar3 = dbUUID(param_1,"dbUUID");
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar5 = (*(code *)puVar1)(uVar4,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  IVar3 = dbSequenceNumber(param_1,"dbSequenceNumber");
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar6 = (*(code *)puVar1)(uVar4,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  IVar3 = URLOfInstalledApp(param_1,"URLOfInstalledApp");
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar7 = (*(code *)puVar1)(uVar4,"hash");
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  IVar3 = persistentIdentifier(param_1,"persistentIdentifier");
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar8 = (*(code *)puVar1)(uVar4,"hash");
  (*(code *)puVar2)(uVar4);
  return uVar8 ^ uVar7 ^ uVar6 ^ uVar5;
}

