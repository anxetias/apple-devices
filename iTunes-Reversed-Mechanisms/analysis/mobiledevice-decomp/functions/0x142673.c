// rea decompile_all
// name: MDRemotePairingBrowser::startBrowsingForCurrentDevices
// address: 0x142673
// body: available
// range: 0x142673-0x142796 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

int MDRemotePairingBrowser::startBrowsingForCurrentDevices(ID param_1,SEL param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  dispatch_group_t group;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"rpBrowser");
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Browser is uninitialized.");
    iVar5 = 0xe80000f1;
  }
  else {
    iVar5 = 0;
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"setBrowseOngoing:",0);
    iVar2 = (*(code *)puVar1)(param_1,"_activateBrowser");
    if (iVar2 == 0) {
      group = (dispatch_group_t)(*(code *)puVar1)(param_1,"browseCurrentCompleteGroup");
      _dispatch_group_enter(group);
      uVar4 = (*(code *)puVar1)(param_1,"rpBrowser");
      (*(code *)puVar1)(uVar4,"startBrowsingForCurrentDevices");
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Activating browser failed.");
      iVar5 = iVar2;
    }
  }
  return iVar5;
}

