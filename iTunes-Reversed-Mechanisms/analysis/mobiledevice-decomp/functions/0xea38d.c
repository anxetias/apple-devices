// rea decompile_all
// name: __AMRestoreInitializeNotifications
// address: 0xea38d
// body: available
// range: 0xea38d-0xea61d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRestoreInitializeNotifications(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  
  __loadAndCacheIOUSBLibBundle();
  uVar2 = __AMRestoreGetNumberOFDeviceIDsToMatch();
  if (__deviceDetectedIterators == (void *)0x0) {
    __deviceDetectedIterators = _calloc((long)(int)uVar2,4);
  }
  if (__deviceRemovedIterators == (void *)0x0) {
    __deviceRemovedIterators = _calloc((long)(int)uVar2,4);
  }
  if (__notificationPort == 0) {
    __notificationPort =
         _IONotificationPortCreate(*(undefined4 *)PTR__kIOMasterPortDefault_004411d8);
    _IONotificationPortSetDispatchQueue(__notificationPort,*(undefined8 *)(param_1 + 0x28));
  }
  if (__registryIDToDevice == 0) {
    uVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
    __registryIDToDevice = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"init");
  }
  __shouldMatchIOUSBHostFamily();
  lVar5 = _IOServiceMatching();
  uVar4 = 0xffffffff;
  if (lVar5 != 0) {
    if (0 < (int)uVar2) {
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar10 = 0;
      do {
        lVar6 = __AMRestoreGetDeviceIDToMatch();
        uVar7 = _CFNumberCreate(uVar4,2,lVar6);
        uVar8 = _CFNumberCreate(uVar4,2,lVar6 + 2);
        _CFDictionarySetValue(lVar5,&cf_idVendor,uVar7);
        _CFDictionarySetValue(lVar5,&cf_idProduct,uVar8);
        _CFRelease(uVar7);
        _CFRelease(uVar8);
        _CFRetain(lVar5);
        iVar3 = _IOServiceAddMatchingNotification
                          (__notificationPort,"IOServiceFirstMatch",lVar5,__deviceConnectedCallback,
                           lVar6,(long)__deviceDetectedIterators + lVar10);
        if (iVar3 != 0) {
          pcVar9 = &cf_unabletosetupdeviceconnectednotification_0x_x;
LAB_000ea5f2:
          _AMRLog(3,pcVar9,iVar3);
          _CFRelease(lVar5);
          return 0xffffffff;
        }
        _CFRetain(lVar5);
        iVar3 = _IOServiceAddMatchingNotification
                          (__notificationPort,"IOServiceTerminate",lVar5,
                           __deviceDisconnectedCallback,lVar6,
                           (long)__deviceRemovedIterators + lVar10);
        if (iVar3 != 0) {
          pcVar9 = &cf_unabletosetupdevicedisconnectednotification_0x_x;
          goto LAB_000ea5f2;
        }
        __deviceConnected(lVar6,*(undefined4 *)((long)__deviceDetectedIterators + lVar10),param_1);
        __deviceDisconnected(lVar6,*(undefined4 *)((long)__deviceRemovedIterators + lVar10),param_1)
        ;
        lVar10 = lVar10 + 4;
      } while ((ulong)uVar2 << 2 != lVar10);
    }
    _CFRelease(lVar5);
    uVar4 = 0;
    cVar1 = __loadAndCacheIOUSBLibBundle();
    if (cVar1 == '\0') {
      uVar4 = 0;
      _AMRLog(3,&cf_FailedtoloadanyIOUSBLib_bundle_Bravelycontinuing_);
    }
  }
  return uVar4;
}

