// rea decompile_all
// name: _ccrsa_verify_pkcs1v15_digest
// address: 0x1f321
// body: available
// range: 0x1f321-0x1f3cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_ccrsa_verify_pkcs1v15_digest
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long local_60;
  long local_58;
  undefined8 local_50;
  code *local_48;
  code *local_40;
  undefined8 local_38;
  
  local_38 = param_5;
  local_60 = _cc_malloc_clear(*param_1 * 0x58);
  local_58 = *param_1 * 0xb;
  local_50 = 0;
  local_48 = _cc_ws_alloc;
  local_40 = _cc_ws_free;
  if (local_60 == 0) {
    uVar1 = 0xfffffff3;
  }
  else {
    uVar1 = _ccrsa_verify_pkcs1v15_digest_ws
                      (&local_60,param_1,param_2,param_3,param_4,local_38,param_6,param_7);
    (*local_40)(&local_60);
  }
  return uVar1;
}

