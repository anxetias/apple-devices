// rea decompile_all
// name: AMRManagedDiskImage::initWithDiskImagePath:
// address: 0x172cd7
// body: available
// range: 0x172cd7-0x172d58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID AMRManagedDiskImage::initWithDiskImagePath_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  undefined8 uVar4;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::AMRManagedDiskImage;
  local_30.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_30,"init");
  puVar1 = PTR__objc_msgSend_00441098;
  if (IVar3 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"copy");
    *(undefined8 *)(IVar3 + 8) = uVar4;
    *(undefined8 *)(IVar3 + 0x10) = 0;
    *(undefined8 *)(IVar3 + 0x18) = 0;
    cVar2 = (*(code *)puVar1)(IVar3,"attachAndMountImage");
    if (cVar2 != '\0') {
      return IVar3;
    }
    (*(code *)PTR__objc_release_004410a0)(IVar3);
  }
  return 0;
}

