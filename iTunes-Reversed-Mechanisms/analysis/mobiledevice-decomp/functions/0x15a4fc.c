// rea decompile_all
// name: __AMRestorableDeviceInvestigateFailure
// address: 0x15a4fc
// body: available
// range: 0x15a4fc-0x15a592 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15a58e to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceInvestigateFailure(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  cVar1 = __AMRestorableDeviceDidPanic();
  if (cVar1 == '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
      pcVar4 = &cf_Deviceproxyisnullaftertherestore_;
    }
    else {
      iVar2 = __AMDeviceProxyGetState();
      if (iVar2 == 4) {
        lVar3 = __AMDeviceProxyCopySerialNumber(*(undefined8 *)(param_1 + 0x20));
        if (lVar3 == 0) {
          pcVar4 = &
                   cf_Lockdowndidn_trespond_Therestoresucceededbutmaybethedevicedidnotcompletethebootprocess_
          ;
        }
        else {
          _CFRelease(lVar3);
          pcVar4 = &cf_Deviceisbootedandlockdownresponded_;
        }
      }
      else if (iVar2 - 1U < 2) {
        iVar2 = __AMDeviceProxyGetBoardID(*(undefined8 *)(param_1 + 0x20));
        pcVar4 = &cf_Deviceisn_tbootedbutUSBisup_;
        if (iVar2 == 0) {
          pcVar4 = &cf_UnabletocontactthedeviceoverUSBafterafailedrestore_;
        }
      }
      else {
        pcVar4 = (cfstringStruct *)0x0;
      }
    }
  }
  else {
    pcVar4 = &cf_Astrisdetectedadevicepanicafterafailedrestore_;
  }
  _AMRSafeLogAndRelease(3,pcVar4);
  return;
}

