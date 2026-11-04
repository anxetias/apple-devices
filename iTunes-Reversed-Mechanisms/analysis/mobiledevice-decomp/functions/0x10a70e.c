// rea decompile_all
// name: __AMDeviceProxyGetIsEraseInstall
// address: 0x10a70e
// body: available
// range: 0x10a70e-0x10a7f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMDeviceProxyGetIsEraseInstall(ulong param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined7 uVar4;
  bool bVar5;
  long local_20;
  
  local_20 = 0;
  cVar1 = _CFDictionaryGetValueIfPresent(param_1,&cf_AuthInstallRestoreBehavior);
  uVar4 = (undefined7)(param_1 >> 8);
  if (cVar1 == '\0') {
    cVar1 = _CFDictionaryGetValueIfPresent(param_1,&cf_CreateFilesystemPartitions,&local_20);
    param_1 = CONCAT71(uVar4,1);
    if (cVar1 == '\0') goto LAB_0010a7ee;
    if (local_20 != 0) {
      lVar2 = _CFGetTypeID();
      lVar3 = _CFBooleanGetTypeID();
      if (lVar2 == lVar3) {
        _AMRLog(6,&cf_FoundCreateFileSystemPartitionsandreturningitsvalue_);
        cVar1 = _CFBooleanGetValue(local_20);
        bVar5 = cVar1 == '\0';
        goto LAB_0010a77e;
      }
    }
    _AMRLog(6,&cf_CreateFileSystemPartitionskeywasNULLornotaboolean_);
  }
  else {
    _AMRLog(6,&cf_FoundAuthInstallRestoreBehaviorandselectingbehaviorbasedonthat_);
    lVar2 = _CFStringCompare(0,&cf_Erase,1);
    if (lVar2 == 0) {
      param_1 = CONCAT71(uVar4,1);
      goto LAB_0010a7ee;
    }
    lVar2 = _CFStringCompare(0,&cf_Update,1);
    bVar5 = lVar2 == 0;
LAB_0010a77e:
    param_1 = CONCAT71((int7)(param_1 >> 8),!bVar5);
  }
LAB_0010a7ee:
  return param_1 & 0xffffffff;
}

