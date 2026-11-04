// rea decompile_all
// name: IXRemoteInstallConfiguration::description
// address: 0x3de24
// body: available
// range: 0x3de24-0x3df67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3df63 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID IXRemoteInstallConfiguration::description(ID param_1,SEL param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  unsigned_long_long uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"class");
  uVar3 = _NSStringFromClass(uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  IVar4 = bundleID(param_1,"bundleID");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  IVar4 = localizedName(param_1,"localizedName");
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
  bVar2 = installMode(param_1,"installMode");
  uVar7 = deltaScheme(param_1,"deltaScheme");
  IVar4 = deltaDirectoryURL(param_1,"deltaDirectoryURL");
  uVar8 = _objc_retainAutoreleasedReturnValue(IVar4);
  uVar9 = (*(code *)puVar1)(uVar8,"path");
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  IVar4 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",
                     &
                     cf_<__0x_p:bundleID___localizedName___installMode__hhudeltaScheme__ludeltaDirectory___>
                     ,uVar3,param_1,uVar5,uVar6,(ulong)bVar2,uVar7,uVar9);
  uVar10 = _objc_retainAutoreleasedReturnValue(IVar4);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar9);
  (*(code *)puVar1)(uVar8);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar3);
  IVar4 = _objc_autoreleaseReturnValue(uVar10);
  return IVar4;
}

