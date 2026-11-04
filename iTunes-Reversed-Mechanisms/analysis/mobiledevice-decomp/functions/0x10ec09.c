// rea decompile_all
// name: AMRManagedDiskImagesRegistry::_init
// address: 0x10ec09
// body: available
// range: 0x10ec09-0x10ec99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID AMRManagedDiskImagesRegistry::_init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  dispatch_queue_t pdVar4;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::AMRManagedDiskImagesRegistry;
  local_30.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar2 != 0) {
    uVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"init");
    (*(code *)puVar1)(IVar2,"setMountedImages:",uVar3);
    pdVar4 = _dispatch_queue_create
                       ("com.apple.MobileDevice.DmgManager.Mount",(dispatch_queue_attr_t)0x0);
    (*(code *)puVar1)(IVar2,"setMountQueue:",pdVar4);
  }
  return IVar2;
}

