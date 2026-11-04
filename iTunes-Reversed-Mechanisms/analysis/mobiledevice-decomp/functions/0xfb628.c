// rea decompile_all
// name: AMRLocalUSBDevice::dealloc
// address: 0xfb628
// body: available
// range: 0xfb628-0xfb6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void AMRLocalUSBDevice::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _dispatch_sync(__notificationQueue);
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    _IOObjectRelease();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  local_20.super_class = &objc::class_t::AMRLocalUSBDevice;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"dealloc");
  return;
}

