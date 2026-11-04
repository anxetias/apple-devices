// rea decompile_all
// name: _MDRemoteServiceDeviceCopyProperties
// address: 0x13c3f7
// body: available
// range: 0x13c3f7-0x13c557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MDRemoteServiceDeviceCopyProperties(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  
  local_48 = &local_50;
  local_50 = 0;
  local_40 = 0x3052000000;
  local_38 = ___Block_byref_object_copy__1534;
  local_30 = ___Block_byref_object_dispose__1535;
  local_28 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar3 = "Invalid argument(s).";
  }
  else {
    lVar1 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
    if (lVar1 != 0) {
      uVar2 = (*(code *)PTR__objc_msgSend_00441098)
                        (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:",
                         &___block_literal_global_87);
      (*(code *)PTR__objc_msgSend_00441098)
                (uVar2,"retrievePropertiesForUUID:type:withReply:",lVar1,
                 *(undefined4 *)(param_1 + 0x20));
      goto LAB_0013c501;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar3 = "Failed to create UUID.";
  }
  lVar1 = 0;
  __os_log_internal(0,_md_log_log,0x10,pcVar3);
LAB_0013c501:
  (*(code *)PTR__objc_release_004410a0)(lVar1);
  uVar2 = local_48[5];
  __Block_object_dispose(&local_50,8);
  return uVar2;
}

