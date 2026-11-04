// rea decompile_all
// name: _cczp_init_ws
// address: 0x2ac3c
// body: available
// range: 0x2ac3c-0x2adb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _cczp_init_ws(long param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar2 = (ulong *)_cczp_prime(param_2);
  uVar3 = _ccctr_context_size(param_2);
  uVar9 = 0xfffffff9;
  if ((*puVar2 & 1) != 0) {
    lVar4 = _ccn_n(uVar3,puVar2);
    if ((lVar4 != 1) || (2 < *puVar2)) {
      param_2[2] = (long)&_cczp_default_funcs;
      uVar3 = _ccctr_context_size(param_2);
      uVar9 = _cczp_prime(param_2);
      lVar4 = _ccn_bitlen_public_value(uVar3,uVar9);
      param_2[1] = lVar4;
      uVar1 = *puVar2;
      uVar8 = uVar1 * 3 ^ 2;
      lVar4 = (2 - uVar8 * uVar1) * uVar8;
      lVar4 = (2 - lVar4 * uVar1) * lVar4;
      lVar4 = (2 - lVar4 * uVar1) * lVar4;
      param_2[*param_2 + 3] = (uVar1 * lVar4 + -2) * lVar4;
      lVar5 = _ccctr_context_size(param_2);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      lVar6 = (**(code **)(param_1 + 0x18))(param_1);
      _memset((void *)(lVar6 + lVar5 * 8),0xff,lVar5 * 8);
      uVar9 = _cczp_prime(param_2);
      _ccn_neg(lVar5,lVar6,uVar9);
      lVar4 = *param_2;
      uVar7 = _cczp_prime(param_2);
      uVar9 = 0;
      _ccn_divmod_ws(param_1,lVar5 * 2,lVar6,0,0,lVar5,param_2 + lVar4 + 4,uVar7);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
    }
  }
  return uVar9;
}

