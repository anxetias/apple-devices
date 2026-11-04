// rea decompile_all
// name: _Img4DecodeInitPayload
// address: 0x22262f
// body: available
// range: 0x22262f-0x22268a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _Img4DecodeInitPayload(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long local_28;
  undefined8 uStack_20;
  
  uVar1 = 6;
  if (param_3 != 0 && param_1 != 0) {
    local_28 = param_1;
    uStack_20 = param_2;
    ___bzero(param_3,0x1c8);
    uVar1 = _DERImg4DecodePayload(&local_28,param_3 + 0x58);
    if ((int)uVar1 == 0) {
      *(long *)(param_3 + 8) = local_28;
      *(undefined8 *)(param_3 + 0x10) = uStack_20;
    }
  }
  return uVar1;
}

