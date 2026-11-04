// rea decompile_all
// name: ____IXRemotePerformUninstallationSyncHelper_block_invoke
// address: 0x3c306
// body: available
// range: 0x3c306-0x3c3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3c3e2 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____IXRemotePerformUninstallationSyncHelper_block_invoke(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  if (lVar2 != 0) {
    uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x28),"path");
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    __os_log_internal(0,uVar4,0x10,"%s: Failed to uninstall %@, Path : %@ : %@",
                      "_IXRemotePerformUninstallationSyncHelper_block_invoke",uVar3,uVar5,lVar2);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar1)(uVar4);
    _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28,param_2);
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x30));
  (*(code *)PTR__objc_release_004410a0)(lVar2);
  return;
}

