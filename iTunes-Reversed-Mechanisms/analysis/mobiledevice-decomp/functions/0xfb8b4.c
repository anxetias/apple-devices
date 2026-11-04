// rea decompile_all
// name: AMRLocalUSBDevice::printDeviceWithExclusiveAccess
// address: 0xfb8b4
// body: available
// range: 0xfb8b4-0xfb962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfb95e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void AMRLocalUSBDevice::printDeviceWithExclusiveAccess(ID param_1,SEL param_2)

{
  char cVar1;
  cfstringStruct *pcVar2;
  undefined4 local_28;
  cfstringStruct *local_24;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  pcVar2 = (cfstringStruct *)
           _IORegistryEntryCreateCFProperty
                     (*(undefined4 *)(param_1 + 0x20),&cf_UsbExclusiveOwner,
                      *(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
  cVar1 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
  if (cVar1 != '\0') {
    local_24 = &cf___Unknown__;
    if (pcVar2 != (cfstringStruct *)0x0) {
      local_24 = pcVar2;
    }
    local_28 = 0x8400102;
    __os_log_impl(0,PTR___os_log_default_004412f0,0,
                  "error opening USB device failed with kIOReturnExclusiveAccess. Current owner: %@"
                  ,&local_28,0xc);
  }
  if (pcVar2 != (cfstringStruct *)0x0) {
    _CFRelease(pcVar2);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

