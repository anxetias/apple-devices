// rea decompile_all
// name: FUN_10000f897
// address: 0x10000f897
// body: available
// range: 0x10000f897-0x10000f9ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000f9af to 0x10001349d _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000f897(void *param_1)

{
  undefined8 *puVar1;
  
  if (6 < DAT_100021030) {
    FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__shb__p_,"_cleanup_heartbeat",param_1);
  }
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x38) != 0) {
      _CFRunLoopTimerInvalidate();
      _CFRelease(*(undefined8 *)((long)param_1 + 0x38));
      *(undefined8 *)((long)param_1 + 0x38) = 0;
    }
    if (*(long *)((long)param_1 + 0x30) != 0) {
      _CFRunLoopSourceInvalidate();
      _CFRelease(*(undefined8 *)((long)param_1 + 0x30));
      *(undefined8 *)((long)param_1 + 0x30) = 0;
    }
    if (*(long *)((long)param_1 + 0x28) != 0) {
      _CFSocketInvalidate();
      _CFRelease(*(undefined8 *)((long)param_1 + 0x28));
      *(undefined8 *)((long)param_1 + 0x28) = 0;
    }
    if (*(long *)((long)param_1 + 0x20) != 0) {
      _CFRelease();
      *(undefined8 *)((long)param_1 + 0x20) = 0;
    }
    puVar1 = *(undefined8 **)((long)param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        _free((void *)*puVar1);
        puVar1 = *(undefined8 **)((long)param_1 + 0x10);
        *puVar1 = 0;
      }
      _free(puVar1);
      *(undefined8 *)((long)param_1 + 0x10) = 0;
    }
    puVar1 = *(undefined8 **)((long)param_1 + 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        _free((void *)*puVar1);
        puVar1 = *(undefined8 **)((long)param_1 + 0x18);
        *puVar1 = 0;
      }
      _free(puVar1);
    }
    _free(param_1);
    return;
  }
  return;
}

