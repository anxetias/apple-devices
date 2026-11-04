// rea decompile_all
// name: _doCreatePairingSession
// address: 0x174fc2
// body: available
// range: 0x174fc2-0x175083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _doCreatePairingSession(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  
  lVar1 = (*_getCUPairingSessionClass)();
  if (lVar1 == 0) {
    pcVar4 = "CoreUtils unavailable on this host";
  }
  else {
    lVar1 = *(long *)(param_1 + 0xd0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_00441098)(lVar1,"invalidate");
      (*(code *)PTR__objc_release_004410a0)(lVar1);
    }
    uVar2 = (*_getCUPairingSessionClass)();
    uVar2 = _objc_alloc(uVar2);
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"init");
    *(long *)(param_1 + 0xd0) = lVar3;
    uVar5 = CONCAT71((int7)((ulong)lVar1 >> 8),1);
    if (lVar3 != 0) goto LAB_00175067;
    pcVar4 = "Failed to allocate CUPairingSession";
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  uVar5 = 0;
  __os_log_internal(0,_md_log_log,0x10,pcVar4);
LAB_00175067:
  return uVar5 & 0xffffffff;
}

