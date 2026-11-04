// rea decompile_all
// name: _ramrod_socket_shutdown
// address: 0xc9796
// body: available
// range: 0xc9796-0xc9814 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ramrod_socket_shutdown(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 < 3) {
    puVar4 = &DAT_0032b5d0 + *(int *)(&DAT_0032b5d0 + (ulong)param_2 * 4);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  iVar1 = _shutdown(param_1,param_2);
  if (iVar1 == 0) {
    uVar5 = 0;
    _ramrod_message_error("sock %3d: shutdown(%s) complete",param_1,puVar4);
  }
  else {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    _ramrod_message_error("sock %3d: shutdown(%s) failed: %s",param_1,puVar4,pcVar3);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

