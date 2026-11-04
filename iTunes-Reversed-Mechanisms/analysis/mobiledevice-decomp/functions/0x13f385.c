// rea decompile_all
// name: MDRemotePairingRunLoopEvent::initWithDevice:action:
// address: 0x13f385
// body: available
// range: 0x13f385-0x13f430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

ID MDRemotePairingRunLoopEvent::initWithDevice_action_
             (ID param_1,SEL param_2,_AMDevice *param_3,int param_4)

{
  ID IVar1;
  undefined8 uVar2;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::MDRemotePairingRunLoopEvent;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar1 != 0) {
    if (param_3 != (_AMDevice *)0x0) {
      uVar2 = _CFRetain(param_3);
      *(undefined8 *)(IVar1 + 0x10) = uVar2;
      *(int *)(IVar1 + 8) = param_4;
      return IVar1;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
  }
  (*(code *)PTR__objc_release_004410a0)(IVar1);
  return 0;
}

