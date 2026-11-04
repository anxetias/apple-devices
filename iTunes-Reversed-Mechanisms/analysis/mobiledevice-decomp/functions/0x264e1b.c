// rea decompile_all
// name: _usbDFU_startDeviceDiscoveryForVIDPID
// address: 0x264e1b
// body: available
// range: 0x264e1b-0x264e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _usbDFU_startDeviceDiscoveryForVIDPID
                (undefined2 param_1,undefined2 param_2,long *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uStack_30;
  
  uStack_30 = 0xffffffffffffffea;
  if ((((param_3 != (long *)0x0) && (*param_3 != 0)) && (param_4 != 0)) && (param_3[1] != 0)) {
    lVar2 = _matchingDictionaryForVIDPID(param_1,param_2);
    if (lVar2 == 0) {
      uStack_30 = 0xfffffffffffffff4;
    }
    else {
      uVar1 = _iokitUtils_startDiscovery
                        (lVar2,_usbDFU_servicesAdded,*param_3,_usbDFU_servicesRemoved,param_3[1],
                         param_4);
      uStack_30 = (ulong)uVar1;
      _CFRelease(lVar2);
    }
  }
  return uStack_30;
}

