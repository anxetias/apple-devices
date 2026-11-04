// rea decompile_all
// name: _image3Finalize
// address: 0x1b8d3b
// body: available
// range: 0x1b8d3b-0x1b8e72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b8e6e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _image3Finalize(long *param_1,long *param_2,ulong *param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  int local_58;
  int local_54;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_4 != 0) {
    uVar3 = _image3AdvanceCursorWithZeroPad(param_1,0x38U - (int)param_1[3] & 0x3f);
    if ((int)uVar3 != 0) goto LAB_001b8e51;
    lVar1 = *param_1;
    lVar2 = param_1[3];
    uVar4 = (int)lVar2 + (int)param_5;
    *(uint *)(lVar1 + 0xc) = uVar4;
    if (param_5 == 0) {
      _image3SHA1Generate(lVar1 + 0xc,((ulong)uVar4 - param_5) + 8,&local_58);
      uVar3 = 0x14;
    }
    else {
      local_58 = (int)param_5;
      local_54 = (int)lVar2;
      _image3SHA1Partial();
      uVar3 = 0x1c;
    }
    uVar3 = _image3PKISignHash(&local_58,uVar3,&local_78,&local_70,&local_68,&local_60);
    if ((int)uVar3 != 0) goto LAB_001b8e51;
    if (local_70 != 0) {
      uVar3 = _image3SetTagStructure(param_1,0x53485348,local_78,local_70,0);
      if ((int)uVar3 != 0) goto LAB_001b8e51;
    }
    if (local_60 != 0) {
      uVar3 = _image3SetTagStructure(param_1,0x43455254,local_68,local_60,0);
      if ((int)uVar3 != 0) goto LAB_001b8e51;
    }
    *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) | 2;
  }
  lVar1 = *param_1;
  *(int *)(lVar1 + 8) = (int)param_1[3];
  uVar4 = (int)param_1[3] + 0x14;
  *(uint *)(lVar1 + 4) = uVar4;
  *param_2 = lVar1;
  *param_3 = (ulong)uVar4;
  uVar3 = 0;
LAB_001b8e51:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

