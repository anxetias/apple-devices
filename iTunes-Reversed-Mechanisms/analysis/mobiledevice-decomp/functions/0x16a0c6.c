// rea decompile_all
// name: ___thr_AMRestorableDeviceGetProductType
// address: 0x16a0c6
// body: available
// range: 0x16a0c6-0x16a159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceGetProductType(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  
  iVar2 = 0;
  if (*param_1 == 0) {
    pcVar4 = &cf_Can_tgetproducttypeforNULLdevice;
  }
  else {
    plVar1 = *(long **)(*param_1 + 0x20);
    if (plVar1 == (long *)0x0) {
      pcVar4 = &cf_Can_tgetproducttypeforNULLproxy;
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      pcVar4 = (cfstringStruct *)0x0;
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
        AMDeviceProxy::Log((int)plVar1,(__CFString *)((long)&MACH_HEADER.magic + 3),
                           &cf_failedtoget_sfrom_s,"product type",uVar3);
        iVar2 = 0;
      }
    }
  }
  _AMRSafeLogAndRelease(3,pcVar4);
  *(int *)(param_1 + 1) = iVar2;
  return;
}

