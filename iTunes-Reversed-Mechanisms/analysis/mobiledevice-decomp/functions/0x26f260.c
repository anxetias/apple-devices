// rea decompile_all
// name: __AMRAuthInstallFDRSupported.cold.1
// address: 0x26f260
// body: available
// range: 0x26f260-0x26f361 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26f336 to 0xdf44a _AMRLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x26f35d to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRAuthInstallFDRSupported_cold_1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = _AMRAuthInstallCopyVariant();
  if (lVar2 == 0) {
    _AMRLog(3,&cf_failedtocopyvariant);
    return;
  }
  lVar3 = _CFDictionaryGetValue(param_2,&cf_SourceRestoreBundlePath);
  if (lVar3 == 0) {
    lVar3 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
    if (lVar3 == 0) {
      _AMRLog(3,&cf_failedtogetrestorebundlepath);
      _CFRelease(lVar2);
      return;
    }
  }
  uVar4 = _CFGetAllocator(param_1);
  lVar3 = _CFURLCreateWithFileSystemPath(uVar4,lVar3,0,1);
  iVar1 = _AMAuthInstallBundleFDRSupported(param_1,lVar3,lVar2,param_3);
  if (iVar1 != 0) {
    _AMRLog(4,&cf_failedtofindkeyFDRSupportinvariant);
  }
  _CFRelease(lVar2);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return;
}

