// rea decompile_all
// name: _ccrsa_make_pub
// address: 0x26099
// body: available
// range: 0x26099-0x26188 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_ccrsa_make_pub(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  long local_70;
  long local_68;
  undefined8 local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = param_5;
  local_40 = param_2;
  local_70 = _cc_malloc_clear(*param_1 * 0x28 + 0x18);
  lVar1 = *param_1;
  local_68 = lVar1 * 5 + 3;
  local_60 = 0;
  local_58 = _cc_ws_alloc;
  local_50 = _cc_ws_free;
  if (local_70 == 0) {
    uVar3 = 0xfffffff3;
  }
  else {
    local_38 = param_3;
    iVar2 = _ccn_read_uint_public_value(lVar1,param_1 + 3,param_4,local_48);
    uVar3 = 0xffffffe9;
    pcVar4 = _cc_ws_free;
    if (iVar2 == 0) {
      iVar2 = _ccn_read_uint_public_value(lVar1,param_1 + 3 + *param_1 * 2 + 1,local_40,local_38);
      if (iVar2 == 0) {
        uVar3 = _cczp_mm_init_ws(&local_70,param_1,lVar1,0);
        pcVar4 = local_50;
      }
    }
    (*pcVar4)(&local_70);
  }
  return uVar3;
}

