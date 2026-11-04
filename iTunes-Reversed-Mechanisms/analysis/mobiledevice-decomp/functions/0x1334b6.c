// rea decompile_all
// name: __apply_socket_timeouts
// address: 0x1334b6
// body: available
// range: 0x1334b6-0x13358b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __apply_socket_timeouts(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = 0x19;
  local_28 = 0;
  iVar2 = _setsockopt(param_1,0xffff,0x1005,&local_30,0x10);
  if (iVar2 == 0) {
    iVar2 = _setsockopt(param_1,0xffff,0x1006,&local_30,0x10);
    if (iVar2 == 0) {
      return 0;
    }
    pcVar5 = "Could not set the receive timeout: %d (%s)";
  }
  else {
    pcVar5 = "Could not set the send timeout: %d (%s)";
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  uVar1 = _md_log_log;
  piVar3 = ___error();
  iVar2 = *piVar3;
  piVar3 = ___error();
  pcVar4 = _strerror(*piVar3);
  __os_log_internal(0,uVar1,0x10,pcVar5,iVar2,pcVar4);
  return 0xe8000003;
}

