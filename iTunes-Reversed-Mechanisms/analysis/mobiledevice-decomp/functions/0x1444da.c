// rea decompile_all
// name: ___46+[MDRemotePairingBrowser_deviceLacksLockdown:]_block_invoke
// address: 0x1444da
// body: available
// range: 0x1444da-0x144561 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14455d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___46__MDRemotePairingBrowser_deviceLacksLockdown___block_invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSArray);
  puVar1 = PTR__objc_msgSend_00441098;
  local_28 = &cf_Mac;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_28,1);
  _deviceLacksLockdown__ignoredDeviceClasses = (*(code *)puVar1)(uVar2,"initWithArray:",uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

