// rea decompile_all
// name: __CopyOwnWirelessBuddyID
// address: 0x1344ad
// body: available
// range: 0x1344ad-0x134534 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __CopyOwnWirelessBuddyID(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _CFPreferencesCopyAppValue(&cf_WirelessBuddyID,&cf_com_apple_iTunes);
  if (lVar1 != 0) {
    lVar2 = _CFGetTypeID(lVar1);
    lVar3 = _CFStringGetTypeID();
    if (lVar2 == lVar3) {
      return lVar1;
    }
  }
  lVar2 = _CreateUUID();
  if (lVar2 != 0) {
    _CFPreferencesSetAppValue(&cf_WirelessBuddyID,lVar2,&cf_com_apple_iTunes);
    _CFPreferencesAppSynchronize(&cf_com_apple_iTunes);
  }
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  return lVar2;
}

