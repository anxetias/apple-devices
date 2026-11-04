// rea decompile_all
// name: ___thr_AMRestorableDeviceSendCommand
// address: 0x16a2a2
// body: available
// range: 0x16a2a2-0x16a340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceSendCommand(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined1 uVar4;
  
  if (param_1 == (long *)0x0) {
    pcVar3 = &cf_Can_tsendcommandwithoutargs;
  }
  else if (*param_1 == 0) {
    pcVar3 = &cf_Can_tsendcommandwithNULLdevice;
  }
  else if (param_1[1] == 0) {
    pcVar3 = &cf_Can_tsendNULLcommandtodevice;
  }
  else {
    iVar1 = __AMDeviceProxyGetState(*(undefined8 *)(*param_1 + 0x20));
    if (iVar1 == 2) {
      uVar2 = __AMDeviceProxyGetDeviceRef(*(undefined8 *)(*param_1 + 0x20));
      iVar1 = _AMRecoveryModeDeviceSendCommandToDevice(uVar2,param_1[1]);
      if (iVar1 == 0) {
        uVar4 = 1;
        pcVar3 = (cfstringStruct *)0x0;
      }
      else {
        uVar4 = 0;
        pcVar3 = (cfstringStruct *)_AMRMakeString(&cf_Failedtosendcommandtodevice_error__d,iVar1);
      }
      goto LAB_0016a2fb;
    }
    pcVar3 = &cf_Can_tsendcommandsincedeviceisnotinrecoverymode;
  }
  uVar4 = 0;
LAB_0016a2fb:
  _AMRSafeLogAndRelease(3,pcVar3);
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}

