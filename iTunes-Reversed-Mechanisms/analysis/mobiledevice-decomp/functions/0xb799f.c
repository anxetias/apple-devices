// rea decompile_all
// name: _AFCReadPacket
// address: 0xb799f
// body: available
// range: 0xb799f-0xb7b1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb7b19 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AFCReadPacket(long param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long local_e0;
  long *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c0 = (undefined1 *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  _AFCLockLock(*(undefined8 *)(param_1 + 0x90));
  if (*(int *)(param_1 + 0x10) == 1) {
    local_d8 = param_2;
    iVar2 = _AFCReadPacketHeader(param_1,local_b8,0x80,&local_c0);
    if (iVar2 != 0) goto LAB_000b7abe;
    puVar4 = local_b8;
    if (local_c0 != (undefined1 *)0x0) {
      puVar4 = local_c0;
    }
    local_d0 = param_4;
    iVar2 = _AFCReadPacketBody(param_1,puVar4,&local_e0,&local_c8);
    lVar1 = local_e0;
    if (iVar2 == 0) {
      *local_d8 = (long)puVar4;
      *param_3 = local_e0;
      *local_d0 = local_c8;
      _AFCLockUnlock(*(undefined8 *)(param_1 + 0x90));
      iVar2 = 0;
      goto LAB_000b7a8e;
    }
    _AFCLockUnlock(*(undefined8 *)(param_1 + 0x90));
    if (lVar1 != 0) {
      uVar3 = _CFGetAllocator(param_1);
      _CFAllocatorDeallocate(uVar3,lVar1);
    }
  }
  else {
    iVar2 = -0x17ffbff5;
LAB_000b7abe:
    _AFCLockUnlock(*(undefined8 *)(param_1 + 0x90));
  }
  if (local_c0 != (undefined1 *)0x0) {
    uVar3 = _CFGetAllocator(param_1);
    _CFAllocatorDeallocate(uVar3,local_c0);
  }
LAB_000b7a8e:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

