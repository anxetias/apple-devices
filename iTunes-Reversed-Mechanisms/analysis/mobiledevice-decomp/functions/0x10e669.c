// rea decompile_all
// name: _AMDServiceConnectionBufferedReadSize
// address: 0x10e669
// body: available
// range: 0x10e669-0x10e722 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10e69a to 0x2a9db0 _SSL_pending (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDServiceConnectionBufferedReadSize(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint local_24;
  
  local_24 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar4 = _SSL_pending();
      return uVar4;
    }
    iVar3 = _ioctl(*(int *)(param_1 + 0x10),0x4004667f,&local_24);
    uVar7 = local_24;
    if (iVar3 == -1) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar2 = _md_log_log;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      __os_log_internal(0,uVar2,0x10,"Failed to get pending bytes for fd %d: %s",uVar1,pcVar6);
      uVar7 = 0xffffffff;
    }
  }
  return (ulong)uVar7;
}

