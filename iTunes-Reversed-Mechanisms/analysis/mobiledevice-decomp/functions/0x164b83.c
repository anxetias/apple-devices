// rea decompile_all
// name: _AMRestorableDeviceTriggerUpdateForBoardAndChipIDWithPrompt
// address: 0x164b83
// body: available
// range: 0x164b83-0x164c86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x164c82 to 0x2aa272 _dispatch_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRestorableDeviceTriggerUpdateForBoardAndChipIDWithPrompt
               (int param_1,int param_2,long param_3)

{
  dispatch_object_t object;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  object._os_obj =
       (_os_object_s *)
       _dispatch_queue_create("com.apple.MobileDevice.Update",(dispatch_queue_attr_t)0x0);
  uVar1 = _xpc_connection_create_mach_service("com.apple.DeviceSupportUpdater",object._os_obj,0);
  _xpc_connection_set_event_handler(uVar1,&___block_literal_global_3973);
  _xpc_connection_resume(uVar1);
  uVar2 = _xpc_dictionary_create(0,0,0);
  _xpc_dictionary_set_int64(uVar2,"BoardID",(long)param_1);
  _xpc_dictionary_set_int64(uVar2,"ChipID",(long)param_2);
  if (param_3 != 0) {
    _xpc_dictionary_set_string(uVar2,"Prompt",param_3);
  }
  uVar3 = _xpc_dictionary_create(0,0,0);
  _xpc_dictionary_set_string(uVar3,"Command","TriggerUpdate");
  _xpc_dictionary_set_value(uVar3,"CommandOptions",uVar2);
  _xpc_connection_send_message(uVar1,uVar3);
  _xpc_release(uVar2);
  _xpc_release(uVar3);
  _dispatch_release(object);
  return;
}

