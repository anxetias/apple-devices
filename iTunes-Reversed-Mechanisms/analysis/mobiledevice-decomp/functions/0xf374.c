// rea decompile_all
// name: _init
// address: 0xf374
// body: available
// range: 0xf374-0xf56e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf56a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _init(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
         undefined8 param_6,ulong param_7,long param_8)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  plVar2 = *(long **)(param_1 + 0x28);
  local_70 = param_5;
  _cc_clear(0x58);
  lVar3 = *plVar2;
  *(long *)(param_2 + 0x38) = lVar3;
  uVar8 = plVar2[1];
  *(ulong *)(param_2 + 0x40) = uVar8;
  *(int *)(param_2 + 0x48) = (int)plVar2[2];
  lVar4 = plVar2[3];
  *(long *)(param_2 + 0x50) = lVar4;
  if (uVar8 < 0x21) {
    if (*(long *)(lVar3 + 0x10) == 0x10) {
      if (lVar4 == 0) {
        iVar5 = -0x3f;
        if (uVar8 + 0x10 < param_7 || uVar8 + 0x10 != param_3) goto LAB_0000f543;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        ___memcpy_chk(&local_68,param_4,param_3,0x30);
        for (; param_7 != 0; param_7 = param_7 - 1) {
          pbVar1 = (byte *)((long)&local_70 + param_7 + 7);
          *pbVar1 = *pbVar1 ^ *(byte *)(param_8 + -1 + param_7);
        }
LAB_0000f46a:
        _cc_clear(uVar8,param_2);
        _cc_clear(0x10,param_2 + 0x20);
        _update(param_2,&local_68);
        iVar5 = 0;
        uVar6 = 1;
      }
      else {
        iVar5 = -0x3f;
        if ((0xffffffffffff000e < param_3 - 0x10001) && (param_7 < 0x10001)) {
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          iVar5 = _derive(param_2,&local_68,3,param_3,param_4,local_70,param_6,param_7,param_8);
          if (iVar5 == 0) {
            uVar8 = *(ulong *)(param_2 + 0x40);
            goto LAB_0000f46a;
          }
        }
LAB_0000f543:
        _cc_clear(0x20,param_2);
        _cc_clear(0x10,param_2 + 0x20);
        uVar6 = 0xffffffffffffffff;
      }
      *(undefined8 *)(param_2 + 0x30) = uVar6;
      _cc_clear(0x30,&local_68);
      goto LAB_0000f4bd;
    }
    pcVar7 = "ccdrbg_nistctr: invalid block size";
  }
  else {
    pcVar7 = "ccdrbg_nistctr: key length too long";
  }
  _cc_try_abort(pcVar7);
  iVar5 = -0x3f;
LAB_0000f4bd:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

