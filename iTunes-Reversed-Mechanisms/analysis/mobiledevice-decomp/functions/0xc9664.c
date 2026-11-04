// rea decompile_all
// name: _ramrod_socket_set_keepalive
// address: 0xc9664
// body: available
// range: 0xc9664-0xc96e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ramrod_socket_set_keepalive(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 local_24;
  
  local_24 = param_2;
  iVar2 = _setsockopt(param_1,0xffff,8,&local_24,4);
  uVar1 = local_24;
  if (iVar2 == 0) {
    uVar5 = 0;
    _ramrod_message_error("sock %3d: set SO_KEEPALIVE=%d",param_1,local_24);
  }
  else {
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    _ramrod_message_error("sock %3d: could not set SO_KEEPALIVE=%d: %s",param_1,uVar1,pcVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

