// rea decompile_all
// name: AMRestoreMuxedDeviceRamrodChannel::SendReply
// address: 0xca458
// body: available
// range: 0xca458-0xca49c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xca47e to 0xc91f0 _ramrod_send_message (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMRestoreMuxedDeviceRamrodChannel::SendReply(AMRestoreMuxedDeviceMessage*, __CFDictionary const*)
    */

undefined8 __thiscall
AMRestoreMuxedDeviceRamrodChannel::SendReply
          (AMRestoreMuxedDeviceRamrodChannel *this,AMRestoreMuxedDeviceMessage *param_1,
          __CFDictionary *param_2)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  
  if (*(ulong *)(param_1 + 0x18) < *(ulong *)(this + 0x30)) {
    pcVar2 = &cf_Internalinconsistency_replysentoutoforder;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(param_1 + 0x18);
    if (-1 < *(int *)(this + 0x20)) {
      uVar1 = _ramrod_send_message(*(int *)(this + 0x20),param_2);
      return uVar1;
    }
    pcVar2 = &cf_Internalinconsistency_socketisclosed;
  }
  _AMRLog(3,pcVar2);
  return 0xffffffff;
}

