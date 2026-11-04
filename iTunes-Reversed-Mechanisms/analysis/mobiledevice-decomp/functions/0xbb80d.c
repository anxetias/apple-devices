// rea decompile_all
// name: _AFCSetSocketOptions
// address: 0xbb80d
// body: available
// range: 0xbb80d-0xbb950 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AFCSetSocketOptions(undefined8 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  local_34 = 1;
  local_30 = _AFCConnectionGetIOTimeout();
  local_28 = 0;
  iVar1 = _setsockopt(param_2,6,1,&local_34,4);
  if (iVar1 < 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    _AFCLog(5,"Setting TCP_NODELAY on connection %p failed: %s",param_1,pcVar3);
  }
  iVar1 = _fcntl(param_2,4,4);
  if (iVar1 < 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    _AFCLog(5,"Setting O_NONBLOCK on connection %p failed: %s\n",param_1,pcVar3);
  }
  iVar1 = _setsockopt(param_2,0xffff,0x1005,&local_30,0x10);
  if (iVar1 < 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    _AFCLog(4,"Setting SO_SNDTIMEO on connection %p failed: %s",param_1,pcVar3);
  }
  iVar1 = _setsockopt(param_2,0xffff,0x1006,&local_30,0x10);
  if (iVar1 < 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    _AFCLog(4,"Setting SO_RCVTIMEO on connection %p failed: %s",param_1,pcVar3);
  }
  return;
}

