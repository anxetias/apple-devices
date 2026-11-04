// rea decompile_all
// name: ____AMDRemotePairingPairWithCallback_block_invoke.143
// address: 0x16e62d
// body: available
// range: 0x16e62d-0x16e858 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16e845 to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDRemotePairingPairWithCallback_block_invoke_143
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) != '\0') goto LAB_0016e825;
  switch(param_2) {
  case 0:
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
    break;
  case 1:
    uVar5 = (*_getRPPairingOutcomeInfoKeyError)();
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"objectForKeyedSubscript:",uVar5);
    uVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) = uVar5;
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0xe8000095;
    break;
  case 2:
    uVar3 = 0;
    uVar5 = (*_getRPPairingOutcomeInfoKeyChallengeThrottleSeconds)();
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"objectForKeyedSubscript:",uVar5);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar4 != 0) {
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"class");
      cVar2 = (*(code *)puVar1)(lVar4,"isKindOfClass:",uVar5);
      if (cVar2 != '\0') {
        uVar5 = (*_getRPPairingOutcomeInfoKeyChallengeThrottleSeconds)();
        uVar5 = (*(code *)puVar1)(param_3,"objectForKeyedSubscript:",uVar5);
        uVar3 = (*(code *)puVar1)(uVar5,"intValue");
      }
    }
    uVar5 = (*_getRPPairingOutcomeInfoKeyLastChallengeAttemptIncorrect)();
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"objectForKeyedSubscript:",uVar5);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar4 == 0) {
LAB_0016e80e:
      uVar5 = 0;
    }
    else {
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"class");
      cVar2 = (*(code *)puVar1)(lVar4,"isKindOfClass:",uVar5);
      uVar5 = 0x10000;
      if (cVar2 == '\0') goto LAB_0016e80e;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),uVar5,uVar3,
               __AMDRemotePairingPinCodeResponseCallback);
    goto LAB_0016e825;
  default:
    uVar5 = _createAndLogError("_AMDRemotePairingPairWithCallback_block_invoke",0x355,
                               *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),1,0,
                               &cf_UnexpectedpairingoutcomefromRemotePairing__d,param_2);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) = uVar5;
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0xe80000f1;
    break;
  case 5:
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0xe8000096;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
LAB_0016e825:
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x20));
    return;
  }
  return;
}

