// rea decompile_all
// name: _MISProvisioningProfileAddProvisionedDevice
// address: 0xbe827
// body: available
// range: 0xbe827-0xbe8ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _MISProvisioningProfileAddProvisionedDevice(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  cVar1 = _MISProfileIsMutable();
  uVar2 = 0xe8008002;
  if (cVar1 == '\x01') {
    lVar3 = _MISProfileGetValue(param_1,&cf_ProvisionedDevices);
    if (lVar3 == 0) {
      uVar6 = _CFGetAllocator(param_1);
      lVar3 = _CFArrayCreateMutable(uVar6,0,PTR__kCFTypeArrayCallBacks_004411a8);
      if (lVar3 == 0) {
        uVar2 = 0xe800800a;
      }
      else {
        _CFArrayAppendValue(lVar3,param_2);
        uVar2 = _MISProfileSetValue(param_1,&cf_ProvisionedDevices,lVar3);
        _CFRelease(lVar3);
      }
    }
    else {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFArrayGetTypeID();
      uVar2 = 0xe8008003;
      if (lVar4 == lVar5) {
        _CFArrayAppendValue(lVar3,param_2);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

