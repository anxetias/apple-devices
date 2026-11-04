// rea decompile_all
// name: MDRemotePairingBrowser::_handleDeviceDisappearedFromNetwork:
// address: 0x14134f
// body: available
// range: 0x14134f-0x141550 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int MDRemotePairingBrowser::_handleDeviceDisappearedFromNetwork_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    return 0xe8000007;
  }
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable");
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar3 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable");
    iVar2 = (*(code *)puVar1)(param_1,"notifyClientAboutDevice:action:",uVar4,2);
    if (iVar2 != 0) goto joined_r0x0014148b;
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable");
    if (lVar3 != 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"networkPairable");
      _CFRelease(uVar4);
    }
    (*(code *)puVar1)(param_3,"setNetworkPairable:",0);
    (*(code *)puVar1)(param_3,"setNetworkPairable:",0);
  }
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
  iVar2 = (*(code *)puVar1)(param_1,"notifyClientAboutDevice:action:",uVar4,2);
  if (iVar2 == 0) {
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
    if (lVar3 != 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"network");
      _CFRelease(uVar4);
    }
    (*(code *)puVar1)(param_3,"setNetwork:",0);
    (*(code *)puVar1)(param_3,"setNetwork:",0);
    return 0;
  }
joined_r0x0014148b:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  uVar4 = _md_log_log;
  uVar5 = _AMDErrorString(iVar2);
  __os_log_internal(0,uVar4,0x10,"Failed to detach device: 0x%08x (%s)",iVar2,uVar5);
  return iVar2;
}

