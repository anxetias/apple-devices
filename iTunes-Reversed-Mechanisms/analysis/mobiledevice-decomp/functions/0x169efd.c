// rea decompile_all
// name: ___thr_AMRestorableDeviceCopyAuthInstallPreflightOptions
// address: 0x169efd
// body: available
// range: 0x169efd-0x169fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceCopyAuthInstallPreflightOptions(long *param_1)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  cfstringStruct *pcVar4;
  
  if (*param_1 == 0) {
    pcVar4 = &cf_Can_tcopypreflightoptionswithNULLdevice;
  }
  else if (param_1[1] == 0) {
    pcVar4 = &cf_Can_tcopypreflightoptionswithNULLbaseoptions;
  }
  else {
    plVar3 = *(long **)(*param_1 + 0x20);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "NULL proxy";
      plVar3 = (long *)0x0;
    }
    else {
      lVar1 = (**(code **)(*plVar3 + 0xb0))(plVar3);
      if (lVar1 != 0) {
        pcVar4 = (cfstringStruct *)0x0;
        goto LAB_00169f98;
      }
      pcVar2 = (char *)(**(code **)(*plVar3 + 0x10))(plVar3);
    }
    pcVar4 = (cfstringStruct *)0x0;
    AMDeviceProxy::Log((int)plVar3,(__CFString *)((long)&MACH_HEADER.magic + 3),
                       &cf_failedtoget_sfrom_s,"authinstall preflight options",pcVar2);
  }
  lVar1 = 0;
LAB_00169f98:
  _AMRSafeLogAndRelease(3,pcVar4);
  param_1[2] = lVar1;
  return;
}

