// rea decompile_all
// name: _ccrsa_sign_pkcs1v15_blinded
// address: 0x1f072
// body: available
// range: 0x1f072-0x1f153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_ccrsa_sign_pkcs1v15_blinded
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long local_78;
  long local_70;
  undefined8 local_68;
  code *local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = *param_2;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  uVar3 = _CCRSA_CRT_POWER_BLINDED_WORKSPACE_N(lVar1);
  uVar5 = lVar1 * 9;
  if ((ulong)(lVar1 * 9) <= uVar3) {
    uVar5 = uVar3;
  }
  lVar4 = _cc_malloc_clear((lVar1 * 3 + uVar5) * 8);
  lVar1 = *param_2;
  local_78 = lVar4;
  uVar5 = _CCRSA_CRT_POWER_BLINDED_WORKSPACE_N(lVar1);
  if (uVar5 < (ulong)(lVar1 * 9)) {
    uVar5 = lVar1 * 9;
  }
  local_70 = lVar1 * 3 + uVar5;
  local_68 = 0;
  local_60 = _cc_ws_alloc;
  local_58 = _cc_ws_free;
  if (lVar4 == 0) {
    uVar2 = 0xfffffff3;
  }
  else {
    uVar2 = _ccrsa_sign_pkcs1v15_blinded_ws
                      (&local_78,param_1,param_2,local_38,local_40,local_48,local_50,param_7);
    (*local_58)(&local_78);
  }
  return uVar2;
}

