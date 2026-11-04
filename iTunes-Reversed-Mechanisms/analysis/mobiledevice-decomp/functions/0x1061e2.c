// rea decompile_all
// name: AMRemoteServiceDeviceProxy::GetSecurityDomain
// address: 0x1061e2
// body: available
// range: 0x1061e2-0x106294 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMRemoteServiceDeviceProxy::GetSecurityDomain() */

undefined4 __thiscall
AMRemoteServiceDeviceProxy::GetSecurityDomain(AMRemoteServiceDeviceProxy *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  
  local_1c = 0;
  if (*(long *)(this + 0x20) == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar4 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Invalid argument.");
  }
  else {
    lVar1 = _MDRemoteServiceDeviceCopyProperty(*(long *)(this + 0x20),"SecurityDomain");
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      lVar2 = _CFGetTypeID(lVar1);
      lVar3 = _CFNumberGetTypeID();
      if (lVar2 == lVar3) {
        _CFNumberGetValue(lVar1,9,&local_1c);
      }
      _CFRelease(lVar1);
      uVar4 = local_1c;
    }
  }
  return uVar4;
}

