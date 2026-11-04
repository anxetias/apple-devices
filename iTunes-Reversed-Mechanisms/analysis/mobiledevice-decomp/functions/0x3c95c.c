// rea decompile_all
// name: IXRemoteInstallResult::initWithDBUUID:dbSequenceNumber:URLOfInstalledApp:persistentIdentifier:
// address: 0x3c95c
// body: available
// range: 0x3c95c-0x3ca3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID IXRemoteInstallResult::initWithDBUUID_dbSequenceNumber_URLOfInstalledApp_persistentIdentifier_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  ID local_48;
  class_t *local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar2 = (*(code *)puVar1)(param_4);
  uVar3 = (*(code *)puVar1)(param_5);
  uVar4 = (*(code *)puVar1)(param_6);
  local_40 = &objc::class_t::IXRemoteInstallResult;
  local_48 = param_1;
  self = NSObject::init((ID)&local_48,"init");
  if (self != 0) {
    NSObject::setDbUUID_(self,"setDbUUID:",local_38);
    NSObject::setDbSequenceNumber_(self,"setDbSequenceNumber:",uVar2);
    NSObject::setURLOfInstalledApp_(self,"setURLOfInstalledApp:",uVar3);
    NSObject::setPersistentIdentifier_(self,"setPersistentIdentifier:",uVar4);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  (*(code *)puVar1)(local_38);
  return self;
}

