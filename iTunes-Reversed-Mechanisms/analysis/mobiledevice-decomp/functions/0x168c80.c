// rea decompile_all
// name: ___thr_AMRestorableDeviceGetFusingInfo
// address: 0x168c80
// body: available
// range: 0x168c80-0x168ccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceGetFusingInfo(long *param_1)

{
  undefined4 uVar1;
  cfstringStruct *pcVar2;
  
  if (*param_1 == 0) {
    pcVar2 = &cf_Can_tcheckifNULLdeviceisproductionfused;
  }
  else {
    if (*(long *)(*param_1 + 0x20) != 0) {
      uVar1 = __AMDeviceProxyGetFusingInfo();
      goto LAB_00168ca3;
    }
    pcVar2 = &cf_Can_tcheckNULLproxyforproductionfusedstatus;
  }
  uVar1 = 0;
  _AMRSafeLog(3,pcVar2);
LAB_00168ca3:
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}

