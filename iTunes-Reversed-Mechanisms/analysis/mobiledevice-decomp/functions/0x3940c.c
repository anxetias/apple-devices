// rea decompile_all
// name: ___IXRemotePerformInstallationAsync_block_invoke_2
// address: 0x3940c
// body: available
// range: 0x3940c-0x394bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x394bb to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___IXRemotePerformInstallationAsync_block_invoke_2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x20),"bundleID");
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  __os_log_internal(0,uVar3,2,"%s: Finalizing stashing of installable for %@ with results %@",
                    "IXRemotePerformInstallationAsync_block_invoke_2",uVar4,
                    *(undefined8 *)(param_1 + 0x28));
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30),
                    "finalizeUpdateOfInstallableWithRemoteInstallResult:error:",
                    *(undefined8 *)(param_1 + 0x28),0);
  return;
}

