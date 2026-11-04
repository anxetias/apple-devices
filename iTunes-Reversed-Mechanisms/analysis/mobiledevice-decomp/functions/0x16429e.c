// rea decompile_all
// name: __portDFUDeviceMatchingApLocationID
// address: 0x16429e
// body: available
// range: 0x16429e-0x1644a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __portDFUDeviceMatchingApLocationID(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *context;
  char *pcVar7;
  
  lVar2 = __AMRestorableCreateKeyForDeviceWithECID(param_2);
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
  lVar3 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x40),lVar2);
  if (lVar3 != 0) {
    _CFRetain(lVar3);
    lVar4 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar3);
    if (lVar4 != 0) {
      _CFRetain(lVar4);
      uVar5 = __AMDeviceProxyGetECID(param_1);
      lVar6 = __AMRestorableCreateKeyForDeviceWithECID(uVar5);
      _CFDictionaryAddValue(*(undefined8 *)(_gRestorableData + 0x38),lVar6,lVar4);
      _CFDictionaryAddValue(*(undefined8 *)(_gRestorableData + 0x48),lVar3,lVar6);
      _CFDictionaryRemoveValue(*(undefined8 *)(_gRestorableData + 0x38),lVar3);
      _CFDictionaryRemoveValue(*(undefined8 *)(_gRestorableData + 0x40),lVar2);
      lVar1 = *(long *)(_gRestorableData + 0x88);
      context = (void *)_CFArrayCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,3,0);
      _CFArrayAppendValue(context,lVar1);
      _CFArrayAppendValue(context,lVar3);
      _CFArrayAppendValue(context,lVar6);
      _CFRetain(lVar3);
      _CFRetain(lVar6);
      _dispatch_sync_f(*(dispatch_queue_t *)(lVar1 + 0x10),context,
                       ___thr_AMRDeviceLogUpdateDeviceECID);
      _CFRelease(lVar6);
      _CFRelease(lVar3);
      goto LAB_00164435;
    }
    _AMRLog(7,&cf_NodevicefounddespitematchingapreviousPortDFUlocationID_Filearadar_);
  }
  lVar4 = 0;
  lVar6 = 0;
LAB_00164435:
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
  pcVar7 = "";
  if (lVar4 == 0) {
    pcVar7 = " not";
  }
  _AMRLog(7,&cf_PortDFUdevicematchingAPDFUdevicenearlocationID0x_X_sfound,param_2,pcVar7);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return lVar4;
}

