// rea decompile_all
// name: _debugUSBServicesRemoved
// address: 0x2f030
// body: available
// range: 0x2f030-0x2f103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _debugUSBServicesRemoved(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    iVar1 = _IOIteratorNext(param_2);
    while (iVar1 != 0) {
      lVar2 = _iokitUtils_popDeviceForService(iVar1);
      if (lVar2 != 0) {
        lVar3 = _CFDictionaryGetValue
                          (_clientVIDPIDCallbacksMap,
                           *(int *)(lVar2 + 0x24) << 0x10 | (uint)*(ushort *)(lVar2 + 0x26));
        if (lVar3 == 0) {
          uVar4 = _CFDictionaryGetValue
                            (_unclaimedDevicesMap,
                             *(int *)(lVar2 + 0x24) << 0x10 | (uint)*(ushort *)(lVar2 + 0x26));
          uVar5 = _CFArrayGetCount(uVar4);
          lVar3 = _CFArrayGetFirstIndexOfValue(uVar4,0,uVar5,lVar2);
          if (lVar3 != -1) {
            _CFArrayRemoveValueAtIndex(uVar4,lVar3);
          }
          _libDFU_release(lVar2);
        }
        else {
          (**(code **)(lVar3 + 8))(lVar2);
        }
        _IOObjectRelease(iVar1);
      }
      iVar1 = _IOIteratorNext(param_2);
    }
  }
  return;
}

