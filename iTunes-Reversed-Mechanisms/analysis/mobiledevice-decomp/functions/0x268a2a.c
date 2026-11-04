// rea decompile_all
// name: ___AFCConnectionSetBlockSize
// address: 0x268a2a
// body: available
// range: 0x268a2a-0x268b99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x268b95 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint ___AFCConnectionSetBlockSize
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_f8 [40];
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c0 = (undefined1 *)0x0;
  uVar2 = _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
  if (uVar2 == 0) {
    bVar1 = false;
    local_c8 = param_4;
    _AFCHeaderInit(local_f8,param_2,0x30,0,0);
    local_d0 = param_3;
    uVar2 = _AFCSendHeader(param_1,local_f8);
    if (uVar2 == 0) {
      uVar2 = _AFCReadPacketHeader(param_1,local_b8,0x80,&local_c0);
      if (uVar2 == 0) {
        puVar3 = local_c0;
        if (local_c0 == (undefined1 *)0x0) {
          puVar3 = local_b8;
        }
        uVar2 = 0;
        if (*(long *)(puVar3 + 0x20) == 1) {
          puVar3 = local_b8;
          if (local_c0 != (undefined1 *)0x0) {
            puVar3 = local_c0;
          }
          bVar1 = true;
          if (*(uint *)(puVar3 + 0x28) == 0) {
            *local_c8 = param_3;
            bVar1 = true;
          }
          else {
            uVar2 = *(uint *)(puVar3 + 0x28) | 0xe8004000;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
      if (local_c0 != (undefined1 *)0x0) {
        uVar4 = _CFGetAllocator(param_1);
        _CFAllocatorDeallocate(uVar4,local_c0);
      }
    }
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) && (uVar2 != 0)) {
    _AFCConnectionSetFatalError(param_1,uVar2);
  }
  _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

