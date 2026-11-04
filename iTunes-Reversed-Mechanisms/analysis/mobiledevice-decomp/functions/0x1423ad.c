// rea decompile_all
// name: MDRemotePairingBrowser::dealloc
// address: 0x1423ad
// body: available
// range: 0x1423ad-0x1424a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void MDRemotePairingBrowser::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  objc_super local_28;
  
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  uVar2 = _md_log_log;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSThread,"callStackSymbols");
  __os_log_internal(0,uVar2,1,"Browser deallocated at:\n%@",uVar3);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(*(undefined8 *)(param_1 + 0x18));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x10) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(dispatch_object_t *)(param_1 + 0x28))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(dispatch_object_t *)(param_1 + 0x38))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_28.super_class = &objc::class_t::MDRemotePairingBrowser;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,"dealloc");
  return;
}

