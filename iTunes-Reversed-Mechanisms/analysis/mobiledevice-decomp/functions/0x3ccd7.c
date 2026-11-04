// rea decompile_all
// name: IXRemoteInstallConfiguration::initForAppWithBundleID:localizedName:installMode:
// address: 0x3ccd7
// body: available
// range: 0x3ccd7-0x3cd79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

ID IXRemoteInstallConfiguration::initForAppWithBundleID_localizedName_installMode_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_char param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined3 in_register_00000081;
  ID local_48;
  class_t *local_40;
  undefined4 local_34;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_34 = CONCAT31(in_register_00000081,param_5);
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  local_40 = &objc::class_t::IXRemoteInstallConfiguration;
  local_48 = param_1;
  IVar4 = NSObject::init((ID)&local_48,"init");
  if (IVar4 != 0) {
    _objc_storeStrong(IVar4 + 0x10,param_3);
    _objc_storeStrong(IVar4 + 0x18,param_4);
    *(char *)(IVar4 + 8) = (char)local_34;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(uVar2);
  return IVar4;
}

