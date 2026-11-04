// rea decompile_all
// name: _USBMuxCopyDeviceArray
// address: 0x26a8cf
// body: available
// range: 0x26a8cf-0x26aa29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _USBMuxCopyDeviceArray(void)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  dispatch_queue_t pdVar6;
  ulong uVar7;
  timeval local_58;
  code *local_48;
  code *local_40;
  code *local_38;
  undefined8 local_30;
  long local_28;
  
  _pthread_mutex_lock((pthread_mutex_t *)&_cacheMutex);
  lVar5 = _cachedDevices;
  iVar4 = _gettimeofday(&local_58,(void *)0x0);
  if (iVar4 == 0) {
    uVar7 = (long)local_58.tv_usec + local_58.tv_sec * 1000000;
    bVar1 = uVar7 != 0;
    if (((uVar7 == 0) || (lVar5 == 0)) || (uVar7 <= _cacheAge)) goto LAB_0026a904;
    _cachedDevices = 0;
    _CFRelease(lVar5);
    bVar1 = true;
  }
  else {
    bVar1 = false;
    uVar7 = 0;
LAB_0026a904:
    if (lVar5 != 0) {
      _CFRetain(lVar5);
      goto LAB_0026a9f5;
    }
  }
  lVar5 = _USBMuxCopyDeviceArrayNoCache();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    _CFRetain(lVar5);
    if (bVar1) {
      _cacheAge = uVar7 + 1500000;
    }
    _cachedDevices = lVar5;
    if (_cacheListener == 0) {
      local_58.tv_usec = 0;
      local_58._12_4_ = 0;
      local_58.tv_sec = 3;
      local_48 = _cacheDeviceAttached;
      local_40 = _cacheDeviceDetached;
      local_30 = 0;
      local_38 = _cacheListenerStopped;
      iVar4 = _USBMuxListenerCreateFiltered(&local_58,0,&local_28);
      lVar2 = local_28;
      if (iVar4 == 0) {
        pdVar6 = _dispatch_get_global_queue(0,0);
        cVar3 = _USBMuxListenerSetDispatchQueue(lVar2,pdVar6);
        if (cVar3 != '\0') {
          _cacheListener = local_28;
          goto LAB_0026a9f5;
        }
        _USBMuxListenerClose();
      }
      _cachedDevices = 0;
      _CFRelease(lVar5);
    }
  }
LAB_0026a9f5:
  _pthread_mutex_unlock((pthread_mutex_t *)&_cacheMutex);
  return lVar5;
}

