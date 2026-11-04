// rea decompile_all
// name: _AMRAuthInstallDeletePersonalizedBundle
// address: 0xf64b4
// body: available
// range: 0xf64b4-0xf6573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMRAuthInstallDeletePersonalizedBundle(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong in_RAX;
  long lVar2;
  ulong uVar3;
  undefined8 local_28;
  
  local_28 = in_RAX;
  _pthread_once((pthread_once_t *)&__AMRAuthInstallInitializeOnce,__AMRAuthInstallInitialize);
  uVar3 = 0;
  _AMRLog(7,&cf__s,"AMRAuthInstallDeletePersonalizedBundle");
  cVar1 = __AMRAuthInstallGetBooleanOptionOrPreference
                    (param_2,0,&cf_AuthInstallPreservePersonalizedBundles);
  if (cVar1 == '\0') {
    _AMRLogWithFilePath(6,param_1,&cf_preservedpersonalizedbundle___,0);
  }
  else {
    local_28 = local_28 & 0xffffffffffffff;
    lVar2 = _CFURLCreateWithFileSystemPath
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_1,0,1);
    if (lVar2 == 0) {
      uVar3 = 0x12;
    }
    else {
      _AMRAuthInstallDeletePersonalizedBundle_cold_1(lVar2,(long)&local_28 + 7,param_1,&local_28);
      uVar3 = local_28 & 0xffffffff;
    }
  }
  return uVar3;
}

