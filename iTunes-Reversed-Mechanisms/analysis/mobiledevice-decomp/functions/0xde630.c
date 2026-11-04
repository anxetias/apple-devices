// rea decompile_all
// name: __AMPortDFUModeDeviceCreate
// address: 0xde630
// body: available
// range: 0xde630-0xde6a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMPortDFUModeDeviceCreate(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  _pthread_once((pthread_once_t *)&__AMPortDFUModeDeviceClassInitializeOnce,
                __AMPortDFUModeDeviceClassInitialize);
  lVar1 = __CFRuntimeCreateInstance(param_1,__AMPortDFUModeDeviceTypeID,0x28,0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = __AMDFUModeDeviceCreate
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2,param_3);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      *(long *)(lVar1 + 0x30) = lVar2;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}

