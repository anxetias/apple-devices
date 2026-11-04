// rea decompile_all
// name: __resolveReplyCallback
// address: 0x10dc0b
// body: available
// range: 0x10dc0b-0x10dce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10dcc2 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __resolveReplyCallback(void)

{
  int in_ECX;
  char *pcVar1;
  long in_stack_00000020;
  
  if ((in_stack_00000020 != 0) && (*(int *)(in_stack_00000020 + 0x10) == 0x656b6177)) {
    pcVar1 = "RESULT_ASYNC_ERROR";
    if (in_ECX == 0) {
      pcVar1 = "RESULT_DEVICE_AWAKE";
    }
    _AMDeviceWakeupOperationInvalidate(in_stack_00000020);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,
                      "Delivering %s for wakeop %p (instance %s; interface %u; domain %s)",pcVar1,
                      in_stack_00000020,in_stack_00000020 + 0x68,
                      *(undefined4 *)(in_stack_00000020 + 0x58),in_stack_00000020 + 0xcc);
    (**(code **)(in_stack_00000020 + 0x3a8))
              (in_stack_00000020,(in_ECX != 0) * '\x02',*(undefined8 *)(in_stack_00000020 + 0x3b0));
    _CFRelease(in_stack_00000020);
    return;
  }
  return;
}

