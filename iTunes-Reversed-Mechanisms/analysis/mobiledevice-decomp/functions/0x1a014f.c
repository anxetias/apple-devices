// rea decompile_all
// name: _AMAuthInstallApCreateHashFromURL
// address: 0x1a014f
// body: available
// range: 0x1a014f-0x1a0201 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApCreateHashFromURL(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_2 == 0) {
LAB_001a01da:
    uVar2 = 0;
  }
  else {
    iVar1 = _AMAuthInstallApGetImageType();
    if (iVar1 == 2) {
      iVar1 = _AMAuthInstallApImg4CreateMeasurementsFromURL(param_1,param_2,1,&local_20);
    }
    else {
      if (iVar1 != 1) goto LAB_001a01da;
      iVar1 = _AMAuthInstallApImg3CreateMeasurementsFromURL(param_1,param_2,&local_20,0);
    }
    if (iVar1 == 0) {
      uVar2 = _CFDictionaryGetValue(local_20,&cf_Digest);
      _SavageSafeRetain(uVar2);
    }
    else {
      uVar2 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallApCreateHashFromURL","%s: could not create measurements: %d"
                        ,"AMAuthInstallApCreateHashFromURL",iVar1);
    }
  }
  _SafeRelease(local_20);
  return uVar2;
}

