// rea decompile_all
// name: AMRLocalUSBDevice::handleUSBDeviceGeneralInterestNotification:
// address: 0xfb963
// body: available
// range: 0xfb963-0xfb9c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfb998 to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xfb9be to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

void AMRLocalUSBDevice::handleUSBDeviceGeneralInterestNotification_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
  int iVar1;
  
  if (param_3 != 0xe0000110) {
    return;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  *(int *)(param_1 + 0x30) = iVar1;
  if (iVar1 == -0x1ffffd3b) {
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"printDeviceWithExclusiveAccess");
    return;
  }
  _IOObjectRelease(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x28));
  return;
}

