// rea decompile_all
// name: _ramrod_socket_set_buffer_limits
// address: 0xc96e4
// body: available
// range: 0xc96e4-0xc9795 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ramrod_socket_set_buffer_limits(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int local_28;
  int local_24;
  
  local_28 = param_2;
  local_24 = param_3;
  if ((param_2 < 1) ||
     (iVar1 = _setsockopt(param_1,0xffff,0x1001,&local_28,4), iVar5 = local_28, iVar1 == 0)) {
    if (param_3 < 1) {
      return 0;
    }
    iVar1 = _setsockopt(param_1,0xffff,0x1002,&local_24,4);
    iVar5 = local_24;
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    pcVar4 = "sock %3d: could not set SO_RCVBUF=%d: %s";
  }
  else {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    pcVar4 = "sock %3d: could not set SO_SNDBUF=%d: %s";
  }
  _ramrod_message_error(pcVar4,param_1,iVar5,pcVar3);
  return 0xffffffff;
}

