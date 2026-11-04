// rea decompile_all
// name: _ccn_cmpn_public_value
// address: 0x16698
// body: available
// range: 0x16698-0x16706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _ccn_cmpn_public_value(ulong param_1,long param_2,ulong param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_2;
  uVar2 = param_3;
  if (param_1 < param_3) {
    lVar4 = param_4;
    uVar2 = param_1;
  }
  lVar5 = param_1 - param_3;
  if (param_1 < param_3 || param_1 - param_3 == 0) {
    lVar5 = -(param_1 - param_3);
  }
  uVar3 = _ccn_cmp_internal(uVar2,param_2,param_4);
  lVar4 = _ccn_n(lVar5,uVar2 * 8 + lVar4);
  uVar1 = -(uint)(param_1 < param_3) | 1;
  if (lVar4 == 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}

