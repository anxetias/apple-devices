// rea decompile_all
// name: __AMDeviceFinalize
// address: 0x12b7bd
// body: available
// range: 0x12b7bd-0x12ba44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12ba28 to 0x2aa73a _pthread_mutex_destroy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDeviceFinalize(long param_1)

{
  long lVar1;
  char cVar2;
  
  if (param_1 != 0) {
    _AMDeviceSetUserInfo(param_1,0,0);
    if (*(long *)(param_1 + 0xb0) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    if (*(long *)(param_1 + 0xc0) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      _lockdown_connection_destroy();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      __Block_release(*(void **)(param_1 + 0xe0));
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    lVar1 = *(long *)(param_1 + 0xd0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_00441098)(lVar1,"invalidate");
      (*(code *)PTR__objc_release_004410a0)(lVar1);
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    lVar1 = *(long *)(param_1 + 0xf0);
    if (lVar1 != 0) {
      cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar1,"respondsToSelector:","invalidate");
      if (cVar2 == '\0') {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Input does not conform to protocol.");
      }
      else {
        (*(code *)PTR__objc_msgSend_00441098)(lVar1,"invalidate");
      }
      _CFRelease(*(undefined8 *)(param_1 + 0xf0));
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      _CFRelease();
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x48));
    return;
  }
  return;
}

