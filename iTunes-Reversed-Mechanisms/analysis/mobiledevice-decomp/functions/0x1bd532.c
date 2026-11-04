// rea decompile_all
// name: _amai_unzLocateFile
// address: 0x1bd532
// body: available
// range: 0x1bd532-0x1bd6cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bd6c8 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _amai_unzLocateFile(long param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  undefined1 local_1f0 [136];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  void *local_150;
  undefined1 local_148 [272];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar1 = -0x66;
  if ((param_1 != 0) && (sVar2 = _strlen(param_2), sVar2 < 0x100)) {
    if (*(long *)(param_1 + 0x70) == 0) {
      iVar1 = -100;
    }
    else {
      local_168 = *(undefined8 *)(param_1 + 0x60);
      uStack_160 = *(undefined8 *)(param_1 + 0x68);
      pvVar3 = (void *)(param_1 + 0x90);
      _memcpy(local_1f0,pvVar3,0x88);
      local_158 = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x60) = 0;
      iVar1 = _unzlocal_GetCurrentFileInfoInternal(param_1,pvVar3,param_1 + 0x118,0,0,0,0,0,0);
      *(ulong *)(param_1 + 0x70) = (ulong)(iVar1 == 0);
      if (iVar1 == 0) {
        local_150 = pvVar3;
        do {
          iVar1 = _unzlocal_GetCurrentFileInfoInternal(param_1,0,0,local_148,0x100,0,0,0,0);
          pvVar3 = local_150;
          if (iVar1 != 0) break;
          iVar1 = _amai_unzStringFileNameCompare(local_148,param_2,param_3);
          if (iVar1 == 0) {
            iVar1 = 0;
            goto LAB_001bd69e;
          }
          iVar1 = _amai_unzGoToNextFile(param_1);
          pvVar3 = local_150;
        } while (iVar1 == 0);
      }
      *(undefined8 *)(param_1 + 0x60) = local_168;
      *(undefined8 *)(param_1 + 0x68) = uStack_160;
      _memcpy(pvVar3,local_1f0,0x88);
      *(undefined8 *)(param_1 + 0x118) = local_158;
    }
  }
LAB_001bd69e:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

