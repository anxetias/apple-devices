// rea decompile_all
// name: AMRestoreMuxedDeviceMessage::~AMRestoreMuxedDeviceMessage
// address: 0xca2d2
// body: available
// range: 0xca2d2-0xca311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMRestoreMuxedDeviceMessage::~AMRestoreMuxedDeviceMessage() */

void __thiscall
AMRestoreMuxedDeviceMessage::~AMRestoreMuxedDeviceMessage(AMRestoreMuxedDeviceMessage *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__AMRestoreMuxedDeviceMessage_00445980;
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x48))();
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  _AMSupportSafeRelease(*(undefined8 *)(this + 8));
  return;
}

