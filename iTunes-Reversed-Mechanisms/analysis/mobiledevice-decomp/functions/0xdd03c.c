// rea decompile_all
// name: std::__function::__func<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::$_0,std::allocator<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::$_0>,void(__AMAuthInstall*)>::target
// address: 0xdd03c
// body: available
// range: 0xdd03c-0xdd056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__function::__func<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,
   __CFDictionary const*, __CFString const**)::$_0,
   std::allocator<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*, __CFDictionary
   const*, __CFString const**)::$_0>, void (__AMAuthInstall*)>::target(std::type_info const&) const
    */

__func<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::__0,std::allocator<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::__0>,void(__AMAuthInstall*)>
* __thiscall
std::__function::
__func<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::$_0,std::allocator<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::$_0>,void(__AMAuthInstall*)>
::target(__func<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::__0,std::allocator<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::__0>,void(__AMAuthInstall*)>
         *this,type_info *param_1)

{
  __func<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::__0,std::allocator<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::__0>,void(__AMAuthInstall*)>
  *p_Var1;
  
  p_Var1 = (__func<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::__0,std::allocator<_handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*,__CFDictionary_const*,__CFString_const**)::__0>,void(__AMAuthInstall*)>
            *)0x0;
  if (*(char **)(param_1 + 8) ==
      "ZL31_handleFirmwareUpdaterPreflightP27AMRestoreMuxedDeviceMessagePK14__CFDictionaryPPK10__CFStringE3$_0"
     ) {
    p_Var1 = this + 8;
  }
  return p_Var1;
}

