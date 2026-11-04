// rea decompile_all
// name: ___thr_AMRestorableDeviceGetState
// address: 0x161668
// body: available
// range: 0x161668-0x1616ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1616e9 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceGetState(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  cfstringStruct *pcVar4;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    uVar3 = 0;
    if (lVar1 == 0) {
      pcVar4 = &cf_Can_tgetstatewithNULLdevice;
    }
    else if (*(long *)(lVar1 + 0x20) == 0) {
      pcVar4 = &cf_Can_tgetdevicestatesinceproxyisNULL;
    }
    else {
      uVar2 = *(int *)(lVar1 + 0x2c) + 1;
      if ((uVar2 < 6) && ((0x31U >> (uVar2 & 0x1f) & 1) != 0)) {
        pcVar4 = &cf_Can_tquerydevicestatewhiledeviceisdisconnected;
      }
      else {
        uVar3 = __AMDeviceProxyGetState();
        pcVar4 = (cfstringStruct *)0x0;
      }
    }
    _AMRSafeLogAndRelease(3,pcVar4);
    *(undefined4 *)(param_1 + 1) = uVar3;
    return;
  }
  _AMRSafeLog(3,&cf___,&cf_Can_tgetstatewithNULLargs);
  _CFRelease(&cf_Can_tgetstatewithNULLargs);
  return;
}

