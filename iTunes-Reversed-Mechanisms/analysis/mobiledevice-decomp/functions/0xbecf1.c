// rea decompile_all
// name: _MISProvisioningProfileSetTimeToLive
// address: 0xbecf1
// body: available
// range: 0xbecf1-0xbed72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _MISProvisioningProfileSetTimeToLive(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  local_24 = param_2;
  uVar2 = _CFGetAllocator();
  uVar2 = _CFNumberCreate(uVar2,9,&local_24);
  iVar1 = _MISProfileSetValue(param_1,&cf_TimeToLive,uVar2);
  _CFRelease(uVar2);
  if (iVar1 == 0) {
    iVar1 = _updateExpirationDate(param_1,local_24);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      _MISProfileRemoveValue(param_1,&cf_TimeToLive);
    }
  }
  return iVar1;
}

