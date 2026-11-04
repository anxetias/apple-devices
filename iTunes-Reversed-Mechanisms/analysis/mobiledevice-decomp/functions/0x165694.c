// rea decompile_all
// name: ___thr_AMRestorableDeviceCopyUnderlyingDevice
// address: 0x165694
// body: available
// range: 0x165694-0x165754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x165735 to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceCopyUnderlyingDevice(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  if (param_1 == (long *)0x0) {
    pcVar4 = &cf_Can_treturnunderlyingdevicewithNULLargs;
  }
  else if (*param_1 == 0) {
    pcVar4 = &cf_Can_treturnunderlyingdevicewithNULLrestorable;
  }
  else {
    iVar1 = __AMDeviceProxyGetState(*(undefined8 *)(*param_1 + 0x20));
    uVar2 = __AMDeviceProxyGetLocationID(*(undefined8 *)(*param_1 + 0x20));
    if (iVar1 != (int)param_1[1]) {
      if ((int)param_1[1] != 1 || iVar1 != 6) {
        pcVar4 = (cfstringStruct *)
                 _AMRMakeString(&
                                cf_Can_treturnunderlyingdeviceatlocationID0x_Xsinceit_sinunexpectedstate_d_expected_d
                                ,uVar2,iVar1);
        goto LAB_00165730;
      }
      _AMRLog(6,&cf_DFUdeviceexpectedbutPortDFUdevicedetected_Continuing);
    }
    lVar3 = __AMDeviceProxyGetDeviceRef(*(undefined8 *)(*param_1 + 0x20));
    param_1[2] = lVar3;
    if (lVar3 == 0) {
      pcVar4 = &cf_Failedtoreturnunderlyingdeviceref_itwasNULL;
    }
    else {
      _CFRetain(lVar3);
      pcVar4 = (cfstringStruct *)0x0;
    }
  }
LAB_00165730:
  _AMRSafeLogAndRelease(3,pcVar4);
  return;
}

