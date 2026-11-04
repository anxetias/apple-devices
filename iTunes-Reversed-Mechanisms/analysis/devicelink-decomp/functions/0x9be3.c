// rea decompile_all
// name: _SocketRecv
// address: 0x9be3
// body: available
// range: 0x9be3-0x9ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9ccb to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _SocketRecv(int *param_1,void *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00015070;
  ___bzero(local_428,0x400);
  if (param_1 == (int *)0x0) {
    _SocketLog("SocketSend called with NULL socketInfo");
    uVar3 = 0;
  }
  else if (param_3 == 0) {
    uVar3 = 0;
    ___sprintf_chk(local_428,0,0x400,"Skipping SocketRecv of bytes, length %d <= 0",0);
    _SocketLog(local_428);
  }
  else {
    if (*(long *)(param_1 + 4) == 0) {
      uVar2 = _recv(*param_1,param_2,(long)(int)param_3,0x40);
    }
    else {
      uVar1 = _AMDServiceConnectionReceive(*(long *)(param_1 + 4),param_2,param_3);
      uVar2 = (ulong)uVar1;
    }
    __SocketErrorCheckAndLogIfError("SocketRecv (data)",uVar2 & 0xffffffff);
    uVar3 = 0;
    if (0 < (int)uVar2) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00015070 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

