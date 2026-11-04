// rea decompile_all
// name: ___60-[MDRemotePairingBrowser_initWithNotificationRef:withError:]_block_invoke
// address: 0x142a30
// body: available
// range: 0x142a30-0x142ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x142b60 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___60__MDRemotePairingBrowser_initWithNotificationRef_withError___block_invoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  lVar3 = _objc_loadWeak(param_1 + 0x20);
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Browser unavailable.";
    uVar4 = 2;
  }
  else {
    uVar4 = _objc_alloc(&objc::class_t::MDRPConnectableDevice);
    lVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"initWitRPConnectableDevice:",param_2);
    if (lVar5 != 0) {
      cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar3,"deviceDiscovered:",lVar5);
      if (cVar2 == '\0') {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar4 = _md_log_log;
        puVar1 = PTR__objc_msgSend_00441098;
        uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"name");
        uVar7 = (*(code *)puVar1)(param_2,"udid");
        __os_log_internal(0,uVar4,0x10,"Failed to handle discovered device: %@ (%@)",uVar6,uVar7);
      }
      goto LAB_00142b4f;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar8 = "Unable to create MDRPConnectableDevice.";
    uVar4 = 0x10;
  }
  lVar5 = 0;
  __os_log_internal(0,_md_log_log,uVar4,pcVar8);
LAB_00142b4f:
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  return;
}

