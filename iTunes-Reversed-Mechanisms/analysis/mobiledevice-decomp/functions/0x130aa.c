// rea decompile_all
// name: _ccec_verify
// address: 0x130aa
// body: available
// range: 0x130aa-0x13173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ccec_verify(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  long local_68;
  long local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  *param_6 = 0;
  local_40 = param_5;
  local_38 = param_4;
  local_68 = _cc_malloc_clear(*(long *)*param_1 * 0x178);
  local_60 = *(long *)*param_1 * 0x2f;
  local_58 = 0;
  local_50 = _cc_ws_alloc;
  local_48 = _cc_ws_free;
  iVar2 = -0xd;
  if (local_68 != 0) {
    iVar2 = _ccec_verify_digest_ws(&local_68,param_1,param_2,param_3,local_38,local_40,0);
    (*local_48)();
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      if (iVar2 == -0x92) {
        iVar2 = 0;
      }
    }
    *param_6 = uVar1;
  }
  return iVar2;
}

