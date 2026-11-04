// rea decompile_all
// name: __read_buffer
// address: 0xc9140
// body: available
// range: 0xc9140-0xc91ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __read_buffer(int param_1,void *param_2,size_t param_3,byte param_4)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  
  pvVar4 = param_2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    sVar1 = _recv(param_1,pvVar4,param_3,0);
    if (sVar1 < 0) break;
    if (sVar1 == 0) {
      iVar5 = (uint)(pvVar4 == param_2) * 2 + 0x5e;
      if ((pvVar4 == param_2 & param_4) != 0) {
        return iVar5;
      }
      _ramrod_message_error
                ("sock %3d: recv(%d, %lu) failed: connection closed",param_1,param_1,param_3);
      return iVar5;
    }
    pvVar4 = (void *)((long)pvVar4 + sVar1);
    param_3 = param_3 - sVar1;
  }
  piVar2 = ___error();
  iVar5 = *piVar2;
  pcVar3 = _strerror(iVar5);
  _ramrod_message_error("sock %3d: recv(%d, %lu) failed: %s",param_1,param_1,param_3,pcVar3);
  return iVar5;
}

