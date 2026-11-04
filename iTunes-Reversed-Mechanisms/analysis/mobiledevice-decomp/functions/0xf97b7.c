// rea decompile_all
// name: _AMRAuthInstallGetUUIDString
// address: 0xf97b7
// body: available
// range: 0xf97b7-0xf98c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRAuthInstallGetUUIDString(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == (long *)0x0) {
    _AMRAuthInstallGetUUIDString_cold_2();
  }
  else {
    if (param_2 != 0) {
      lVar1 = _CFDictionaryGetValue(param_2,&cf_UUID);
      if (lVar1 != 0) {
        _CFRetain(lVar1);
        *param_3 = lVar1;
        _CFRelease(lVar1);
        return 0;
      }
      lVar1 = _CFUUIDCreate(param_1);
      if (lVar1 != 0) {
        lVar2 = _CFUUIDCreateString(param_1,lVar1);
        if (lVar2 == 0) {
          _AMRLog(3,&cf_failedtocreateuuidstring);
          uVar3 = 0x12;
        }
        else {
          _CFDictionaryAddValue(param_2,&cf_UUID,lVar2);
          uVar3 = 0;
          _AMRLog(5,&cf____UUID_____,lVar2);
          *param_3 = lVar2;
          _CFRelease(lVar2);
        }
        _CFRelease(lVar1);
        return uVar3;
      }
      _AMRLog(3,&cf_failedtocreateuuid);
      return 0x12;
    }
    _AMRAuthInstallGetUUIDString_cold_1();
  }
  return 1;
}

