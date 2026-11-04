// rea decompile_all
// name: _AMRestorableDeviceCopyUserFriendlyName
// address: 0x1614af
// body: available
// range: 0x1614af-0x1615a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * _AMRestorableDeviceCopyUserFriendlyName(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = param_1;
  _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_30,
                   ___thr_AMRestorableDeviceGetDeviceClass);
  iVar1 = (int)local_30;
  local_30 = param_1;
  _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_30,
                   ___thr_AMRestorableDeviceGetState);
  if ((int)local_28 == 4) {
    local_30 = param_1;
    _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_30,
                     ___thr_AMRestorableDeviceCopyAMDevice);
    uVar2 = local_28;
    iVar3 = _AMDeviceConnect(local_28);
    if (iVar3 == 0) {
      pcVar5 = (cfstringStruct *)_AMDeviceCopyValueWithError(uVar2,0,&cf_DeviceName);
      _AMDeviceDisconnect(uVar2);
      _CFRelease(uVar2);
      if (pcVar5 != (cfstringStruct *)0x0) {
        return pcVar5;
      }
    }
  }
  if (iVar1 == 0) {
    pcVar5 = &cf_Unknown;
  }
  else {
    pcVar5 = (cfstringStruct *)0x0;
    lVar4 = 0;
    do {
      if (*(int *)((long)&_AMRestorableDeviceClassHumanReadableMap + lVar4) == iVar1) {
        return *(cfstringStruct **)(&UNK_00449ba8 + lVar4);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0xc0);
  }
  return pcVar5;
}

