// rea decompile_all
// name: _SocketAccept
// address: 0x927d
// body: available
// range: 0x927d-0x92f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * _SocketAccept(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  size_t sVar3;
  socklen_t local_1c;
  
  if (param_1 != (int *)0x0) {
    if (param_1[2] == 1) {
      local_1c = 0x6a;
      sVar3 = 0x88;
    }
    else {
      if (param_1[2] != 0) {
        return (uint *)0x0;
      }
      local_1c = 0x10;
      sVar3 = 0x28;
    }
    puVar2 = _calloc(sVar3,1);
    if (puVar2 != (uint *)0x0) {
      uVar1 = _accept(*param_1,(sockaddr *)(puVar2 + 6),&local_1c);
      *puVar2 = uVar1;
      puVar2[2] = 2;
      puVar2[1] = uVar1 >> 0x1d & 0xfffffffc;
      return puVar2;
    }
  }
  return (uint *)0x0;
}

