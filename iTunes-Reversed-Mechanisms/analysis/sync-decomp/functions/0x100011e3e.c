// rea decompile_all
// name: StreamSyncWireTalker::init:
// address: 0x100011e3e
// body: available
// range: 0x100011e3e-0x100011f0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

ID StreamSyncWireTalker::init_(ID param_1,SEL param_2,char param_3)

{
  char cVar1;
  int iVar2;
  ID IVar3;
  objc_super local_30;
  long local_20;
  
  local_30.super_class = &objc::class_t::StreamSyncWireTalker;
  local_30.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar3 != 0) {
    local_20 = 0;
    iVar2 = FUN_1000137cc(param_3,&PTR_FUN_100028d90,IVar3,IVar3 + _connection);
    if (iVar2 == 0) {
      return IVar3;
    }
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncWireProtocol/StreamSyncWireTalker.m"
              ,"-[StreamSyncWireTalker init:]",3,
              &cf_Can_tcreateSyncDeviceLinkConnectionforStreamSyncWireTalker_Error_d___,iVar2,
              local_20);
    }
    if (local_20 != 0) {
      _CFRelease();
      local_20 = 0;
    }
    (*(code *)PTR__objc_release_100020218)(IVar3);
  }
  return 0;
}

