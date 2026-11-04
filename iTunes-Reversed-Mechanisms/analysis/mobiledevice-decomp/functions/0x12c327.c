// rea decompile_all
// name: __InitializeMobileDevice
// address: 0x12c327
// body: available
// range: 0x12c327-0x12c3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __InitializeMobileDevice(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  iVar1 = _pthread_once((pthread_once_t *)&_gMobileDeviceLibraryInitOnce,
                        __MobileDeviceLibraryInitRoutine);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar4 = _md_log_log;
    piVar2 = ___error();
    iVar1 = *piVar2;
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    __os_log_internal(0,uVar4,0x10,"pthread_once failed with %d: %s",iVar1,pcVar3);
    uVar4 = 0xe8000003;
  }
  return uVar4;
}

