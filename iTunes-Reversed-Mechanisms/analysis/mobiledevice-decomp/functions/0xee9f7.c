// rea decompile_all
// name: __copyEnvironmentVariable
// address: 0xee9f7
// body: available
// range: 0xee9f7-0xeeb01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xeeafd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __copyEnvironmentVariable(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  *param_3 = 0;
  iVar1 = 4;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar2 = _CFStringCreateWithFormat(uVar3,0,&cf_getenv__,param_2);
    __loadFirmwareInfo(param_1);
    iVar1 = __sendCommandToDeviceByDevReqWithTimeout
                      (*(undefined8 *)
                        (&DAT_0032ca70 +
                        (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,uVar2
                       ,0);
    if (iVar1 == 0) {
      ___bzero(local_438,0x400);
      iVar1 = __getLastCommandResults(param_1,local_438);
      if (iVar1 == 0) {
        uVar3 = _CFStringCreateWithCString(uVar3,local_438,0x8000100);
        *param_3 = uVar3;
      }
    }
    _CFRelease(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

