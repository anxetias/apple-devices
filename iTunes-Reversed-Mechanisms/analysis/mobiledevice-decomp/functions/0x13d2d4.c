// rea decompile_all
// name: ____AMDeviceCopyRemoteDeviceWithError_block_invoke
// address: 0x13d2d4
// body: available
// range: 0x13d2d4-0x13d380 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13d311 to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x13d37c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDeviceCopyRemoteDeviceWithError_block_invoke(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  uchar local_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  if (param_3 != 0) {
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x20));
    return;
  }
  if ((param_2 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) == 0)) {
    _remote_device_copy_uuid(param_2,local_38);
    iVar1 = _uuid_compare((uchar *)(param_1 + 0x30),local_38);
    if (iVar1 == 0) {
      uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_2);
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) = uVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

