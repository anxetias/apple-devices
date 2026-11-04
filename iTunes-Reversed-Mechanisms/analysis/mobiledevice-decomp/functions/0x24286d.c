// rea decompile_all
// name: _Img4EncodeItemEnd
// address: 0x24286d
// body: available
// range: 0x24286d-0x2429d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2429d4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4EncodeItemEnd(int *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  void *local_38;
  uint local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_2c = 0;
  local_38 = (void *)0x0;
  iVar2 = 0x65;
  if ((param_1 == (int *)0x0) || (*param_1 != (int)param_2)) goto LAB_002429ae;
  if ((*(long *)(param_1 + 2) != 0) && (param_1[4] != 0)) {
    plVar1 = *(long **)(param_1 + 8);
    lVar7 = *plVar1;
    if ((lVar7 != 0) && ((int)plVar1[1] != 0)) {
      iVar2 = _Img4EncodeDictionary(0,param_2,lVar7,(int)plVar1[2] - (int)lVar7,&local_38,&local_2c)
      ;
      if (iVar2 == 100) {
        sVar5 = (size_t)local_2c;
        uVar6 = (ulong)(uint)param_1[4];
        pvVar8 = *(void **)(param_1 + 6);
        lVar7 = (long)pvVar8 - *(long *)(param_1 + 2);
        if (uVar6 - lVar7 <= sVar5) {
          uVar9 = 0x400;
          if (0x400 < local_2c) {
            uVar9 = (ulong)local_2c;
          }
          lVar3 = _img4encode_realloc(*(long *)(param_1 + 2),uVar6,uVar6 + uVar9);
          if (lVar3 == 0) {
            iVar2 = 2;
            goto LAB_002429a0;
          }
          *(long *)(param_1 + 2) = lVar3;
          pvVar8 = (void *)(lVar7 + lVar3);
          *(void **)(param_1 + 6) = pvVar8;
          param_1[4] = param_1[4] + (int)uVar9;
          sVar5 = (size_t)local_2c;
        }
        _memcpy(pvVar8,local_38,sVar5);
        *param_1 = 0;
        *(ulong *)(param_1 + 6) = *(long *)(param_1 + 6) + (ulong)local_2c;
        puVar4 = *(undefined8 **)(param_1 + 8);
        if ((void *)*puVar4 != (void *)0x0) {
          _free((void *)*puVar4);
          puVar4 = *(undefined8 **)(param_1 + 8);
          *puVar4 = 0;
        }
        *(undefined4 *)(puVar4 + 1) = 0;
        puVar4[2] = 0;
        iVar2 = 100;
      }
    }
  }
LAB_002429a0:
  if (local_38 != (void *)0x0) {
    _free(local_38);
  }
LAB_002429ae:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

