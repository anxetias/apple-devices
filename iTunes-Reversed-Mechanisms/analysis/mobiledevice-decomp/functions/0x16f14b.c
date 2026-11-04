// rea decompile_all
// name: ____AMDRemotePairingCreateWakeupToken_block_invoke
// address: 0x16f14b
// body: available
// range: 0x16f14b-0x16f1d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16f1ad to 0x2aa236 _dispatch_group_leave (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDRemotePairingCreateWakeupToken_block_invoke(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  
  if (param_3 == 0) {
    if (param_2 != 0) {
      uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_2);
      lVar1 = 0x30;
      goto LAB_0016f197;
    }
    pcVar3 = &cf_NotokenreceivedfromRemotePairing_;
    uVar2 = 0x5fd;
    param_3 = 0;
  }
  else {
    pcVar3 = &cf_Failedtocreatewakeuptoken_;
    uVar2 = 0x5fa;
  }
  uVar2 = _createAndLogError("_AMDRemotePairingCreateWakeupToken_block_invoke",uVar2,0xe8000122,0,
                             param_3,pcVar3);
  lVar1 = 0x28;
LAB_0016f197:
  *(undefined8 *)(*(long *)(*(long *)(param_1 + lVar1) + 8) + 0x28) = uVar2;
  _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0x20));
  return;
}

