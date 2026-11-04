// rea decompile_all
// name: _AMDeviceNotificationCreate
// address: 0x12c8d6
// body: available
// range: 0x12c8d6-0x12c9f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceNotificationCreate(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = __InitializeMobileDevice();
  if (iVar3 == 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    if (__AMDeviceNotificationTypeID == 0) {
      __AMDeviceNotificationTypeID =
           __CFRuntimeRegisterClass(&_AMDeviceNotificationGetTypeID__AMDeviceNotificationClass);
    }
    lVar4 = __CFRuntimeCreateInstance(uVar1,__AMDeviceNotificationTypeID,0x80,0);
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    lVar5 = _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_004411a8);
    *(long *)(lVar4 + 0x18) = lVar5;
    if (lVar5 != 0) {
      *(undefined8 *)(lVar4 + 0x70) = 0;
      __mutex_init(lVar4 + 0x30);
      *(undefined2 *)(lVar4 + 0x78) = 0x100;
      *(undefined8 *)(lVar4 + 0x80) = param_1;
      *(undefined8 *)(lVar4 + 0x88) = param_3;
      *(undefined4 *)(lVar4 + 0x10) = param_2;
      *(undefined4 *)(lVar4 + 0x7a) = 0;
      cVar2 = __AMDRemotePairingDiscoveryEnabled();
      if (cVar2 != '\0') {
        *(undefined1 *)(lVar4 + 0x7d) = 1;
      }
      *(undefined1 *)(lVar4 + 0x7e) = 1;
      return lVar4;
    }
    _CFRelease(lVar4);
  }
  return 0;
}

