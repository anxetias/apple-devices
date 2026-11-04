// rea decompile_all
// name: _Img4DecodeGetObjectPropertyString
// address: 0x222366
// body: available
// range: 0x222366-0x2223e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Img4DecodeGetObjectPropertyString
          (long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = 6;
  if (param_5 != (undefined8 *)0x0 && (param_4 != (undefined8 *)0x0 && param_1 != 0)) {
    uVar1 = _Img4DecodeGetObjectProperty
                      (param_1,param_2,param_3 | 0xe000000000000000,0x16,&local_48);
    if ((int)uVar1 == 0) {
      *param_4 = uStack_30;
      uVar1 = 0;
    }
    else {
      *param_4 = 0;
      local_28 = 0;
    }
    *param_5 = local_28;
  }
  return uVar1;
}

