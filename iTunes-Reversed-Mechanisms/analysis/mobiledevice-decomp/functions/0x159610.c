// rea decompile_all
// name: ___thr_AMRestorableDispatchEvent
// address: 0x159610
// body: available
// range: 0x159610-0x159733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1596ef to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x159714 to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDispatchEvent(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x28),0xffffffffffffffff);
  if (param_1 == 0) {
    _AMRSafePrintLogAndRelease(3,&cf_Can_tdispatchnilevent);
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x28));
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    pcVar7 = &cf_Can_tcheckdevicestatewithNULLdeviceinevent;
    goto LAB_001596cb;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 < 2) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      pcVar7 = &cf_Can_tsendconnectioneventtoNULLclient;
      goto LAB_001596cb;
    }
    if (*(code **)(lVar3 + 0x20) == (code *)0x0) {
      pcVar7 = &cf_Can_tdispatchdeviceeventtoNULLcallbackhandler;
      goto LAB_001596cb;
    }
    (**(code **)(lVar3 + 0x20))(lVar2,uVar1,*(undefined8 *)(lVar3 + 0x18));
  }
  else if (uVar1 == 100) {
    pcVar4 = *(code **)(param_1 + 0x38);
    if (pcVar4 != (code *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
LAB_001596ac:
      (*pcVar4)(lVar2,uVar6,uVar5);
    }
  }
  else {
    if (uVar1 != 200) {
      pcVar7 = (cfstringStruct *)0x0;
      _AMRLog(3,&cf_Can_tdispatchunknowneventtype__d,uVar1);
      goto LAB_001596cb;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if ((lVar3 != 0) && (pcVar4 = *(code **)(lVar3 + 0x18), pcVar4 != (code *)0x0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      goto LAB_001596ac;
    }
  }
  pcVar7 = (cfstringStruct *)0x0;
LAB_001596cb:
  _AMRSafePrintLogAndRelease(3,pcVar7);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x28));
  _CFRelease(param_1);
  return;
}

