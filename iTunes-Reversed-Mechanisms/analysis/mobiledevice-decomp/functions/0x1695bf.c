// rea decompile_all
// name: ___thr_AMRestorableDeviceCopyDeviceName
// address: 0x1695bf
// body: available
// range: 0x1695bf-0x169681 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceCopyDeviceName(long *param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  long *plVar4;
  
  if (*param_1 == 0) {
    pcVar3 = &cf_Can_tgetdevicenamefromNULLdevice;
  }
  else {
    if (param_1[1] != 0) {
      plVar4 = *(long **)(*param_1 + 0x20);
      if (plVar4 == (long *)0x0) {
        pcVar2 = "NULL proxy";
        plVar4 = (long *)0x0;
LAB_0016964b:
        lVar1 = 0;
        AMDeviceProxy::Log((int)plVar4,(__CFString *)((long)&MACH_HEADER.magic + 3),
                           &cf_failedtoget_sfrom_s,"device name",pcVar2);
      }
      else {
        lVar1 = (**(code **)(*plVar4 + 0x78))(plVar4,param_1[1],param_1[2]);
        if (lVar1 == 0) {
          pcVar2 = (char *)(**(code **)(*plVar4 + 0x10))(plVar4);
          goto LAB_0016964b;
        }
      }
      pcVar3 = (cfstringStruct *)0x0;
      goto LAB_00169654;
    }
    pcVar3 = &cf_Can_tgetdevicenamefromNULLdeviceMap;
  }
  lVar1 = 0;
LAB_00169654:
  _AMRSafeLogAndRelease(3,pcVar3);
  param_1[3] = lVar1;
  return;
}

