// rea decompile_all
// name: _fPersonalizedFirmwarePayloadData
// address: 0x17eb72
// body: available
// range: 0x17eb72-0x17ebb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17ebb0 to 0x2aa50c _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPersonalizedFirmwarePayloadData
               (long param_1,long param_2,void *param_3,uint param_4,uint param_5)

{
  if (param_2 == 0 || param_1 == 0) {
    return;
  }
  _memcpy((void *)((ulong)param_5 +
                  *(long *)(*(long *)(param_2 + 0x128) + 0x50 +
                           (ulong)*(ushort *)(param_2 + 0x130) * 0x160)),param_3,(ulong)param_4);
  return;
}

