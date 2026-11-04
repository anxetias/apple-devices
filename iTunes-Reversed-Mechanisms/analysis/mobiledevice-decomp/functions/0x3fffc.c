// rea decompile_all
// name: __PreflightCallback
// address: 0x3fffc
// body: available
// range: 0x3fffc-0x400a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400a1 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __PreflightCallback(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = _CFDictionaryGetValue(param_1,&cf_PreflightResultTotalFileSize);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"longLongValue");
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar4 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  __os_log_internal(0,uVar4,0,"%s: Preflight done for contents of size: %lld","_PreflightCallback",
                    uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x30));
  }
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return;
}

