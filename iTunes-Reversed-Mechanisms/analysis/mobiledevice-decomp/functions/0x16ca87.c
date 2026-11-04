// rea decompile_all
// name: ____AMDRemotePairingCopyFrameworkVersion_block_invoke
// address: 0x16ca87
// body: available
// range: 0x16ca87-0x16cc34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16cbcf to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDRemotePairingCopyFrameworkVersion_block_invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (_RemotePairingLibrary_sOnce_4256 != -1) {
    _dispatch_once(&_RemotePairingLibrary_sOnce_4256,&___block_literal_global_252);
  }
  if (_RemotePairingLibrary_sLib_4257 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar5 = "RemotePairing.framework is not available.";
    lVar3 = 0;
  }
  else {
    uVar2 = _objc_alloc(&_OBJC_CLASS___NSBundle);
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar2,"initWithPath:",
                       &cf__Library_Apple_System_Library_PrivateFrameworks_RemotePairing_framework);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar2 = _md_log_log;
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar3 == 0) {
      pcVar5 = "Failed to load RemotePairing bundle.";
      lVar3 = 0;
    }
    else {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar3,"bundlePath");
      __os_log_internal(0,uVar2,2,"RemotePairing found at %@",uVar4);
      uVar2 = (*(code *)puVar1)(lVar3,"infoDictionary");
      uVar2 = (*(code *)puVar1)(uVar2,"objectForKeyedSubscript:",&cf_CFBundleVersion);
      __AMDRemotePairingCopyFrameworkVersion_remotePairingVersion =
           (*(code *)PTR__objc_retain_004410a8)(uVar2);
      if (__AMDRemotePairingCopyFrameworkVersion_remotePairingVersion != 0) goto LAB_0016cbc2;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar5 = "Failed to query RemotePairing version.";
    }
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar5);
LAB_0016cbc2:
  (*(code *)PTR__objc_release_004410a0)(lVar3);
  return;
}

