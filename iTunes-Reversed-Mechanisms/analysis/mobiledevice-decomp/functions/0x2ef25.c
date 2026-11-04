// rea decompile_all
// name: _debugUSBServicesAdded
// address: 0x2ef25
// body: available
// range: 0x2ef25-0x2f02f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _debugUSBServicesAdded(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((param_2 != 0) && (iVar2 = _IOIteratorNext(param_2), iVar2 != 0)) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    do {
      lVar3 = _deviceWithService(iVar2);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)
                 _CFDictionaryGetValue
                           (_clientVIDPIDCallbacksMap,
                            *(int *)(lVar3 + 0x24) << 0x10 | (uint)*(ushort *)(lVar3 + 0x26));
        _iokitUtils_setDeviceForService(iVar2,lVar3);
        if (puVar4 == (undefined8 *)0x0) {
          lVar5 = _CFDictionaryGetValue
                            (_unclaimedDevicesMap,
                             *(int *)(lVar3 + 0x24) << 0x10 | (uint)*(ushort *)(lVar3 + 0x26));
          if (lVar5 == 0) {
            lVar5 = _CFArrayCreateMutable(uVar1,1,0);
            _CFDictionarySetValue
                      (_unclaimedDevicesMap,
                       *(int *)(lVar3 + 0x24) << 0x10 | (uint)*(ushort *)(lVar3 + 0x26),lVar5);
            _CFRelease(lVar5);
          }
          _CFArrayAppendValue(lVar5,lVar3);
        }
        else {
          (*(code *)*puVar4)(lVar3);
        }
        _IOObjectRelease(iVar2);
      }
      iVar2 = _IOIteratorNext(param_2);
    } while (iVar2 != 0);
  }
  return;
}

