// rea decompile_all
// name: ___findRemoteDeviceWithUDID_block_invoke
// address: 0x12ac23
// body: available
// range: 0x12ac23-0x12ace9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12ac6e to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___findRemoteDeviceWithUDID_block_invoke(long param_1,undefined8 param_2,int param_3)

{
  dispatch_group_t group;
  dispatch_time_t timeout;
  
  group = *(dispatch_group_t *)(param_1 + 0x20);
  if (param_3 != 0) {
    timeout = _dispatch_time(0,10000000000);
    _dispatch_group_wait(group,timeout);
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x28));
    _CFRelease(*(undefined8 *)(param_1 + 0x48));
    return;
  }
  _dispatch_group_enter(group);
  _CFRetain(*(undefined8 *)(param_1 + 0x48));
  _remote_device_set_connected_callback(param_2,*(undefined8 *)(param_1 + 0x30));
  return;
}

