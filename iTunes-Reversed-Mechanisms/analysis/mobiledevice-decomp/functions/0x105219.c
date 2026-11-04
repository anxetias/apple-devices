// rea decompile_all
// name: __AMDeviceProxyCreateRestoreOSProxy
// address: 0x105219
// body: available
// range: 0x105219-0x105255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


AMDeviceProxyCF<__AMRestoreModeDevice*> *
__AMDeviceProxyCreateRestoreOSProxy(__AMRestoreModeDevice *param_1)

{
  AMDeviceProxyCF<__AMRestoreModeDevice*> *this;
  
  if (param_1 == (__AMRestoreModeDevice *)0x0) {
    this = (AMDeviceProxyCF<__AMRestoreModeDevice*> *)0x0;
  }
  else {
    this = operator_new(0x28);
    AMDeviceProxyCF<__AMRestoreModeDevice*>::AMDeviceProxyCF(this,param_1);
    *(undefined ***)this = &PTR__AMRestoreOSDeviceProxy_00448348;
  }
  return this;
}

