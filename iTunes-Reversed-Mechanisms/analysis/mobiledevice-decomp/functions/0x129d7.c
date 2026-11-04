// rea decompile_all
// name: _ccec_sign
// address: 0x129d7
// body: available
// range: 0x129d7-0x12a7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_ccec_sign(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined4 uVar2;
  long local_68;
  long local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  plVar1 = (long *)*param_1;
  local_40 = param_5;
  local_38 = param_4;
  local_68 = _cc_malloc_clear(*plVar1 * 0x118);
  local_60 = *plVar1 * 0x23;
  local_58 = 0;
  local_50 = _cc_ws_alloc;
  local_48 = _cc_ws_free;
  uVar2 = 0xfffffff3;
  if (local_68 != 0) {
    uVar2 = _ccec_sign_ws(&local_68,param_1,param_2,param_3,local_38,local_40,param_6);
    (*local_48)(&local_68);
  }
  return uVar2;
}

