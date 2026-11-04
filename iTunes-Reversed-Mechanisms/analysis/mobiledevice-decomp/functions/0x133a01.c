// rea decompile_all
// name: _AMDeviceNotificationRemoveDevice
// address: 0x133a01
// body: available
// range: 0x133a01-0x133a78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x133a74 to 0x2a948c _CFArrayRemoveValueAtIndex (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMDeviceNotificationRemoveDevice(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    lVar3 = 0;
    do {
      lVar2 = _CFArrayGetCount();
      if (lVar2 <= lVar3) {
        return;
      }
      lVar2 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_1 + 0x18),lVar3);
      if ((lVar2 != 0) && (cVar1 = _CFEqual(lVar2,param_2), cVar1 != '\0')) {
        _CFArrayRemoveValueAtIndex(*(undefined8 *)(param_1 + 0x18),lVar3);
        return;
      }
      lVar3 = lVar3 + 1;
    } while (*(long *)(param_1 + 0x18) != 0);
  }
  return;
}

