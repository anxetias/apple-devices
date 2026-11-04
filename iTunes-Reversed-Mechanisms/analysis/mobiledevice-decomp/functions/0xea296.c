// rea decompile_all
// name: __AMRestoreUninitializeNotifications
// address: 0xea296
// body: available
// range: 0xea296-0xea386 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRestoreUninitializeNotifications(void)

{
  int iVar1;
  long lVar2;
  
  if (__notificationPort != 0) {
    _IONotificationPortDestroy();
    __notificationPort = 0;
    _dispatch_sync(__notificationQueue,&___block_literal_global);
  }
  if (__registryIDToDevice != 0) {
    (*(code *)PTR__objc_release_004410a0)();
    __registryIDToDevice = 0;
  }
  if (__deviceDetectedIterators != (void *)0x0) {
    iVar1 = __AMRestoreGetNumberOFDeviceIDsToMatch();
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        _IOObjectRelease(*(undefined4 *)((long)__deviceDetectedIterators + lVar2 * 4));
        lVar2 = lVar2 + 1;
        iVar1 = __AMRestoreGetNumberOFDeviceIDsToMatch();
      } while (lVar2 < iVar1);
    }
    _free(__deviceDetectedIterators);
    __deviceDetectedIterators = (void *)0x0;
  }
  if (__deviceRemovedIterators != (void *)0x0) {
    iVar1 = __AMRestoreGetNumberOFDeviceIDsToMatch();
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        _IOObjectRelease(*(undefined4 *)((long)__deviceRemovedIterators + lVar2 * 4));
        lVar2 = lVar2 + 1;
        iVar1 = __AMRestoreGetNumberOFDeviceIDsToMatch();
      } while (lVar2 < iVar1);
    }
    _free(__deviceRemovedIterators);
    __deviceRemovedIterators = (void *)0x0;
  }
  return 0;
}

