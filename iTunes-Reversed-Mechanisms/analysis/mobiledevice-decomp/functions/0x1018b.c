// rea decompile_all
// name: _ccn_p224_redc_ws
// address: 0x1018b
// body: available
// range: 0x1018b-0x102a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x102a0 to 0x1bd0a _ccn_mux (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_p224_redc_ws(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  uVar11 = *(ulong *)(param_4 + 0x10);
  lVar13 = 3;
  do {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    uVar11 = *(ulong *)(param_4 + -0x18 + lVar13 * 8);
    uVar12 = -uVar11;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar12;
    uVar7 = SUB168(auVar2 * ZEXT816(0xffffffff),0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    uVar8 = SUB168(auVar3 * ZEXT816(0xffffffff00000000),0);
    puVar1 = (ulong *)(param_4 + -0x10 + lVar13 * 8);
    uVar9 = uVar8 + *puVar1;
    uVar11 = (ulong)CARRY8(uVar11,uVar12);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = SUB168(auVar3 * ZEXT816(0xffffffff00000000),8) + (ulong)CARRY8(uVar8,*puVar1) +
                   (ulong)CARRY8(uVar9,uVar11);
    *(ulong *)(param_4 + -0x10 + lVar13 * 8) = uVar9 + uVar11;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12;
    auVar6 = auVar4 * ZEXT816(0xffffffffffffffff) + auVar5 + auVar6;
    uVar12 = auVar6._8_8_;
    *(long *)(param_4 + -8 + lVar13 * 8) = auVar6._0_8_;
    puVar1 = (ulong *)(param_4 + lVar13 * 8);
    uVar8 = *puVar1;
    uVar9 = uVar7 + *puVar1;
    uVar11 = uVar9 + uVar12;
    *(ulong *)(param_4 + lVar13 * 8) = uVar11;
    *(ulong *)(param_4 + -0x18 + lVar13 * 8) =
         SUB168(auVar2 * ZEXT816(0xffffffff),8) + (ulong)CARRY8(uVar7,uVar8) +
         (ulong)CARRY8(uVar9,uVar12);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 7);
  lVar13 = param_4 + 0x20;
  uVar11 = _ccn_add_ws(param_1,4,lVar13,lVar13,param_4);
  uVar10 = _cczp_prime(param_2);
  uVar8 = _ccn_sub_ws(param_1,4,param_4,lVar13,uVar10);
  _ccn_mux(4,uVar11 ^ uVar8,param_3,lVar13,param_4);
  return;
}

