// rea decompile_all
// name: _ccn_sub_asm
// address: 0x1d810
// body: available
// range: 0x1d810-0x1d8b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _ccn_sub_asm(ulong param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  
  bVar8 = false;
  lVar7 = 0;
  while (bVar9 = 3 < (long)param_1, param_1 = param_1 - 4, bVar9) {
    uVar2 = *(ulong *)(param_3 + lVar7 * 8);
    puVar1 = (ulong *)(param_4 + lVar7 * 8);
    uVar3 = *puVar1;
    uVar5 = uVar2 - *puVar1;
    *(ulong *)(param_2 + lVar7 * 8) = uVar5 - bVar8;
    uVar4 = *(ulong *)(param_3 + 8 + lVar7 * 8);
    puVar1 = (ulong *)(param_4 + 8 + lVar7 * 8);
    uVar5 = (ulong)(uVar2 < uVar3 || uVar5 < bVar8);
    uVar2 = *puVar1;
    uVar6 = uVar4 - *puVar1;
    *(ulong *)(param_2 + 8 + lVar7 * 8) = uVar6 - uVar5;
    uVar3 = *(ulong *)(param_3 + 0x10 + lVar7 * 8);
    puVar1 = (ulong *)(param_4 + 0x10 + lVar7 * 8);
    uVar5 = (ulong)(uVar4 < uVar2 || uVar6 < uVar5);
    uVar2 = *puVar1;
    uVar6 = uVar3 - *puVar1;
    *(ulong *)(param_2 + 0x10 + lVar7 * 8) = uVar6 - uVar5;
    uVar4 = *(ulong *)(param_3 + 0x18 + lVar7 * 8);
    puVar1 = (ulong *)(param_4 + 0x18 + lVar7 * 8);
    uVar2 = (ulong)(uVar3 < uVar2 || uVar6 < uVar5);
    uVar3 = uVar4 - *puVar1;
    bVar8 = uVar4 < *puVar1 || uVar3 < uVar2;
    *(ulong *)(param_2 + 0x18 + lVar7 * 8) = uVar3 - uVar2;
    lVar7 = lVar7 + 4;
  }
  if ((param_1 & 2) != 0) {
    uVar2 = *(ulong *)(param_3 + lVar7 * 8);
    puVar1 = (ulong *)(param_4 + lVar7 * 8);
    uVar3 = *puVar1;
    uVar5 = uVar2 - *puVar1;
    *(ulong *)(param_2 + lVar7 * 8) = uVar5 - (bVar8 != false);
    uVar4 = *(ulong *)(param_3 + 8 + lVar7 * 8);
    puVar1 = (ulong *)(param_4 + 8 + lVar7 * 8);
    uVar2 = (ulong)(uVar2 < uVar3 || uVar5 < (bVar8 != false));
    uVar3 = uVar4 - *puVar1;
    bVar8 = uVar4 < *puVar1 || uVar3 < uVar2;
    *(ulong *)(param_2 + 8 + lVar7 * 8) = uVar3 - uVar2;
    lVar7 = lVar7 + 2;
  }
  if ((param_1 & 1) != 0) {
    bVar9 = bVar8 != false;
    uVar2 = *(ulong *)(param_3 + lVar7 * 8);
    puVar1 = (ulong *)(param_4 + lVar7 * 8);
    uVar3 = uVar2 - *puVar1;
    bVar8 = uVar2 < *puVar1 || uVar3 < bVar9;
    *(ulong *)(param_2 + lVar7 * 8) = uVar3 - bVar9;
  }
  return bVar8 != false;
}

