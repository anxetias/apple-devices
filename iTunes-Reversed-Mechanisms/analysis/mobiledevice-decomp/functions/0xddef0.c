// rea decompile_all
// name: std::__function::__func<_handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*,__CFError**)::$_0,std::allocator<_handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*,__CFError**)::$_0>,void(__AMAuthInstall*)>::__clone
// address: 0xddef0
// body: available
// range: 0xddef0-0xddf2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__function::__func<_handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*,
   __CFError**)::$_0,
   std::allocator<_handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*,
   __CFError**)::$_0>, void (__AMAuthInstall*)>::__clone() const */

void __thiscall
std::__function::
__func<_handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*,__CFError**)::$_0,std::allocator<_handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*,__CFError**)::$_0>,void(__AMAuthInstall*)>
::__clone(__func<_handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*,__CFError**)::__0,std::allocator<_handleBootabilityBundleDataRequest(AMRestoreMuxedDeviceMessage*,__CFError**)::__0>,void(__AMAuthInstall*)>
          *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x30);
  *puVar4 = &PTR____func_00446240;
  uVar1 = *(undefined8 *)(this + 0x10);
  uVar2 = *(undefined8 *)(this + 0x18);
  uVar3 = *(undefined8 *)(this + 0x20);
  puVar4[1] = *(undefined8 *)(this + 8);
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  puVar4[4] = uVar3;
  puVar4[5] = *(undefined8 *)(this + 0x28);
  return;
}

