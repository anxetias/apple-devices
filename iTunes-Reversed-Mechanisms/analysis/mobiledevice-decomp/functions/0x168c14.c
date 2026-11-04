// rea decompile_all
// name: ___thr_AMRestorableDeviceCopyMDRemoteServiceDevice
// address: 0x168c14
// body: available
// range: 0x168c14-0x168c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceCopyMDRemoteServiceDevice(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  if (*param_1 == 0) {
    pcVar4 = &cf_Can_tgetMDRemoteServiceDeviceRefwithNULLrestorable;
  }
  else {
    plVar1 = *(long **)(*param_1 + 0x20);
    if (plVar1 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x18))();
      lVar3 = _CFGetTypeID(lVar2);
      if (lVar3 == __MDRemoteServiceDeviceTypeID) {
        _CFRetain(lVar2);
      }
      else {
        lVar2 = 0;
      }
      pcVar4 = (cfstringStruct *)0x0;
      goto LAB_00168c58;
    }
    pcVar4 = &cf_Can_tgetMDRemoteServiceDeviceRefwithNULLproxy;
  }
  lVar2 = 0;
LAB_00168c58:
  _AMRSafeLogAndRelease(3,pcVar4);
  param_1[1] = lVar2;
  return;
}

