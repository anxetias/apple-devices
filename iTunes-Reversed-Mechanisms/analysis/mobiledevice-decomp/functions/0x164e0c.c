// rea decompile_all
// name: _AMRestorableDeviceUpdateAvailableForBoardAndChipID
// address: 0x164e0c
// body: available
// range: 0x164e0c-0x164f52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMRestorableDeviceUpdateAvailableForBoardAndChipID(int param_1,int param_2)

{
  undefined4 uVar1;
  dispatch_object_t object;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  
  object._os_obj =
       (_os_object_s *)
       _dispatch_queue_create("com.apple.MobileDevice.Update",(dispatch_queue_attr_t)0x0);
  uVar2 = _xpc_connection_create_mach_service("com.apple.DeviceSupportUpdater",object._os_obj,0);
  _xpc_connection_set_event_handler(uVar2,&___block_literal_global_17);
  _xpc_connection_resume(uVar2);
  uVar3 = _xpc_dictionary_create(0,0,0);
  _xpc_dictionary_set_int64(uVar3,"BoardID",(long)param_1);
  _xpc_dictionary_set_int64(uVar3,"ChipID",(long)param_2);
  uVar4 = _xpc_dictionary_create(0,0,0);
  _xpc_dictionary_set_string(uVar4,"Command","CheckForUpdate");
  _xpc_dictionary_set_value(uVar4,"CommandOptions",uVar3);
  puVar5 = (undefined *)_xpc_connection_send_message_with_reply_sync(uVar2,uVar4);
  if (puVar5 == PTR___xpc_error_connection_interrupted_004412f8) {
    pcVar6 = &cf_ConnectiontoMobileDeviceUpdaterwasinterrupted_MDUcrashed_;
  }
  else {
    if (puVar5 != PTR___xpc_error_connection_invalid_00441300) {
      uVar1 = _xpc_dictionary_get_bool(puVar5,"IsUpdateAvailable");
      _xpc_release(puVar5);
      goto LAB_00164f20;
    }
    pcVar6 = &cf_ConnectiontoMobileDeviceUpdaterwasinvalidatedbeforeafullreply_;
  }
  uVar1 = 0;
  _AMRLog(3,pcVar6);
LAB_00164f20:
  _xpc_release(uVar3);
  _xpc_release(uVar4);
  _xpc_connection_cancel(uVar2);
  _dispatch_release(object);
  return uVar1;
}

