// rea decompile_all
// name: _cczp_power_fast_ws
// address: 0x1bdd9
// body: available
// range: 0x1bdd9-0x1bfbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_cczp_power_fast_ws(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = _ccctr_context_size(param_2);
  uVar4 = _ccn_bitlen_internal(lVar3,param_5);
  if (uVar4 == 0) {
    _ccn_seti(lVar3,param_3,1);
    _cczp_to_ws(param_1,param_2,param_3,param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = (**(code **)(param_1 + 0x18))(param_1,lVar3 * 3);
    lVar1 = lVar5 + lVar3 * 8;
    _ccn_set(lVar3,lVar5,param_4);
    _cczp_sqr_ws(param_1,param_2,lVar1,lVar5);
    _cczp_mul_ws(param_1,param_2,lVar3 * 0x10 + lVar5,lVar1,lVar5);
    uVar6 = (ulong)((*(ulong *)(param_5 + (uVar4 - 1 >> 6) * 8) >> (uVar4 - 1 & 0x3f) & 1) != 0);
    if ((uVar4 & 1) == 0) {
      uVar6 = (ulong)((*(ulong *)(param_5 + (uVar4 - 2 >> 6) * 8) >> ((uint)(uVar4 - 2) & 0x3e) & 1)
                     != 0) + uVar6 * 2;
    }
    _ccn_set(lVar3,param_3,lVar5 + (uVar6 - 1) * lVar3 * 8);
    if ((uVar4 | 0xfffffffffffffffe) + uVar4 != 0) {
      uVar4 = (uVar4 + (uVar4 | 0xfffffffffffffffe)) - 1;
      do {
        _cczp_sqr_ws(param_1,param_2,param_3,param_3);
        _cczp_sqr_ws(param_1,param_2,param_3,param_3);
        uVar6 = (ulong)((*(ulong *)(param_5 + (uVar4 - 1 >> 6) * 8) >> (uVar4 - 1 & 0x3f) & 1) != 0)
                | (ulong)((int)(*(ulong *)(param_5 + (uVar4 >> 6) * 8) >> ((byte)uVar4 & 0x3f)) * 2
                         & 2);
        if (uVar6 != 0) {
          _cczp_mul_ws(param_1,param_2,param_3,param_3,lVar5 + (uVar6 - 1) * lVar3 * 8);
        }
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0xffffffffffffffff);
    }
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return 0;
}

