// rea decompile_all
// name: __sendCommandToDeviceByDevReqWithTimeout
// address: 0xf19ec
// body: available
// range: 0xf19ec-0xf1b06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf1b02 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __sendCommandToDeviceByDevReqWithTimeout
              (double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  _CFStringGetCString(param_3,local_438,0x400,0x8000100);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  sVar3 = _strlen(local_438);
  iVar2 = __AMRUSBDeviceSendDeviceRequestTO
                    (uVar1,0,0,2,0,param_4 != 0,0,(int)sVar3 + 1U & 0xffff,local_438,
                     (long)(param_1 * 1000.0),(long)(param_1 * 1000.0));
  iVar4 = 0;
  if (iVar2 != 0) {
    _AMRLog(3,&cf_commanddevicerequestfor____failed__d,param_3,iVar2);
    iVar4 = 0x15;
    if (iVar2 != 0x7d8) {
      iVar4 = iVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

