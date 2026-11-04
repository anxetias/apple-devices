// rea decompile_all
// name: MDRemotePairingBrowser::notifyClientAboutDevice:action:
// address: 0x14285c
// body: available
// range: 0x14285c-0x14295a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

int MDRemotePairingBrowser::notifyClientAboutDevice_action_
              (ID param_1,SEL param_2,_AMDevice *param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  
  puVar1 = PTR__objc_msgSend_00441098;
  if (param_3 == (_AMDevice *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    iVar4 = 0xe8000007;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"runLoopSource");
    (*(code *)puVar1)(uVar2,"signalRunLoopWithAction:forDevice:",param_4,param_3);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    if (param_4 - 1 < 6) {
      pcVar3 = *(char **)(&DAT_00449a30 + (ulong)(param_4 - 1) * 8);
    }
    else {
      pcVar3 = "unknown action";
    }
    iVar4 = 0;
    __os_log_internal(0,_md_log_log,2,"%s: %@",pcVar3,param_3);
  }
  return iVar4;
}

