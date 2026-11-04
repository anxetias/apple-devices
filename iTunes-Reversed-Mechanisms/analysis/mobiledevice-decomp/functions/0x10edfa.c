// rea decompile_all
// name: AMRManagedDiskImagesRegistry::unmountDiskImage:
// address: 0x10edfa
// body: available
// range: 0x10edfa-0x10eef2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char AMRManagedDiskImagesRegistry::unmountDiskImage_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  
  local_48 = &local_50;
  local_50 = 0;
  local_40 = 0x3052000000;
  local_38 = ___Block_byref_object_copy__380;
  local_30 = ___Block_byref_object_dispose__381;
  local_28 = 0;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"mountQueue");
  _dispatch_sync(uVar2);
  lVar1 = local_48[5];
  if (lVar1 == 0) {
    _AMRSafeLog(6,&cf_Failedtofindadiskimageassociatedwiththemountpoint___,param_3);
  }
  else {
    (*(code *)PTR__objc_msgSend_00441098)(lVar1,"invalidate");
    (*(code *)PTR__objc_release_004410a0)(local_48[5]);
  }
  __Block_object_dispose(&local_50,8);
  return lVar1 != 0;
}

