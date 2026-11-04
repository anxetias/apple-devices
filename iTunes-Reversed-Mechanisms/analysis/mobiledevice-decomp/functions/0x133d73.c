// rea decompile_all
// name: _AMDeviceRegisterForCUNotificationsWithOptions
// address: 0x133d73
// body: available
// range: 0x133d73-0x133ebc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDeviceRegisterForCUNotificationsWithOptions(long param_1,long param_2)

{
  void *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *local_20;
  long local_18;
  
  if (param_1 == 0 || param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar2 = "Invalid input(s).";
    uVar3 = 0x10;
  }
  else {
    if (*(long *)(param_2 + 0xe0) == 0) {
      local_38 = PTR___NSConcreteStackBlock_004412a8;
      local_30 = 0x40000000;
      local_28 = ___AMDeviceRegisterForCUNotificationsWithOptions_block_invoke;
      local_20 = &___block_descriptor_tmp_1345;
      local_18 = param_1;
      pvVar1 = __Block_copy(&local_38);
      *(void **)(param_2 + 0xe0) = pvVar1;
      uVar4 = 0;
      goto LAB_00133dfb;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar2 = "AMDeviceShowPinCodeRequestCallback already registered";
    uVar3 = 2;
  }
  __os_log_internal(0,_md_log_log,uVar3,pcVar2);
  uVar4 = 0xe8000007;
LAB_00133dfb:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,2,"returned 0x%x.",uVar4);
  return uVar4;
}

