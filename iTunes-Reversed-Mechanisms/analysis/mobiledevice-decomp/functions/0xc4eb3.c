// rea decompile_all
// name: _USBMuxListenerSetDispatchQueue
// address: 0xc4eb3
// body: available
// range: 0xc4eb3-0xc5050 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _USBMuxListenerSetDispatchQueue(int *param_1,dispatch_queue_t param_2)

{
  dispatch_object_t object;
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  int *local_28;
  
  local_38 = &local_40;
  local_40 = 0;
  local_30 = 0x2000000000;
  local_28 = param_1;
  if ((param_1 == (int *)0x0) || (*param_1 != -0x21524111)) {
    uVar2 = 0;
    _USBMuxDebugLog("%s:%d %s invalid USBMuxListenerRef %p\n","USBMuxListenerSetDispatchQueue",0x47d
                   );
  }
  else {
    if (*(long *)(param_1 + 0x16) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        object._os_obj =
             (_os_object_s *)
             _dispatch_source_create
                       ((dispatch_source_type_t)PTR___dispatch_source_type_read_004412e0,
                        (long)param_1[1],0,param_2);
        if (object._os_obj != (_os_object_s *)0x0) {
          ((dispatch_object_t *)(local_38[3] + 0x80))->_os_obj = (_os_object_s *)object;
          _dispatch_source_set_event_handler(object._os_obj);
          _dispatch_source_set_cancel_handler(object._os_obj);
          _dispatch_resume(object);
          uVar2 = CONCAT71(object._1_7_,1);
          goto LAB_000c4fbd;
        }
        pcVar3 = "%s:%d %s could not create dispatch source for listener\n";
        uVar1 = 0x483;
      }
      else {
        pcVar3 = "%s:%d %s already running on dispatch queue\n";
        uVar1 = 0x47f;
      }
    }
    else {
      pcVar3 = "%s:%d %s already running on run loop\n";
      uVar1 = 0x47e;
    }
    uVar2 = 0;
    _USBMuxDebugLog(pcVar3,"USBMuxListenerSetDispatchQueue",uVar1);
  }
LAB_000c4fbd:
  __Block_object_dispose(&local_40,8);
  return uVar2 & 0xffffffff;
}

