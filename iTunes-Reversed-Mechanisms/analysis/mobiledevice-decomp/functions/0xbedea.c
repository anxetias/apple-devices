// rea decompile_all
// name: _MISProvisioningProfileAddDeveloperCertificate
// address: 0xbedea
// body: available
// range: 0xbedea-0xbee95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _MISProvisioningProfileAddDeveloperCertificate(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = _MISProfileGetValue(param_1,&cf_DeveloperCertificates);
  if (lVar2 == 0) {
    uVar5 = _CFGetAllocator(param_1);
    lVar2 = _CFArrayCreateMutable(uVar5,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar2 == 0) {
      uVar1 = 0xe800800a;
    }
    else {
      _CFArrayAppendValue(lVar2,param_2);
      uVar1 = _MISProfileSetValue(param_1,&cf_DeveloperCertificates,lVar2);
      _CFRelease(lVar2);
    }
  }
  else {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFArrayGetTypeID();
    uVar1 = 0xe8008003;
    if (lVar3 == lVar4) {
      _CFArrayAppendValue(lVar2,param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}

