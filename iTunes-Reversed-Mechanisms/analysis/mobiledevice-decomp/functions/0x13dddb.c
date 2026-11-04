// rea decompile_all
// name: _MDRemoteServiceRebootToRecoveryWithError
// address: 0x13dddb
// body: available
// range: 0x13dddb-0x13df37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _MDRemoteServiceRebootToRecoveryWithError(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_38 = &local_40;
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0;
  if (param_1 == 0) {
    local_28 = 0xe8000007;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Invalid argument.";
  }
  else {
    lVar2 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                *(undefined8 *)(param_1 + 0x18));
    if (lVar2 != 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                        (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:");
      (*(code *)PTR__objc_msgSend_00441098)
                (uVar3,"rebootDeviceToRecoveryForUUID:type:",lVar2,*(undefined4 *)(param_1 + 0x20));
      goto LAB_0013dee0;
    }
    *(undefined4 *)(local_38 + 3) = 0xe80000f1;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Failed to create UUID.";
  }
  lVar2 = 0;
  __os_log_internal(0,_md_log_log,0x10,pcVar4);
LAB_0013dee0:
  (*(code *)PTR__objc_release_004410a0)(lVar2);
  uVar1 = *(undefined4 *)(local_38 + 3);
  __Block_object_dispose(&local_40,8);
  return uVar1;
}

