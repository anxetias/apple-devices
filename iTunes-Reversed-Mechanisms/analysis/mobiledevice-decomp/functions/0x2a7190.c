// rea decompile_all
// name: _Img4DecodeGetPropertyBoolean
// address: 0x2a7190
// body: available
// range: 0x2a7190-0x2a71ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _Img4DecodeGetPropertyBoolean(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined8 uStack_60;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  
  local_58 = *param_1;
  local_50 = (ulong)*(uint *)(param_1 + 1);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lStack_20 = 0;
  uStack_60 = _DERImg4DecodeProperty(&local_58,param_2 | 0xe000000000000000);
  if ((int)uStack_60 == 0) {
    if (lStack_20 == 1) {
      if (param_3 == 0) {
        uStack_60 = 6;
      }
      else {
        uStack_60 = _DERParseBoolean(&uStack_30,param_3);
      }
    }
    else {
      uStack_60 = 2;
    }
  }
  return uStack_60;
}

