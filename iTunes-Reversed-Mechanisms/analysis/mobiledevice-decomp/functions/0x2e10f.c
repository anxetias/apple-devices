// rea decompile_all
// name: ___taDFU_Library_startDeviceDiscoveryForVIDPID_block_invoke
// address: 0x2e10f
// body: available
// range: 0x2e10f-0x2e196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2e189 to 0x2a95fa _CFDictionaryRemoveValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___taDFU_Library_startDeviceDiscoveryForVIDPID_block_invoke(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = _CFDictionaryGetValue
                    (_unclaimedDevicesMap,
                     *(int *)(param_1 + 0x28) << 0x10 | (uint)*(ushort *)(param_1 + 0x2a));
  if (lVar1 != 0) {
    lVar2 = _CFArrayGetCount(lVar1);
    if (0 < lVar2) {
      lVar4 = 0;
      do {
        uVar3 = _CFArrayGetValueAtIndex(lVar1,lVar4);
        (*(code *)**(undefined8 **)(param_1 + 0x20))(uVar3);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
    _CFDictionaryRemoveValue
              (_unclaimedDevicesMap,
               *(int *)(param_1 + 0x28) << 0x10 | (uint)*(ushort *)(param_1 + 0x2a));
    return;
  }
  return;
}

