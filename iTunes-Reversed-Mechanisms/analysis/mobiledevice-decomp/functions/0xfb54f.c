// rea decompile_all
// name: AMRLocalUSBDevice::initWithService:
// address: 0xfb54f
// body: available
// range: 0xfb54f-0xfb627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

ID AMRLocalUSBDevice::initWithService_(ID param_1,SEL param_2,unsigned_int param_3)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_semaphore_t pdVar5;
  objc_super local_38;
  
  if (__initCloseNotificationGlobals_onceToken != -1) {
    __AMRLocalUSBDevice_initWithService___cold_1();
  }
  local_38.super_class = &objc::class_t::AMRLocalUSBDevice;
  local_38.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_38,"init");
  if (IVar1 != 0) {
    lVar2 = __getDeviceInterfaceForService(param_3);
    *(long *)(IVar1 + 8) = lVar2;
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar3 = _IORegistryEntryCreateCFProperty(param_3,&cf_USBSerialNumber,uVar4,0);
      *(undefined8 *)(IVar1 + 0x10) = uVar3;
      uVar4 = _IORegistryEntryCreateCFProperty(param_3,&cf_USBProductName,uVar4,0);
      *(undefined8 *)(IVar1 + 0x18) = uVar4;
      _IOObjectRetain();
      *(unsigned_int *)(IVar1 + 0x20) = param_3;
      *(undefined4 *)(IVar1 + 0x24) = 0;
      pdVar5 = _dispatch_semaphore_create(0);
      *(dispatch_semaphore_t *)(IVar1 + 0x28) = pdVar5;
      *(undefined4 *)(IVar1 + 0x30) = 0;
      return IVar1;
    }
    (*(code *)PTR__objc_release_004410a0)(IVar1);
  }
  return 0;
}

