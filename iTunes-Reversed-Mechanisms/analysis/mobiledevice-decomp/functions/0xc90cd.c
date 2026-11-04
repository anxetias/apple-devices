// rea decompile_all
// name: __write_buffer
// address: 0xc90cd
// body: available
// range: 0xc90cd-0xc913f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __write_buffer(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    sVar2 = _send(param_1,param_2,param_3,0);
    if (sVar2 == -1) break;
    param_2 = (void *)((long)param_2 + sVar2);
    param_3 = param_3 - sVar2;
  }
  piVar3 = ___error();
  iVar1 = *piVar3;
  pcVar4 = _strerror(iVar1);
  _ramrod_message_error("sock %3d: send(%d, %lu) failed: %s",param_1,param_1,param_3,pcVar4);
  return iVar1;
}

