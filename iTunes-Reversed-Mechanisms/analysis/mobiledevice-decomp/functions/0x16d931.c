// rea decompile_all
// name: __AMDRemotePairingNotificationSubscribe
// address: 0x16d931
// body: available
// range: 0x16d931-0x16daaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMDRemotePairingNotificationSubscribe(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int local_24;
  
  local_24 = -0x17ffffff;
  uVar1 = _objc_alloc(&objc::class_t::MDRemotePairingBrowser);
  lVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar1,"initWithNotificationRef:withError:",param_1,&local_24);
  if (lVar2 == 0) {
    lVar2 = _AMDCopyErrorText(local_24);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to create browser: 0x%08x (%@)",local_24,lVar2);
    (*(code *)PTR__objc_release_004410a0)(0);
    if (lVar2 != 0) {
      _CFRelease(lVar2);
    }
  }
  else {
    local_24 = (*(code *)PTR__objc_msgSend_00441098)(lVar2,"startBrowsing");
    if (local_24 == 0) {
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
      if (*(long *)(param_1 + 0x70) != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(*(long *)(param_1 + 0x70),"cancel");
        (*(code *)PTR__objc_release_004410a0)(*(undefined8 *)(param_1 + 0x70));
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      uVar1 = (*(code *)PTR__objc_retain_004410a8)(lVar2);
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
      local_24 = 0;
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to start browsing.");
    }
    (*(code *)PTR__objc_release_004410a0)(lVar2);
  }
  return local_24;
}

