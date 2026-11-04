// rea decompile_all
// name: ____AMDRemotePairingExtendedPairWithOptions_block_invoke
// address: 0x16eb21
// body: available
// range: 0x16eb21-0x16ec7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16ec66 to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDRemotePairingExtendedPairWithOptions_block_invoke
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar2 + 0x18) = 0;
    break;
  case 1:
    *(undefined4 *)(lVar2 + 0x18) = 0xe8000095;
    uVar1 = (*_getRPPairingOutcomeInfoKeyError)();
    uVar1 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"objectForKeyedSubscript:",uVar1);
    uVar1 = (*(code *)PTR__objc_retain_004410a8)(uVar1);
    goto LAB_0016ebc4;
  default:
    *(undefined4 *)(lVar2 + 0x18) = 0xe80000f1;
    uVar1 = _createAndLogError("_AMDRemotePairingExtendedPairWithOptions_block_invoke",0x3d3,
                               *(undefined4 *)(param_1 + 0x40),1,0,
                               &cf_UnexpectedpairingoutcomefromRemotePairing__lu,param_2);
LAB_0016ebc4:
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) = uVar1;
    break;
  case 3:
  case 5:
    *(undefined4 *)(lVar2 + 0x18) = 0xe8000096;
    break;
  case 4:
    *(undefined4 *)(lVar2 + 0x18) = 0xe800009b;
    uVar1 = (*_getRPPairingOutcomeInfoKeyManagedConfigurationChallenge)();
    lVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"objectForKeyedSubscript:",uVar1);
    if (lVar2 == 0) {
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0xe8000014;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = _md_log_log;
      uVar3 = (*_getRPPairingOutcomeInfoKeyManagedConfigurationChallenge)();
      __os_log_internal(0,uVar1,0x10,"Pairing status is missing expected key \'%@\'.",uVar3);
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = (*(code *)PTR__objc_retain_004410a8)(param_3);
    **(undefined8 **)(param_1 + 0x38) = uVar1;
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x20));
  return;
}

