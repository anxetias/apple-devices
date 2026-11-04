// rea decompile_all
// name: _ccn_p384_redc_ws
// address: 0x10682
// body: available
// range: 0x10682-0x107ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x107eb to 0x1bd0a _ccn_mux (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_p384_redc_ws(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  
  uVar10 = *(ulong *)(param_4 + 0x20);
  lVar16 = 5;
  do {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar10;
    uVar10 = *(ulong *)(param_4 + -0x28 + lVar16 * 8);
    uVar14 = (uVar10 << 0x20) + uVar10;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14;
    uVar13 = SUB168(auVar2 * ZEXT816(0xffffffff),8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    auVar3 = auVar3 * ZEXT816(0xffffffffffffffff);
    uVar8 = auVar3._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar14;
    uVar9 = SUB168(auVar4 * ZEXT816(0xffffffff00000000),0);
    puVar1 = (ulong *)(param_4 + -0x20 + lVar16 * 8);
    uVar15 = uVar9 + *puVar1;
    uVar10 = (ulong)CARRY8(SUB168(auVar2 * ZEXT816(0xffffffff),0),uVar10);
    uVar11 = uVar15 + uVar13;
    uVar13 = SUB168(auVar4 * ZEXT816(0xffffffff00000000),8) + (ulong)CARRY8(uVar9,*puVar1) +
             (ulong)(CARRY8(uVar15,uVar13) || CARRY8(uVar11,uVar10));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar14;
    uVar9 = SUB168(auVar5 * ZEXT816(0xfffffffffffffffe),0);
    *(ulong *)(param_4 + -0x20 + lVar16 * 8) = uVar11 + uVar10;
    puVar1 = (ulong *)(param_4 + -0x18 + lVar16 * 8);
    uVar10 = uVar9 + *puVar1;
    uVar9 = SUB168(auVar5 * ZEXT816(0xfffffffffffffffe),8) + (ulong)CARRY8(uVar9,*puVar1) +
            (ulong)CARRY8(uVar10,uVar13);
    *(ulong *)(param_4 + -0x18 + lVar16 * 8) = uVar10 + uVar13;
    uVar10 = *(ulong *)(param_4 + -0x10 + lVar16 * 8);
    uVar11 = uVar10 + uVar8;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar3._8_8_ + (ulong)CARRY8(uVar10,uVar8) + (ulong)CARRY8(uVar11,uVar9);
    *(ulong *)(param_4 + -0x10 + lVar16 * 8) = uVar11 + uVar9;
    auVar7 = auVar3 + auVar6 + auVar7;
    *(long *)(param_4 + -8 + lVar16 * 8) = auVar7._0_8_;
    uVar9 = auVar7._8_8_;
    puVar1 = (ulong *)(param_4 + lVar16 * 8);
    uVar11 = *puVar1;
    uVar13 = uVar8 + *puVar1;
    uVar10 = uVar13 + uVar9;
    *(ulong *)(param_4 + lVar16 * 8) = uVar10;
    *(ulong *)(param_4 + -0x28 + lVar16 * 8) =
         auVar3._8_8_ + (ulong)CARRY8(uVar8,uVar11) + (ulong)CARRY8(uVar13,uVar9);
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0xb);
  lVar16 = param_4 + 0x30;
  uVar10 = _ccn_add_ws(param_1,6,lVar16,lVar16,param_4);
  uVar12 = _cczp_prime(param_2);
  uVar11 = _ccn_sub_ws(param_1,6,param_4,lVar16,uVar12);
  _ccn_mux(6,uVar10 ^ uVar11,param_3,lVar16,param_4);
  return;
}

