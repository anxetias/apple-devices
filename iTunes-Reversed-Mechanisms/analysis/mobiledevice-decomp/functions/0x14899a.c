// rea decompile_all
// name: ___74-[MDRemoteServiceDeviceProviderRemotePairing_refreshMDRemoteServiceDevice]_block_invoke
// address: 0x14899a
// body: available
// range: 0x14899a-0x148a14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x148a0a to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___74__MDRemoteServiceDeviceProviderRemotePairing_refreshMDRemoteServiceDevice__block_invoke
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (*(code *)PTR__objc_msgSend_00441098)
                    (*(undefined8 *)(param_1 + 0x20),"remoteServiceDevice");
  if (lVar1 != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(param_1 + 0x20),"remoteServiceDevice");
    _CFRelease(uVar2);
  }
  (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x20),"setRemoteServiceDevice:",0)
  ;
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 0x28) != 0)) {
    uVar2 = _CFRetain();
    (*(code *)PTR__objc_msgSend_00441098)
              (*(undefined8 *)(param_1 + 0x20),"setRemoteServiceDevice:",uVar2);
    return;
  }
  return;
}

