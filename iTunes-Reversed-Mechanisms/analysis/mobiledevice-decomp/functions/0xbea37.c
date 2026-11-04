// rea decompile_all
// name: _MISProvisioningProfileIncludesDevice
// address: 0xbea37
// body: available
// range: 0xbea37-0xbeada inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MISProvisioningProfileIncludesDevice(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  cVar1 = _getBooleanValue(param_1,&cf_ProvisionsAllDevices);
  uVar5 = 1;
  if (cVar1 == '\0') {
    lVar2 = _MISProfileGetValue(param_1,&cf_ProvisionedDevices);
    if (lVar2 != 0) {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFArrayGetTypeID();
      if ((lVar3 == lVar4) && (lVar3 = _CFArrayGetCount(lVar2), 0 < lVar3)) {
        lVar4 = 0;
        do {
          uVar5 = _CFArrayGetValueAtIndex(lVar2,lVar4);
          lVar6 = _CFStringCompare(uVar5,param_2,1);
          if (lVar6 == 0) {
            return 1;
          }
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

