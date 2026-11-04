// rea decompile_all
// name: _AMRestoreModeDeviceFinalize
// address: 0xde2ff
// body: available
// range: 0xde2ff-0xde574 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xde570 to 0x2aa73a _pthread_mutex_destroy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestoreModeDeviceFinalize(void const*) */

void _AMRestoreModeDeviceFinalize(void *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  _disconnectFromDevice(param_1);
  if (*(long *)((long)param_1 + 0x238) != 0) {
    lVar2 = _CFArrayGetCount();
    if (0 < lVar2) {
      lVar2 = 0;
      do {
        plVar3 = (long *)_CFArrayGetValueAtIndex(*(undefined8 *)((long)param_1 + 0x238),lVar2);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        lVar2 = lVar2 + 1;
        lVar1 = _CFArrayGetCount(*(undefined8 *)((long)param_1 + 0x238));
      } while (lVar2 < lVar1);
    }
    _CFRelease(*(undefined8 *)((long)param_1 + 0x238));
    *(undefined8 *)((long)param_1 + 0x238) = 0;
  }
  _pthread_cond_destroy((pthread_cond_t *)((long)param_1 + 0x208));
  if (*(long *)((long)param_1 + 0x110) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x110) = 0;
  }
  if (*(long *)((long)param_1 + 0x30) != 0) {
    _PRProgressFree();
    *(undefined8 *)((long)param_1 + 0x30) = 0;
  }
  if (*(long *)((long)param_1 + 0x118) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x118) = 0;
  }
  if (*(long *)((long)param_1 + 0xf8) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0xf8) = 0;
  }
  if (*(long *)((long)param_1 + 0x100) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x100) = 0;
  }
  if (*(long *)((long)param_1 + 0x108) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x108) = 0;
  }
  if (*(long *)((long)param_1 + 0x120) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x120) = 0;
  }
  if (*(long *)((long)param_1 + 0x148) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x148) = 0;
  }
  if (*(long *)((long)param_1 + 0x150) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x150) = 0;
  }
  if (*(long *)((long)param_1 + 0x198) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x198) = 0;
  }
  if (*(long *)((long)param_1 + 0x140) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x140) = 0;
  }
  if (*(long *)((long)param_1 + 0x138) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x138) = 0;
  }
  if (*(long *)((long)param_1 + 0x1a8) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x1a8) = 0;
  }
  if (*(long *)((long)param_1 + 0x1b0) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x1b0) = 0;
  }
  if (*(long *)((long)param_1 + 0x1b8) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x1b8) = 0;
  }
  if (*(long *)((long)param_1 + 0x38) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x38) = 0;
  }
  if (*(long *)((long)param_1 + 0x40) != 0) {
    _CFRelease();
    *(undefined8 *)((long)param_1 + 0x40) = 0;
  }
  if (*(long *)((long)param_1 + 0x128) != 0) {
    _CFRelease();
  }
  _pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x158));
  _pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x1c8));
  return;
}

