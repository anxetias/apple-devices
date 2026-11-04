// rea decompile_all
// name: ___thr_AMRestorableDeviceGetEffectiveFusingInfo
// address: 0x16950f
// body: available
// range: 0x16950f-0x169548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x169539 to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceGetEffectiveFusingInfo(long *param_1)

{
  undefined4 uVar1;
  cfstringStruct *pcVar2;
  
  if (*param_1 == 0) {
    pcVar2 = &cf_Can_tgeteffectivefusinginfofromNULLproxy;
    uVar1 = 0;
  }
  else {
    uVar1 = __AMDeviceProxyGetEffectiveFusingInfo(*(undefined8 *)(*param_1 + 0x20));
    pcVar2 = (cfstringStruct *)0x0;
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  _AMRSafeLogAndRelease(3,pcVar2);
  return;
}

