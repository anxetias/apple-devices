// rea decompile_all
// name: std::__function::__func<_handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*)::$_0,std::allocator<_handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*)::$_0>,void(__AMAuthInstall*)>::destroy_deallocate
// address: 0xdce7e
// body: available
// range: 0xdce7e-0xdce87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdce83 to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__function::__func<_handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*)::$_0,
   std::allocator<_handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*)::$_0>, void
   (__AMAuthInstall*)>::destroy_deallocate() */

void __thiscall
std::__function::
__func<_handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*)::$_0,std::allocator<_handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*)::$_0>,void(__AMAuthInstall*)>
::destroy_deallocate
          (__func<_handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*)::__0,std::allocator<_handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*)::__0>,void(__AMAuthInstall*)>
           *this)

{
  operator_delete(this);
  return;
}

