// rea decompile_all
// name: std::__function::__func<_handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFError**)::$_0,std::allocator<_handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFError**)::$_0>,void(__AMAuthInstall*)>::__clone
// address: 0xddcac
// body: available
// range: 0xddcac-0xddcc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__function::__func<_handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*,
   __CFDictionary const*, __CFError**)::$_0,
   std::allocator<_handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary
   const*, __CFError**)::$_0>, void (__AMAuthInstall*)>::__clone(std::__function::__base<void
   (__AMAuthInstall*)>*) const */

void __thiscall
std::__function::
__func<_handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFError**)::$_0,std::allocator<_handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFError**)::$_0>,void(__AMAuthInstall*)>
::__clone(__func<_handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFError**)::__0,std::allocator<_handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFError**)::__0>,void(__AMAuthInstall*)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &PTR____func_004460c0;
  uVar1 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

