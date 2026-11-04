// rea decompile_all
// name: __AMAuthInstallBundleCreateDebugDirectory
// address: 0x1a8885
// body: available
// range: 0x1a8885-0x1a8931 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a892d to 0x1b1847 _AMAuthInstallPlatformMakeDirectoryForURL (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMAuthInstallBundleCreateDebugDirectory(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _SafeRelease(*(undefined8 *)(param_1 + 0x150));
  uVar2 = _CFGetAllocator(param_1);
  uVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                    (uVar2,param_2,&cf_amai_debug,1,(undefined8 *)(param_1 + 0x150));
  if (uVar1 != 0) {
    uVar2 = _AMAuthInstallGetLocalizedStatusString(param_1,uVar1);
    _AMAuthInstallLog(3,"_AMAuthInstallBundleCreateDebugDirectory",
                      "failed to create debug directory within bundle: %@",uVar2);
    _AMAuthInstallLog(8,"_AMAuthInstallBundleCreateDebugDirectory","bundle: %@",param_2);
    return (ulong)uVar1;
  }
  uVar3 = _AMAuthInstallPlatformMakeDirectoryForURL(*(undefined8 *)(param_1 + 0x150));
  return uVar3;
}

