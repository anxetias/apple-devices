// rea decompile_all
// name: _Img4DecodeCopyManifestHashWithCallback
// address: 0x221de7
// body: available
// range: 0x221de7-0x221ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x221ea3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Img4DecodeCopyManifestHashWithCallback(long param_1,code *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_3 == (undefined8 *)0x0 || param_1 == 0) || param_4 != 0x14) {
    uVar1 = 6;
    if (param_3 == (undefined8 *)0x0) goto LAB_00221e8a;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(char *)(param_1 + 1) == '\x01') {
        *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x158);
        uVar2 = *(undefined4 *)(param_1 + 0x148);
        uVar3 = *(undefined4 *)(param_1 + 0x14c);
        uVar4 = *(undefined4 *)(param_1 + 0x150);
        uVar5 = *(undefined4 *)(param_1 + 0x154);
      }
      else {
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        (*param_2)(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_38);
        *(undefined4 *)(param_3 + 2) = local_28;
        uVar2 = (undefined4)local_38;
        uVar3 = local_38._4_4_;
        uVar4 = (undefined4)uStack_30;
        uVar5 = uStack_30._4_4_;
      }
      *(undefined4 *)param_3 = uVar2;
      *(undefined4 *)((long)param_3 + 4) = uVar3;
      *(undefined4 *)(param_3 + 1) = uVar4;
      *(undefined4 *)((long)param_3 + 0xc) = uVar5;
      uVar1 = 0;
      goto LAB_00221e8a;
    }
    uVar1 = 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
LAB_00221e8a:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

