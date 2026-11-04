// rea decompile_all
// name: _AMRestoreUnregisterForDeviceNotifications
// address: 0xe44b0
// body: available
// range: 0xe44b0-0xe4539 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _AMRestoreUnregisterForDeviceNotifications(void)

{
  int iVar1;
  
  _pthread_mutex_lock((pthread_mutex_t *)&__notificationLock);
  iVar1 = 0;
  if (__initializedNotifications == '\x01') {
    iVar1 = __AMRestoreUninitializeNotifications();
    if (iVar1 == 0) {
      iVar1 = 0;
      _dispatch_sync_f((dispatch_queue_t)DAT_004a3bd8._os_obj,(void *)0x0,_function_does_nothing);
      _dispatch_release(DAT_004a3bd8);
      _DAT_004a3bd0 = 0;
      DAT_004a3bd8._os_obj = (_os_object_s *)0x0;
      DAT_004a3bc0 = 0;
      _DAT_004a3bc8 = 0;
      __notificationClient = 0;
      _DAT_004a3bb8 = 0;
      DAT_004a3be0 = 0;
      __initializedNotifications = '\0';
    }
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&__notificationLock);
  return iVar1;
}

