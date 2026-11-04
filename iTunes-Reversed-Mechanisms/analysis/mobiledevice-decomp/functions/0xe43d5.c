// rea decompile_all
// name: _AMRestoreRegisterForDeviceNotifications
// address: 0xe43d5
// body: available
// range: 0xe43d5-0xe44af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_AMRestoreRegisterForDeviceNotifications
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  dispatch_queue_attr_t attr;
  undefined4 local_34;
  
  local_34 = 0;
  __AMRestoreLoadAndCacheIOUSBLibBundle();
  _pthread_mutex_lock((pthread_mutex_t *)&__notificationLock);
  __notificationClient = param_1;
  _DAT_004a3bb8 = param_2;
  DAT_004a3bc0 = param_3;
  _DAT_004a3bc8 = param_4;
  _DAT_004a3bd0 = param_5;
  DAT_004a3be0 = param_6;
  attr = (dispatch_queue_attr_t)_dispatch_queue_attr_make_with_autorelease_frequency(0,1);
  DAT_004a3bd8 = _dispatch_queue_create("com.apple.purplerestore.device_notification",attr);
  if (__initializedNotifications == '\0') {
    _dispatch_sync_f(DAT_004a3bd8,&local_34,__thr_AMRestoreRegisterForNotifications);
    _dispatch_sync_f(DAT_004a3bd8,(void *)0x0,_function_does_nothing);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&__notificationLock);
  return local_34;
}

