// rea decompile_all
// name: __getMaxFileTransferSize
// address: 0xf003b
// body: available
// range: 0xf003b-0xf0115 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf0111 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __getMaxFileTransferSize(long param_1)

{
  int iVar1;
  ulong uVar2;
  char local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    __loadFirmwareInfo();
    iVar1 = __sendCommandToDeviceWithTimeout
                      (*(undefined8 *)
                        (&DAT_0032ca70 +
                        (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),param_1,
                       &cf_getenvramdisk_size,0);
    if (iVar1 == 0) {
      ___bzero(local_428,0x400);
      iVar1 = __getLastCommandResults(param_1);
      if (iVar1 == 0) {
        uVar2 = _strtol(local_428,(char **)0x0,0x10);
        goto LAB_000f00da;
      }
    }
    uVar2 = 0x10000000;
    _AMRLog(7,&cf_UnabletoqueryiBootramdisk_size_Libusbrestoreerror__d,0x10000000);
  }
LAB_000f00da:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

