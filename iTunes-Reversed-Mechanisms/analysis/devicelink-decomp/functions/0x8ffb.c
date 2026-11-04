// rea decompile_all
// name: _SocketCreateServerWithSocket
// address: 0x8ffb
// body: available
// range: 0x8ffb-0x9085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * _SocketCreateServerWithSocket(int param_1)

{
  int iVar1;
  int *piVar2;
  long extraout_RAX;
  int iVar3;
  undefined4 local_1c;
  
  local_1c = 1;
  piVar2 = _calloc(0x28,1);
  if (piVar2 != (int *)0x0) {
    if (_sSocketOldSignalHandler == 0) {
      _signal(0xd);
      _sSocketOldSignalHandler = extraout_RAX;
    }
    piVar2[2] = 0;
    *piVar2 = param_1;
    iVar1 = _setsockopt(param_1,0xffff,4,&local_1c,4);
    iVar3 = 7;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    piVar2[1] = iVar3;
  }
  return piVar2;
}

