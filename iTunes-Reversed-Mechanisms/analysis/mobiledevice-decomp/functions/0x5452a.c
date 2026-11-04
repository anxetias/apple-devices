// rea decompile_all
// name: _InitializeH6
// address: 0x5452a
// body: available
// range: 0x5452a-0x54590 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _InitializeH6(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  param_2[6] = (long)param_1;
  iVar1 = *(int *)((long)param_1 + 0x1c);
  *(int *)(param_2 + 2) = 0x40 - iVar1;
  param_2[3] = 0xffffffffffffffff >> (*(char *)((long)param_1 + 0x24) * -8 & 0x3fU);
  lVar3 = 1L << ((byte)iVar1 & 0x3f);
  *param_2 = lVar3;
  lVar2 = param_1[4];
  *(int *)((long)param_2 + 0x24) = (int)lVar2;
  lVar2 = 1L << ((byte)(int)lVar2 & 0x3f);
  param_2[1] = lVar2;
  *(int *)(param_2 + 4) = (int)lVar2 + -1;
  *(int *)(param_2 + 5) = (int)param_1[5];
  lVar2 = *param_1;
  param_2[7] = lVar2;
  param_2[8] = lVar2 + lVar3 * 2;
  return;
}

