// rea decompile_all
// name: _AMRAuthInstallCopyPathToFirmware
// address: 0xfa4e5
// body: available
// range: 0xfa4e5-0xfa54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRAuthInstallCopyPathToFirmware(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _CFDictionaryGetValue(param_1,&cf_PersonalizedRestoreBundlePath);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar1 = _CFStringCreateWithFormat
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf____cFirmware,lVar1,
                       0x2f);
    if (lVar1 == 0) {
      uVar2 = 0x12;
    }
    else {
      if (param_2 == (long *)0x0) {
        _CFRelease(lVar1);
      }
      else {
        *param_2 = lVar1;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

