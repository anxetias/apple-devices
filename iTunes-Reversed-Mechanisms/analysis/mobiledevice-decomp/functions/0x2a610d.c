// rea decompile_all
// name: _DERImg4DecodeContentFindItemWithTag
// address: 0x2a610d
// body: available
// range: 0x2a610d-0x2a6171 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _DERImg4DecodeContentFindItemWithTag(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = 0;
  uStack_30 = 0;
  iVar1 = _DERDecodeSeqContentInit();
  if (iVar1 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    do {
      iVar1 = _DERDecodeSeqNext(&local_38,&local_58);
      if (iVar1 != 0) {
        return;
      }
    } while (local_58 != param_2);
    *param_3 = uStack_50;
    param_3[1] = local_48;
  }
  return;
}

