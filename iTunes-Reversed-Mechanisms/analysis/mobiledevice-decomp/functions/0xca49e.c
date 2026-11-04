// rea decompile_all
// name: AMRestoreMuxedDeviceRamrodChannel::SuspendKeepAliveIfNeeded
// address: 0xca49e
// body: available
// range: 0xca49e-0xca521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMRestoreMuxedDeviceRamrodChannel::SuspendKeepAliveIfNeeded() */

void __thiscall
AMRestoreMuxedDeviceRamrodChannel::SuspendKeepAliveIfNeeded(AMRestoreMuxedDeviceRamrodChannel *this)

{
  int iVar1;
  int iVar2;
  AMRestoreMuxedDeviceRamrodChannel AVar3;
  undefined8 local_28;
  
  if ((*(long *)(this + 0x10) != 0) && (iVar1 = *(int *)(this + 0x20), -1 < iVar1)) {
    if (*(char *)(*(long *)(this + 0x10) + 0x7e) == '\0') {
      local_28 = 0x400000000;
      iVar2 = _getsockopt(iVar1,0xffff,8,&local_28,(socklen_t *)((long)&local_28 + 4));
      AVar3 = (AMRestoreMuxedDeviceRamrodChannel)((int)local_28 != 0 && iVar2 == 0);
      if ((int)local_28 != 0 && iVar2 == 0) {
        _ramrod_socket_set_keepalive(iVar1,0);
      }
    }
    else {
      AVar3 = (AMRestoreMuxedDeviceRamrodChannel)0x0;
    }
    this[0x24] = AVar3;
  }
  return;
}

