// rea decompile_all
// name: _USBMuxCopyDeviceArrayNoCache
// address: 0xc5672
// body: available
// range: 0xc5672-0xc57b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _USBMuxCopyDeviceArrayNoCache(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int local_40;
  int local_3c;
  long local_38;
  int local_2c;
  
  local_2c = -1;
  local_38 = 0;
  iVar2 = _USBMuxIntNewSocket();
  if (iVar2 == 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar6 = 0;
    lVar3 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    lVar7 = 0;
    if (lVar3 != 0) {
      _CFDictionaryAddValue(lVar3,_kUSBMuxParam_MessageType,_kUSBMuxMessageType_ListDevices);
      iVar2 = _USBMuxSendDictionaryWithTimeout
                        (local_2c,&local_40,lVar3,&_kMessageSendTimeoutTimespec);
      lVar7 = lVar3;
      if ((((iVar2 == 0) &&
           (iVar2 = _USBMuxReceiveDictionaryWithTimeout
                              (local_2c,&local_3c,&local_38,&_kMessageReceiveTimespec), iVar2 == 0))
          && (local_3c == local_40)) &&
         (lVar3 = _CFDictionaryGetValue(local_38,_kUSBMuxParam_DeviceList), lVar3 != 0)) {
        lVar4 = _CFGetTypeID(lVar3);
        lVar5 = _CFArrayGetTypeID();
        if (lVar4 == lVar5) {
          uVar6 = _CFArrayCreateCopy(uVar1,lVar3);
          goto LAB_000c577d;
        }
      }
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
    lVar7 = 0;
  }
LAB_000c577d:
  if (local_2c != -1) {
    _close(local_2c);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  return uVar6;
}

