// rea decompile_all
// name: _AMDeviceDisconnect
// address: 0x12fa19
// body: available
// range: 0x12fa19-0x12fb03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceDisconnect(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xe8000007;
  }
  else {
    if ((*(long *)(param_1 + 0xb0) == 0) || (0 < *(int *)(param_1 + 200))) {
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
      _lockdown_connection_destroy(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (*(long *)(param_1 + 0xe8) != 0) {
        _CFRelease();
        *(undefined8 *)(param_1 + 0xe8) = 0;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        _CFRelease();
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      lVar1 = *(long *)(param_1 + 0xd0);
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(lVar1,"invalidate");
        (*(code *)PTR__objc_release_004410a0)(lVar1);
        *(undefined8 *)(param_1 + 0xd0) = 0;
      }
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
    }
    uVar2 = 0;
  }
  return uVar2;
}

