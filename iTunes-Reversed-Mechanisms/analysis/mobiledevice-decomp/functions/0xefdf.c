// rea decompile_all
// name: _ccdigest_final_64le
// address: 0xefdf
// body: available
// range: 0xefdf-0xf183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf17f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccdigest_final_64le(ulong *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  void *pvVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 *local_48;
  void *local_40;
  long local_38;
  
  local_48 = (undefined1 *)&uStack_58;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar10 = param_1[1];
  uVar1 = param_1[2];
  if (uVar1 <= *(uint *)((long)param_2 + uVar1 + 8 + uVar10)) {
    *(undefined4 *)((long)param_2 + uVar1 + uVar10 + 8) = 0;
  }
  uVar12 = (uVar10 + uVar1 + 0x13 & 0xfffffffffffffff8) + 0xf & 0xfffffffffffffff0;
  lVar3 = -uVar12;
  puVar11 = (undefined8 *)((long)&uStack_58 + lVar3);
  local_50 = param_3;
  local_40 = param_2;
  *(undefined8 *)((long)&uStack_60 + lVar3) = 0xf05b;
  ___bzero(puVar11);
  pvVar4 = local_40;
  *(undefined8 *)((long)&uStack_60 + lVar3) = 0xf06f;
  _memcpy(puVar11,pvVar4,uVar10 + uVar1 + 0xc);
  lVar8 = uVar10 + (long)puVar11;
  lVar9 = (long)puVar11 + uVar10 + 8;
  puVar6 = (uint *)(uVar1 + 8 + lVar8);
  uVar5 = *puVar6;
  *(ulong *)(local_48 + -uVar12) = *(long *)(local_48 + -uVar12) + (ulong)(uVar5 * 8);
  *puVar6 = uVar5 + 1;
  *(undefined1 *)((ulong)uVar5 + 8 + lVar8) = 0x80;
  uVar5 = *puVar6;
  if (uVar5 < 0x39) {
    if (uVar5 == 0x38) goto LAB_0000f102;
  }
  else {
    while (uVar5 < 0x40) {
      *puVar6 = uVar5 + 1;
      *(undefined1 *)(lVar9 + (ulong)uVar5) = 0;
      uVar5 = *puVar6;
    }
    pcVar2 = (code *)param_1[6];
    *(undefined8 *)((long)&uStack_60 + lVar3) = 0xf0c5;
    (*pcVar2)((long)&local_50 + lVar3,1);
    lVar8 = param_1[1] + (long)puVar11;
    lVar9 = (long)puVar11 + param_1[1] + 8;
    puVar6 = (uint *)(param_1[2] + lVar8 + 8);
    *puVar6 = 0;
    uVar5 = 0;
  }
  do {
    *puVar6 = uVar5 + 1;
    *(undefined1 *)(lVar9 + (ulong)uVar5) = 0;
    uVar5 = *puVar6;
  } while (uVar5 < 0x38);
LAB_0000f102:
  *(undefined8 *)(lVar8 + 0x40) = *puVar11;
  pcVar2 = (code *)param_1[6];
  *(undefined8 *)((long)&uStack_60 + lVar3) = 0xf119;
  (*pcVar2)((long)&local_50 + lVar3,1);
  if (3 < *param_1) {
    uVar5 = 1;
    uVar7 = 0;
    uVar10 = 0;
    do {
      *(undefined4 *)(local_50 + (ulong)uVar7) =
           *(undefined4 *)((long)&local_50 + lVar3 + uVar10 * 4);
      uVar10 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + 4;
    } while (uVar10 < *param_1 >> 2);
  }
  uVar10 = param_1[1];
  uVar1 = param_1[2];
  *(undefined8 *)((long)&uStack_60 + lVar3) = 0xf160;
  _cc_clear(uVar10 + uVar1 + 0xc,puVar11);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&uStack_60 + lVar3) = _ccdigest_init;
  ___stack_chk_fail();
}

