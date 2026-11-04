// rea decompile_all
// name: _MISProvisioningProfileGetVersion
// address: 0xbef1a
// body: available
// range: 0xbef1a-0xbef7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _MISProvisioningProfileGetVersion(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_24;
  
  local_24 = 0xffffffff;
  lVar1 = _MISProfileGetValue(param_1,&cf_Version);
  uVar4 = 0xffffffff;
  if (lVar1 != 0) {
    lVar2 = _CFGetTypeID(lVar1);
    lVar3 = _CFNumberGetTypeID();
    if (lVar2 == lVar3) {
      _CFNumberGetValue(lVar1,9,&local_24);
      uVar4 = local_24;
    }
  }
  return uVar4;
}

