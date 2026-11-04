// rea decompile_all
// name: __SortLateIfPrefix
// address: 0xa5a55
// body: available
// range: 0xa5a55-0xa5ab9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __SortLateIfPrefix(char *param_1,char *param_2,char *param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = _strncmp(param_1,param_3,param_4);
  iVar2 = _strncmp(param_2,param_3,param_4);
  iVar4 = (iVar2 != 0 || iVar1 == 0) - 1;
  iVar3 = 1;
  if (iVar2 == 0) {
    iVar3 = iVar4;
  }
  if (iVar1 != 0) {
    iVar3 = iVar4;
  }
  return iVar3;
}

