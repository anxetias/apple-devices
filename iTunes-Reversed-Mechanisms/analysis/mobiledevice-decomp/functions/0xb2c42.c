// rea decompile_all
// name: _validate_bundle
// address: 0xb2c42
// body: available
// range: 0xb2c42-0xb2cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _validate_bundle(char *param_1)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_19;
  
  sVar1 = _strlen(param_1);
  lVar2 = _CFURLCreateFromFileSystemRepresentation(0,param_1,sVar1,1);
  if (lVar2 == 0) {
    _validate_bundle_cold_2();
    uVar4 = 0;
  }
  else {
    lVar3 = __CFBundleCreateUnique(0,lVar2);
    if (lVar3 == 0) {
      uVar4 = 0;
      _dmlog("validate_bundle",0x463,&cf_unabletocreateCFBundleReffor___,lVar2);
    }
    else {
      _validate_bundle_cold_1(lVar3,&local_19);
      uVar4 = CONCAT71((int7)((ulong)&local_19 >> 8),local_19);
    }
    _CFRelease(lVar2);
  }
  return uVar4 & 0xffffff01;
}

