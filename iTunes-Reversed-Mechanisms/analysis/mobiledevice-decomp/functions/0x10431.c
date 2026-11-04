// rea decompile_all
// name: _ccn_p256_redc_ws
// address: 0x10431
// body: available
// range: 0x10431-0x10510 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1050c to 0x1bd0a _ccn_mux (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_p256_redc_ws(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = *(ulong *)(param_4 + 0x10);
  lVar8 = 3;
  do {
    uVar4 = *(ulong *)(param_4 + -0x18 + lVar8 * 8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    puVar1 = (ulong *)(param_4 + -0x10 + lVar8 * 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + (uVar4 << 0x20);
    uVar7 = (ulong)CARRY8(uVar7,uVar4 << 0x20);
    uVar2 = (uVar4 >> 0x20) + uVar5;
    *(ulong *)(param_4 + -8 + lVar8 * 8) = uVar2 + uVar7;
    auVar3 = auVar3 * ZEXT816(0xffffffff00000001) +
             ZEXT116(CARRY8(uVar4 >> 0x20,uVar5) || CARRY8(uVar2,uVar7));
    uVar4 = auVar3._0_8_;
    puVar1 = (ulong *)(param_4 + lVar8 * 8);
    uVar7 = *puVar1;
    uVar5 = uVar4 + *puVar1;
    *(ulong *)(param_4 + lVar8 * 8) = uVar5;
    *(ulong *)(param_4 + -0x18 + lVar8 * 8) = auVar3._8_8_ + (ulong)CARRY8(uVar4,uVar7);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 7);
  lVar8 = param_4 + 0x20;
  uVar5 = _ccn_add_ws(param_1,4,lVar8,lVar8,param_4);
  uVar6 = _cczp_prime(param_2);
  uVar7 = _ccn_sub_ws(param_1,4,param_4,lVar8,uVar6);
  _ccn_mux(4,uVar5 ^ uVar7,param_3,lVar8,param_4);
  return;
}

