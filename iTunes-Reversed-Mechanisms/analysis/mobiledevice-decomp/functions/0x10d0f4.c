// rea decompile_all
// name: __wakeupOperationCallback
// address: 0x10d0f4
// body: available
// range: 0x10d0f4-0x10d157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __wakeupOperationCallback(long param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 0x10) == 0x656b6177) {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
    uVar1 = 0xe8000001;
    if (param_2 < 3) {
      uVar1 = *(undefined4 *)(&DAT_0032d000 + (ulong)param_2 * 4);
    }
    *param_3 = uVar1;
    _AMDeviceWakeupOperationInvalidate(param_1);
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
    uVar2 = 0;
  }
  return uVar2;
}

