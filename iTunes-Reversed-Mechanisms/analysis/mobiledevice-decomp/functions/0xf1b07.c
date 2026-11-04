// rea decompile_all
// name: __sendControlPacket
// address: 0xf1b07
// body: available
// range: 0xf1b07-0xf1be4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf1be0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __sendControlPacket(long param_1,undefined1 param_2,long param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined2 local_3a;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_38 = 0;
  local_3a = 0x1234;
  local_3b = (undefined1)param_3;
  local_3c = param_2;
  if (param_3 != 0) {
    ___memcpy_chk(&local_38,param_4,param_3,8);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    iVar1 = __AMRecoveryModeDeviceOpen(param_1);
    if (iVar1 != 0) goto LAB_000f1bbd;
    lVar2 = *(long *)(param_1 + 0x30);
  }
  iVar1 = __AMRUSBInterfaceWritePipe(lVar2,*(undefined1 *)(param_1 + 0x3a),&local_3c,param_3 + 4);
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 0) {
      iVar1 = __AMRecoveryModeDeviceOpen(param_1);
      if (iVar1 != 0) goto LAB_000f1bbd;
      lVar2 = *(long *)(param_1 + 0x30);
    }
    __AMRUSBInterfaceReadPipe(lVar2,*(undefined1 *)(param_1 + 0x39),param_6,param_5);
  }
LAB_000f1bbd:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

