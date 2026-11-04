// rea decompile_all
// name: ___libDFU_setDispatchQueueForDiscovery_block_invoke
// address: 0x321a9
// body: available
// range: 0x321a9-0x3220d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___libDFU_setDispatchQueueForDiscovery_block_invoke(long param_1)

{
  dispatch_object_t object;
  char *pcVar1;
  
  object = (dispatch_object_t)((dispatch_object_t *)(param_1 + 0x20))->_os_obj;
  if (object._os_obj == (_os_object_s *)0x0) {
    _notificationQueue._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.libDFU.deviceDiscoveryQueue",(dispatch_queue_attr_t)0x0);
  }
  else {
    _notificationQueue = object;
    _dispatch_retain(object);
  }
  pcVar1 = _dispatch_queue_get_label((dispatch_queue_t)_notificationQueue._os_obj);
  __os_log_internal(0,PTR___os_log_default_004412f0,1,"Device discovery queue: %s",pcVar1);
  return;
}

