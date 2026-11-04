// rea decompile_all
// name: _generate
// address: 0xf82f
// body: available
// range: 0xf82f-0xfa63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfa5f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _generate(long param_1,ulong param_2,long param_3,ulong param_4,undefined1 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uStack_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_a0 = 0xf87b;
  local_88 = param_4;
  local_80 = param_5;
  lVar6 = _ccctr_context_size(*(undefined8 *)(param_1 + 0x38));
  lVar6 = -(lVar6 + 0xfU & 0xfffffffffffffff0);
  local_98 = (long)&local_98 + lVar6;
  *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf89b;
  ___bzero();
  *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xffffffffffffffc1;
  uVar3 = local_88;
  uVar10 = *(ulong *)((long)&uStack_a0 + lVar6);
  plVar9 = &local_98;
  if (param_2 < 0x10001) {
    if ((*(int *)(param_1 + 0x48) == 0) || (*(ulong *)(param_1 + 0x30) < 0x1000000000001)) {
      if (local_88 != 0) {
        if (*(long *)(param_1 + 0x50) == 0) {
          plVar9 = &local_98;
          if (*(long *)(param_1 + 0x40) + 0x10U < local_88) goto LAB_0000fa28;
          *(undefined8 *)((long)&uStack_a0 + lVar6) = 0x30;
          uVar7 = *(undefined8 *)((long)&uStack_a0 + lVar6);
          *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf925;
          _cc_clear(uVar7,&local_68);
          puVar4 = local_80;
          *(undefined8 *)((long)&uStack_a0 + lVar6) = 0x30;
          uVar7 = *(undefined8 *)((long)&uStack_a0 + lVar6);
          *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf938;
          ___memcpy_chk(&local_68,puVar4,uVar3,uVar7);
        }
        else {
          plVar9 = &local_98;
          if (0x10000 < local_88) goto LAB_0000fa28;
          *(undefined8 *)((long)&uStack_a0 + lVar6) = 1;
          puVar4 = local_80;
          uVar7 = *(undefined8 *)((long)&uStack_a0 + lVar6);
          *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf8f9;
          uVar5 = _derive(param_1,&local_68,uVar7,uVar3,puVar4);
          if (uVar5 != 0) {
            uVar10 = (ulong)uVar5;
            plVar9 = &local_98;
            goto LAB_0000fa28;
          }
        }
        *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf944;
        _update(param_1,&local_68);
      }
      local_80 = (undefined1 *)&local_98;
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 8;
      uVar7 = *(undefined8 *)((long)&uStack_a0 + lVar6);
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf958;
      _inc_uint(param_1 + 0x28,uVar7);
      lVar2 = local_98;
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf975;
      _ccctr_init_internal(uVar7,lVar2,uVar1,param_1,param_1 + 0x20);
      uVar10 = (ulong)(-(int)param_2 & 0xf);
      while (local_90 = uVar10, param_2 != 0) {
        uVar10 = 0x80;
        if (param_2 < 0x80) {
          uVar10 = param_2;
        }
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf9b7;
        _ccctr_update_internal(uVar7,lVar2,uVar10,&_zeros,param_3);
        param_3 = param_3 + uVar10;
        param_2 = param_2 - uVar10;
        uVar10 = local_90;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf9e6;
      _ccctr_update_internal(uVar7,lVar2,uVar10,&_zeros,&local_78);
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xf9f1;
      _cc_clear(uVar10,&local_78);
      puVar8 = &local_68;
      if (local_88 == 0) {
        puVar8 = (undefined8 *)&_zeros;
      }
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xfa09;
      _update_with_ctr(param_1,lVar2,puVar8);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xfa12;
      uVar7 = _ccctr_context_size(uVar7);
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xfa1d;
      _cc_clear(uVar7,lVar2);
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      uVar10 = 0;
      plVar9 = (long *)local_80;
    }
    else {
      *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xffffffffffffffc2;
      uVar10 = *(ulong *)((long)&uStack_a0 + lVar6);
      plVar9 = &local_98;
    }
  }
LAB_0000fa28:
  *(undefined8 *)((long)&uStack_a0 + lVar6) = 0x30;
  uVar7 = *(undefined8 *)((long)&uStack_a0 + lVar6);
  *(undefined8 *)((long)&uStack_a0 + lVar6) = 0xfa34;
  _cc_clear(uVar7,&local_68);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)plVar9 + -8) = _reseed;
    ___stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}

