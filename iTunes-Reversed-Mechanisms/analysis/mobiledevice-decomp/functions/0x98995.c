// rea decompile_all
// name: _OpenLocalFile
// address: 0x98995
// body: available
// range: 0x98995-0x98a05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _OpenLocalFile(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  size_t sVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  sVar2 = _strlen(*(char **)(param_3 + 0x38));
  __OpenLocalFile(param_1,(ulong)*(ushort *)(param_3 + 0x40) + sVar2 + lVar1 + 0x1e,
                  *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                  *(undefined4 *)(param_2 + 0x1c),*(undefined2 *)(param_2 + 6),
                  *(undefined8 *)(param_2 + 0x48),param_4,param_5);
  return;
}

