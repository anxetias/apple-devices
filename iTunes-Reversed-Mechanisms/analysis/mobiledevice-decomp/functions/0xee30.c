// rea decompile_all
// name: _ccdigest_final_64be
// address: 0xee30
// body: available
// range: 0xee30-0xefde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xefda to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccdigest_final_64be(ulong *param_1,void *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 uStack_60;
  ulong uStack_58;
  long local_50;
  undefined1 *local_48;
  void *local_40;
  long local_38;
  
  local_48 = (undefined1 *)&uStack_58;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar10 = param_1[1];
  uVar2 = param_1[2];
  if (uVar2 <= *(uint *)((long)param_2 + uVar2 + 8 + uVar10)) {
    *(undefined4 *)((long)param_2 + uVar2 + uVar10 + 8) = 0;
  }
  uVar11 = (uVar10 + uVar2 + 0x13 & 0xfffffffffffffff8) + 0xf & 0xfffffffffffffff0;
  lVar4 = -uVar11;
  puVar12 = (ulong *)((long)&uStack_58 + lVar4);
  local_50 = param_3;
  local_40 = param_2;
  *(undefined8 *)((long)&uStack_60 + lVar4) = 0xeeac;
  ___bzero(puVar12);
  pvVar5 = local_40;
  *(undefined8 *)((long)&uStack_60 + lVar4) = 0xeec0;
  _memcpy(puVar12,pvVar5,uVar10 + uVar2 + 0xc);
  lVar9 = (long)puVar12 + uVar10;
  puVar7 = (uint *)(uVar2 + lVar9 + 8);
  uVar6 = *puVar7;
  *(ulong *)(local_48 + -uVar11) = *(long *)(local_48 + -uVar11) + (ulong)(uVar6 * 8);
  *puVar7 = uVar6 + 1;
  *(undefined1 *)((ulong)uVar6 + 8 + lVar9) = 0x80;
  uVar6 = *puVar7;
  if (uVar6 < 0x39) {
    if (uVar6 == 0x38) goto LAB_0000ef4d;
  }
  else {
    while (uVar6 < 0x40) {
      *puVar7 = uVar6 + 1;
      *(undefined1 *)((long)puVar12 + (ulong)uVar6 + uVar10 + 8) = 0;
      uVar6 = *puVar7;
    }
    pcVar3 = (code *)param_1[6];
    *(undefined8 *)((long)&uStack_60 + lVar4) = 0xef19;
    (*pcVar3)((long)&local_50 + lVar4);
    lVar9 = param_1[1] + (long)puVar12;
    puVar7 = (uint *)(param_1[2] + lVar9 + 8);
    *puVar7 = 0;
    uVar6 = 0;
  }
  do {
    *puVar7 = uVar6 + 1;
    *(undefined1 *)(lVar9 + 8 + (ulong)uVar6) = 0;
    uVar6 = *puVar7;
  } while (uVar6 < 0x38);
LAB_0000ef4d:
  uVar10 = *puVar12;
  *(ulong *)(lVar9 + 0x40) =
       uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 | (uVar10 & 0xff0000000000) >> 0x18 |
       (uVar10 & 0xff00000000) >> 8 | (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 |
       (uVar10 & 0xff00) << 0x28 | uVar10 << 0x38;
  lVar9 = (long)&local_50 + lVar4;
  uVar10 = param_1[1];
  pcVar3 = (code *)param_1[6];
  *(undefined8 *)((long)&uStack_60 + lVar4) = 0xef70;
  (*pcVar3)(lVar9,1,uVar10 + lVar9);
  if (3 < *param_1) {
    uVar6 = 1;
    uVar8 = 0;
    uVar10 = 0;
    do {
      uVar1 = *(uint *)(lVar9 + uVar10 * 4);
      *(uint *)(local_50 + (ulong)uVar8) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar10 = (ulong)uVar6;
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 4;
    } while (uVar10 < *param_1 >> 2);
  }
  uVar10 = param_1[1];
  uVar2 = param_1[2];
  *(undefined8 *)((long)&uStack_60 + lVar4) = 0xefbb;
  _cc_clear(uVar10 + uVar2 + 0xc,puVar12);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&uStack_60 + lVar4) = _ccdigest_final_64le;
    ___stack_chk_fail();
  }
  return;
}

