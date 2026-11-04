// rea decompile_all
// name: _ccn_shift_left
// address: 0x2b410
// body: available
// range: 0x2b410-0x2b519 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0002b4df) */
/* WARNING: Removing unreachable block (ram,0x0002b497) */

void _ccn_shift_left(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  param_2 = param_2 + param_1 * 8;
  lVar6 = -(param_4 + -0x40);
  plVar7 = (long *)(param_3 + param_1 * 8 + -8);
  uVar8 = param_1 - 4;
  if (3 < param_1) {
    if (uVar8 == 0) {
LAB_0002b483:
      uVar8 = plVar7[-3];
      uVar11 = plVar7[-2];
      uVar10 = plVar7[-1];
      lVar3 = plVar7[-2];
      lVar4 = plVar7[-1];
      lVar5 = *plVar7;
      *(ulong *)(param_2 + -0x20) = 0UL >> lVar6 | plVar7[-3] << param_4;
      *(ulong *)(param_2 + -0x18) = uVar8 >> lVar6 | lVar3 << param_4;
      *(ulong *)(param_2 + -0x10) = uVar11 >> lVar6 | lVar4 << param_4;
      *(ulong *)(param_2 + -8) = uVar10 >> lVar6 | lVar5 << param_4;
      return;
    }
    do {
      uVar9 = uVar8;
      puVar1 = (ulong *)(plVar7 + -4);
      uVar8 = plVar7[-3];
      uVar11 = plVar7[-2];
      uVar10 = plVar7[-1];
      plVar2 = plVar7 + -3;
      lVar3 = plVar7[-2];
      lVar4 = plVar7[-1];
      lVar5 = *plVar7;
      plVar7 = plVar7 + -4;
      *(ulong *)(param_2 + -0x20) = *puVar1 >> lVar6 | *plVar2 << param_4;
      *(ulong *)(param_2 + -0x18) = uVar8 >> lVar6 | lVar3 << param_4;
      *(ulong *)(param_2 + -0x10) = uVar11 >> lVar6 | lVar4 << param_4;
      *(ulong *)(param_2 + -8) = uVar10 >> lVar6 | lVar5 << param_4;
      param_2 = param_2 + -0x20;
      uVar8 = uVar9 - 4;
    } while (uVar8 != 0 && 3 < (long)uVar9);
    if (3 < (long)uVar9) goto LAB_0002b483;
  }
  if ((uVar8 & 3) == 3) {
    uVar10 = plVar7[-2];
    uVar11 = plVar7[-1];
  }
  else {
    if ((uVar8 & 2) == 0) goto LAB_0002b502;
    uVar11 = plVar7[-1];
    uVar10 = 0;
  }
  lVar3 = *plVar7;
  *(ulong *)(param_2 + -0x10) = plVar7[-1] << param_4 | uVar10 >> lVar6;
  *(ulong *)(param_2 + -8) = lVar3 << param_4 | uVar11 >> lVar6;
  param_2 = param_2 + -0x10;
  plVar7 = plVar7 + -2;
LAB_0002b502:
  if ((uVar8 & 1) != 0) {
    *(long *)(param_2 + -8) = *plVar7 << param_4;
  }
  return;
}

