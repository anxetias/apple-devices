// rea decompile_all
// name: _reseed
// address: 0xfa64
// body: available
// range: 0xfa64-0xfb86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfb82 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _reseed(long param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  byte bStack_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar2 = *(long *)(param_1 + 0x40) + 0x10;
    if (uVar2 < param_4 || uVar2 != param_2) {
      iVar1 = -0x3f;
      goto LAB_0000fb14;
    }
    ___memcpy_chk(&local_68,param_3,param_2,0x30);
    for (; param_4 != 0; param_4 = param_4 - 1) {
      (&bStack_69)[param_4] = (&bStack_69)[param_4] ^ *(byte *)(param_5 + -1 + param_4);
    }
LAB_0000faec:
    _update(param_1,&local_68);
    *(undefined8 *)(param_1 + 0x30) = 1;
    iVar1 = 0;
  }
  else {
    iVar1 = -0x3f;
    if (((0x10000 < param_2) || (0x10000 < param_4)) ||
       (param_2 < *(ulong *)(*(long *)(param_1 + 0x38) + 0x10))) goto LAB_0000fb14;
    iVar1 = _derive(param_1,&local_68,2,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) goto LAB_0000faec;
  }
  _cc_clear(*(long *)(param_1 + 0x40) + 0x10,&local_68);
LAB_0000fb14:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

