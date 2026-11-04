// rea decompile_all
// name: _MDRemotePairingRunLoopSourceCancel
// address: 0x13fa55
// body: available
// range: 0x13fa55-0x13fb71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _MDRemotePairingRunLoopSourceCancel(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 3;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Invalid input.";
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
    if (*(char *)(lVar3 + 0x79) != '\x01') {
      return;
    }
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
    puVar2 = PTR__objc_msgSend_00441098;
    if (*(long *)(lVar3 + 0x80) != 0) {
      local_48 = 0;
      local_38 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"note");
      lVar3 = (*(code *)puVar2)(param_1,"note");
      pcVar1 = *(code **)(lVar3 + 0x80);
      lVar3 = (*(code *)puVar2)(param_1,"note");
      (*pcVar1)(&local_48,*(undefined8 *)(lVar3 + 0x88));
      return;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Callback is NULL while callbacks are enabled.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar4);
  return;
}

