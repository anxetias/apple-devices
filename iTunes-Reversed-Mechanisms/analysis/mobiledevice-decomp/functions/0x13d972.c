// rea decompile_all
// name: _MDRemoteServiceDeviceIsConnected
// address: 0x13d972
// body: available
// range: 0x13d972-0x13dabd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _MDRemoteServiceDeviceIsConnected(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_38 = &local_40;
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Invalid argument(s).";
  }
  else {
    lVar2 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
    if (lVar2 != 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                        (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:",
                         &___block_literal_global_101);
      (*(code *)PTR__objc_msgSend_00441098)
                (uVar3,"retrieveStateForUUID:type:withReply:",lVar2,*(undefined4 *)(param_1 + 0x20))
      ;
      goto LAB_0013da69;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Failed to create UUID.";
  }
  lVar2 = 0;
  __os_log_internal(0,_md_log_log,0x10,pcVar4);
LAB_0013da69:
  (*(code *)PTR__objc_release_004410a0)(lVar2);
  uVar1 = *(undefined1 *)(local_38 + 3);
  __Block_object_dispose(&local_40,8);
  return CONCAT71((int7)((ulong)lVar2 >> 8),uVar1) & 0xffffffff;
}

