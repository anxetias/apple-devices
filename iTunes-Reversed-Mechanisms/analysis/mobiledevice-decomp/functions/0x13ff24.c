// rea decompile_all
// name: MDRemotePairingAMDeviceSet::initWithMDRPDevice:
// address: 0x13ff24
// body: available
// range: 0x13ff24-0x140037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID MDRemotePairingAMDeviceSet::initWithMDRPDevice_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  objc_super local_50;
  long local_40;
  long local_38;
  
  local_50.super_class = &objc::class_t::MDRemotePairingAMDeviceSet;
  local_50.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_50,"init");
  if (IVar2 == 0) {
    (*(code *)PTR__objc_release_004410a0)(0);
  }
  else {
    local_38 = IVar2 + 8;
    local_40 = IVar2 + 0x10;
    *(undefined8 *)(IVar2 + 8) = 0;
    *(undefined8 *)(IVar2 + 0x10) = 0;
    *(undefined8 *)(IVar2 + 0x18) = 0;
    uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_3);
    *(undefined8 *)(IVar2 + 0x20) = uVar3;
    uVar3 = _objc_alloc(&_OBJC_CLASS___NSPointerArray);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"initWithOptions:",2);
    (*(code *)puVar1)(IVar2,"setMutableDevicePointers:",uVar3);
    uVar3 = (*(code *)puVar1)(IVar2,"mutableDevicePointers");
    (*(code *)puVar1)(uVar3,"addPointer:",local_38);
    uVar3 = (*(code *)puVar1)(IVar2,"mutableDevicePointers");
    (*(code *)puVar1)(uVar3,"addPointer:",local_40);
    uVar3 = (*(code *)puVar1)(IVar2,"mutableDevicePointers");
    (*(code *)puVar1)(uVar3,"addPointer:",IVar2 + 0x18);
  }
  return IVar2;
}

