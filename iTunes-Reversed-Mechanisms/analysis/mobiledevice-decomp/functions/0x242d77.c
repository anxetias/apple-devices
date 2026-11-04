// rea decompile_all
// name: _Img4EncodeItemProperty
// address: 0x242d77
// body: available
// range: 0x242d77-0x242ec9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x242ec5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeItemProperty(long param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  void *local_40;
  void *local_38;
  uint local_30;
  undefined4 local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_2c = 0;
  local_30 = 0;
  local_38 = (void *)0x0;
  local_40 = (void *)0x0;
  iVar2 = 0x65;
  if (((param_3 != 0 && param_1 != 0) &&
      (iVar2 = _Img4EncodeSequence(param_3,param_4,&local_38,&local_2c), iVar2 == 100)) &&
     (iVar2 = _Img4EncodePrivate(param_2,local_38,local_2c,&local_40,&local_30), iVar2 == 100)) {
    sVar4 = (size_t)local_30;
    plVar1 = *(long **)(param_1 + 0x20);
    uVar5 = (ulong)*(uint *)(plVar1 + 1);
    pvVar7 = (void *)plVar1[2];
    lVar6 = (long)pvVar7 - *plVar1;
    if (uVar5 - lVar6 <= sVar4) {
      uVar8 = 0x400;
      if (0x400 < local_30) {
        uVar8 = (ulong)local_30;
      }
      lVar3 = _img4encode_realloc(*plVar1,uVar5,uVar5 + uVar8);
      if (lVar3 == 0) {
        iVar2 = 2;
        goto LAB_00242e7b;
      }
      plVar1 = *(long **)(param_1 + 0x20);
      *plVar1 = lVar3;
      pvVar7 = (void *)(lVar6 + lVar3);
      plVar1[2] = (long)pvVar7;
      *(int *)(plVar1 + 1) = (int)plVar1[1] + (int)uVar8;
      sVar4 = (size_t)local_30;
    }
    _memcpy(pvVar7,local_40,sVar4);
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x10);
    *plVar1 = *plVar1 + (ulong)local_30;
    iVar2 = 100;
  }
LAB_00242e7b:
  if (local_38 != (void *)0x0) {
    _free(local_38);
    local_38 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    _free(local_40);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

