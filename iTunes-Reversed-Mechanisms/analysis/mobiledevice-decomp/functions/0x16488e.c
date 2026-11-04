// rea decompile_all
// name: __AMRestorableDeviceFinalize
// address: 0x16488e
// body: available
// range: 0x16488e-0x1649f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceFinalize(long param_1)

{
  int *piVar1;
  dispatch_source_t source;
  long *plVar2;
  long lVar3;
  
  if (param_1 != 0) {
    if ((*(dispatch_object_t *)(param_1 + 0x90))._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(*(dispatch_object_t *)(param_1 + 0x90));
    }
    if ((*(dispatch_object_t *)(param_1 + 0x88))._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(*(dispatch_object_t *)(param_1 + 0x88));
    }
    source = *(dispatch_source_t *)(param_1 + 0x60);
    if (source != (dispatch_source_t)0x0) {
      lVar3 = _dispatch_source_testcancel(source);
      if (lVar3 == 0) {
        _dispatch_source_cancel(source);
        _dispatch_release(*(dispatch_object_t *)(param_1 + 0x60));
      }
    }
    __AMRestorableDeviceCleanupCheckpointData(param_1);
    __AMRestorableDeviceCleanupAttestedRestoreData(param_1);
    if ((*(dispatch_object_t *)(param_1 + 0x98))._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(*(dispatch_object_t *)(param_1 + 0x98));
    }
    if (*(dispatch_source_t *)(param_1 + 0xa0) != (dispatch_source_t)0x0) {
      _dispatch_source_cancel(*(dispatch_source_t *)(param_1 + 0xa0));
      if (*(char *)(param_1 + 0xb0) == '\0') {
        _dispatch_resume(*(dispatch_object_t *)(param_1 + 0xa0));
      }
      _dispatch_release(*(dispatch_object_t *)(param_1 + 0xa0));
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      _CFRelease();
    }
    __AMRestorableDeviceFreeTRMResources(param_1);
    if (*(long *)(param_1 + 0x120) != 0) {
      _CFRelease();
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      _CFRelease();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      _CFRelease();
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      _CFRelease();
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      _CFRelease();
    }
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
      LOCK();
      piVar1 = (int *)((long)plVar2 + 0x14);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      _CFRelease();
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x002a97b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__CFRelease_0048b4b8)();
      return;
    }
  }
  return;
}

