// rea decompile_all
// name: _ccn_recode_jsf_init
// address: 0x1a2c5
// body: available
// range: 0x1a2c5-0x1a38e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_recode_jsf_init(long param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  
  *(long *)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_4;
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar2 = bVar1;
    *(byte *)(param_1 + lVar3) =
         (*(ulong *)(param_3 + (param_2 - 4U >> 6) * 8) >> ((uint)(param_2 - 4U) & 0x3f) & 1) != 0 |
         (char)(((uint)(*(ulong *)(param_3 + (param_2 - 1U >> 6) * 8) >>
                       ((byte)(param_2 - 1U) & 0x3f)) & 1) << 3) +
         ((byte)(*(ulong *)(param_3 + (param_2 - 2U >> 6) * 8) >> ((byte)(param_2 - 2U) & 0x3f)) & 1
         ) * '\x04' +
         ((byte)(*(ulong *)(param_3 + (param_2 - 3U >> 6) * 8) >> ((byte)(param_2 - 3U) & 0x3f)) & 1
         ) * '\x02';
    lVar3 = 1;
    param_3 = param_4;
    bVar1 = false;
  } while (bVar2);
  return;
}

