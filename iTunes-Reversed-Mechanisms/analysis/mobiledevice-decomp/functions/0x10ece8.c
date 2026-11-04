// rea decompile_all
// name: AMRManagedDiskImagesRegistry::mountDiskImage:
// address: 0x10ece8
// body: available
// range: 0x10ece8-0x10edf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID AMRManagedDiskImagesRegistry::mountDiskImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  uVar2 = _objc_alloc(&objc::class_t::AMRManagedDiskImage);
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"initWithDiskImagePath:",param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar3 == 0) {
    IVar4 = 0;
    _AMRSafeLog(3,&cf_Failedtomountandattach__,param_3);
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar3,"mountPoint");
    IVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSURL,"fileURLWithPath:isDirectory:",uVar2,1);
    _AMRSafeLog(7,&cf_Successfullymounteddiskimage____atmountpoint_____,param_3,IVar4);
    uVar2 = (*(code *)puVar1)(param_1,"mountQueue");
    _dispatch_sync(uVar2);
    (*(code *)PTR__objc_release_004410a0)(lVar3);
  }
  return IVar4;
}

