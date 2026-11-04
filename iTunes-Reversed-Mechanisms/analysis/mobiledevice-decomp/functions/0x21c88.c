// rea decompile_all
// name: _ccsha512_final
// address: 0x21c88
// body: available
// range: 0x21c88-0x21e52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21e4e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void _ccsha512_final(ulong *param_1,void *param_2,ulong param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  local_50[1] = (ulong)&uStack_58;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar8 = param_1[1];
  uVar10 = param_1[2];
  if (uVar10 <= *(uint *)((long)param_2 + uVar10 + 8 + uVar8)) {
    *(undefined4 *)((long)param_2 + uVar10 + uVar8 + 8) = 0;
  }
  uVar11 = (uVar8 + uVar10 + 0x13 & 0xfffffffffffffff8) + 0xf & 0xfffffffffffffff0;
  lVar3 = -uVar11;
  puVar9 = (ulong *)((long)local_50 + lVar3 + 0xfffffffffffffff8U);
  local_50[0] = param_3;
  local_40 = param_2;
  *(undefined8 *)((long)&uStack_60 + lVar3) = 0x21d04;
  ___bzero(puVar9);
  pvVar5 = local_40;
  *(undefined8 *)((long)&uStack_60 + lVar3) = 0x21d18;
  _memcpy(puVar9,pvVar5,uVar8 + uVar10 + 0xc);
  lVar4 = uVar8 + 8;
  uVar6 = *(uint *)((long)puVar9 + uVar10 + lVar4);
  plVar1 = (long *)(local_50[1] - uVar11);
  *plVar1 = *plVar1 + (ulong)(uVar6 * 8);
  *(uint *)((long)puVar9 + uVar10 + lVar4) = uVar6 + 1;
  *(undefined1 *)((long)puVar9 + (ulong)uVar6 + lVar4) = 0x80;
  uVar6 = *(uint *)((long)puVar9 + uVar10 + lVar4);
  uVar11 = (ulong)uVar6;
  if (uVar10 - 0x10 < uVar11) {
    while (uVar11 < uVar10) {
      *(uint *)((long)puVar9 + uVar10 + lVar4) = uVar6 + 1;
      *(undefined1 *)((long)puVar9 + uVar11 + lVar4) = 0;
      uVar6 = *(uint *)((long)puVar9 + uVar10 + lVar4);
      uVar11 = (ulong)uVar6;
    }
    pcVar2 = (code *)param_1[6];
    *(undefined8 *)((long)&uStack_60 + lVar3) = 0x21d7c;
    (*pcVar2)((long)local_50 + lVar3,1);
    uVar8 = param_1[1];
    uVar10 = param_1[2];
    *(undefined4 *)((long)puVar9 + uVar10 + 8 + uVar8) = 0;
    uVar11 = 0;
  }
  lVar4 = uVar8 + 8;
  while (uVar11 < uVar10 - 8) {
    *(int *)((long)puVar9 + uVar10 + lVar4) = (int)uVar11 + 1;
    *(undefined1 *)((long)puVar9 + uVar11 + lVar4) = 0;
    uVar11 = (ulong)*(uint *)((long)puVar9 + uVar10 + lVar4);
  }
  uVar11 = *puVar9;
  *(ulong *)((long)puVar9 + uVar10 + uVar8) =
       uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 | (uVar11 & 0xff0000000000) >> 0x18 |
       (uVar11 & 0xff00000000) >> 8 | (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
       (uVar11 & 0xff00) << 0x28 | uVar11 << 0x38;
  lVar4 = (long)local_50 + lVar3;
  uVar8 = param_1[1];
  pcVar2 = (code *)param_1[6];
  *(undefined8 *)((long)&uStack_60 + lVar3) = 0x21de1;
  (*pcVar2)(lVar4,1,uVar8 + lVar4);
  if (7 < *param_1) {
    uVar6 = 1;
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar8 = *(ulong *)(lVar4 + uVar8 * 8);
      *(ulong *)(local_50[0] + uVar7) =
           uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
           (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
           (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
      uVar8 = (ulong)uVar6;
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 8;
    } while (uVar8 < *param_1 >> 3);
  }
  uVar8 = param_1[1];
  uVar10 = param_1[2];
  *(undefined8 *)((long)&uStack_60 + lVar3) = 0x21e2f;
  _cc_clear(uVar8 + uVar10 + 0xc,puVar9);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&uStack_60 + lVar3) = &UNK_00021e53;
    ___stack_chk_fail();
  }
  return;
}

