// rea decompile_all
// name: _DERImg4DecodeFindPropertyInSequence
// address: 0x22173c
// body: available
// range: 0x22173c-0x2217a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _DERImg4DecodeFindPropertyInSequence
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  do {
    iVar1 = _DERDecodeSeqNext(param_1,&local_48);
    if (iVar1 != 0) {
      return;
    }
  } while (local_48 != param_2);
  local_58 = (undefined4)uStack_40;
  uStack_54 = uStack_40._4_4_;
  uStack_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  _DERImg4DecodePropertyWithItem(&local_58,param_2,param_3,param_4);
  return;
}

