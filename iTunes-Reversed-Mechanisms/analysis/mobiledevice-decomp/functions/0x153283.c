// rea decompile_all
// name: __SZConduitTransferProgressCallback
// address: 0x153283
// body: available
// range: 0x153283-0x1533ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1533c6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __SZConduitTransferProgressCallback
               (int param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  char local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  if (*(char *)(param_5 + 5) == '\0') {
    _fire_callback_3230(*param_5,param_5[1],10,&cf_TransferringPackage);
    *(undefined1 *)(param_5 + 5) = 1;
  }
  if (*(char *)((long)param_5 + 0x2a) == '\x01') {
    _snprintf(local_438,0x400,"%s/%s",param_5[3],param_2);
  }
  else {
    if (*(char *)((long)param_5 + 0x29) == '\x01') {
      param_2 = param_5[3];
    }
    ___strlcpy_chk(local_438,param_2,0x400,0x400);
  }
  if (param_1 == 2) {
    puVar2 = (ulong *)param_5[2];
    if (puVar2[2] + 1 <= *puVar2) {
      puVar2[2] = puVar2[2] + 1;
    }
  }
  else if (param_1 == 1) {
    lVar1 = param_5[2];
    uVar3 = (param_3 - param_5[4]) + *(long *)(lVar1 + 0x18);
    if (uVar3 <= *(ulong *)(lVar1 + 8)) {
      *(ulong *)(lVar1 + 0x18) = uVar3;
    }
    param_5[4] = param_3;
  }
  else if (param_1 == 0) {
    param_5[4] = 0;
  }
  _fire_transfer_callback(*param_5,param_5[1],param_5[2],local_438);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

