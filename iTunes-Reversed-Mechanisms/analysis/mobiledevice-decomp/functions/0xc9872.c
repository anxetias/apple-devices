// rea decompile_all
// name: _ramrod_socket_wait_for_eof
// address: 0xc9872
// body: available
// range: 0xc9872-0xc9909 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc9905 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ramrod_socket_wait_for_eof(int param_1)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 local_1028 [4104];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_1028,0x1000);
  do {
    sVar1 = _recv(param_1,local_1028,0x1000,0);
  } while (0 < sVar1);
  uVar4 = 0;
  if (sVar1 == -1) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    _ramrod_message_error("sock %3d: received error waiting for EOF: %s",param_1,pcVar3);
    uVar4 = 0xffffffff;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

