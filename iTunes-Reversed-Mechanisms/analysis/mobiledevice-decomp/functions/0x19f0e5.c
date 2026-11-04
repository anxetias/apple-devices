// rea decompile_all
// name: __AMAuthInstallFinalize
// address: 0x19f0e5
// body: available
// range: 0x19f0e5-0x19f243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19f23a to 0x2aa008 ___bzero (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMAuthInstallFinalize(long param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    __AMAuthInstallFinalize_cold_1();
    return 1;
  }
  if (*(char *)(param_1 + 0x208) != '\0') {
    return in_RAX;
  }
  *(undefined1 *)(param_1 + 0x208) = 1;
  _AMAuthInstallApFinalize(param_1);
  _AMAuthInstallBasebandFinalize(param_1);
  _AMAuthInstallBundleFinalize(param_1);
  _SafeRelease(*(undefined8 *)(param_1 + 0x78));
  _SafeRelease(*(undefined8 *)(param_1 + 0x178));
  _SafeRelease(*(undefined8 *)(param_1 + 0x180));
  _SafeRelease(*(undefined8 *)(param_1 + 0x1a0));
  _SafeRelease(*(undefined8 *)(param_1 + 0x150));
  _SafeRelease(*(undefined8 *)(param_1 + 0x60));
  _SafeRelease(*(undefined8 *)(param_1 + 0x48));
  _SafeRelease(*(undefined8 *)(param_1 + 0x58));
  _SafeRelease(*(undefined8 *)(param_1 + 0x40));
  _SafeRelease(*(undefined8 *)(param_1 + 0x160));
  _SafeRelease(*(undefined8 *)(param_1 + 0x128));
  _SafeRelease(*(undefined8 *)(param_1 + 0x138));
  _SafeRelease(*(undefined8 *)(param_1 + 0x140));
  _SafeRelease(*(undefined8 *)(param_1 + 0x1a8));
  _SafeRelease(*(undefined8 *)(param_1 + 0x1c8));
  _SafeRelease(*(undefined8 *)(param_1 + 0x1d0));
  _SafeRelease(*(undefined8 *)(param_1 + 0x1d8));
  _SafeRelease(*(undefined8 *)(param_1 + 0x1e0));
  _SafeRelease(*(undefined8 *)(param_1 + 0x1f0));
  _SafeRelease(*(undefined8 *)(param_1 + 0x28));
  _SafeRelease(*(undefined8 *)(param_1 + 0x200));
  _SafeRelease(*(undefined8 *)(param_1 + 0x168));
  _SafeRelease(*(undefined8 *)(param_1 + 0x1e8));
  uVar1 = ___bzero(param_1 + 0x10,0x208);
  return uVar1;
}

