// rea decompile_all
// name: _cczp_power_ws
// address: 0x1a4c4
// body: available
// range: 0x1a4c4-0x1a707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_cczp_power_ws(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
              byte *param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = _ccctr_context_size(param_2);
  uVar3 = _cczp_prime(param_2);
  iVar1 = _ccn_cmp_internal(lVar2,param_4,uVar3);
  uVar3 = 0xfffffff9;
  if (iVar1 < 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = (**(code **)(param_1 + 0x18))(param_1,lVar2 * 4);
    lVar7 = lVar2 * 0x10 + lVar4;
    lVar5 = (**(code **)(param_1 + 0x18))(param_1);
    uVar6 = _cczp_prime(param_2);
    _ccn_sub1(lVar2,lVar4,uVar6,1);
    _cczp_to_ws(param_1,param_2,lVar4,lVar4);
    _ccn_set(lVar2,lVar4 + lVar2 * 8,param_4);
    _cczp_sqr_ws(param_1,param_2,lVar7,param_4);
    _cczp_mul_ws(param_1,param_2,lVar2 * 0x18 + lVar4,param_4,lVar7);
    _ccn_set(lVar2,param_3,lVar4);
    uVar8 = (ulong)((uint)param_5 & 1) + param_5;
    if (1 < uVar8) {
      do {
        _cczp_sqr_ws(param_1,param_2,param_3,param_3);
        _cczp_sqr_ws(param_1,param_2,param_3,param_3);
        _ccn_mux(lVar2 * 2,
                 (*(ulong *)(param_6 + (uVar8 - 1 >> 6) * 8) >> (uVar8 - 1 & 0x3f) & 1) != 0,lVar5,
                 lVar7,lVar4);
        uVar8 = uVar8 - 2;
        _ccn_mux(lVar2,(*(ulong *)(param_6 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0,lVar5,
                 lVar5 + lVar2 * 8,lVar5);
        _cczp_mul_ws(param_1,param_2,param_3,param_3,lVar5);
      } while (1 < uVar8);
    }
    _cczp_cond_negate(param_2,(*param_6 & 3) == 0,param_3,param_3);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = 0;
  }
  return uVar3;
}

