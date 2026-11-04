// rea decompile_all
// name: ___IXRemotePerformInstallationAsync_block_invoke_2.40
// address: 0x397ca
// body: available
// range: 0x397ca-0x39827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x39822 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___IXRemotePerformInstallationAsync_block_invoke_2_40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (*(code *)PTR__objc_msgSend_00441098)
            (*(undefined8 *)(param_1 + 0x20),"setTargetLastPathComponent:");
  uVar1 = _IXCreateRemoteInstallBeginRequest
                    (*(undefined4 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),param_2);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  _xpc_remote_connection_send_message(*(undefined8 *)(param_1 + 0x28),uVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  (*(code *)PTR__objc_release_004410a0)(uVar1);
  return;
}

