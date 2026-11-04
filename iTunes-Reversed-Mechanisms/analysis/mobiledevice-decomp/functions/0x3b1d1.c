// rea decompile_all
// name: ____IXRemoteGenerateDeltaURL_block_invoke
// address: 0x3b1d1
// body: available
// range: 0x3b1d1-0x3b2b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3b2b7 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____IXRemoteGenerateDeltaURL_block_invoke(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__objc_retain_004410a8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  uVar5 = (*(code *)puVar2)(param_3);
  uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  __os_log_internal(0,uVar6,2,"%s: Received response for query for %@",
                    "_IXRemoteGenerateDeltaURL_block_invoke",*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  puVar3 = PTR__objc_retain_004410a8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
  (*(code *)puVar2)(uVar6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  uVar5 = (*(code *)puVar3)(uVar5);
  (*(code *)puVar2)(uVar6);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x28));
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  return;
}

